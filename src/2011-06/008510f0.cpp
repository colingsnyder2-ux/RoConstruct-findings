// roc 2011-06 008510f0  unit: CXTPToolBar::CControlButtonExpand  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008510f0
//
// 008510f0  b801000000           mov eax, 1
// 008510f5  394110               cmp dword ptr [ecx + 0x10], eax
// 008510f8  750c                 jne 0x851106
// 008510fa  83790404             cmp dword ptr [ecx + 4], 4
// 008510fe  7506                 jne 0x851106
// 00851100  8379080a             cmp dword ptr [ecx + 8], 0xa
// 00851104  7202                 jb 0x851108
// 00851106  33c0                 xor eax, eax
// 00851108  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?IsWin95@CXTPSystemVersion@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
