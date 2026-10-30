// roc 2011-06 008ecc40  unit: CXTPRichRender::XTextHost  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ecc40
//
// 008ecc40  56                   push esi
// 008ecc41  8bf1                 mov esi, ecx
// 008ecc43  e882f90d00           call 0x9cc5ca
// 008ecc48  33c0                 xor eax, eax
// 008ecc4a  894620               mov dword ptr [esi + 0x20], eax
// 008ecc4d  894624               mov dword ptr [esi + 0x24], eax
// 008ecc50  894630               mov dword ptr [esi + 0x30], eax
// 008ecc53  89462c               mov dword ptr [esi + 0x2c], eax
// 008ecc56  894634               mov dword ptr [esi + 0x34], eax
// 008ecc59  c706e49bad00         mov dword ptr [esi], 0xad9be4
// 008ecc5f  8bc6                 mov eax, esi
// 008ecc61  5e                   pop esi
// 008ecc62  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??0CXTPOffice2007Image@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
