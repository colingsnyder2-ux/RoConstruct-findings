// roc 2009-12 007de840  unit: RBX::ContactStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007de840
//
// 007de840  56                   push esi
// 007de841  57                   push edi
// 007de842  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007de846  8bf1                 mov esi, ecx
// 007de848  8b4e08               mov ecx, dword ptr [esi + 8]
// 007de84b  57                   push edi
// 007de84c  e83fb1fdff           call 0x7b9990
// 007de851  56                   push esi
// 007de852  8bcf                 mov ecx, edi
// 007de854  e8e746fdff           call 0x7b2f40
// 007de859  5f                   pop edi
// 007de85a  5e                   pop esi
// 007de85b  c20400               ret 4
// copied from an identical function in another client (function ?construct@GettingUp@ns_ROCX000000@@QAEXPAX@Z)

namespace ns_ROCX000000 {
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
