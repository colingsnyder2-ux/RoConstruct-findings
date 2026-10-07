// roc 2011-06 00856bf0  unit: CXTPControls  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00856bf0
//
// 00856bf0  56                   push esi
// 00856bf1  8bf1                 mov esi, ecx
// 00856bf3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00856bf6  85c9                 test ecx, ecx
// 00856bf8  740c                 je 0x856c06
// 00856bfa  e8db39fbff           call 0x80a5da
// 00856bff  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00856c06  5e                   pop esi
// 00856c07  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?ClearOriginalControls@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
