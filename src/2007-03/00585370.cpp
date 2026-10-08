// roc 2007-03 00585370  unit: seg_00580000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00585370
//
// 00585370  83ec08               sub esp, 8
// 00585373  56                   push esi
// 00585374  8bf1                 mov esi, ecx
// 00585376  8b4604               mov eax, dword ptr [esi + 4]
// 00585379  8b08                 mov ecx, dword ptr [eax]
// 0058537b  50                   push eax
// 0058537c  56                   push esi
// 0058537d  51                   push ecx
// 0058537e  56                   push esi
// 0058537f  8d442414             lea eax, [esp + 0x14]
// 00585383  50                   push eax
// 00585384  8bce                 mov ecx, esi
// 00585386  e8f5fcffff           call 0x585080
// 0058538b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058538e  51                   push ecx
// 0058538f  e85c8d0900           call 0x61e0f0
// 00585394  83c404               add esp, 4
// 00585397  33c0                 xor eax, eax
// 00585399  894604               mov dword ptr [esi + 4], eax
// 0058539c  894608               mov dword ptr [esi + 8], eax
// 0058539f  5e                   pop esi
// 005853a0  83c408               add esp, 8
// 005853a3  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
