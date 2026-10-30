// roc 2010-06 00894090  unit: CXTPRichRender::XTextHost  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00894090
//
// 00894090  56                   push esi
// 00894091  8bf1                 mov esi, ecx
// 00894093  8b4620               mov eax, dword ptr [esi + 0x20]
// 00894096  c706bc00a700         mov dword ptr [esi], 0xa700bc
// 0089409c  85c0                 test eax, eax
// 0089409e  7407                 je 0x8940a7
// 008940a0  50                   push eax
// 008940a1  ff15d4a09e00         call dword ptr [0x9ea0d4]
// 008940a7  8bce                 mov ecx, esi
// 008940a9  5e                   pop esi
// 008940aa  e97344f1ff           jmp 0x7a8522
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??1CXTPOffice2007Image@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
