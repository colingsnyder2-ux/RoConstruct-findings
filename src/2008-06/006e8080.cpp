// roc 2008-06 006e8080  unit: CXTPToolBar::CControlButtonExpand  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8080
//
// 006e8080  33c0                 xor eax, eax
// 006e8082  83791001             cmp dword ptr [ecx + 0x10], 1
// 006e8086  0f94c0               sete al
// 006e8089  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?IsWin9x@CXTPSystemVersion@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
