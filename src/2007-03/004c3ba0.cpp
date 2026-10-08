// roc 2007-03 004c3ba0  unit: seg_004c0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c3ba0
//
// 004c3ba0  83ec08               sub esp, 8
// 004c3ba3  56                   push esi
// 004c3ba4  8bf1                 mov esi, ecx
// 004c3ba6  8b4604               mov eax, dword ptr [esi + 4]
// 004c3ba9  8b08                 mov ecx, dword ptr [eax]
// 004c3bab  50                   push eax
// 004c3bac  56                   push esi
// 004c3bad  51                   push ecx
// 004c3bae  56                   push esi
// 004c3baf  8d442414             lea eax, [esp + 0x14]
// 004c3bb3  50                   push eax
// 004c3bb4  8bce                 mov ecx, esi
// 004c3bb6  e8f5faffff           call 0x4c36b0
// 004c3bbb  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c3bbe  51                   push ecx
// 004c3bbf  e82ca51500           call 0x61e0f0
// 004c3bc4  83c404               add esp, 4
// 004c3bc7  33c0                 xor eax, eax
// 004c3bc9  894604               mov dword ptr [esi + 4], eax
// 004c3bcc  894608               mov dword ptr [esi + 8], eax
// 004c3bcf  5e                   pop esi
// 004c3bd0  83c408               add esp, 8
// 004c3bd3  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
