// roc 2010-06 0088d420  unit: CXTColorHex  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088d420
//
// 0088d420  8b442404             mov eax, dword ptr [esp + 4]
// 0088d424  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 0088d42a  6a00                 push 0
// 0088d42c  50                   push eax
// 0088d42d  e89e64f8ff           call 0x8138d0
// 0088d432  33c0                 xor eax, eax
// 0088d434  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?OnUpdateColor@CXTColorPageStandard@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
