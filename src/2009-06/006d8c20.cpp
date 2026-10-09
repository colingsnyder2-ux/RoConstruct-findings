// roc 2009-06 006d8c20  unit: RBX::CleanStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d8c20
//
// 006d8c20  56                   push esi
// 006d8c21  57                   push edi
// 006d8c22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d8c26  8bf1                 mov esi, ecx
// 006d8c28  8b4e08               mov ecx, dword ptr [esi + 8]
// 006d8c2b  57                   push edi
// 006d8c2c  e82fc90100           call 0x6f5560
// 006d8c31  56                   push esi
// 006d8c32  8bcf                 mov ecx, edi
// 006d8c34  e807d0ffff           call 0x6d5c40
// 006d8c39  5f                   pop edi
// 006d8c3a  5e                   pop esi
// 006d8c3b  c20400               ret 4
// copied from an identical function in another client (function ?construct@GettingUp@ns_ROCX000001@@QAEXPAX@Z)

namespace ns_ROCX000001 {
struct SubA {
    void methodA(int);
};

struct SubB {
    void methodB(void*);
};

struct GettingUp {
    char pad[8];
    SubA* subA;
    void construct(void*);
};

void GettingUp::construct(void* arg)
{
    subA->methodA((int)arg);
    ((SubB*)arg)->methodB(this);
}
}
