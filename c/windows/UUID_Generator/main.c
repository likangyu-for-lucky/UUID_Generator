#include <stdio.h>
#include <windows.h>
#include <rpcdce.h>
#pragma comment(lib, "Rpcrt4.lib")

char *generate_uuid() {
    UUID uuid;
    RPC_CSTR rpc_cstr = nullptr;
    UuidCreate(&uuid);
    UuidToStringA(&uuid, &rpc_cstr);
    return (char *) rpc_cstr;
}

int main(void) {
    printf("%s\n", generate_uuid());
    return 0;
}
