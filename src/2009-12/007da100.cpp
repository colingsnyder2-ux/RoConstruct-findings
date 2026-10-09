// roc 2009-12 007da100  unit: RBX::EdgeStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007da100
//
// 007da100  56                   push esi
// 007da101  57                   push edi
// 007da102  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007da106  8bf1                 mov esi, ecx
// 007da108  8b4e08               mov ecx, dword ptr [esi + 8]
// 007da10b  57                   push edi
// 007da10c  e82f470000           call 0x7de840
// 007da111  56                   push esi
// 007da112  8bcf                 mov ecx, edi
// 007da114  e8278efdff           call 0x7b2f40
// 007da119  5f                   pop edi
// 007da11a  5e                   pop esi
// 007da11b  c20400               ret 4
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
