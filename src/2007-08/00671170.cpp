// roc 2007-08 00671170  unit: CXTPToolBar::CControlButtonExpand  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671170
//
// 00671170  b801000000           mov eax, 1
// 00671175  394110               cmp dword ptr [ecx + 0x10], eax
// 00671178  750c                 jne 0x671186
// 0067117a  83790404             cmp dword ptr [ecx + 4], 4
// 0067117e  7506                 jne 0x671186
// 00671180  8379080a             cmp dword ptr [ecx + 8], 0xa
// 00671184  7202                 jb 0x671188
// 00671186  33c0                 xor eax, eax
// 00671188  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?IsWin95@CXTPSystemVersion@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
