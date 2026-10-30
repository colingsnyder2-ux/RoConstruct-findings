// roc 2009-12 008e9340  unit: CXTPRibbonGroupControlPopup  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9340
//
// 008e9340  83ec08               sub esp, 8
// 008e9343  56                   push esi
// 008e9344  8bf1                 mov esi, ecx
// 008e9346  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008e934c  e83fb2f1ff           call 0x804590
// 008e9351  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e9355  8b10                 mov edx, dword ptr [eax]
// 008e9357  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 008e935d  6a01                 push 1
// 008e935f  56                   push esi
// 008e9360  51                   push ecx
// 008e9361  8d4c2410             lea ecx, [esp + 0x10]
// 008e9365  51                   push ecx
// 008e9366  8bc8                 mov ecx, eax
// 008e9368  ffd2                 call edx
// 008e936a  5e                   pop esi
// 008e936b  83c408               add esp, 8
// 008e936e  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonGroupControlPopup@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp