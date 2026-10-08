// from server: 66% by colin
// roc 2007-08 0049eb1b  unit: RBX::Network::Server  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049eb1b
//
// 0049eb1b  33c0                 xor eax, eax
// 0049eb1d  e985010000           jmp 0x49eca7

struct RBX {
    struct Network {
        struct Server {
            int f();
        };
    };
};

extern "C" int __cdecl tail_target();

int RBX::Network::Server::f() {
    return tail_target();
}
