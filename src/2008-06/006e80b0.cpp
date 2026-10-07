// roc 2008-06 006e80b0  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e80b0
//
// 006e80b0  8b4104               mov eax, dword ptr [ecx + 4]
// 006e80b3  8b542404             mov edx, dword ptr [esp + 4]
// 006e80b7  3bc2                 cmp eax, edx
// 006e80b9  7710                 ja 0x6e80cb
// 006e80bb  7509                 jne 0x6e80c6
// 006e80bd  8b4108               mov eax, dword ptr [ecx + 8]
// 006e80c0  3b442408             cmp eax, dword ptr [esp + 8]
// 006e80c4  7305                 jae 0x6e80cb
// 006e80c6  33c0                 xor eax, eax
// 006e80c8  c20800               ret 8
// 006e80cb  b801000000           mov eax, 1
// 006e80d0  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GreaterThanEqualTo@CXTPSystemVersion@@ABE_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
