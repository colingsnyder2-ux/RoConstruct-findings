// roc 2010-06 00820fb0  unit: CSelectionCaption  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820fb0
//
// 00820fb0  56                   push esi
// 00820fb1  8bf1                 mov esi, ecx
// 00820fb3  e8a8feffff           call 0x820e60
// 00820fb8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00820fbc  8b10                 mov edx, dword ptr [eax]
// 00820fbe  8b5214               mov edx, dword ptr [edx + 0x14]
// 00820fc1  56                   push esi
// 00820fc2  51                   push ecx
// 00820fc3  8bc8                 mov ecx, eax
// 00820fc5  ffd2                 call edx
// 00820fc7  5e                   pop esi
// 00820fc8  c20400               ret 4
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX00000a@@QAEXH@Z)

namespace ns_ROCX00000a {
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
