// from server: 100% by auto
// roc 2011-06 00851170  unit: CXTPToolBar::CControlButtonExpand  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851170
//
// 00851170  8b4104               mov eax, dword ptr [ecx + 4]
// 00851173  3b442404             cmp eax, dword ptr [esp + 4]
// 00851177  7511                 jne 0x85118a
// 00851179  8b4908               mov ecx, dword ptr [ecx + 8]
// 0085117c  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 00851180  7508                 jne 0x85118a
// 00851182  b801000000           mov eax, 1
// 00851187  c20800               ret 8
// 0085118a  33c0                 xor eax, eax
// 0085118c  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?EqualTo@CXTPSystemVersion@@ABE_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
