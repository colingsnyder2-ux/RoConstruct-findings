// roc 2009-12 008dfdf0  unit: CXTPRichRender::XTextHost  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dfdf0
//
// 008dfdf0  56                   push esi
// 008dfdf1  8bf1                 mov esi, ecx
// 008dfdf3  e84a660400           call 0x926442
// 008dfdf8  33c0                 xor eax, eax
// 008dfdfa  894620               mov dword ptr [esi + 0x20], eax
// 008dfdfd  894624               mov dword ptr [esi + 0x24], eax
// 008dfe00  894630               mov dword ptr [esi + 0x30], eax
// 008dfe03  89462c               mov dword ptr [esi + 0x2c], eax
// 008dfe06  894634               mov dword ptr [esi + 0x34], eax
// 008dfe09  c706c4bda000         mov dword ptr [esi], 0xa0bdc4
// 008dfe0f  8bc6                 mov eax, esi
// 008dfe11  5e                   pop esi
// 008dfe12  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??0CXTPOffice2007Image@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
