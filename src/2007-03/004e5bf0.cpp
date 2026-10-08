// roc 2007-03 004e5bf0  unit: seg_004e0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e5bf0
//
// 004e5bf0  83ec08               sub esp, 8
// 004e5bf3  56                   push esi
// 004e5bf4  8bf1                 mov esi, ecx
// 004e5bf6  8b4604               mov eax, dword ptr [esi + 4]
// 004e5bf9  8b08                 mov ecx, dword ptr [eax]
// 004e5bfb  50                   push eax
// 004e5bfc  56                   push esi
// 004e5bfd  51                   push ecx
// 004e5bfe  56                   push esi
// 004e5bff  8d442414             lea eax, [esp + 0x14]
// 004e5c03  50                   push eax
// 004e5c04  8bce                 mov ecx, esi
// 004e5c06  e8f5f9ffff           call 0x4e5600
// 004e5c0b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e5c0e  51                   push ecx
// 004e5c0f  e8dc841300           call 0x61e0f0
// 004e5c14  83c404               add esp, 4
// 004e5c17  33c0                 xor eax, eax
// 004e5c19  894604               mov dword ptr [esi + 4], eax
// 004e5c1c  894608               mov dword ptr [esi + 8], eax
// 004e5c1f  5e                   pop esi
// 004e5c20  83c408               add esp, 8
// 004e5c23  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
