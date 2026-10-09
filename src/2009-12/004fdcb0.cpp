// roc 2009-12 004fdcb0  unit: RBX::Network::Player  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fdcb0
//
// 004fdcb0  6aff                 push -1
// 004fdcb2  68d8c59300           push 0x93c5d8
// 004fdcb7  64a100000000         mov eax, dword ptr fs:[0]
// 004fdcbd  50                   push eax
// 004fdcbe  64892500000000       mov dword ptr fs:[0], esp
// 004fdcc5  51                   push ecx
// 004fdcc6  56                   push esi
// 004fdcc7  8bf1                 mov esi, ecx
// 004fdcc9  57                   push edi
// 004fdcca  89742408             mov dword ptr [esp + 8], esi
// 004fdcce  8b460c               mov eax, dword ptr [esi + 0xc]
// 004fdcd1  33ff                 xor edi, edi
// 004fdcd3  897c2414             mov dword ptr [esp + 0x14], edi
// 004fdcd7  3bc7                 cmp eax, edi
// 004fdcd9  7418                 je 0x4fdcf3
// 004fdcdb  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004fdcde  51                   push ecx
// 004fdcdf  50                   push eax
// 004fdce0  8bce                 mov ecx, esi
// 004fdce2  e8d9e2ffff           call 0x4fbfc0
// 004fdce7  8b560c               mov edx, dword ptr [esi + 0xc]
// 004fdcea  52                   push edx
// 004fdceb  e86a5b2f00           call 0x7f385a
// 004fdcf0  83c404               add esp, 4
// 004fdcf3  8b06                 mov eax, dword ptr [esi]
// 004fdcf5  50                   push eax
// 004fdcf6  897e0c               mov dword ptr [esi + 0xc], edi
// 004fdcf9  897e10               mov dword ptr [esi + 0x10], edi
// 004fdcfc  897e14               mov dword ptr [esi + 0x14], edi
// 004fdcff  e8565b2f00           call 0x7f385a
// 004fdd04  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004fdd08  83c404               add esp, 4
// 004fdd0b  5f                   pop edi
// 004fdd0c  5e                   pop esi
// 004fdd0d  64890d00000000       mov dword ptr fs:[0], ecx
// 004fdd14  83c410               add esp, 0x10
// 004fdd17  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
