// roc 2011-06 0084ac40  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084ac40
//
// 0084ac40  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084ac44  33c0                 xor eax, eax
// 0084ac46  3981ac000000         cmp dword ptr [ecx + 0xac], eax
// 0084ac4c  0f94c0               sete al
// 0084ac4f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?ShouldSerializeControl@CXTPControls@@UAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
