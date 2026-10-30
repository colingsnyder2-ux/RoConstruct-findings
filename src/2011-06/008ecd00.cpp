// roc 2011-06 008ecd00  unit: CXTPRichRender::XTextHost  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ecd00
//
// 008ecd00  56                   push esi
// 008ecd01  8bf1                 mov esi, ecx
// 008ecd03  837e2400             cmp dword ptr [esi + 0x24], 0
// 008ecd07  7423                 je 0x8ecd2c
// 008ecd09  57                   push edi
// 008ecd0a  8b7e20               mov edi, dword ptr [esi + 0x20]
// 008ecd0d  57                   push edi
// 008ecd0e  e80d57f3ff           call 0x822420
// 008ecd13  83c404               add esp, 4
// 008ecd16  57                   push edi
// 008ecd17  894620               mov dword ptr [esi + 0x20], eax
// 008ecd1a  ff159c01a400         call dword ptr [0xa4019c]
// 008ecd20  33c0                 xor eax, eax
// 008ecd22  394630               cmp dword ptr [esi + 0x30], eax
// 008ecd25  5f                   pop edi
// 008ecd26  0f94c0               sete al
// 008ecd29  894630               mov dword ptr [esi + 0x30], eax
// 008ecd2c  5e                   pop esi
// 008ecd2d  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?InvertBitmap@CXTPOffice2007Image@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
