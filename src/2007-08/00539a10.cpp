// roc 2007-08 00539a10  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539a10
//
// 00539a10  6aff                 push -1
// 00539a12  681bb67500           push 0x75b61b
// 00539a17  64a100000000         mov eax, dword ptr fs:[0]
// 00539a1d  50                   push eax
// 00539a1e  64892500000000       mov dword ptr fs:[0], esp
// 00539a25  51                   push ecx
// 00539a26  56                   push esi
// 00539a27  6a14                 push 0x14
// 00539a29  8bf1                 mov esi, ecx
// 00539a2b  e8c6640f00           call 0x62fef6
// 00539a30  83c404               add esp, 4
// 00539a33  89442404             mov dword ptr [esp + 4], eax
// 00539a37  85c0                 test eax, eax
// 00539a39  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00539a41  740e                 je 0x539a51
// 00539a43  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00539a47  51                   push ecx
// 00539a48  8bc8                 mov ecx, eax
// 00539a4a  e8d1f9ffff           call 0x539420
// 00539a4f  eb02                 jmp 0x539a53
// 00539a51  33c0                 xor eax, eax
// 00539a53  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00539a57  8906                 mov dword ptr [esi], eax
// 00539a59  8bc6                 mov eax, esi
// 00539a5b  5e                   pop esi
// 00539a5c  64890d00000000       mov dword ptr fs:[0], ecx
// 00539a63  83c410               add esp, 0x10
// 00539a66  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@QAE@ABV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
