// roc 2009-12 0086c2e0  unit: CSelectionCaption  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c2e0
//
// 0086c2e0  56                   push esi
// 0086c2e1  8bf1                 mov esi, ecx
// 0086c2e3  e888550700           call 0x8e1870
// 0086c2e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086c2ec  8b10                 mov edx, dword ptr [eax]
// 0086c2ee  8b5214               mov edx, dword ptr [edx + 0x14]
// 0086c2f1  56                   push esi
// 0086c2f2  51                   push ecx
// 0086c2f3  8bc8                 mov ecx, eax
// 0086c2f5  ffd2                 call edx
// 0086c2f7  5e                   pop esi
// 0086c2f8  c20400               ret 4
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX00000e@@QAEXH@Z)

namespace ns_ROCX00000e {
struct CSelectionCaption;

extern "C" void* __cdecl sub_710F90();

struct CInner {
    virtual void v000();
    virtual void v004();
    virtual void v008();
    virtual void v00c();
    virtual void v010();
    virtual void v014(int, CSelectionCaption*);
};

struct CSelectionCaption {
    void method(int);
};

void CSelectionCaption::method(int arg) {
    CInner* p = (CInner*)sub_710F90();
    p->v014(arg, this);
}
}
