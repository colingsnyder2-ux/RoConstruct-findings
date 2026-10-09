// roc 2009-12 00506380  unit: rbx::signals::Z::$$A6AXN::?$signal::slot  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00506380
//
// 00506380  6aff                 push -1
// 00506382  68583d9500           push 0x953d58
// 00506387  64a100000000         mov eax, dword ptr fs:[0]
// 0050638d  50                   push eax
// 0050638e  64892500000000       mov dword ptr fs:[0], esp
// 00506395  51                   push ecx
// 00506396  56                   push esi
// 00506397  8bf1                 mov esi, ecx
// 00506399  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050639d  8b01                 mov eax, dword ptr [ecx]
// 0050639f  8906                 mov dword ptr [esi], eax
// 005063a1  8b4104               mov eax, dword ptr [ecx + 4]
// 005063a4  89742404             mov dword ptr [esp + 4], esi
// 005063a8  894604               mov dword ptr [esi + 4], eax
// 005063ab  85c0                 test eax, eax
// 005063ad  740c                 je 0x5063bb
// 005063af  83c004               add eax, 4
// 005063b2  ba01000000           mov edx, 1
// 005063b7  f00fc110             lock xadd dword ptr [eax], edx
// 005063bb  83c108               add ecx, 8
// 005063be  51                   push ecx
// 005063bf  8d4e08               lea ecx, [esi + 8]
// 005063c2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005063ca  e861fdffff           call 0x506130
// 005063cf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005063d3  8bc6                 mov eax, esi
// 005063d5  5e                   pop esi
// 005063d6  64890d00000000       mov dword ptr fs:[0], ecx
// 005063dd  83c410               add esp, 0x10
// 005063e0  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
