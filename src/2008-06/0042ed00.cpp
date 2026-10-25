// from server: 100% by tester
// roc 2008-06 0042ed00  unit: CWrapperView  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ed00
//
// 0042ed00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042ed04  8b01                 mov eax, dword ptr [ecx]
// 0042ed06  8b500c               mov edx, dword ptr [eax + 0xc]
// 0042ed09  c744240416b78000     mov dword ptr [esp + 4], 0x80b716
// 0042ed11  ffe2                 jmp edx

struct CWrapperView {
    void Dispatch(int);
};

void CWrapperView::Dispatch(int a) {
    typedef void (__thiscall *Fn)(void *, int);
    char *p = (char *)a;
    Fn fn = *(Fn *)(*(char **)p + 0xc);
    fn(p, 0x80b716);
}