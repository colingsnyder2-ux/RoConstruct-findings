// roc 2007-03 0056a7d0  unit: seg_00560000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056a7d0
//
// 0056a7d0  83ec08               sub esp, 8
// 0056a7d3  56                   push esi
// 0056a7d4  8bf1                 mov esi, ecx
// 0056a7d6  8b4604               mov eax, dword ptr [esi + 4]
// 0056a7d9  8b08                 mov ecx, dword ptr [eax]
// 0056a7db  50                   push eax
// 0056a7dc  56                   push esi
// 0056a7dd  51                   push ecx
// 0056a7de  56                   push esi
// 0056a7df  8d442414             lea eax, [esp + 0x14]
// 0056a7e3  50                   push eax
// 0056a7e4  8bce                 mov ecx, esi
// 0056a7e6  e865fcffff           call 0x56a450
// 0056a7eb  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056a7ee  51                   push ecx
// 0056a7ef  e8fc380b00           call 0x61e0f0
// 0056a7f4  83c404               add esp, 4
// 0056a7f7  33c0                 xor eax, eax
// 0056a7f9  894604               mov dword ptr [esi + 4], eax
// 0056a7fc  894608               mov dword ptr [esi + 8], eax
// 0056a7ff  5e                   pop esi
// 0056a800  83c408               add esp, 8
// 0056a803  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
