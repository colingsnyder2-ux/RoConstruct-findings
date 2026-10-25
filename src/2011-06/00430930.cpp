// from server: 100% by tester
// roc 2011-06 00430930  unit: CWrapperView  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430930
//
// 00430930  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00430934  8b01                 mov eax, dword ptr [ecx]
// 00430936  8b500c               mov edx, dword ptr [eax + 0xc]
// 00430939  c7442404cabea500     mov dword ptr [esp + 4], 0xa5beca
// 00430941  ffe2                 jmp edx

struct CWrapperView {
    void Dispatch(int);
};

void CWrapperView::Dispatch(int a) {
    typedef void (__thiscall *Fn)(void *, int);
    char *p = (char *)a;
    Fn fn = *(Fn *)(*(char **)p + 0xc);
    fn(p, 0xa5beca);
}