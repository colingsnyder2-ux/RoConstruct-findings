// roc 2010-06 0075ea70  unit: RBX::CleanStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075ea70
//
// 0075ea70  56                   push esi
// 0075ea71  57                   push edi
// 0075ea72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0075ea76  8bf1                 mov esi, ecx
// 0075ea78  8b4e08               mov ecx, dword ptr [esi + 8]
// 0075ea7b  57                   push edi
// 0075ea7c  e80fce0200           call 0x78b890
// 0075ea81  56                   push esi
// 0075ea82  8bcf                 mov ecx, edi
// 0075ea84  e82720ffff           call 0x750ab0
// 0075ea89  5f                   pop edi
// 0075ea8a  5e                   pop esi
// 0075ea8b  c20400               ret 4
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
