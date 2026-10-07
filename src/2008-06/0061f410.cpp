// roc 2008-06 0061f410  unit: RBX::Lua::LuaArguments  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f410
//
// 0061f410  6aff                 push -1
// 0061f412  6838077d00           push 0x7d0738
// 0061f417  64a100000000         mov eax, dword ptr fs:[0]
// 0061f41d  50                   push eax
// 0061f41e  64892500000000       mov dword ptr fs:[0], esp
// 0061f425  51                   push ecx
// 0061f426  56                   push esi
// 0061f427  8bf1                 mov esi, ecx
// 0061f429  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061f42d  8b01                 mov eax, dword ptr [ecx]
// 0061f42f  8906                 mov dword ptr [esi], eax
// 0061f431  8b4104               mov eax, dword ptr [ecx + 4]
// 0061f434  89742404             mov dword ptr [esp + 4], esi
// 0061f438  894604               mov dword ptr [esi + 4], eax
// 0061f43b  85c0                 test eax, eax
// 0061f43d  740c                 je 0x61f44b
// 0061f43f  83c004               add eax, 4
// 0061f442  ba01000000           mov edx, 1
// 0061f447  f00fc110             lock xadd dword ptr [eax], edx
// 0061f44b  83c108               add ecx, 8
// 0061f44e  51                   push ecx
// 0061f44f  8d4e08               lea ecx, [esi + 8]
// 0061f452  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0061f45a  e8114bf7ff           call 0x593f70
// 0061f45f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061f463  8bc6                 mov eax, esi
// 0061f465  5e                   pop esi
// 0061f466  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f46d  83c410               add esp, 0x10
// 0061f470  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
