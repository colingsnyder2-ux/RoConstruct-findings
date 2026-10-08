// roc 2007-03 004e5810  unit: seg_004e0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e5810
//
// 004e5810  83ec08               sub esp, 8
// 004e5813  56                   push esi
// 004e5814  8bf1                 mov esi, ecx
// 004e5816  8b4604               mov eax, dword ptr [esi + 4]
// 004e5819  8b08                 mov ecx, dword ptr [eax]
// 004e581b  50                   push eax
// 004e581c  56                   push esi
// 004e581d  51                   push ecx
// 004e581e  56                   push esi
// 004e581f  8d442414             lea eax, [esp + 0x14]
// 004e5823  50                   push eax
// 004e5824  8bce                 mov ecx, esi
// 004e5826  e8d5f4ffff           call 0x4e4d00
// 004e582b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e582e  51                   push ecx
// 004e582f  e8bc881300           call 0x61e0f0
// 004e5834  83c404               add esp, 4
// 004e5837  33c0                 xor eax, eax
// 004e5839  894604               mov dword ptr [esi + 4], eax
// 004e583c  894608               mov dword ptr [esi + 8], eax
// 004e583f  5e                   pop esi
// 004e5840  83c408               add esp, 8
// 004e5843  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
