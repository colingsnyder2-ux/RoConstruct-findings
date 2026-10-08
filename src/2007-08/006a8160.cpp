// from server: 94% by colin
// roc 2007-08 006a8160  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8160
//
// 006a8160  8b01                 mov eax, dword ptr [ecx]
// 006a8162  8b80c8010000         mov eax, dword ptr [eax + 0x1c8]
// 006a8168  c744240800000000     mov dword ptr [esp + 8], 0
// 006a8170  ffe0                 jmp eax

struct CXTPRibbonBar {
    void* m_pVtable;
    int GetSomething(int arg);
};

int CXTPRibbonBar::GetSomething(int arg) {
    typedef int (__stdcall *Fn)(int);
    Fn fn = *(Fn*)(*(char**)this + 0x1c8);
    arg = 0;
    return fn(arg);
}
