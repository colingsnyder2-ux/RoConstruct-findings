// roc 2012-06 00a65020  unit: CXTPRichRender::XTextHost  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a65020
//
// 00a65020  56                   push esi
// 00a65021  8bf1                 mov esi, ecx
// 00a65023  e85c450300           call 0xa99584
// 00a65028  33c0                 xor eax, eax
// 00a6502a  894620               mov dword ptr [esi + 0x20], eax
// 00a6502d  894624               mov dword ptr [esi + 0x24], eax
// 00a65030  894630               mov dword ptr [esi + 0x30], eax
// 00a65033  89462c               mov dword ptr [esi + 0x2c], eax
// 00a65036  894634               mov dword ptr [esi + 0x34], eax
// 00a65039  c7067c52c200         mov dword ptr [esi], 0xc2527c
// 00a6503f  8bc6                 mov eax, esi
// 00a65041  5e                   pop esi
// 00a65042  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??0CXTPOffice2007Image@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
