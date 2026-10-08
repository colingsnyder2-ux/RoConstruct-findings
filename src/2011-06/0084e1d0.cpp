// from server: 100% by auto
// roc 2011-06 0084e1d0  unit: CXTPDockingPaneManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e1d0
//
// 0084e1d0  56                   push esi
// 0084e1d1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0084e1d5  8d542408             lea edx, [esp + 8]
// 0084e1d9  33c0                 xor eax, eax
// 0084e1db  52                   push edx
// 0084e1dc  668906               mov word ptr [esi], ax
// 0084e1df  e84c310000           call 0x851330
// 0084e1e4  85c0                 test eax, eax
// 0084e1e6  7515                 jne 0x84e1fd
// 0084e1e8  b803000000           mov eax, 3
// 0084e1ed  668906               mov word ptr [esi], ax
// 0084e1f0  c7460826000000       mov dword ptr [esi + 8], 0x26
// 0084e1f7  33c0                 xor eax, eax
// 0084e1f9  5e                   pop esi
// 0084e1fa  c21400               ret 0x14
// 0084e1fd  b857000780           mov eax, 0x80070057
// 0084e202  5e                   pop esi
// 0084e203  c21400               ret 0x14
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleRole@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
