// roc 2007-03 005be9e0  unit: seg_005b0000  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005be9e0
//
// 005be9e0  6aff                 push -1
// 005be9e2  68a8417500           push 0x7541a8
// 005be9e7  64a100000000         mov eax, dword ptr fs:[0]
// 005be9ed  50                   push eax
// 005be9ee  64892500000000       mov dword ptr fs:[0], esp
// 005be9f5  51                   push ecx
// 005be9f6  56                   push esi
// 005be9f7  8bf1                 mov esi, ecx
// 005be9f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005be9fd  8b01                 mov eax, dword ptr [ecx]
// 005be9ff  8906                 mov dword ptr [esi], eax
// 005bea01  8b4104               mov eax, dword ptr [ecx + 4]
// 005bea04  85c0                 test eax, eax
// 005bea06  89742404             mov dword ptr [esp + 4], esi
// 005bea0a  894604               mov dword ptr [esi + 4], eax
// 005bea0d  740c                 je 0x5bea1b
// 005bea0f  83c004               add eax, 4
// 005bea12  ba01000000           mov edx, 1
// 005bea17  f00fc110             lock xadd dword ptr [eax], edx
// 005bea1b  83c108               add ecx, 8
// 005bea1e  51                   push ecx
// 005bea1f  8d4e08               lea ecx, [esi + 8]
// 005bea22  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005bea2a  e8c1dbfaff           call 0x56c5f0
// 005bea2f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bea33  8bc6                 mov eax, esi
// 005bea35  5e                   pop esi
// 005bea36  64890d00000000       mov dword ptr fs:[0], ecx
// 005bea3d  83c410               add esp, 0x10
// 005bea40  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
