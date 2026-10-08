// roc 2007-03 005312a0  unit: seg_00530000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005312a0
//
// 005312a0  83ec08               sub esp, 8
// 005312a3  56                   push esi
// 005312a4  8bf1                 mov esi, ecx
// 005312a6  8b4604               mov eax, dword ptr [esi + 4]
// 005312a9  8b08                 mov ecx, dword ptr [eax]
// 005312ab  50                   push eax
// 005312ac  56                   push esi
// 005312ad  51                   push ecx
// 005312ae  56                   push esi
// 005312af  8d442414             lea eax, [esp + 0x14]
// 005312b3  50                   push eax
// 005312b4  8bce                 mov ecx, esi
// 005312b6  e8f5f9ffff           call 0x530cb0
// 005312bb  8b4e04               mov ecx, dword ptr [esi + 4]
// 005312be  51                   push ecx
// 005312bf  e82cce0e00           call 0x61e0f0
// 005312c4  83c404               add esp, 4
// 005312c7  33c0                 xor eax, eax
// 005312c9  894604               mov dword ptr [esi + 4], eax
// 005312cc  894608               mov dword ptr [esi + 8], eax
// 005312cf  5e                   pop esi
// 005312d0  83c408               add esp, 8
// 005312d3  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
