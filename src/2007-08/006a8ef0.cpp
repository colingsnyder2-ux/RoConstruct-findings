// from server: 58% by colin
// roc 2007-08 006a8ef0  unit: CXTPRibbonBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8ef0
//
// 006a8ef0  e8dbecffff           call 0x6a7bd0
// 006a8ef5  85c0                 test eax, eax
// 006a8ef7  740a                 je 0x6a8f03
// 006a8ef9  8b01                 mov eax, dword ptr [ecx]
// 006a8efb  8b9010020000         mov edx, dword ptr [eax + 0x210]
// 006a8f01  ffe2                 jmp edx
// 006a8f03  33c0                 xor eax, eax
// 006a8f05  c3                   ret 

struct CXTPRibbonBar;

extern "C" int __cdecl sub_6A7BD0();

struct CXTPRibbonBar {
    int GetSomething();
};

int CXTPRibbonBar::GetSomething()
{
    if (sub_6A7BD0()) {
        int (__stdcall *fn)(CXTPRibbonBar*);
        fn = *(int (__stdcall **)(CXTPRibbonBar*))(*(int*)this + 0x210);
        return fn(this);
    }
    return 0;
}
