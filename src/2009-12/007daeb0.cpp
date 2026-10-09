// roc 2009-12 007daeb0  unit: RBX::MechToAssemblyStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007daeb0
//
// 007daeb0  56                   push esi
// 007daeb1  57                   push edi
// 007daeb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007daeb6  8bf1                 mov esi, ecx
// 007daeb8  8b4e08               mov ecx, dword ptr [esi + 8]
// 007daebb  57                   push edi
// 007daebc  e85fe0fdff           call 0x7b8f20
// 007daec1  56                   push esi
// 007daec2  8bcf                 mov ecx, edi
// 007daec4  e87780fdff           call 0x7b2f40
// 007daec9  5f                   pop edi
// 007daeca  5e                   pop esi
// 007daecb  c20400               ret 4
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
