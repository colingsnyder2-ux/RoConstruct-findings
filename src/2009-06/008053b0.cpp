// roc 2009-06 008053b0  unit: CXTPRichRender::XTextHost  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008053b0
//
// 008053b0  56                   push esi
// 008053b1  8bf1                 mov esi, ecx
// 008053b3  837e2400             cmp dword ptr [esi + 0x24], 0
// 008053b7  7423                 je 0x8053dc
// 008053b9  57                   push edi
// 008053ba  8b7e20               mov edi, dword ptr [esi + 0x20]
// 008053bd  57                   push edi
// 008053be  e82dfef2ff           call 0x7351f0
// 008053c3  83c404               add esp, 4
// 008053c6  57                   push edi
// 008053c7  894620               mov dword ptr [esi + 0x20], eax
// 008053ca  ff1560e18900         call dword ptr [0x89e160]
// 008053d0  33c0                 xor eax, eax
// 008053d2  394630               cmp dword ptr [esi + 0x30], eax
// 008053d5  5f                   pop edi
// 008053d6  0f94c0               sete al
// 008053d9  894630               mov dword ptr [esi + 0x30], eax
// 008053dc  5e                   pop esi
// 008053dd  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?InvertBitmap@CXTPOffice2007Image@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
