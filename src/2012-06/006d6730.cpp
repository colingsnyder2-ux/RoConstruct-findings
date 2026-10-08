// roc 2012-06 006d6730  unit: RBX::VInstance::?$NonFactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d6730
//
// 006d6730  56                   push esi
// 006d6731  8bf1                 mov esi, ecx
// 006d6733  c70600000000         mov dword ptr [esi], 0
// 006d6739  8b4608               mov eax, dword ptr [esi + 8]
// 006d673c  85c0                 test eax, eax
// 006d673e  7409                 je 0x6d6749
// 006d6740  50                   push eax
// 006d6741  e8ceb92a00           call 0x982114
// 006d6746  83c404               add esp, 4
// 006d6749  c7460800000000       mov dword ptr [esi + 8], 0
// 006d6750  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006d6757  c7461000000000       mov dword ptr [esi + 0x10], 0
// 006d675e  5e                   pop esi
// 006d675f  c3                   ret 
// library rbxgs/v8world\Contact.cpp (function ??1?$vector@_NV?$allocator@_N@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
