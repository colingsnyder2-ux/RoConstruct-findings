// roc 2007-08 0070f530  unit: CXTPRichRender::XTextHost  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f530
//
// 0070f530  56                   push esi
// 0070f531  8bf1                 mov esi, ecx
// 0070f533  8b4620               mov eax, dword ptr [esi + 0x20]
// 0070f536  85c0                 test eax, eax
// 0070f538  c706a4e47d00         mov dword ptr [esi], 0x7de4a4
// 0070f53e  7407                 je 0x70f547
// 0070f540  50                   push eax
// 0070f541  ff15c8d07700         call dword ptr [0x77d0c8]
// 0070f547  8bce                 mov ecx, esi
// 0070f549  5e                   pop esi
// 0070f54a  e94b11f2ff           jmp 0x63069a
// library xtp-11.2.2-vc8/Source\Common\XTPOffice2007Image.cpp (function ??1CXTPOffice2007Image@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPOffice2007Image.cpp
