// from server: 100% by auto
// roc 2007-08 006711c0  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006711c0
//
// 006711c0  8b4104               mov eax, dword ptr [ecx + 4]
// 006711c3  8b542404             mov edx, dword ptr [esp + 4]
// 006711c7  3bc2                 cmp eax, edx
// 006711c9  7710                 ja 0x6711db
// 006711cb  7509                 jne 0x6711d6
// 006711cd  8b4108               mov eax, dword ptr [ecx + 8]
// 006711d0  3b442408             cmp eax, dword ptr [esp + 8]
// 006711d4  7305                 jae 0x6711db
// 006711d6  33c0                 xor eax, eax
// 006711d8  c20800               ret 8
// 006711db  b801000000           mov eax, 1
// 006711e0  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GreaterThanEqualTo@CXTPSystemVersion@@ABE_NKK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
