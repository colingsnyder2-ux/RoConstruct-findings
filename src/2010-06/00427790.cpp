// roc 2010-06 00427790  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00427790
//
// 00427790  6aff                 push -1
// 00427792  6858a29900           push 0x99a258
// 00427797  64a100000000         mov eax, dword ptr fs:[0]
// 0042779d  50                   push eax
// 0042779e  64892500000000       mov dword ptr fs:[0], esp
// 004277a5  51                   push ecx
// 004277a6  56                   push esi
// 004277a7  8bf1                 mov esi, ecx
// 004277a9  57                   push edi
// 004277aa  89742408             mov dword ptr [esp + 8], esi
// 004277ae  8b460c               mov eax, dword ptr [esi + 0xc]
// 004277b1  33ff                 xor edi, edi
// 004277b3  897c2414             mov dword ptr [esp + 0x14], edi
// 004277b7  3bc7                 cmp eax, edi
// 004277b9  7418                 je 0x4277d3
// 004277bb  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004277be  51                   push ecx
// 004277bf  50                   push eax
// 004277c0  8bce                 mov ecx, esi
// 004277c2  e829ffffff           call 0x4276f0
// 004277c7  8b560c               mov edx, dword ptr [esi + 0xc]
// 004277ca  52                   push edx
// 004277cb  e8ca013800           call 0x7a799a
// 004277d0  83c404               add esp, 4
// 004277d3  8b06                 mov eax, dword ptr [esi]
// 004277d5  50                   push eax
// 004277d6  897e0c               mov dword ptr [esi + 0xc], edi
// 004277d9  897e10               mov dword ptr [esi + 0x10], edi
// 004277dc  897e14               mov dword ptr [esi + 0x14], edi
// 004277df  e8b6013800           call 0x7a799a
// 004277e4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004277e8  83c404               add esp, 4
// 004277eb  5f                   pop edi
// 004277ec  5e                   pop esi
// 004277ed  64890d00000000       mov dword ptr fs:[0], ecx
// 004277f4  83c410               add esp, 0x10
// 004277f7  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
