// roc 2011-06 008ecc70  unit: CXTPRichRender::XTextHost  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ecc70
//
// 008ecc70  56                   push esi
// 008ecc71  8bf1                 mov esi, ecx
// 008ecc73  8b4620               mov eax, dword ptr [esi + 0x20]
// 008ecc76  c706e49bad00         mov dword ptr [esi], 0xad9be4
// 008ecc7c  85c0                 test eax, eax
// 008ecc7e  7407                 je 0x8ecc87
// 008ecc80  50                   push eax
// 008ecc81  ff159c01a400         call dword ptr [0xa4019c]
// 008ecc87  8bce                 mov ecx, esi
// 008ecc89  5e                   pop esi
// 008ecc8a  e957dff1ff           jmp 0x80abe6
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??1CXTPOffice2007Image@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
