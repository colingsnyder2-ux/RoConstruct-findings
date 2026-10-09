// roc 2010-06 0078c560  unit: RBX::EdgeStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078c560
//
// 0078c560  56                   push esi
// 0078c561  57                   push edi
// 0078c562  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0078c566  8bf1                 mov esi, ecx
// 0078c568  8b4e08               mov ecx, dword ptr [esi + 8]
// 0078c56b  57                   push edi
// 0078c56c  e88f580000           call 0x791e00
// 0078c571  56                   push esi
// 0078c572  8bcf                 mov ecx, edi
// 0078c574  e84745fcff           call 0x750ac0
// 0078c579  5f                   pop edi
// 0078c57a  5e                   pop esi
// 0078c57b  c20400               ret 4
// copied from an identical function in another client (function ?construct@GettingUp@ns_ROCX00000b@@QAEXPAX@Z)

namespace ns_ROCX00000b {
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
