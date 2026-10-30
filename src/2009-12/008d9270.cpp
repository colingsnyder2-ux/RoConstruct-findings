// roc 2009-12 008d9270  unit: CXTColorHex  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d9270
//
// 008d9270  8b442404             mov eax, dword ptr [esp + 4]
// 008d9274  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 008d927a  6a00                 push 0
// 008d927c  50                   push eax
// 008d927d  e85e66f8ff           call 0x85f8e0
// 008d9282  33c0                 xor eax, eax
// 008d9284  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?OnUpdateColor@CXTColorPageStandard@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
