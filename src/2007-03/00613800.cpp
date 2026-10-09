// roc 2007-03 00613800  unit: seg_00610000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00613800
//
// 00613800  56                   push esi
// 00613801  57                   push edi
// 00613802  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00613806  8bf1                 mov esi, ecx
// 00613808  8b4e08               mov ecx, dword ptr [esi + 8]
// 0061380b  57                   push edi
// 0061380c  e89fcbfdff           call 0x5f03b0
// 00613811  56                   push esi
// 00613812  8bcf                 mov ecx, edi
// 00613814  e89769fdff           call 0x5ea1b0
// 00613819  5f                   pop edi
// 0061381a  5e                   pop esi
// 0061381b  c20400               ret 4
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
