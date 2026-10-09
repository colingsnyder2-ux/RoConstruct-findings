// roc 2011-06 007eefd0  unit: RBX::EdgeStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007eefd0
//
// 007eefd0  56                   push esi
// 007eefd1  57                   push edi
// 007eefd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007eefd6  8bf1                 mov esi, ecx
// 007eefd8  8b4e08               mov ecx, dword ptr [esi + 8]
// 007eefdb  57                   push edi
// 007eefdc  e8df660000           call 0x7f56c0
// 007eefe1  56                   push esi
// 007eefe2  8bcf                 mov ecx, edi
// 007eefe4  e8172dfbff           call 0x7a1d00
// 007eefe9  5f                   pop edi
// 007eefea  5e                   pop esi
// 007eefeb  c20400               ret 4
// copied from an identical function in another client (function ?construct@GettingUp@ns_ROCX00000e@@QAEXPAX@Z)

namespace ns_ROCX00000e {
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
