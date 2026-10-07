// roc 2008-06 005945d0  unit: RBX::Lua::VFunctionRef::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005945d0
//
// 005945d0  6aff                 push -1
// 005945d2  683bf47b00           push 0x7bf43b
// 005945d7  64a100000000         mov eax, dword ptr fs:[0]
// 005945dd  50                   push eax
// 005945de  64892500000000       mov dword ptr fs:[0], esp
// 005945e5  51                   push ecx
// 005945e6  56                   push esi
// 005945e7  6a28                 push 0x28
// 005945e9  8bf1                 mov esi, ecx
// 005945eb  e830c31000           call 0x6a0920
// 005945f0  83c404               add esp, 4
// 005945f3  89442404             mov dword ptr [esp + 4], eax
// 005945f7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005945ff  85c0                 test eax, eax
// 00594601  740e                 je 0x594611
// 00594603  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00594607  51                   push ecx
// 00594608  8bc8                 mov ecx, eax
// 0059460a  e861ffffff           call 0x594570
// 0059460f  eb02                 jmp 0x594613
// 00594611  33c0                 xor eax, eax
// 00594613  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00594617  8906                 mov dword ptr [esi], eax
// 00594619  8bc6                 mov eax, esi
// 0059461b  5e                   pop esi
// 0059461c  64890d00000000       mov dword ptr fs:[0], ecx
// 00594623  83c410               add esp, 0x10
// 00594626  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
