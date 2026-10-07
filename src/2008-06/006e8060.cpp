// roc 2008-06 006e8060  unit: CXTPToolBar::CControlButtonExpand  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8060
//
// 006e8060  b801000000           mov eax, 1
// 006e8065  394110               cmp dword ptr [ecx + 0x10], eax
// 006e8068  750c                 jne 0x6e8076
// 006e806a  83790404             cmp dword ptr [ecx + 4], 4
// 006e806e  7506                 jne 0x6e8076
// 006e8070  8379080a             cmp dword ptr [ecx + 8], 0xa
// 006e8074  7202                 jb 0x6e8078
// 006e8076  33c0                 xor eax, eax
// 006e8078  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?IsWin95@CXTPSystemVersion@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
