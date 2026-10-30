// roc 2009-06 007fe6d0  unit: CXTColorHex  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fe6d0
//
// 007fe6d0  8b442404             mov eax, dword ptr [esp + 4]
// 007fe6d4  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 007fe6da  6a00                 push 0
// 007fe6dc  50                   push eax
// 007fe6dd  e8ee61f8ff           call 0x7848d0
// 007fe6e2  33c0                 xor eax, eax
// 007fe6e4  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?OnUpdateColor@CXTColorPageStandard@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
