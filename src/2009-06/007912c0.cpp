// roc 2009-06 007912c0  unit: CSelectionCaption  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007912c0
//
// 007912c0  56                   push esi
// 007912c1  8bf1                 mov esi, ecx
// 007912c3  e8a8feffff           call 0x791170
// 007912c8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007912cc  8b10                 mov edx, dword ptr [eax]
// 007912ce  8b5214               mov edx, dword ptr [edx + 0x14]
// 007912d1  56                   push esi
// 007912d2  51                   push ecx
// 007912d3  8bc8                 mov ecx, eax
// 007912d5  ffd2                 call edx
// 007912d7  5e                   pop esi
// 007912d8  c20400               ret 4
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX000000@@QAEXH@Z)

namespace ns_ROCX000000 {
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
