// roc 2012-06 009cf0c0  unit: CXTPControls  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cf0c0
//
// 009cf0c0  56                   push esi
// 009cf0c1  8bf1                 mov esi, ecx
// 009cf0c3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 009cf0c6  85c9                 test ecx, ecx
// 009cf0c8  740c                 je 0x9cf0d6
// 009cf0ca  e8bb35fbff           call 0x98268a
// 009cf0cf  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 009cf0d6  5e                   pop esi
// 009cf0d7  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?ClearOriginalControls@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
