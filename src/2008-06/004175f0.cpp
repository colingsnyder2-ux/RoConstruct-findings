// roc 2008-06 004175f0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004175f0
//
// 004175f0  6aff                 push -1
// 004175f2  6838077d00           push 0x7d0738
// 004175f7  64a100000000         mov eax, dword ptr fs:[0]
// 004175fd  50                   push eax
// 004175fe  64892500000000       mov dword ptr fs:[0], esp
// 00417605  51                   push ecx
// 00417606  56                   push esi
// 00417607  8bf1                 mov esi, ecx
// 00417609  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0041760d  8b01                 mov eax, dword ptr [ecx]
// 0041760f  8906                 mov dword ptr [esi], eax
// 00417611  8b4104               mov eax, dword ptr [ecx + 4]
// 00417614  89742404             mov dword ptr [esp + 4], esi
// 00417618  894604               mov dword ptr [esi + 4], eax
// 0041761b  85c0                 test eax, eax
// 0041761d  740c                 je 0x41762b
// 0041761f  83c004               add eax, 4
// 00417622  ba01000000           mov edx, 1
// 00417627  f00fc110             lock xadd dword ptr [eax], edx
// 0041762b  83c108               add ecx, 8
// 0041762e  51                   push ecx
// 0041762f  8d4e08               lea ecx, [esi + 8]
// 00417632  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0041763a  e8a1ce1700           call 0x5944e0
// 0041763f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00417643  8bc6                 mov eax, esi
// 00417645  5e                   pop esi
// 00417646  64890d00000000       mov dword ptr fs:[0], ecx
// 0041764d  83c410               add esp, 0x10
// 00417650  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
