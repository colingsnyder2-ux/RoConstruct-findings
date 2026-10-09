// roc 2009-06 006ddb00  unit: RBX::TreeStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ddb00
//
// 006ddb00  56                   push esi
// 006ddb01  57                   push edi
// 006ddb02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ddb06  8bf1                 mov esi, ecx
// 006ddb08  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ddb0b  57                   push edi
// 006ddb0c  e86f8f0100           call 0x6f6a80
// 006ddb11  56                   push esi
// 006ddb12  8bcf                 mov ecx, edi
// 006ddb14  e83781ffff           call 0x6d5c50
// 006ddb19  5f                   pop edi
// 006ddb1a  5e                   pop esi
// 006ddb1b  c20400               ret 4
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
