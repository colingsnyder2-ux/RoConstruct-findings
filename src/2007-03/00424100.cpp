// roc 2007-03 00424100  unit: seg_00420000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00424100
//
// 00424100  83ec08               sub esp, 8
// 00424103  56                   push esi
// 00424104  8bf1                 mov esi, ecx
// 00424106  8b4604               mov eax, dword ptr [esi + 4]
// 00424109  8b08                 mov ecx, dword ptr [eax]
// 0042410b  50                   push eax
// 0042410c  56                   push esi
// 0042410d  51                   push ecx
// 0042410e  56                   push esi
// 0042410f  8d442414             lea eax, [esp + 0x14]
// 00424113  50                   push eax
// 00424114  8bce                 mov ecx, esi
// 00424116  e815fdffff           call 0x423e30
// 0042411b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042411e  51                   push ecx
// 0042411f  e8cc9f1f00           call 0x61e0f0
// 00424124  83c404               add esp, 4
// 00424127  33c0                 xor eax, eax
// 00424129  894604               mov dword ptr [esi + 4], eax
// 0042412c  894608               mov dword ptr [esi + 8], eax
// 0042412f  5e                   pop esi
// 00424130  83c408               add esp, 8
// 00424133  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
