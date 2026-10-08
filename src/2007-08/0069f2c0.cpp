// from server: 100% by colin
// roc 2007-08 0069f2c0  unit: CSelectionCaption  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f2c0
//
// 0069f2c0  56                   push esi
// 0069f2c1  8bf1                 mov esi, ecx
// 0069f2c3  e8c81c0700           call 0x710f90
// 0069f2c8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069f2cc  8b10                 mov edx, dword ptr [eax]
// 0069f2ce  8b5214               mov edx, dword ptr [edx + 0x14]
// 0069f2d1  56                   push esi
// 0069f2d2  51                   push ecx
// 0069f2d3  8bc8                 mov ecx, eax
// 0069f2d5  ffd2                 call edx
// 0069f2d7  5e                   pop esi
// 0069f2d8  c20400               ret 4

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
