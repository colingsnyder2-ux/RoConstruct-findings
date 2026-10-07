// roc 2008-06 0075ddb0  unit: CXTPDockingPaneTabbedContainer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ddb0
//
// 0075ddb0  56                   push esi
// 0075ddb1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0075ddb5  8d542408             lea edx, [esp + 8]
// 0075ddb9  33c0                 xor eax, eax
// 0075ddbb  52                   push edx
// 0075ddbc  668906               mov word ptr [esi], ax
// 0075ddbf  e8dca4f8ff           call 0x6e82a0
// 0075ddc4  85c0                 test eax, eax
// 0075ddc6  7515                 jne 0x75dddd
// 0075ddc8  b803000000           mov eax, 3
// 0075ddcd  668906               mov word ptr [esi], ax
// 0075ddd0  c746083c000000       mov dword ptr [esi + 8], 0x3c
// 0075ddd7  33c0                 xor eax, eax
// 0075ddd9  5e                   pop esi
// 0075ddda  c21400               ret 0x14
// 0075dddd  b857000780           mov eax, 0x80070057
// 0075dde2  5e                   pop esi
// 0075dde3  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleRole@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
