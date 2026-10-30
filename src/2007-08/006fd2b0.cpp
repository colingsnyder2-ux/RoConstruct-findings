// from server: 100% by auto
// roc 2007-08 006fd2b0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd2b0
//
// 006fd2b0  837c240400           cmp dword ptr [esp + 4], 0
// 006fd2b5  7510                 jne 0x6fd2c7
// 006fd2b7  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006fd2ba  8b10                 mov edx, dword ptr [eax]
// 006fd2bc  894c2404             mov dword ptr [esp + 4], ecx
// 006fd2c0  8bc8                 mov ecx, eax
// 006fd2c2  8b4270               mov eax, dword ptr [edx + 0x70]
// 006fd2c5  ffe0                 jmp eax
// 006fd2c7  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CXTPTabManagerNavigateButton@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
