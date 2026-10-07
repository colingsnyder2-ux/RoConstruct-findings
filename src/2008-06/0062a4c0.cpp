// roc 2008-06 0062a4c0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a4c0
//
// 0062a4c0  6aff                 push -1
// 0062a4c2  683bf47b00           push 0x7bf43b
// 0062a4c7  64a100000000         mov eax, dword ptr fs:[0]
// 0062a4cd  50                   push eax
// 0062a4ce  64892500000000       mov dword ptr fs:[0], esp
// 0062a4d5  51                   push ecx
// 0062a4d6  56                   push esi
// 0062a4d7  6a28                 push 0x28
// 0062a4d9  8bf1                 mov esi, ecx
// 0062a4db  e840640700           call 0x6a0920
// 0062a4e0  83c404               add esp, 4
// 0062a4e3  89442404             mov dword ptr [esp + 4], eax
// 0062a4e7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062a4ef  85c0                 test eax, eax
// 0062a4f1  740e                 je 0x62a501
// 0062a4f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062a4f7  51                   push ecx
// 0062a4f8  8bc8                 mov ecx, eax
// 0062a4fa  e861feffff           call 0x62a360
// 0062a4ff  eb02                 jmp 0x62a503
// 0062a501  33c0                 xor eax, eax
// 0062a503  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062a507  8906                 mov dword ptr [esi], eax
// 0062a509  8bc6                 mov eax, esi
// 0062a50b  5e                   pop esi
// 0062a50c  64890d00000000       mov dword ptr fs:[0], ecx
// 0062a513  83c410               add esp, 0x10
// 0062a516  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
