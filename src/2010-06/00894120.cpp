// roc 2010-06 00894120  unit: CXTPRichRender::XTextHost  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00894120
//
// 00894120  56                   push esi
// 00894121  8bf1                 mov esi, ecx
// 00894123  837e2400             cmp dword ptr [esi + 0x24], 0
// 00894127  7423                 je 0x89414c
// 00894129  57                   push edi
// 0089412a  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0089412d  57                   push edi
// 0089412e  e85dc2f2ff           call 0x7c0390
// 00894133  83c404               add esp, 4
// 00894136  57                   push edi
// 00894137  894620               mov dword ptr [esi + 0x20], eax
// 0089413a  ff15d4a09e00         call dword ptr [0x9ea0d4]
// 00894140  33c0                 xor eax, eax
// 00894142  394630               cmp dword ptr [esi + 0x30], eax
// 00894145  5f                   pop edi
// 00894146  0f94c0               sete al
// 00894149  894630               mov dword ptr [esi + 0x30], eax
// 0089414c  5e                   pop esi
// 0089414d  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?InvertBitmap@CXTPOffice2007Image@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
