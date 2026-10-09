// roc 2009-12 00850020  unit: CXTPPropExchange  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850020
//
// 00850020  56                   push esi
// 00850021  8bf1                 mov esi, ecx
// 00850023  e81a640d00           call 0x926442
// 00850028  33c0                 xor eax, eax
// 0085002a  894628               mov dword ptr [esi + 0x28], eax
// 0085002d  894620               mov dword ptr [esi + 0x20], eax
// 00850030  894624               mov dword ptr [esi + 0x24], eax
// 00850033  894630               mov dword ptr [esi + 0x30], eax
// 00850036  894638               mov dword ptr [esi + 0x38], eax
// 00850039  894634               mov dword ptr [esi + 0x34], eax
// 0085003c  b801000000           mov eax, 1
// 00850041  89463c               mov dword ptr [esi + 0x3c], eax
// 00850044  894640               mov dword ptr [esi + 0x40], eax
// 00850047  c70654c39f00         mov dword ptr [esi], 0x9fc354
// 0085004d  c7462c20000000       mov dword ptr [esi + 0x2c], 0x20
// 00850054  8bc6                 mov eax, esi
// 00850056  5e                   pop esi
// 00850057  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ??0CXTPPropExchange@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
