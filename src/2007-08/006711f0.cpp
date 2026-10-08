// from server: 100% by auto
// roc 2007-08 006711f0  unit: CXTPToolBar::CControlButtonExpand  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006711f0
//
// 006711f0  8b4104               mov eax, dword ptr [ecx + 4]
// 006711f3  3b442404             cmp eax, dword ptr [esp + 4]
// 006711f7  7511                 jne 0x67120a
// 006711f9  8b4908               mov ecx, dword ptr [ecx + 8]
// 006711fc  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 00671200  7508                 jne 0x67120a
// 00671202  b801000000           mov eax, 1
// 00671207  c20800               ret 8
// 0067120a  33c0                 xor eax, eax
// 0067120c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?EqualTo@CXTPSystemVersion@@ABE_NKK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
