// roc 2009-06 006de340  unit: RBX::MovingAssemblyStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006de340
//
// 006de340  56                   push esi
// 006de341  57                   push edi
// 006de342  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006de346  8bf1                 mov esi, ecx
// 006de348  8b4e08               mov ecx, dword ptr [esi + 8]
// 006de34b  57                   push edi
// 006de34c  e86f890100           call 0x6f6cc0
// 006de351  56                   push esi
// 006de352  8bcf                 mov ecx, edi
// 006de354  e8e778ffff           call 0x6d5c40
// 006de359  5f                   pop edi
// 006de35a  5e                   pop esi
// 006de35b  c20400               ret 4
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
