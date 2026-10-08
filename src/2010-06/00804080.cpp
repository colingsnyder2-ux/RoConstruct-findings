// roc 2010-06 00804080  unit: CXTPPropExchange  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00804080
//
// 00804080  56                   push esi
// 00804081  8bf1                 mov esi, ecx
// 00804083  e8f68c1700           call 0x97cd7e
// 00804088  33c0                 xor eax, eax
// 0080408a  894628               mov dword ptr [esi + 0x28], eax
// 0080408d  894620               mov dword ptr [esi + 0x20], eax
// 00804090  894624               mov dword ptr [esi + 0x24], eax
// 00804093  894630               mov dword ptr [esi + 0x30], eax
// 00804096  894638               mov dword ptr [esi + 0x38], eax
// 00804099  894634               mov dword ptr [esi + 0x34], eax
// 0080409c  b801000000           mov eax, 1
// 008040a1  89463c               mov dword ptr [esi + 0x3c], eax
// 008040a4  894640               mov dword ptr [esi + 0x40], eax
// 008040a7  c7061406a600         mov dword ptr [esi], 0xa60614
// 008040ad  c7462c20000000       mov dword ptr [esi + 0x2c], 0x20
// 008040b4  8bc6                 mov eax, esi
// 008040b6  5e                   pop esi
// 008040b7  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ??0CXTPPropExchange@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
