// roc 2008-06 0078cc90  unit: CXTPRichRender::XTextHost  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078cc90
//
// 0078cc90  56                   push esi
// 0078cc91  8bf1                 mov esi, ecx
// 0078cc93  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078cc96  c7062ca98600         mov dword ptr [esi], 0x86a92c
// 0078cc9c  85c0                 test eax, eax
// 0078cc9e  7407                 je 0x78cca7
// 0078cca0  50                   push eax
// 0078cca1  ff1550218000         call dword ptr [0x802150]
// 0078cca7  8bce                 mov ecx, esi
// 0078cca9  5e                   pop esi
// 0078ccaa  e98744f1ff           jmp 0x6a1136
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??1CXTPOffice2007Image@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
