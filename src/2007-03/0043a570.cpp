// roc 2007-03 0043a570  unit: seg_00430000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043a570
//
// 0043a570  83ec08               sub esp, 8
// 0043a573  56                   push esi
// 0043a574  8bf1                 mov esi, ecx
// 0043a576  8b4604               mov eax, dword ptr [esi + 4]
// 0043a579  8b08                 mov ecx, dword ptr [eax]
// 0043a57b  50                   push eax
// 0043a57c  56                   push esi
// 0043a57d  51                   push ecx
// 0043a57e  56                   push esi
// 0043a57f  8d442414             lea eax, [esp + 0x14]
// 0043a583  50                   push eax
// 0043a584  8bce                 mov ecx, esi
// 0043a586  e8c5f6ffff           call 0x439c50
// 0043a58b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0043a58e  51                   push ecx
// 0043a58f  e85c3b1e00           call 0x61e0f0
// 0043a594  83c404               add esp, 4
// 0043a597  33c0                 xor eax, eax
// 0043a599  894604               mov dword ptr [esi + 4], eax
// 0043a59c  894608               mov dword ptr [esi + 8], eax
// 0043a59f  5e                   pop esi
// 0043a5a0  83c408               add esp, 8
// 0043a5a3  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
