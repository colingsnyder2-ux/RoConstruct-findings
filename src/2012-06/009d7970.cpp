// roc 2012-06 009d7970  unit: CXTPPropExchange  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7970
//
// 009d7970  56                   push esi
// 009d7971  8bf1                 mov esi, ecx
// 009d7973  e80c1c0c00           call 0xa99584
// 009d7978  33c0                 xor eax, eax
// 009d797a  894628               mov dword ptr [esi + 0x28], eax
// 009d797d  894620               mov dword ptr [esi + 0x20], eax
// 009d7980  894624               mov dword ptr [esi + 0x24], eax
// 009d7983  894630               mov dword ptr [esi + 0x30], eax
// 009d7986  894638               mov dword ptr [esi + 0x38], eax
// 009d7989  894634               mov dword ptr [esi + 0x34], eax
// 009d798c  b801000000           mov eax, 1
// 009d7991  89463c               mov dword ptr [esi + 0x3c], eax
// 009d7994  894640               mov dword ptr [esi + 0x40], eax
// 009d7997  c706ac5fc100         mov dword ptr [esi], 0xc15fac
// 009d799d  c7462c20000000       mov dword ptr [esi + 0x2c], 0x20
// 009d79a4  8bc6                 mov eax, esi
// 009d79a6  5e                   pop esi
// 009d79a7  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ??0CXTPPropExchange@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
