// roc 2012-06 009c95c0  unit: CXTPToolBar::CControlButtonExpand  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c95c0
//
// 009c95c0  b801000000           mov eax, 1
// 009c95c5  394110               cmp dword ptr [ecx + 0x10], eax
// 009c95c8  750c                 jne 0x9c95d6
// 009c95ca  83790404             cmp dword ptr [ecx + 4], 4
// 009c95ce  7506                 jne 0x9c95d6
// 009c95d0  8379080a             cmp dword ptr [ecx + 8], 0xa
// 009c95d4  7202                 jb 0x9c95d8
// 009c95d6  33c0                 xor eax, eax
// 009c95d8  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?IsWin95@CXTPSystemVersion@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
