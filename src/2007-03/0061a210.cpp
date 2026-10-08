// roc 2007-03 0061a210  unit: seg_00610000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061a210
//
// 0061a210  83ec08               sub esp, 8
// 0061a213  56                   push esi
// 0061a214  8bf1                 mov esi, ecx
// 0061a216  8b4604               mov eax, dword ptr [esi + 4]
// 0061a219  8b08                 mov ecx, dword ptr [eax]
// 0061a21b  50                   push eax
// 0061a21c  56                   push esi
// 0061a21d  51                   push ecx
// 0061a21e  56                   push esi
// 0061a21f  8d442414             lea eax, [esp + 0x14]
// 0061a223  50                   push eax
// 0061a224  8bce                 mov ecx, esi
// 0061a226  e895fbffff           call 0x619dc0
// 0061a22b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0061a22e  51                   push ecx
// 0061a22f  e8bc3e0000           call 0x61e0f0
// 0061a234  83c404               add esp, 4
// 0061a237  33c0                 xor eax, eax
// 0061a239  894604               mov dword ptr [esi + 4], eax
// 0061a23c  894608               mov dword ptr [esi + 8], eax
// 0061a23f  5e                   pop esi
// 0061a240  83c408               add esp, 8
// 0061a243  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
