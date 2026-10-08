// roc 2007-03 00445720  unit: seg_00440000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00445720
//
// 00445720  83ec08               sub esp, 8
// 00445723  56                   push esi
// 00445724  8bf1                 mov esi, ecx
// 00445726  8b4604               mov eax, dword ptr [esi + 4]
// 00445729  8b08                 mov ecx, dword ptr [eax]
// 0044572b  50                   push eax
// 0044572c  56                   push esi
// 0044572d  51                   push ecx
// 0044572e  56                   push esi
// 0044572f  8d442414             lea eax, [esp + 0x14]
// 00445733  50                   push eax
// 00445734  8bce                 mov ecx, esi
// 00445736  e885190200           call 0x4670c0
// 0044573b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044573e  51                   push ecx
// 0044573f  e8ac891d00           call 0x61e0f0
// 00445744  83c404               add esp, 4
// 00445747  33c0                 xor eax, eax
// 00445749  894604               mov dword ptr [esi + 4], eax
// 0044574c  894608               mov dword ptr [esi + 8], eax
// 0044574f  5e                   pop esi
// 00445750  83c408               add esp, 8
// 00445753  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
