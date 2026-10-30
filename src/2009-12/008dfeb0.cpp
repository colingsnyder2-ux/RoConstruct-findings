// roc 2009-12 008dfeb0  unit: CXTPRichRender::XTextHost  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dfeb0
//
// 008dfeb0  56                   push esi
// 008dfeb1  8bf1                 mov esi, ecx
// 008dfeb3  837e2400             cmp dword ptr [esi + 0x24], 0
// 008dfeb7  7423                 je 0x8dfedc
// 008dfeb9  57                   push edi
// 008dfeba  8b7e20               mov edi, dword ptr [esi + 0x20]
// 008dfebd  57                   push edi
// 008dfebe  e8ddc3f2ff           call 0x80c2a0
// 008dfec3  83c404               add esp, 4
// 008dfec6  57                   push edi
// 008dfec7  894620               mov dword ptr [esi + 0x20], eax
// 008dfeca  ff153cb19800         call dword ptr [0x98b13c]
// 008dfed0  33c0                 xor eax, eax
// 008dfed2  394630               cmp dword ptr [esi + 0x30], eax
// 008dfed5  5f                   pop edi
// 008dfed6  0f94c0               sete al
// 008dfed9  894630               mov dword ptr [esi + 0x30], eax
// 008dfedc  5e                   pop esi
// 008dfedd  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?InvertBitmap@CXTPOffice2007Image@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
