// roc 2007-03 00547e40  unit: seg_00540000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00547e40
//
// 00547e40  83ec08               sub esp, 8
// 00547e43  56                   push esi
// 00547e44  8bf1                 mov esi, ecx
// 00547e46  8b4604               mov eax, dword ptr [esi + 4]
// 00547e49  8b08                 mov ecx, dword ptr [eax]
// 00547e4b  50                   push eax
// 00547e4c  56                   push esi
// 00547e4d  51                   push ecx
// 00547e4e  56                   push esi
// 00547e4f  8d442414             lea eax, [esp + 0x14]
// 00547e53  50                   push eax
// 00547e54  8bce                 mov ecx, esi
// 00547e56  e895ecffff           call 0x546af0
// 00547e5b  8b4e04               mov ecx, dword ptr [esi + 4]
// 00547e5e  51                   push ecx
// 00547e5f  e88c620d00           call 0x61e0f0
// 00547e64  83c404               add esp, 4
// 00547e67  33c0                 xor eax, eax
// 00547e69  894604               mov dword ptr [esi + 4], eax
// 00547e6c  894608               mov dword ptr [esi + 8], eax
// 00547e6f  5e                   pop esi
// 00547e70  83c408               add esp, 8
// 00547e73  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
