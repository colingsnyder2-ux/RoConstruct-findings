// roc 2007-03 006c9ce0  unit: seg_006c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c9ce0
//
// 006c9ce0  56                   push esi
// 006c9ce1  8b742418             mov esi, dword ptr [esp + 0x18]
// 006c9ce5  8d442408             lea eax, [esp + 8]
// 006c9ce9  50                   push eax
// 006c9cea  66c7060000           mov word ptr [esi], 0
// 006c9cef  e8bcc2fbff           call 0x685fb0
// 006c9cf4  85c0                 test eax, eax
// 006c9cf6  7510                 jne 0x6c9d08
// 006c9cf8  66c7060300           mov word ptr [esi], 3
// 006c9cfd  c746083c000000       mov dword ptr [esi + 8], 0x3c
// 006c9d04  5e                   pop esi
// 006c9d05  c21400               ret 0x14
// 006c9d08  b857000780           mov eax, 0x80070057
// 006c9d0d  5e                   pop esi
// 006c9d0e  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleRole@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
