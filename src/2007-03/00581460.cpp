// roc 2007-03 00581460  unit: seg_00580000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00581460
//
// 00581460  83ec08               sub esp, 8
// 00581463  56                   push esi
// 00581464  8bf1                 mov esi, ecx
// 00581466  8b4604               mov eax, dword ptr [esi + 4]
// 00581469  8b08                 mov ecx, dword ptr [eax]
// 0058146b  50                   push eax
// 0058146c  56                   push esi
// 0058146d  51                   push ecx
// 0058146e  56                   push esi
// 0058146f  8d442414             lea eax, [esp + 0x14]
// 00581473  50                   push eax
// 00581474  8bce                 mov ecx, esi
// 00581476  e845faffff           call 0x580ec0
// 0058147b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058147e  51                   push ecx
// 0058147f  e86ccc0900           call 0x61e0f0
// 00581484  83c404               add esp, 4
// 00581487  33c0                 xor eax, eax
// 00581489  894604               mov dword ptr [esi + 4], eax
// 0058148c  894608               mov dword ptr [esi + 8], eax
// 0058148f  5e                   pop esi
// 00581490  83c408               add esp, 8
// 00581493  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
