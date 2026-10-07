// roc 2008-06 006e81e0  unit: CXTPToolBar::CControlButtonExpand  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e81e0
//
// 006e81e0  56                   push esi
// 006e81e1  8bf1                 mov esi, ecx
// 006e81e3  837e1000             cmp dword ptr [esi + 0x10], 0
// 006e81e7  7505                 jne 0x6e81ee
// 006e81e9  e8b2ffffff           call 0x6e81a0
// 006e81ee  0fb74614             movzx eax, word ptr [esi + 0x14]
// 006e81f2  0fb74e18             movzx ecx, word ptr [esi + 0x18]
// 006e81f6  c1e010               shl eax, 0x10
// 006e81f9  0bc1                 or eax, ecx
// 006e81fb  5e                   pop esi
// 006e81fc  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GetVersion@CXTPModuleHandle@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
