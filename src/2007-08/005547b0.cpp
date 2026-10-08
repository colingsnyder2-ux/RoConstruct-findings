// from server: 100% by colin
// roc 2007-08 005547b0  unit: RBX::ServiceProvider  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005547b0
//
// 005547b0  56                   push esi
// 005547b1  8bf1                 mov esi, ecx
// 005547b3  e87883fdff           call 0x52cb30
// 005547b8  33c9                 xor ecx, ecx
// 005547ba  3bc6                 cmp eax, esi
// 005547bc  0f94c1               sete cl
// 005547bf  8ac1                 mov al, cl
// 005547c1  5e                   pop esi
// 005547c2  c3                   ret 

struct ServiceProvider {
    bool isA();
};

extern "C" void* __fastcall sub_52CB30();

bool ServiceProvider::isA() {
    return sub_52CB30() == (void*)this;
}
