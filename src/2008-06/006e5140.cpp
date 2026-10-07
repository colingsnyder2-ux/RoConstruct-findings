// roc 2008-06 006e5140  unit: CXTPDockingPaneManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5140
//
// 006e5140  56                   push esi
// 006e5141  8b742418             mov esi, dword ptr [esp + 0x18]
// 006e5145  8d542408             lea edx, [esp + 8]
// 006e5149  33c0                 xor eax, eax
// 006e514b  52                   push edx
// 006e514c  668906               mov word ptr [esi], ax
// 006e514f  e84c310000           call 0x6e82a0
// 006e5154  85c0                 test eax, eax
// 006e5156  7515                 jne 0x6e516d
// 006e5158  b803000000           mov eax, 3
// 006e515d  668906               mov word ptr [esi], ax
// 006e5160  c7460826000000       mov dword ptr [esi + 8], 0x26
// 006e5167  33c0                 xor eax, eax
// 006e5169  5e                   pop esi
// 006e516a  c21400               ret 0x14
// 006e516d  b857000780           mov eax, 0x80070057
// 006e5172  5e                   pop esi
// 006e5173  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleRole@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
