@echo off
pushd %~dp0

setlocal
echo "Setup gRPC Plugin"
set GRPC_ROOT=%~dp0\gRPCDemoProject\Plugins\gRPCForUE4\Setup\grpcsrc\grpc
set GRPC_BRANCH=v1.41.1
call .\gRPCDemoProject\Plugins\gRPCForUE4\Setup\setup.bat
endlocal
