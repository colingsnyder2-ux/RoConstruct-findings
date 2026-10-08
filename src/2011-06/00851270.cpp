// from server: 100% by auto
// roc 2011-06 00851270  unit: CXTPToolBar::CControlButtonExpand  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851270
//
// 00851270  56                   push esi
// 00851271  8bf1                 mov esi, ecx
// 00851273  837e1000             cmp dword ptr [esi + 0x10], 0
// 00851277  7505                 jne 0x85127e
// 00851279  e8b2ffffff           call 0x851230
// 0085127e  0fb74614             movzx eax, word ptr [esi + 0x14]
// 00851282  0fb74e18             movzx ecx, word ptr [esi + 0x18]
// 00851286  c1e010               shl eax, 0x10
// 00851289  0bc1                 or eax, ecx
// 0085128b  5e                   pop esi
// 0085128c  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetVersion@CXTPModuleHandle@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
