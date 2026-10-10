// from server: 84% by why2
// roc 2009-06 00427a90  unit: CWrapperView  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427a90
//
// 00427a90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00427a94  8b01                 mov eax, dword ptr [ecx]
// 00427a96  8b500c               mov edx, dword ptr [eax + 0xc]
// 00427a99  c744240416d28a00     mov dword ptr [esp + 4], 0x8ad216
// 00427aa1  ffe2                 jmp edx

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD

struct CWrapperView {
    void Dispatch(void* arg);
};

void CWrapperView::Dispatch(void* arg) {
    void** obj = (void**)arg;
    void** vtable = (void**)*obj;
    typedef void (__stdcall *Fn)(void*);
    Fn fn = (Fn)vtable[3];
    *(void**)&arg = (void*)0x8ad216;
    fn(arg);
}
