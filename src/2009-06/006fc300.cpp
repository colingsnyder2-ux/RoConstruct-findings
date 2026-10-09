// roc 2009-06 006fc300  unit: RBX::ContactStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fc300
//
// 006fc300  56                   push esi
// 006fc301  57                   push edi
// 006fc302  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006fc306  8bf1                 mov esi, ecx
// 006fc308  8b4e08               mov ecx, dword ptr [esi + 8]
// 006fc30b  57                   push edi
// 006fc30c  e84ff3fdff           call 0x6db660
// 006fc311  56                   push esi
// 006fc312  8bcf                 mov ecx, edi
// 006fc314  e83799fdff           call 0x6d5c50
// 006fc319  5f                   pop edi
// 006fc31a  5e                   pop esi
// 006fc31b  c20400               ret 4
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
