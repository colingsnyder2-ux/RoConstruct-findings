// from server: 100% by auto
// roc 2007-08 0066e270  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e270
//
// 0066e270  56                   push esi
// 0066e271  8b742418             mov esi, dword ptr [esp + 0x18]
// 0066e275  8d442408             lea eax, [esp + 8]
// 0066e279  50                   push eax
// 0066e27a  66c7060000           mov word ptr [esi], 0
// 0066e27f  e84c310000           call 0x6713d0
// 0066e284  85c0                 test eax, eax
// 0066e286  7510                 jne 0x66e298
// 0066e288  66c7060300           mov word ptr [esi], 3
// 0066e28d  c7460826000000       mov dword ptr [esi + 8], 0x26
// 0066e294  5e                   pop esi
// 0066e295  c21400               ret 0x14
// 0066e298  b857000780           mov eax, 0x80070057
// 0066e29d  5e                   pop esi
// 0066e29e  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleRole@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
