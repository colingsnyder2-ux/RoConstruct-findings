// from server: 54% by colin
// roc 2007-08 005eb6c0  unit: RBX::BodyMover  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eb6c0
//
// 005eb6c0  56                   push esi
// 005eb6c1  8bf1                 mov esi, ecx
// 005eb6c3  8b8610ffffff         mov eax, dword ptr [esi - 0xf0]
// 005eb6c9  8b5044               mov edx, dword ptr [eax + 0x44]
// 005eb6cc  8d8e10ffffff         lea ecx, [esi - 0xf0]
// 005eb6d2  ffd2                 call edx
// 005eb6d4  84c0                 test al, al
// 005eb6d6  7412                 je 0x5eb6ea
// 005eb6d8  8b4608               mov eax, dword ptr [esi + 8]
// 005eb6db  8b88d8010000         mov ecx, dword ptr [eax + 0x1d8]
// 005eb6e1  51                   push ecx
// 005eb6e2  8b4e04               mov ecx, dword ptr [esi + 4]
// 005eb6e5  e8d6dafbff           call 0x5a91c0
// 005eb6ea  5e                   pop esi
// 005eb6eb  c20c00               ret 0xc

struct BodyMover {
    char pad[0x100];
    void f(int, int, int);
};

void BodyMover::f(int, int, int)
{
    char* self = (char*)this - 0xf0;
    int (*fn)(void*) = *(int (**)(void*))(*(int*)self + 0x44);
    if (fn(self)) {
        int* a = *(int**)((char*)this + 8);
        int b = *(int*)((char*)a + 0x1d8);
        int* c = *(int**)((char*)this + 4);
        extern void G1_func_005a91c0(int*, int);
        G1_func_005a91c0(c, b);
    }
}
