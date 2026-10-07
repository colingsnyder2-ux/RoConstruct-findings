// roc 2012-06 00a3aa90  unit: CXTPDockingPaneTabbedContainer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3aa90
//
// 00a3aa90  56                   push esi
// 00a3aa91  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a3aa95  8d542408             lea edx, [esp + 8]
// 00a3aa99  33c0                 xor eax, eax
// 00a3aa9b  52                   push edx
// 00a3aa9c  668906               mov word ptr [esi], ax
// 00a3aa9f  e84cedf8ff           call 0x9c97f0
// 00a3aaa4  85c0                 test eax, eax
// 00a3aaa6  7515                 jne 0xa3aabd
// 00a3aaa8  b803000000           mov eax, 3
// 00a3aaad  668906               mov word ptr [esi], ax
// 00a3aab0  c746083c000000       mov dword ptr [esi + 8], 0x3c
// 00a3aab7  33c0                 xor eax, eax
// 00a3aab9  5e                   pop esi
// 00a3aaba  c21400               ret 0x14
// 00a3aabd  b857000780           mov eax, 0x80070057
// 00a3aac2  5e                   pop esi
// 00a3aac3  c21400               ret 0x14
// library xtp-13.2.1/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleRole@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
