// roc 2011-06 004b4840  unit: rbx::signals::Z::$$A6AX_NH::?$signal::Vslot::?$callable  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b4840
//
// 004b4840  6aff                 push -1
// 004b4842  6898d99f00           push 0x9fd998
// 004b4847  64a100000000         mov eax, dword ptr fs:[0]
// 004b484d  50                   push eax
// 004b484e  64892500000000       mov dword ptr fs:[0], esp
// 004b4855  51                   push ecx
// 004b4856  56                   push esi
// 004b4857  8bf1                 mov esi, ecx
// 004b4859  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b485d  8b01                 mov eax, dword ptr [ecx]
// 004b485f  8906                 mov dword ptr [esi], eax
// 004b4861  8b4104               mov eax, dword ptr [ecx + 4]
// 004b4864  89742404             mov dword ptr [esp + 4], esi
// 004b4868  894604               mov dword ptr [esi + 4], eax
// 004b486b  85c0                 test eax, eax
// 004b486d  740c                 je 0x4b487b
// 004b486f  83c004               add eax, 4
// 004b4872  ba01000000           mov edx, 1
// 004b4877  f00fc110             lock xadd dword ptr [eax], edx
// 004b487b  83c108               add ecx, 8
// 004b487e  51                   push ecx
// 004b487f  8d4e08               lea ecx, [esi + 8]
// 004b4882  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004b488a  e821fdffff           call 0x4b45b0
// 004b488f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b4893  8bc6                 mov eax, esi
// 004b4895  5e                   pop esi
// 004b4896  64890d00000000       mov dword ptr fs:[0], ecx
// 004b489d  83c410               add esp, 0x10
// 004b48a0  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
