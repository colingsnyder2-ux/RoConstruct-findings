// roc 2010-06 007e9420  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e9420
//
// 007e9420  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007e9424  33c0                 xor eax, eax
// 007e9426  3981ac000000         cmp dword ptr [ecx + 0xac], eax
// 007e942c  0f94c0               sete al
// 007e942f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?ShouldSerializeControl@CXTPControls@@UAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
