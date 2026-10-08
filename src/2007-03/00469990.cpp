// roc 2007-03 00469990  unit: seg_00460000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00469990
//
// 00469990  83ec08               sub esp, 8
// 00469993  56                   push esi
// 00469994  8bf1                 mov esi, ecx
// 00469996  8b4604               mov eax, dword ptr [esi + 4]
// 00469999  8b08                 mov ecx, dword ptr [eax]
// 0046999b  50                   push eax
// 0046999c  56                   push esi
// 0046999d  51                   push ecx
// 0046999e  56                   push esi
// 0046999f  8d442414             lea eax, [esp + 0x14]
// 004699a3  50                   push eax
// 004699a4  8bce                 mov ecx, esi
// 004699a6  e86540feff           call 0x44da10
// 004699ab  8b4e04               mov ecx, dword ptr [esi + 4]
// 004699ae  51                   push ecx
// 004699af  e83c471b00           call 0x61e0f0
// 004699b4  83c404               add esp, 4
// 004699b7  33c0                 xor eax, eax
// 004699b9  894604               mov dword ptr [esi + 4], eax
// 004699bc  894608               mov dword ptr [esi + 8], eax
// 004699bf  5e                   pop esi
// 004699c0  83c408               add esp, 8
// 004699c3  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
