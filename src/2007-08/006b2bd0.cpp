// from server: 100% by auto
// roc 2007-08 006b2bd0  unit: CXTPRibbonTheme  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2bd0
//
// 006b2bd0  56                   push esi
// 006b2bd1  8bf1                 mov esi, ecx
// 006b2bd3  803e00               cmp byte ptr [esi], 0
// 006b2bd6  740e                 je 0x6b2be6
// 006b2bd8  e825d3f7ff           call 0x62ff02
// 006b2bdd  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b2be0  89480c               mov dword ptr [eax + 0xc], ecx
// 006b2be3  c60600               mov byte ptr [esi], 0
// 006b2be6  5e                   pop esi
// 006b2be7  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPResourceManager.cpp (function ?Undo@CManageState@CXTPResourceManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPResourceManager.cpp
