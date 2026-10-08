// roc 2012-06 00a5e3f0  unit: CXTColorHex  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5e3f0
//
// 00a5e3f0  8b442404             mov eax, dword ptr [esp + 4]
// 00a5e3f4  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 00a5e3fa  6a00                 push 0
// 00a5e3fc  50                   push eax
// 00a5e3fd  e89eb2f8ff           call 0x9e96a0
// 00a5e402  33c0                 xor eax, eax
// 00a5e404  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?OnUpdateColor@CXTColorPageStandard@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
