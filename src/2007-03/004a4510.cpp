// roc 2007-03 004a4510  unit: seg_004a0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a4510
//
// 004a4510  83ec08               sub esp, 8
// 004a4513  56                   push esi
// 004a4514  8bf1                 mov esi, ecx
// 004a4516  8b4604               mov eax, dword ptr [esi + 4]
// 004a4519  8b08                 mov ecx, dword ptr [eax]
// 004a451b  50                   push eax
// 004a451c  56                   push esi
// 004a451d  51                   push ecx
// 004a451e  56                   push esi
// 004a451f  8d442414             lea eax, [esp + 0x14]
// 004a4523  50                   push eax
// 004a4524  8bce                 mov ecx, esi
// 004a4526  e875faffff           call 0x4a3fa0
// 004a452b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a452e  51                   push ecx
// 004a452f  e8bc9b1700           call 0x61e0f0
// 004a4534  83c404               add esp, 4
// 004a4537  33c0                 xor eax, eax
// 004a4539  894604               mov dword ptr [esi + 4], eax
// 004a453c  894608               mov dword ptr [esi + 8], eax
// 004a453f  5e                   pop esi
// 004a4540  83c408               add esp, 8
// 004a4543  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
