// roc 2012-06 009c30f0  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c30f0
//
// 009c30f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c30f4  33c0                 xor eax, eax
// 009c30f6  3981ac000000         cmp dword ptr [ecx + 0xac], eax
// 009c30fc  0f94c0               sete al
// 009c30ff  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?ShouldSerializeControl@CXTPControls@@UAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
