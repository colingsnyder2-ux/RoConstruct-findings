// roc 2007-03 005addb0  unit: seg_005a0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005addb0
//
// 005addb0  83ec08               sub esp, 8
// 005addb3  56                   push esi
// 005addb4  8bf1                 mov esi, ecx
// 005addb6  8b4604               mov eax, dword ptr [esi + 4]
// 005addb9  8b08                 mov ecx, dword ptr [eax]
// 005addbb  50                   push eax
// 005addbc  56                   push esi
// 005addbd  51                   push ecx
// 005addbe  56                   push esi
// 005addbf  8d442414             lea eax, [esp + 0x14]
// 005addc3  50                   push eax
// 005addc4  8bce                 mov ecx, esi
// 005addc6  e8f5faffff           call 0x5ad8c0
// 005addcb  8b4e04               mov ecx, dword ptr [esi + 4]
// 005addce  51                   push ecx
// 005addcf  e81c030700           call 0x61e0f0
// 005addd4  83c404               add esp, 4
// 005addd7  33c0                 xor eax, eax
// 005addd9  894604               mov dword ptr [esi + 4], eax
// 005adddc  894608               mov dword ptr [esi + 8], eax
// 005adddf  5e                   pop esi
// 005adde0  83c408               add esp, 8
// 005adde3  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
