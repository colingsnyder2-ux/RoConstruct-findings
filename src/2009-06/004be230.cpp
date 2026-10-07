// roc 2009-06 004be230  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004be230
//
// 004be230  6aff                 push -1
// 004be232  6878ef8600           push 0x86ef78
// 004be237  64a100000000         mov eax, dword ptr fs:[0]
// 004be23d  50                   push eax
// 004be23e  64892500000000       mov dword ptr fs:[0], esp
// 004be245  51                   push ecx
// 004be246  56                   push esi
// 004be247  8bf1                 mov esi, ecx
// 004be249  57                   push edi
// 004be24a  89742408             mov dword ptr [esp + 8], esi
// 004be24e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004be251  33ff                 xor edi, edi
// 004be253  897c2414             mov dword ptr [esp + 0x14], edi
// 004be257  3bc7                 cmp eax, edi
// 004be259  7418                 je 0x4be273
// 004be25b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004be25e  51                   push ecx
// 004be25f  50                   push eax
// 004be260  8bce                 mov ecx, esi
// 004be262  e8a9feffff           call 0x4be110
// 004be267  8b560c               mov edx, dword ptr [esi + 0xc]
// 004be26a  52                   push edx
// 004be26b  e8c2a72500           call 0x718a32
// 004be270  83c404               add esp, 4
// 004be273  8b06                 mov eax, dword ptr [esi]
// 004be275  50                   push eax
// 004be276  897e0c               mov dword ptr [esi + 0xc], edi
// 004be279  897e10               mov dword ptr [esi + 0x10], edi
// 004be27c  897e14               mov dword ptr [esi + 0x14], edi
// 004be27f  e8aea72500           call 0x718a32
// 004be284  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004be288  83c404               add esp, 4
// 004be28b  5f                   pop edi
// 004be28c  5e                   pop esi
// 004be28d  64890d00000000       mov dword ptr fs:[0], ecx
// 004be294  83c410               add esp, 0x10
// 004be297  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
