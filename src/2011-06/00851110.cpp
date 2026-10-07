// roc 2011-06 00851110  unit: CXTPToolBar::CControlButtonExpand  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851110
//
// 00851110  33c0                 xor eax, eax
// 00851112  83791001             cmp dword ptr [ecx + 0x10], 1
// 00851116  0f94c0               sete al
// 00851119  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?IsWin9x@CXTPSystemVersion@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
