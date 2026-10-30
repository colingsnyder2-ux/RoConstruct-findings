// from server: 100% by auto
// roc 2011-06 00851140  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851140
//
// 00851140  8b4104               mov eax, dword ptr [ecx + 4]
// 00851143  8b542404             mov edx, dword ptr [esp + 4]
// 00851147  3bc2                 cmp eax, edx
// 00851149  7710                 ja 0x85115b
// 0085114b  7509                 jne 0x851156
// 0085114d  8b4108               mov eax, dword ptr [ecx + 8]
// 00851150  3b442408             cmp eax, dword ptr [esp + 8]
// 00851154  7305                 jae 0x85115b
// 00851156  33c0                 xor eax, eax
// 00851158  c20800               ret 8
// 0085115b  b801000000           mov eax, 1
// 00851160  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GreaterThanEqualTo@CXTPSystemVersion@@ABE_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
