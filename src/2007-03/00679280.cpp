// roc 2007-03 00679280  unit: seg_00670000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00679280
//
// 00679280  56                   push esi
// 00679281  8b742418             mov esi, dword ptr [esp + 0x18]
// 00679285  8d442408             lea eax, [esp + 8]
// 00679289  50                   push eax
// 0067928a  66c7060000           mov word ptr [esi], 0
// 0067928f  e81ccd0000           call 0x685fb0
// 00679294  85c0                 test eax, eax
// 00679296  7510                 jne 0x6792a8
// 00679298  66c7060300           mov word ptr [esi], 3
// 0067929d  c7460825000000       mov dword ptr [esi + 8], 0x25
// 006792a4  5e                   pop esi
// 006792a5  c21400               ret 0x14
// 006792a8  b857000780           mov eax, 0x80070057
// 006792ad  5e                   pop esi
// 006792ae  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleRole@CXTPDockingPane@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
