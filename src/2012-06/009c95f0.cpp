// from server: 100% by auto
// roc 2012-06 009c95f0  unit: CXTPToolBar::CControlButtonExpand  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c95f0
//
// 009c95f0  83791002             cmp dword ptr [ecx + 0x10], 2
// 009c95f4  720c                 jb 0x9c9602
// 009c95f6  83790405             cmp dword ptr [ecx + 4], 5
// 009c95fa  7206                 jb 0x9c9602
// 009c95fc  b801000000           mov eax, 1
// 009c9601  c3                   ret 
// 009c9602  33c0                 xor eax, eax
// 009c9604  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?IsWin2KOrGreater@CXTPSystemVersion@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
