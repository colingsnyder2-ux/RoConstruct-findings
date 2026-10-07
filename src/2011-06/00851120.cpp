// roc 2011-06 00851120  unit: CXTPToolBar::CControlButtonExpand  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851120
//
// 00851120  83791002             cmp dword ptr [ecx + 0x10], 2
// 00851124  720c                 jb 0x851132
// 00851126  83790405             cmp dword ptr [ecx + 4], 5
// 0085112a  7206                 jb 0x851132
// 0085112c  b801000000           mov eax, 1
// 00851131  c3                   ret 
// 00851132  33c0                 xor eax, eax
// 00851134  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?IsWin2KOrGreater@CXTPSystemVersion@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
