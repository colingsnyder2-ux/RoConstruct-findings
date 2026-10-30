// roc 2009-12 008f1a50  unit: CXTPRibbonControlSystemPopupBarButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1a50
//
// 008f1a50  56                   push esi
// 008f1a51  8bf1                 mov esi, ecx
// 008f1a53  e8e844f0ff           call 0x7f5f40
// 008f1a58  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f1a5c  8b10                 mov edx, dword ptr [eax]
// 008f1a5e  8b525c               mov edx, dword ptr [edx + 0x5c]
// 008f1a61  6a00                 push 0
// 008f1a63  56                   push esi
// 008f1a64  8b742410             mov esi, dword ptr [esp + 0x10]
// 008f1a68  51                   push ecx
// 008f1a69  56                   push esi
// 008f1a6a  8bc8                 mov ecx, eax
// 008f1a6c  ffd2                 call edx
// 008f1a6e  8bc6                 mov eax, esi
// 008f1a70  5e                   pop esi
// 008f1a71  c20800               ret 8
// copied from an identical function in another client (function ?GetSize@CXTPRibbonControlSystemPopupBarButton@@UAE?AVCSize@@PAVCDC@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp