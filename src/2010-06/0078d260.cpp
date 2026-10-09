// roc 2010-06 0078d260  unit: RBX::MechToAssemblyStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078d260
//
// 0078d260  56                   push esi
// 0078d261  57                   push edi
// 0078d262  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0078d266  8bf1                 mov esi, ecx
// 0078d268  8b4e08               mov ecx, dword ptr [esi + 8]
// 0078d26b  57                   push edi
// 0078d26c  e87f39fdff           call 0x760bf0
// 0078d271  56                   push esi
// 0078d272  8bcf                 mov ecx, edi
// 0078d274  e84738fcff           call 0x750ac0
// 0078d279  5f                   pop edi
// 0078d27a  5e                   pop esi
// 0078d27b  c20400               ret 4
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
