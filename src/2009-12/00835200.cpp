// roc 2009-12 00835200  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00835200
//
// 00835200  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00835204  33c0                 xor eax, eax
// 00835206  3981ac000000         cmp dword ptr [ecx + 0xac], eax
// 0083520c  0f94c0               sete al
// 0083520f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?ShouldSerializeControl@CXTPControls@@UAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
