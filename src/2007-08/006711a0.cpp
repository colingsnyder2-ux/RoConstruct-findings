// from server: 100% by auto
// roc 2007-08 006711a0  unit: CXTPToolBar::CControlButtonExpand  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006711a0
//
// 006711a0  83791002             cmp dword ptr [ecx + 0x10], 2
// 006711a4  720c                 jb 0x6711b2
// 006711a6  83790405             cmp dword ptr [ecx + 4], 5
// 006711aa  7206                 jb 0x6711b2
// 006711ac  b801000000           mov eax, 1
// 006711b1  c3                   ret 
// 006711b2  33c0                 xor eax, eax
// 006711b4  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?IsWin2KOrGreater@CXTPSystemVersion@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
