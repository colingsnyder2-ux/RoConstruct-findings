// roc 2007-08 00539480  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539480
//
// 00539480  6aff                 push -1
// 00539482  681bb67500           push 0x75b61b
// 00539487  64a100000000         mov eax, dword ptr fs:[0]
// 0053948d  50                   push eax
// 0053948e  64892500000000       mov dword ptr fs:[0], esp
// 00539495  51                   push ecx
// 00539496  56                   push esi
// 00539497  6a14                 push 0x14
// 00539499  8bf1                 mov esi, ecx
// 0053949b  e8566a0f00           call 0x62fef6
// 005394a0  83c404               add esp, 4
// 005394a3  89442404             mov dword ptr [esp + 4], eax
// 005394a7  85c0                 test eax, eax
// 005394a9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005394b1  741b                 je 0x5394ce
// 005394b3  83c604               add esi, 4
// 005394b6  56                   push esi
// 005394b7  8bc8                 mov ecx, eax
// 005394b9  e862ffffff           call 0x539420
// 005394be  5e                   pop esi
// 005394bf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005394c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005394ca  83c410               add esp, 0x10
// 005394cd  c3                   ret 
// 005394ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005394d2  33c0                 xor eax, eax
// 005394d4  5e                   pop esi
// 005394d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005394dc  83c410               add esp, 0x10
// 005394df  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
