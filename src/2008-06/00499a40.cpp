// roc 2008-06 00499a40  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499a40
//
// 00499a40  6aff                 push -1
// 00499a42  683bf47b00           push 0x7bf43b
// 00499a47  64a100000000         mov eax, dword ptr fs:[0]
// 00499a4d  50                   push eax
// 00499a4e  64892500000000       mov dword ptr fs:[0], esp
// 00499a55  51                   push ecx
// 00499a56  56                   push esi
// 00499a57  6a28                 push 0x28
// 00499a59  8bf1                 mov esi, ecx
// 00499a5b  e8c06e2000           call 0x6a0920
// 00499a60  83c404               add esp, 4
// 00499a63  89442404             mov dword ptr [esp + 4], eax
// 00499a67  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00499a6f  85c0                 test eax, eax
// 00499a71  740e                 je 0x499a81
// 00499a73  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00499a77  51                   push ecx
// 00499a78  8bc8                 mov ecx, eax
// 00499a7a  e861feffff           call 0x4998e0
// 00499a7f  eb02                 jmp 0x499a83
// 00499a81  33c0                 xor eax, eax
// 00499a83  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00499a87  8906                 mov dword ptr [esi], eax
// 00499a89  8bc6                 mov eax, esi
// 00499a8b  5e                   pop esi
// 00499a8c  64890d00000000       mov dword ptr fs:[0], ecx
// 00499a93  83c410               add esp, 0x10
// 00499a96  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
