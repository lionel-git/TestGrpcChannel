
#include <iostream>
#include <sstream>

#include <grpcpp/grpcpp.h>

#include "Commands2.pb.h"
#include "Commands2.grpc.pb.h"

using namespace Interop::network2;
using namespace grpc;

static std::shared_ptr<grpc::Channel> G_channel;

extern "C" __declspec(dllexport)
void do_work(int value)
{
	std::cout << "Start Do Work: " << value << std::endl;
	int port = 4444;

	grpc::ChannelArguments args;
	args.SetMaxReceiveMessageSize(7000000);
	args.SetMaxSendMessageSize(7000000);
	std::ostringstream os;
	os << "localhost:" << port;
	std::string target = os.str();
	// Will lock on destructor at prg exit
	G_channel = grpc::CreateCustomChannel(target, grpc::InsecureChannelCredentials(), args);
	auto x = G_channel->GetState(true);
	auto y = G_channel->GetServiceConfigJSON();

	std::unique_ptr<Requester2::Stub> requester(Requester2::NewStub(G_channel));

	CommandRequest2 request;
	request.set_name("Zorro");

	ClientContext context;
	CommandReply2 reply;
	auto status = requester->GetData(&context, request, &reply);
	std::cout << "status: " << status.error_code() << " " << status.error_details() << " " << status.error_message() << std::endl;


}