// roc 2009-12 007bab80  unit: RBX::StepJointsStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007bab80
//
// 007bab80  56                   push esi
// 007bab81  57                   push edi
// 007bab82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007bab86  8bf1                 mov esi, ecx
// 007bab88  8b4e08               mov ecx, dword ptr [esi + 8]
// 007bab8b  57                   push edi
// 007bab8c  e8cffcffff           call 0x7ba860
// 007bab91  56                   push esi
// 007bab92  8bcf                 mov ecx, edi
// 007bab94  e8a783ffff           call 0x7b2f40
// 007bab99  5f                   pop edi
// 007bab9a  5e                   pop esi
// 007bab9b  c20400               ret 4
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
