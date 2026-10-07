// roc 2012-06 009c9640  unit: CXTPToolBar::CControlButtonExpand  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9640
//
// 009c9640  8b4104               mov eax, dword ptr [ecx + 4]
// 009c9643  3b442404             cmp eax, dword ptr [esp + 4]
// 009c9647  7511                 jne 0x9c965a
// 009c9649  8b4908               mov ecx, dword ptr [ecx + 8]
// 009c964c  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 009c9650  7508                 jne 0x9c965a
// 009c9652  b801000000           mov eax, 1
// 009c9657  c20800               ret 8
// 009c965a  33c0                 xor eax, eax
// 009c965c  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?EqualTo@CXTPSystemVersion@@ABE_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
