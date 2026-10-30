// roc 2012-06 00a650e0  unit: CXTPRichRender::XTextHost  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a650e0
//
// 00a650e0  56                   push esi
// 00a650e1  8bf1                 mov esi, ecx
// 00a650e3  837e2400             cmp dword ptr [esi + 0x24], 0
// 00a650e7  7423                 je 0xa6510c
// 00a650e9  57                   push edi
// 00a650ea  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00a650ed  57                   push edi
// 00a650ee  e82d58f3ff           call 0x99a920
// 00a650f3  83c404               add esp, 4
// 00a650f6  57                   push edi
// 00a650f7  894620               mov dword ptr [esi + 0x20], eax
// 00a650fa  ff157021b200         call dword ptr [0xb22170]
// 00a65100  33c0                 xor eax, eax
// 00a65102  394630               cmp dword ptr [esi + 0x30], eax
// 00a65105  5f                   pop edi
// 00a65106  0f94c0               sete al
// 00a65109  894630               mov dword ptr [esi + 0x30], eax
// 00a6510c  5e                   pop esi
// 00a6510d  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?InvertBitmap@CXTPOffice2007Image@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
