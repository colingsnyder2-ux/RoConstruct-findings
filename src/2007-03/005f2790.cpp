// roc 2007-03 005f2790  unit: seg_005f0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f2790
//
// 005f2790  83ec08               sub esp, 8
// 005f2793  56                   push esi
// 005f2794  8bf1                 mov esi, ecx
// 005f2796  8b4604               mov eax, dword ptr [esi + 4]
// 005f2799  8b08                 mov ecx, dword ptr [eax]
// 005f279b  50                   push eax
// 005f279c  56                   push esi
// 005f279d  51                   push ecx
// 005f279e  56                   push esi
// 005f279f  8d442414             lea eax, [esp + 0x14]
// 005f27a3  50                   push eax
// 005f27a4  8bce                 mov ecx, esi
// 005f27a6  e865f2ffff           call 0x5f1a10
// 005f27ab  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f27ae  51                   push ecx
// 005f27af  e83cb90200           call 0x61e0f0
// 005f27b4  83c404               add esp, 4
// 005f27b7  33c0                 xor eax, eax
// 005f27b9  894604               mov dword ptr [esi + 4], eax
// 005f27bc  894608               mov dword ptr [esi + 8], eax
// 005f27bf  5e                   pop esi
// 005f27c0  83c408               add esp, 8
// 005f27c3  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
