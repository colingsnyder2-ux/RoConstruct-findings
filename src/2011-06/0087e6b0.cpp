// roc 2011-06 0087e6b0  unit: CSelectionCaption  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087e6b0
//
// 0087e6b0  56                   push esi
// 0087e6b1  8bf1                 mov esi, ecx
// 0087e6b3  e8583b0700           call 0x8f2210
// 0087e6b8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087e6bc  8b10                 mov edx, dword ptr [eax]
// 0087e6be  8b5214               mov edx, dword ptr [edx + 0x14]
// 0087e6c1  56                   push esi
// 0087e6c2  51                   push ecx
// 0087e6c3  8bc8                 mov ecx, eax
// 0087e6c5  ffd2                 call edx
// 0087e6c7  5e                   pop esi
// 0087e6c8  c20400               ret 4
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX000002@@QAEXH@Z)

namespace ns_ROCX000002 {
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
