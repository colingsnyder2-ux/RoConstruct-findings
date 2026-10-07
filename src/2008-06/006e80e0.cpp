// roc 2008-06 006e80e0  unit: CXTPToolBar::CControlButtonExpand  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e80e0
//
// 006e80e0  8b4104               mov eax, dword ptr [ecx + 4]
// 006e80e3  3b442404             cmp eax, dword ptr [esp + 4]
// 006e80e7  7511                 jne 0x6e80fa
// 006e80e9  8b4908               mov ecx, dword ptr [ecx + 8]
// 006e80ec  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 006e80f0  7508                 jne 0x6e80fa
// 006e80f2  b801000000           mov eax, 1
// 006e80f7  c20800               ret 8
// 006e80fa  33c0                 xor eax, eax
// 006e80fc  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?EqualTo@CXTPSystemVersion@@ABE_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
