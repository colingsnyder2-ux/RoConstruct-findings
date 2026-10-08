// roc 2007-03 00597ea0  unit: seg_00590000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00597ea0
//
// 00597ea0  83ec08               sub esp, 8
// 00597ea3  56                   push esi
// 00597ea4  8bf1                 mov esi, ecx
// 00597ea6  8b4604               mov eax, dword ptr [esi + 4]
// 00597ea9  8b08                 mov ecx, dword ptr [eax]
// 00597eab  50                   push eax
// 00597eac  56                   push esi
// 00597ead  51                   push ecx
// 00597eae  56                   push esi
// 00597eaf  8d442414             lea eax, [esp + 0x14]
// 00597eb3  50                   push eax
// 00597eb4  8bce                 mov ecx, esi
// 00597eb6  e855ceffff           call 0x594d10
// 00597ebb  8b4e04               mov ecx, dword ptr [esi + 4]
// 00597ebe  51                   push ecx
// 00597ebf  e82c620800           call 0x61e0f0
// 00597ec4  83c404               add esp, 4
// 00597ec7  33c0                 xor eax, eax
// 00597ec9  894604               mov dword ptr [esi + 4], eax
// 00597ecc  894608               mov dword ptr [esi + 8], eax
// 00597ecf  5e                   pop esi
// 00597ed0  83c408               add esp, 8
// 00597ed3  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
