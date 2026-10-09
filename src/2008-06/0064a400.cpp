// roc 2008-06 0064a400  unit: RBX::CleanStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a400
//
// 0064a400  56                   push esi
// 0064a401  57                   push edi
// 0064a402  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064a406  8bf1                 mov esi, ecx
// 0064a408  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064a40b  57                   push edi
// 0064a40c  e83fe40100           call 0x668850
// 0064a411  56                   push esi
// 0064a412  8bcf                 mov ecx, edi
// 0064a414  e807b4ffff           call 0x645820
// 0064a419  5f                   pop edi
// 0064a41a  5e                   pop esi
// 0064a41b  c20400               ret 4
// copied from an identical function in another client (function ?construct@GettingUp@ns_ROCX00000c@@QAEXPAX@Z)

namespace ns_ROCX00000c {
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
