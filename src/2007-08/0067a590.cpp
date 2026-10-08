// from server: 100% by auto
// roc 2007-08 0067a590  unit: CXTPControls  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a590
//
// 0067a590  56                   push esi
// 0067a591  8bf1                 mov esi, ecx
// 0067a593  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0067a596  85c9                 test ecx, ecx
// 0067a598  740c                 je 0x67a5a6
// 0067a59a  e8455cfbff           call 0x6301e4
// 0067a59f  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 0067a5a6  5e                   pop esi
// 0067a5a7  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?ClearOriginalControls@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
