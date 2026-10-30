// roc 2009-12 008e9240  unit: CXTPRibbonGroupOption  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9240
//
// 008e9240  83ec08               sub esp, 8
// 008e9243  56                   push esi
// 008e9244  8bf1                 mov esi, ecx
// 008e9246  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 008e924c  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 008e924f  e81cbafaff           call 0x894c70
// 008e9254  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e9258  8b10                 mov edx, dword ptr [eax]
// 008e925a  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008e9260  6a01                 push 1
// 008e9262  56                   push esi
// 008e9263  51                   push ecx
// 008e9264  8d4c2410             lea ecx, [esp + 0x10]
// 008e9268  51                   push ecx
// 008e9269  8bc8                 mov ecx, eax
// 008e926b  ffd2                 call edx
// 008e926d  5e                   pop esi
// 008e926e  83c408               add esp, 8
// 008e9271  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonGroupOption@@EAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp