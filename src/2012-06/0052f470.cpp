// roc 2012-06 0052f470  unit: rbx::signals::$$A6AXXZ::?$signal::Vslot::?$callable  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0052f470
//
// 0052f470  6aff                 push -1
// 0052f472  6898dea900           push 0xa9de98
// 0052f477  64a100000000         mov eax, dword ptr fs:[0]
// 0052f47d  50                   push eax
// 0052f47e  64892500000000       mov dword ptr fs:[0], esp
// 0052f485  51                   push ecx
// 0052f486  56                   push esi
// 0052f487  8bf1                 mov esi, ecx
// 0052f489  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052f48d  8b01                 mov eax, dword ptr [ecx]
// 0052f48f  8906                 mov dword ptr [esi], eax
// 0052f491  8b4104               mov eax, dword ptr [ecx + 4]
// 0052f494  89742404             mov dword ptr [esp + 4], esi
// 0052f498  894604               mov dword ptr [esi + 4], eax
// 0052f49b  85c0                 test eax, eax
// 0052f49d  740c                 je 0x52f4ab
// 0052f49f  83c004               add eax, 4
// 0052f4a2  ba01000000           mov edx, 1
// 0052f4a7  f00fc110             lock xadd dword ptr [eax], edx
// 0052f4ab  83c108               add ecx, 8
// 0052f4ae  51                   push ecx
// 0052f4af  8d4e08               lea ecx, [esi + 8]
// 0052f4b2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0052f4ba  e871fdffff           call 0x52f230
// 0052f4bf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052f4c3  8bc6                 mov eax, esi
// 0052f4c5  5e                   pop esi
// 0052f4c6  64890d00000000       mov dword ptr fs:[0], ecx
// 0052f4cd  83c410               add esp, 0x10
// 0052f4d0  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
