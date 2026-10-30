// roc 2009-12 008dfe20  unit: CXTPRichRender::XTextHost  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dfe20
//
// 008dfe20  56                   push esi
// 008dfe21  8bf1                 mov esi, ecx
// 008dfe23  8b4620               mov eax, dword ptr [esi + 0x20]
// 008dfe26  c706c4bda000         mov dword ptr [esi], 0xa0bdc4
// 008dfe2c  85c0                 test eax, eax
// 008dfe2e  7407                 je 0x8dfe37
// 008dfe30  50                   push eax
// 008dfe31  ff153cb19800         call dword ptr [0x98b13c]
// 008dfe37  8bce                 mov ecx, esi
// 008dfe39  5e                   pop esi
// 008dfe3a  e9a345f1ff           jmp 0x7f43e2
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??1CXTPOffice2007Image@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
