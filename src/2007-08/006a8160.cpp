// from server: 100% by colin
// roc 2007-08 006a8160  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8160
//
// 006a8160  8b01                 mov eax, dword ptr [ecx]
// 006a8162  8b80c8010000         mov eax, dword ptr [eax + 0x1c8]
// 006a8168  c744240800000000     mov dword ptr [esp + 8], 0
// 006a8170  ffe0                 jmp eax

struct CXTPRibbonBar {
    int GetSomething(int arg1, int arg2);
};

int CXTPRibbonBar::GetSomething(int arg1, int arg2) {
    typedef int (__stdcall *Fn)(int, int);
    Fn fn = *(Fn*)(*(char**)this + 0x1c8);
    arg2 = 0;
    return fn(arg1, arg2);
}
