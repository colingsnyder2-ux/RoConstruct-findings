// roc 2011-06 0085f560  unit: CXTPPropExchange  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085f560
//
// 0085f560  56                   push esi
// 0085f561  8bf1                 mov esi, ecx
// 0085f563  e862d01600           call 0x9cc5ca
// 0085f568  33c0                 xor eax, eax
// 0085f56a  894628               mov dword ptr [esi + 0x28], eax
// 0085f56d  894620               mov dword ptr [esi + 0x20], eax
// 0085f570  894624               mov dword ptr [esi + 0x24], eax
// 0085f573  894630               mov dword ptr [esi + 0x30], eax
// 0085f576  894638               mov dword ptr [esi + 0x38], eax
// 0085f579  894634               mov dword ptr [esi + 0x34], eax
// 0085f57c  b801000000           mov eax, 1
// 0085f581  89463c               mov dword ptr [esi + 0x3c], eax
// 0085f584  894640               mov dword ptr [esi + 0x40], eax
// 0085f587  c706b4a8ac00         mov dword ptr [esi], 0xaca8b4
// 0085f58d  c7462c20000000       mov dword ptr [esi + 0x2c], 0x20
// 0085f594  8bc6                 mov eax, esi
// 0085f596  5e                   pop esi
// 0085f597  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ??0CXTPPropExchange@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
