// from server: 100% by auto
// roc 2012-06 009c6690  unit: CXTPDockingPaneManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c6690
//
// 009c6690  56                   push esi
// 009c6691  8b742418             mov esi, dword ptr [esp + 0x18]
// 009c6695  8d542408             lea edx, [esp + 8]
// 009c6699  33c0                 xor eax, eax
// 009c669b  52                   push edx
// 009c669c  668906               mov word ptr [esi], ax
// 009c669f  e84c310000           call 0x9c97f0
// 009c66a4  85c0                 test eax, eax
// 009c66a6  7515                 jne 0x9c66bd
// 009c66a8  b803000000           mov eax, 3
// 009c66ad  668906               mov word ptr [esi], ax
// 009c66b0  c7460826000000       mov dword ptr [esi + 8], 0x26
// 009c66b7  33c0                 xor eax, eax
// 009c66b9  5e                   pop esi
// 009c66ba  c21400               ret 0x14
// 009c66bd  b857000780           mov eax, 0x80070057
// 009c66c2  5e                   pop esi
// 009c66c3  c21400               ret 0x14
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleRole@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
