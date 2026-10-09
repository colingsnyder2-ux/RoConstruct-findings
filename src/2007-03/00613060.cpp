// roc 2007-03 00613060  unit: seg_00610000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00613060
//
// 00613060  56                   push esi
// 00613061  57                   push edi
// 00613062  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00613066  8bf1                 mov esi, ecx
// 00613068  8b4e08               mov ecx, dword ptr [esi + 8]
// 0061306b  57                   push edi
// 0061306c  e8cf59f9ff           call 0x5a8a40
// 00613071  56                   push esi
// 00613072  8bcf                 mov ecx, edi
// 00613074  e83771fdff           call 0x5ea1b0
// 00613079  5f                   pop edi
// 0061307a  5e                   pop esi
// 0061307b  c20400               ret 4
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
