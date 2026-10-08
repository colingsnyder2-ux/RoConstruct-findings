// roc 2009-06 008052f0  unit: CXTPRichRender::XTextHost  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008052f0
//
// 008052f0  56                   push esi
// 008052f1  8bf1                 mov esi, ecx
// 008052f3  e8326c0400           call 0x84bf2a
// 008052f8  33c0                 xor eax, eax
// 008052fa  894620               mov dword ptr [esi + 0x20], eax
// 008052fd  894624               mov dword ptr [esi + 0x24], eax
// 00805300  894630               mov dword ptr [esi + 0x30], eax
// 00805303  89462c               mov dword ptr [esi + 0x2c], eax
// 00805306  894634               mov dword ptr [esi + 0x34], eax
// 00805309  c70654b99000         mov dword ptr [esi], 0x90b954
// 0080530f  8bc6                 mov eax, esi
// 00805311  5e                   pop esi
// 00805312  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??0CXTPOffice2007Image@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
