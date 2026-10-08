// from server: 100% by auto
// roc 2008-06 006fc950  unit: CXTPPropExchange  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc950
//
// 006fc950  56                   push esi
// 006fc951  8bf1                 mov esi, ecx
// 006fc953  e852f60b00           call 0x7bbfaa
// 006fc958  33c0                 xor eax, eax
// 006fc95a  894628               mov dword ptr [esi + 0x28], eax
// 006fc95d  894620               mov dword ptr [esi + 0x20], eax
// 006fc960  894624               mov dword ptr [esi + 0x24], eax
// 006fc963  894630               mov dword ptr [esi + 0x30], eax
// 006fc966  894638               mov dword ptr [esi + 0x38], eax
// 006fc969  894634               mov dword ptr [esi + 0x34], eax
// 006fc96c  b801000000           mov eax, 1
// 006fc971  89463c               mov dword ptr [esi + 0x3c], eax
// 006fc974  894640               mov dword ptr [esi + 0x40], eax
// 006fc977  c70654ae8500         mov dword ptr [esi], 0x85ae54
// 006fc97d  c7462c20000000       mov dword ptr [esi + 0x2c], 0x20
// 006fc984  8bc6                 mov eax, esi
// 006fc986  5e                   pop esi
// 006fc987  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ??0CXTPPropExchange@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
