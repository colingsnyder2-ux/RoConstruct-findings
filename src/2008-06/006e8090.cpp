// roc 2008-06 006e8090  unit: CXTPToolBar::CControlButtonExpand  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8090
//
// 006e8090  83791002             cmp dword ptr [ecx + 0x10], 2
// 006e8094  720c                 jb 0x6e80a2
// 006e8096  83790405             cmp dword ptr [ecx + 4], 5
// 006e809a  7206                 jb 0x6e80a2
// 006e809c  b801000000           mov eax, 1
// 006e80a1  c3                   ret 
// 006e80a2  33c0                 xor eax, eax
// 006e80a4  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?IsWin2KOrGreater@CXTPSystemVersion@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
