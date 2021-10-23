set PROTOC=C:\Utils\protoc-3.18.0-win64\bin\protoc.exe
%PROTOC% --proto_path=%~dp0 Commands2.proto  --cpp_out=%~dp0
%PROTOC% --proto_path=%~dp0 --plugin=protoc-gen-grpc="%VCPKG_ROOT%\\packages\grpc_x64-windows\tools\grpc\grpc_cpp_plugin.exe" Commands2.proto  --grpc_out=%~dp0
