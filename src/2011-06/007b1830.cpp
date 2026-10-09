// roc 2011-06 007b1830  unit: RBX::CleanStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b1830
//
// 007b1830  56                   push esi
// 007b1831  57                   push edi
// 007b1832  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b1836  8bf1                 mov esi, ecx
// 007b1838  8b4e08               mov ecx, dword ptr [esi + 8]
// 007b183b  57                   push edi
// 007b183c  e8efcb0300           call 0x7ee430
// 007b1841  56                   push esi
// 007b1842  8bcf                 mov ecx, edi
// 007b1844  e8a704ffff           call 0x7a1cf0
// 007b1849  5f                   pop edi
// 007b184a  5e                   pop esi
// 007b184b  c20400               ret 4
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
