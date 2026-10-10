// from server: 100% by tester
// roc 2008-06 006ab1e0  unit: CRobloxControlColorSelector  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab1e0
//
// 006ab1e0  56                   push esi
// 006ab1e1  8bf1                 mov esi, ecx
// 006ab1e3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ab1e9  6a00                 push 0
// 006ab1eb  6aff                 push -1
// 006ab1ed  e8debc0000           call 0x6b6ed0
// 006ab1f2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ab1f8  8b01                 mov eax, dword ptr [ecx]
// 006ab1fa  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 006ab200  6a00                 push 0
// 006ab202  6aff                 push -1
// 006ab204  ffd2                 call edx
// 006ab206  5e                   pop esi
// 006ab207  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?OnCustomizeDragOver@CXTPControl@@MAEXPAV1@VCPoint@@AAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
