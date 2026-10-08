// from server: 100% by auto
// roc 2008-06 00785e00  unit: CXTColorHex  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00785e00
//
// 00785e00  8b442404             mov eax, dword ptr [esp + 4]
// 00785e04  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 00785e0a  6a00                 push 0
// 00785e0c  50                   push eax
// 00785e0d  e8de0ff8ff           call 0x706df0
// 00785e12  33c0                 xor eax, eax
// 00785e14  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?OnUpdateColor@CXTColorPageStandard@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
