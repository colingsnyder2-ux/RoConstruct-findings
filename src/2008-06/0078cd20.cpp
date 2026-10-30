// from server: 100% by auto
// roc 2008-06 0078cd20  unit: CXTPRichRender::XTextHost  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078cd20
//
// 0078cd20  56                   push esi
// 0078cd21  8bf1                 mov esi, ecx
// 0078cd23  837e2400             cmp dword ptr [esi + 0x24], 0
// 0078cd27  7423                 je 0x78cd4c
// 0078cd29  57                   push edi
// 0078cd2a  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0078cd2d  57                   push edi
// 0078cd2e  e8edfff2ff           call 0x6bcd20
// 0078cd33  83c404               add esp, 4
// 0078cd36  57                   push edi
// 0078cd37  894620               mov dword ptr [esi + 0x20], eax
// 0078cd3a  ff1550218000         call dword ptr [0x802150]
// 0078cd40  33c0                 xor eax, eax
// 0078cd42  394630               cmp dword ptr [esi + 0x30], eax
// 0078cd45  5f                   pop edi
// 0078cd46  0f94c0               sete al
// 0078cd49  894630               mov dword ptr [esi + 0x30], eax
// 0078cd4c  5e                   pop esi
// 0078cd4d  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?InvertBitmap@CXTPOffice2007Image@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
