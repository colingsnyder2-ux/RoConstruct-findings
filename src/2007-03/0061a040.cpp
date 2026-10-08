// roc 2007-03 0061a040  unit: seg_00610000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061a040
//
// 0061a040  83ec08               sub esp, 8
// 0061a043  56                   push esi
// 0061a044  8bf1                 mov esi, ecx
// 0061a046  8b4604               mov eax, dword ptr [esi + 4]
// 0061a049  8b08                 mov ecx, dword ptr [eax]
// 0061a04b  50                   push eax
// 0061a04c  56                   push esi
// 0061a04d  51                   push ecx
// 0061a04e  56                   push esi
// 0061a04f  8d442414             lea eax, [esp + 0x14]
// 0061a053  50                   push eax
// 0061a054  8bce                 mov ecx, esi
// 0061a056  e865f5ffff           call 0x6195c0
// 0061a05b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0061a05e  51                   push ecx
// 0061a05f  e88c400000           call 0x61e0f0
// 0061a064  83c404               add esp, 4
// 0061a067  33c0                 xor eax, eax
// 0061a069  894604               mov dword ptr [esi + 4], eax
// 0061a06c  894608               mov dword ptr [esi + 8], eax
// 0061a06f  5e                   pop esi
// 0061a070  83c408               add esp, 8
// 0061a073  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
