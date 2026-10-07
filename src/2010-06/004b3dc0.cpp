// roc 2010-06 004b3dc0  unit: rbx::signals::$$A6AXXZ::?$signal::slot  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b3dc0
//
// 004b3dc0  6aff                 push -1
// 004b3dc2  6878879a00           push 0x9a8778
// 004b3dc7  64a100000000         mov eax, dword ptr fs:[0]
// 004b3dcd  50                   push eax
// 004b3dce  64892500000000       mov dword ptr fs:[0], esp
// 004b3dd5  51                   push ecx
// 004b3dd6  56                   push esi
// 004b3dd7  8bf1                 mov esi, ecx
// 004b3dd9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b3ddd  8b01                 mov eax, dword ptr [ecx]
// 004b3ddf  8906                 mov dword ptr [esi], eax
// 004b3de1  8b4104               mov eax, dword ptr [ecx + 4]
// 004b3de4  89742404             mov dword ptr [esp + 4], esi
// 004b3de8  894604               mov dword ptr [esi + 4], eax
// 004b3deb  85c0                 test eax, eax
// 004b3ded  740c                 je 0x4b3dfb
// 004b3def  83c004               add eax, 4
// 004b3df2  ba01000000           mov edx, 1
// 004b3df7  f00fc110             lock xadd dword ptr [eax], edx
// 004b3dfb  83c108               add ecx, 8
// 004b3dfe  51                   push ecx
// 004b3dff  8d4e08               lea ecx, [esi + 8]
// 004b3e02  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004b3e0a  e861fdffff           call 0x4b3b70
// 004b3e0f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b3e13  8bc6                 mov eax, esi
// 004b3e15  5e                   pop esi
// 004b3e16  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3e1d  83c410               add esp, 0x10
// 004b3e20  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
