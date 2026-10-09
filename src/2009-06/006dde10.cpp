// roc 2009-06 006dde10  unit: RBX::StepJointsStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006dde10
//
// 006dde10  56                   push esi
// 006dde11  57                   push edi
// 006dde12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006dde16  8bf1                 mov esi, ecx
// 006dde18  8b4e08               mov ecx, dword ptr [esi + 8]
// 006dde1b  57                   push edi
// 006dde1c  e8dffcffff           call 0x6ddb00
// 006dde21  56                   push esi
// 006dde22  8bcf                 mov ecx, edi
// 006dde24  e8277effff           call 0x6d5c50
// 006dde29  5f                   pop edi
// 006dde2a  5e                   pop esi
// 006dde2b  c20400               ret 4
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
