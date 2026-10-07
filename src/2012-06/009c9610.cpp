// roc 2012-06 009c9610  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9610
//
// 009c9610  8b4104               mov eax, dword ptr [ecx + 4]
// 009c9613  8b542404             mov edx, dword ptr [esp + 4]
// 009c9617  3bc2                 cmp eax, edx
// 009c9619  7710                 ja 0x9c962b
// 009c961b  7509                 jne 0x9c9626
// 009c961d  8b4108               mov eax, dword ptr [ecx + 8]
// 009c9620  3b442408             cmp eax, dword ptr [esp + 8]
// 009c9624  7305                 jae 0x9c962b
// 009c9626  33c0                 xor eax, eax
// 009c9628  c20800               ret 8
// 009c962b  b801000000           mov eax, 1
// 009c9630  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GreaterThanEqualTo@CXTPSystemVersion@@ABE_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
