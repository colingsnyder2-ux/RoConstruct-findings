// roc 2011-06 007f56c0  unit: RBX::ContactStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f56c0
//
// 007f56c0  56                   push esi
// 007f56c1  57                   push edi
// 007f56c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007f56c6  8bf1                 mov esi, ecx
// 007f56c8  8b4e08               mov ecx, dword ptr [esi + 8]
// 007f56cb  57                   push edi
// 007f56cc  e8fff3fbff           call 0x7b4ad0
// 007f56d1  56                   push esi
// 007f56d2  8bcf                 mov ecx, edi
// 007f56d4  e827c6faff           call 0x7a1d00
// 007f56d9  5f                   pop edi
// 007f56da  5e                   pop esi
// 007f56db  c20400               ret 4
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
