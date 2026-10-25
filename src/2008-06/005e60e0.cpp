// from server: 100% by king_originala
// roc 2008-06 005e60e0  unit: RBX::Clump  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e60e0
//
// 005e60e0  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005e60e3  80b8a800000000       cmp byte ptr [eax + 0xa8], 0
// 005e60ea  7515                 jne 0x5e6101
// 005e60ec  80b8a900000000       cmp byte ptr [eax + 0xa9], 0
// 005e60f3  750c                 jne 0x5e6101
// 005e60f5  80b8aa00000000       cmp byte ptr [eax + 0xaa], 0
// 005e60fc  7503                 jne 0x5e6101
// 005e60fe  33c0                 xor eax, eax
// 005e6100  c3                   ret 
// 005e6101  b801000000           mov eax, 1
// 005e6106  c3                   ret 

struct State {
    char padding[0xA8];
    unsigned char a;
    unsigned char b;
    unsigned char c;
};

struct Clump {
    char padding[0x1C];
    State* state;
    int f();
};

int Clump::f() {
    return state->a || state->b || state->c;
}
