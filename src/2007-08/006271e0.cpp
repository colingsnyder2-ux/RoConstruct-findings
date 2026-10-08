// from server: 73% by colin
// roc 2007-08 006271e0  unit: RBX::GettingUp  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006271e0
//
// 006271e0  56                   push esi
// 006271e1  57                   push edi
// 006271e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006271e6  8bf1                 mov esi, ecx
// 006271e8  56                   push esi
// 006271e9  8bcf                 mov ecx, edi
// 006271eb  e8401ffeff           call 0x609130
// 006271f0  8b4e08               mov ecx, dword ptr [esi + 8]
// 006271f3  57                   push edi
// 006271f4  e8a71bfeff           call 0x608da0
// 006271f9  5f                   pop edi
// 006271fa  5e                   pop esi
// 006271fb  c20400               ret 4

struct SubA {
    void methodA(SubA* other);
};

struct SubB {
    void methodB(SubA* other);
};

struct S_func_006271e0 {
    char pad[8];
    SubB* field8;
    void f(SubA* a1);
};

void S_func_006271e0::f(SubA* a1)
{
    a1->methodA(a1);
    field8->methodB(a1);
}
