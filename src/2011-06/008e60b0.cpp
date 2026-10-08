// roc 2011-06 008e60b0  unit: CXTColorHex  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e60b0
//
// 008e60b0  8b442404             mov eax, dword ptr [esp + 4]
// 008e60b4  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 008e60ba  6a00                 push 0
// 008e60bc  50                   push eax
// 008e60bd  e8aeb0f8ff           call 0x871170
// 008e60c2  33c0                 xor eax, eax
// 008e60c4  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?OnUpdateColor@CXTColorPageStandard@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
