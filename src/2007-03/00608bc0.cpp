// roc 2007-03 00608bc0  unit: seg_00600000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00608bc0
//
// 00608bc0  83ec08               sub esp, 8
// 00608bc3  56                   push esi
// 00608bc4  8bf1                 mov esi, ecx
// 00608bc6  8b4604               mov eax, dword ptr [esi + 4]
// 00608bc9  8b08                 mov ecx, dword ptr [eax]
// 00608bcb  50                   push eax
// 00608bcc  56                   push esi
// 00608bcd  51                   push ecx
// 00608bce  56                   push esi
// 00608bcf  8d442414             lea eax, [esp + 0x14]
// 00608bd3  50                   push eax
// 00608bd4  8bce                 mov ecx, esi
// 00608bd6  e825fcffff           call 0x608800
// 00608bdb  8b4e04               mov ecx, dword ptr [esi + 4]
// 00608bde  51                   push ecx
// 00608bdf  e80c550100           call 0x61e0f0
// 00608be4  83c404               add esp, 4
// 00608be7  33c0                 xor eax, eax
// 00608be9  894604               mov dword ptr [esi + 4], eax
// 00608bec  894608               mov dword ptr [esi + 8], eax
// 00608bef  5e                   pop esi
// 00608bf0  83c408               add esp, 8
// 00608bf3  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Tidy@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
