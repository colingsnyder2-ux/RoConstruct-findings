// from server: 100% by colin
// roc 2007-08 0069b6f0  unit: CXTPPropertyGridView  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069b6f0
//
// 0069b6f0  56                   push esi
// 0069b6f1  8bf1                 mov esi, ecx
// 0069b6f3  e838f4ffff           call 0x69ab30
// 0069b6f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069b6fc  8b10                 mov edx, dword ptr [eax]
// 0069b6fe  8b5218               mov edx, dword ptr [edx + 0x18]
// 0069b701  6a01                 push 1
// 0069b703  51                   push ecx
// 0069b704  6a00                 push 0
// 0069b706  8bc8                 mov ecx, eax
// 0069b708  ffd2                 call edx
// 0069b70a  8bce                 mov ecx, esi
// 0069b70c  e82d4bf9ff           call 0x63023e
// 0069b711  5e                   pop esi
// 0069b712  c20800               ret 8

struct CXTPPropertyGridView {
    void* sub_69AB30();
    void sub_63023E();
    void func(int a, int b);
};

void CXTPPropertyGridView::func(int a, int b) {
    void* p = sub_69AB30();
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(void*, int, int, int);
    ((Fn)vtbl[6])(p, 0, b, 1);
    sub_63023E();
}
