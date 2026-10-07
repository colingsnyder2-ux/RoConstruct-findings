// roc 2008-06 006f1af0  unit: CXTPControls  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1af0
//
// 006f1af0  56                   push esi
// 006f1af1  8bf1                 mov esi, ecx
// 006f1af3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 006f1af6  85c9                 test ecx, ecx
// 006f1af8  740c                 je 0x6f1b06
// 006f1afa  e8e5f0faff           call 0x6a0be4
// 006f1aff  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 006f1b06  5e                   pop esi
// 006f1b07  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?ClearOriginalControls@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
