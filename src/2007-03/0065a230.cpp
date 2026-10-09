// roc 2007-03 0065a230  unit: seg_00650000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a230
//
// 0065a230  56                   push esi
// 0065a231  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065a235  8d442408             lea eax, [esp + 8]
// 0065a239  50                   push eax
// 0065a23a  66c7060000           mov word ptr [esi], 0
// 0065a23f  e86cbd0200           call 0x685fb0
// 0065a244  85c0                 test eax, eax
// 0065a246  7510                 jne 0x65a258
// 0065a248  66c7060300           mov word ptr [esi], 3
// 0065a24d  c7460826000000       mov dword ptr [esi + 8], 0x26
// 0065a254  5e                   pop esi
// 0065a255  c21400               ret 0x14
// 0065a258  b857000780           mov eax, 0x80070057
// 0065a25d  5e                   pop esi
// 0065a25e  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleRole@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
