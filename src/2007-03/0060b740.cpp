// roc 2007-03 0060b740  unit: seg_00600000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060b740
//
// 0060b740  83ec08               sub esp, 8
// 0060b743  56                   push esi
// 0060b744  8bf1                 mov esi, ecx
// 0060b746  8b4604               mov eax, dword ptr [esi + 4]
// 0060b749  8b08                 mov ecx, dword ptr [eax]
// 0060b74b  50                   push eax
// 0060b74c  56                   push esi
// 0060b74d  51                   push ecx
// 0060b74e  56                   push esi
// 0060b74f  8d442414             lea eax, [esp + 0x14]
// 0060b753  50                   push eax
// 0060b754  8bce                 mov ecx, esi
// 0060b756  e8b5ecffff           call 0x60a410
// 0060b75b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060b75e  51                   push ecx
// 0060b75f  e88c290100           call 0x61e0f0
// 0060b764  83c404               add esp, 4
// 0060b767  33c0                 xor eax, eax
// 0060b769  894604               mov dword ptr [esi + 4], eax
// 0060b76c  894608               mov dword ptr [esi + 8], eax
// 0060b76f  5e                   pop esi
// 0060b770  83c408               add esp, 8
// 0060b773  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
