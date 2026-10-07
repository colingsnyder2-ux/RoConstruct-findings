// roc 2008-06 006e1b50  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1b50
//
// 006e1b50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e1b54  33c0                 xor eax, eax
// 006e1b56  3981ac000000         cmp dword ptr [ecx + 0xac], eax
// 006e1b5c  0f94c0               sete al
// 006e1b5f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?ShouldSerializeControl@CXTPControls@@UAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
