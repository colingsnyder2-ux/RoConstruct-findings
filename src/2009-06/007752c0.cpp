// roc 2009-06 007752c0  unit: CXTPPropExchange  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007752c0
//
// 007752c0  56                   push esi
// 007752c1  8bf1                 mov esi, ecx
// 007752c3  e8626c0d00           call 0x84bf2a
// 007752c8  33c0                 xor eax, eax
// 007752ca  894628               mov dword ptr [esi + 0x28], eax
// 007752cd  894620               mov dword ptr [esi + 0x20], eax
// 007752d0  894624               mov dword ptr [esi + 0x24], eax
// 007752d3  894630               mov dword ptr [esi + 0x30], eax
// 007752d6  894638               mov dword ptr [esi + 0x38], eax
// 007752d9  894634               mov dword ptr [esi + 0x34], eax
// 007752dc  b801000000           mov eax, 1
// 007752e1  89463c               mov dword ptr [esi + 0x3c], eax
// 007752e4  894640               mov dword ptr [esi + 0x40], eax
// 007752e7  c706acbe8f00         mov dword ptr [esi], 0x8fbeac
// 007752ed  c7462c20000000       mov dword ptr [esi + 0x2c], 0x20
// 007752f4  8bc6                 mov eax, esi
// 007752f6  5e                   pop esi
// 007752f7  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ??0CXTPPropExchange@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
