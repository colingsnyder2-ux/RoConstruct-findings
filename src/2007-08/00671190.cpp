// roc 2007-08 00671190  unit: CXTPToolBar::CControlButtonExpand  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671190
//
// 00671190  33c0                 xor eax, eax
// 00671192  83791001             cmp dword ptr [ecx + 0x10], 1
// 00671196  0f94c0               sete al
// 00671199  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?IsWin9x@CXTPSystemVersion@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
