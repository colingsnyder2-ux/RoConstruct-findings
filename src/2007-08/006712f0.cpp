// roc 2007-08 006712f0  unit: CXTPToolBar::CControlButtonExpand  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006712f0
//
// 006712f0  56                   push esi
// 006712f1  8bf1                 mov esi, ecx
// 006712f3  837e1000             cmp dword ptr [esi + 0x10], 0
// 006712f7  7505                 jne 0x6712fe
// 006712f9  e8b2ffffff           call 0x6712b0
// 006712fe  0fb74614             movzx eax, word ptr [esi + 0x14]
// 00671302  0fb74e18             movzx ecx, word ptr [esi + 0x18]
// 00671306  c1e010               shl eax, 0x10
// 00671309  0bc1                 or eax, ecx
// 0067130b  5e                   pop esi
// 0067130c  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetVersion@CXTPModuleHandle@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
