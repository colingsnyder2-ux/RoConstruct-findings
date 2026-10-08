// roc 2007-08 005394e0  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005394e0
//
// 005394e0  6aff                 push -1
// 005394e2  68f8b57500           push 0x75b5f8
// 005394e7  64a100000000         mov eax, dword ptr fs:[0]
// 005394ed  50                   push eax
// 005394ee  64892500000000       mov dword ptr fs:[0], esp
// 005394f5  51                   push ecx
// 005394f6  53                   push ebx
// 005394f7  56                   push esi
// 005394f8  57                   push edi
// 005394f9  8bf9                 mov edi, ecx
// 005394fb  897c240c             mov dword ptr [esp + 0xc], edi
// 005394ff  8b4708               mov eax, dword ptr [edi + 8]
// 00539502  8d7704               lea esi, [edi + 4]
// 00539505  33db                 xor ebx, ebx
// 00539507  3bc3                 cmp eax, ebx
// 00539509  895c2418             mov dword ptr [esp + 0x18], ebx
// 0053950d  7418                 je 0x539527
// 0053950f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00539512  51                   push ecx
// 00539513  50                   push eax
// 00539514  8bce                 mov ecx, esi
// 00539516  e83546efff           call 0x42db50
// 0053951b  8b5604               mov edx, dword ptr [esi + 4]
// 0053951e  52                   push edx
// 0053951f  e83e670f00           call 0x62fc62
// 00539524  83c404               add esp, 4
// 00539527  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053952b  895e04               mov dword ptr [esi + 4], ebx
// 0053952e  895e08               mov dword ptr [esi + 8], ebx
// 00539531  895e0c               mov dword ptr [esi + 0xc], ebx
// 00539534  c707bc707800         mov dword ptr [edi], 0x7870bc
// 0053953a  5f                   pop edi
// 0053953b  5e                   pop esi
// 0053953c  5b                   pop ebx
// 0053953d  64890d00000000       mov dword ptr fs:[0], ecx
// 00539544  83c410               add esp, 0x10
// 00539547  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
