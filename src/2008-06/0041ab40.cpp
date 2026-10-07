// roc 2008-06 0041ab40  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ab40
//
// 0041ab40  6aff                 push -1
// 0041ab42  683bf47b00           push 0x7bf43b
// 0041ab47  64a100000000         mov eax, dword ptr fs:[0]
// 0041ab4d  50                   push eax
// 0041ab4e  64892500000000       mov dword ptr fs:[0], esp
// 0041ab55  51                   push ecx
// 0041ab56  56                   push esi
// 0041ab57  6a28                 push 0x28
// 0041ab59  8bf1                 mov esi, ecx
// 0041ab5b  e8c05d2800           call 0x6a0920
// 0041ab60  83c404               add esp, 4
// 0041ab63  89442404             mov dword ptr [esp + 4], eax
// 0041ab67  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041ab6f  85c0                 test eax, eax
// 0041ab71  740e                 je 0x41ab81
// 0041ab73  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0041ab77  51                   push ecx
// 0041ab78  8bc8                 mov ecx, eax
// 0041ab7a  e8a1fcffff           call 0x41a820
// 0041ab7f  eb02                 jmp 0x41ab83
// 0041ab81  33c0                 xor eax, eax
// 0041ab83  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041ab87  8906                 mov dword ptr [esi], eax
// 0041ab89  8bc6                 mov eax, esi
// 0041ab8b  5e                   pop esi
// 0041ab8c  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ab93  83c410               add esp, 0x10
// 0041ab96  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
