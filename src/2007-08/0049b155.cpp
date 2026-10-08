// from server: 50% by virility92
// roc 2007-08 0049b155  unit: RBX::Network::Client  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049b155
//
// 0049b155  33c0                 xor eax, eax
// 0049b157  e98e030000           jmp 0x49b4ea

extern "C" __declspec(dllimport) void __stdcall G1_func_0060a420();

struct RBX_Network_Client {
    int f();
};

int RBX_Network_Client::f() {
    G1_func_0060a420();
    return 0;
}
