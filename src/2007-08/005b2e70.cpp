// from server: 100% by colin
// roc 2007-08 005b2e70  unit: RBX::JointsService  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2e70
//
// 005b2e70  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b2e74  83c118               add ecx, 0x18
// 005b2e77  e884dbffff           call 0x5b0a00
// 005b2e7c  8b08                 mov ecx, dword ptr [eax]
// 005b2e7e  85c9                 test ecx, ecx
// 005b2e80  7407                 je 0x5b2e89
// 005b2e82  6a00                 push 0
// 005b2e84  e8a7e7f8ff           call 0x541630
// 005b2e89  c20800               ret 8

struct S_func_005b0a00 {
    void* f();
};

struct S_func_00541630 {
    void g(int);
};

struct S_func_005b2e70 {
    void f(int, int);
};

void S_func_005b2e70::f(int a1, int a2)
{
    S_func_005b0a00* p = (S_func_005b0a00*)((char*)a2 + 0x18);
    void* r = p->f();
    int* q = (int*)r;
    int v = *q;
    if (v != 0) {
        ((S_func_00541630*)v)->g(0);
    }
}
