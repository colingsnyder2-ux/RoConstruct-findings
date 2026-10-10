// from server: 62% by colin
// roc 2011-06 004e3120  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 77 bytes
// library rbxgs util/Object.h (function ?create@Creator@?$FactoryProduct@...)

extern "C" void* __cdecl operator_new(unsigned int size);

struct Creator {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
};

struct FactoryProduct {
    Creator* __cdecl create(Creator** out, void* a1, void* a2, void* a3, void* a4);
};

Creator* FactoryProduct::create(Creator** out, void* a1, void* a2, void* a3, void* a4)
{
    Creator* p = (Creator*)operator_new(0x18);
    if (p) {
        *(void**)p = (void*)0xa79ef0;
        p->field8 = a1;
        p->fieldC = a2;
        p->field10 = a3;
        p->field14 = a4;
        *out = p;
        return (Creator*)out;
    }
    *out = 0;
    return (Creator*)out;
}
