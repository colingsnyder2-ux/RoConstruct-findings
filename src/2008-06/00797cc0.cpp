// roc 2008-06 00797cc0  unit: CXTPRibbonGroupControlPopup  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797cc0
//
// 00797cc0  83ec08               sub esp, 8
// 00797cc3  56                   push esi
// 00797cc4  8bf1                 mov esi, ecx
// 00797cc6  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00797ccc  e8ffd1f1ff           call 0x6b4ed0
// 00797cd1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00797cd5  8b10                 mov edx, dword ptr [eax]
// 00797cd7  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 00797cdd  6a01                 push 1
// 00797cdf  56                   push esi
// 00797ce0  51                   push ecx
// 00797ce1  8d4c2410             lea ecx, [esp + 0x10]
// 00797ce5  51                   push ecx
// 00797ce6  8bc8                 mov ecx, eax
// 00797ce8  ffd2                 call edx
// 00797cea  5e                   pop esi
// 00797ceb  83c408               add esp, 8
// 00797cee  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroup.cpp (function ?Draw@CXTPRibbonGroupControlPopup@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp
