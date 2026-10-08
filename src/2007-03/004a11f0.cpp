// roc 2007-03 004a11f0  unit: seg_004a0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a11f0
//
// 004a11f0  83ec08               sub esp, 8
// 004a11f3  56                   push esi
// 004a11f4  8bf1                 mov esi, ecx
// 004a11f6  8b4604               mov eax, dword ptr [esi + 4]
// 004a11f9  8b08                 mov ecx, dword ptr [eax]
// 004a11fb  50                   push eax
// 004a11fc  56                   push esi
// 004a11fd  51                   push ecx
// 004a11fe  56                   push esi
// 004a11ff  8d442414             lea eax, [esp + 0x14]
// 004a1203  50                   push eax
// 004a1204  8bce                 mov ecx, esi
// 004a1206  e835f2ffff           call 0x4a0440
// 004a120b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a120e  51                   push ecx
// 004a120f  e8dcce1700           call 0x61e0f0
// 004a1214  83c404               add esp, 4
// 004a1217  33c0                 xor eax, eax
// 004a1219  894604               mov dword ptr [esi + 4], eax
// 004a121c  894608               mov dword ptr [esi + 8], eax
// 004a121f  5e                   pop esi
// 004a1220  83c408               add esp, 8
// 004a1223  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
