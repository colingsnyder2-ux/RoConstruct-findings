// roc 2007-08 00535e40  unit: std::logic_error  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535e40
//
// 00535e40  6aff                 push -1
// 00535e42  681bb67500           push 0x75b61b
// 00535e47  64a100000000         mov eax, dword ptr fs:[0]
// 00535e4d  50                   push eax
// 00535e4e  64892500000000       mov dword ptr fs:[0], esp
// 00535e55  51                   push ecx
// 00535e56  56                   push esi
// 00535e57  6a28                 push 0x28
// 00535e59  8bf1                 mov esi, ecx
// 00535e5b  e896a00f00           call 0x62fef6
// 00535e60  83c404               add esp, 4
// 00535e63  89442404             mov dword ptr [esp + 4], eax
// 00535e67  85c0                 test eax, eax
// 00535e69  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00535e71  740e                 je 0x535e81
// 00535e73  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00535e77  51                   push ecx
// 00535e78  8bc8                 mov ecx, eax
// 00535e7a  e8e1eaffff           call 0x534960
// 00535e7f  eb02                 jmp 0x535e83
// 00535e81  33c0                 xor eax, eax
// 00535e83  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00535e87  8906                 mov dword ptr [esi], eax
// 00535e89  8bc6                 mov eax, esi
// 00535e8b  5e                   pop esi
// 00535e8c  64890d00000000       mov dword ptr fs:[0], ecx
// 00535e93  83c410               add esp, 0x10
// 00535e96  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
