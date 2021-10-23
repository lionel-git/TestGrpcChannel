#include <iostream>

#include <grpcpp/grpcpp.h>

static std::shared_ptr<grpc::Channel> G_channel;

extern "C" __declspec(dllexport)
void do_work(int value)
{
	std::cout << "Start Do Work: " << value << std::endl;
	grpc::ChannelArguments args;


	// Will lock on destructor at prg exit!
	G_channel = grpc::CreateCustomChannel("localhost:4444", grpc::InsecureChannelCredentials(), args);
	//

	std::cout << "Done work" << std::endl;
}