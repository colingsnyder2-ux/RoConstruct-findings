// roc 2011-06 005eb5b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005eb5b0
//
// 005eb5b0  56                   push esi
// 005eb5b1  8bf1                 mov esi, ecx
// 005eb5b3  c70600000000         mov dword ptr [esi], 0
// 005eb5b9  8b4608               mov eax, dword ptr [esi + 8]
// 005eb5bc  85c0                 test eax, eax
// 005eb5be  7409                 je 0x5eb5c9
// 005eb5c0  50                   push eax
// 005eb5c1  e892ea2100           call 0x80a058
// 005eb5c6  83c404               add esp, 4
// 005eb5c9  c7460800000000       mov dword ptr [esi + 8], 0
// 005eb5d0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005eb5d7  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005eb5de  5e                   pop esi
// 005eb5df  c3                   ret 
// library rbxgs/v8world\Contact.cpp (function ??1?$vector@_NV?$allocator@_N@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
