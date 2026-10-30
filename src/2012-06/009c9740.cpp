// from server: 100% by auto
// roc 2012-06 009c9740  unit: CXTPToolBar::CControlButtonExpand  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9740
//
// 009c9740  56                   push esi
// 009c9741  8bf1                 mov esi, ecx
// 009c9743  837e1000             cmp dword ptr [esi + 0x10], 0
// 009c9747  7505                 jne 0x9c974e
// 009c9749  e8b2ffffff           call 0x9c9700
// 009c974e  0fb74614             movzx eax, word ptr [esi + 0x14]
// 009c9752  0fb74e18             movzx ecx, word ptr [esi + 0x18]
// 009c9756  c1e010               shl eax, 0x10
// 009c9759  0bc1                 or eax, ecx
// 009c975b  5e                   pop esi
// 009c975c  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetVersion@CXTPModuleHandle@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
