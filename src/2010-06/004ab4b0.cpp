// roc 2010-06 004ab4b0  unit: RBX::Network::Player  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ab4b0
//
// 004ab4b0  6aff                 push -1
// 004ab4b2  6858a29900           push 0x99a258
// 004ab4b7  64a100000000         mov eax, dword ptr fs:[0]
// 004ab4bd  50                   push eax
// 004ab4be  64892500000000       mov dword ptr fs:[0], esp
// 004ab4c5  51                   push ecx
// 004ab4c6  56                   push esi
// 004ab4c7  8bf1                 mov esi, ecx
// 004ab4c9  57                   push edi
// 004ab4ca  89742408             mov dword ptr [esp + 8], esi
// 004ab4ce  8b460c               mov eax, dword ptr [esi + 0xc]
// 004ab4d1  33ff                 xor edi, edi
// 004ab4d3  897c2414             mov dword ptr [esp + 0x14], edi
// 004ab4d7  3bc7                 cmp eax, edi
// 004ab4d9  7418                 je 0x4ab4f3
// 004ab4db  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004ab4de  51                   push ecx
// 004ab4df  50                   push eax
// 004ab4e0  8bce                 mov ecx, esi
// 004ab4e2  e839e4ffff           call 0x4a9920
// 004ab4e7  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ab4ea  52                   push edx
// 004ab4eb  e8aac42f00           call 0x7a799a
// 004ab4f0  83c404               add esp, 4
// 004ab4f3  8b06                 mov eax, dword ptr [esi]
// 004ab4f5  50                   push eax
// 004ab4f6  897e0c               mov dword ptr [esi + 0xc], edi
// 004ab4f9  897e10               mov dword ptr [esi + 0x10], edi
// 004ab4fc  897e14               mov dword ptr [esi + 0x14], edi
// 004ab4ff  e896c42f00           call 0x7a799a
// 004ab504  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ab508  83c404               add esp, 4
// 004ab50b  5f                   pop edi
// 004ab50c  5e                   pop esi
// 004ab50d  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab514  83c410               add esp, 0x10
// 004ab517  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
