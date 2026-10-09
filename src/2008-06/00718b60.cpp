// roc 2008-06 00718b60  unit: CSelectionCaption  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718b60
//
// 00718b60  56                   push esi
// 00718b61  8bf1                 mov esi, ecx
// 00718b63  e8785b0700           call 0x78e6e0
// 00718b68  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00718b6c  8b10                 mov edx, dword ptr [eax]
// 00718b6e  8b5214               mov edx, dword ptr [edx + 0x14]
// 00718b71  56                   push esi
// 00718b72  51                   push ecx
// 00718b73  8bc8                 mov ecx, eax
// 00718b75  ffd2                 call edx
// 00718b77  5e                   pop esi
// 00718b78  c20400               ret 4
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX000007@@QAEXH@Z)

namespace ns_ROCX000007 {
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
