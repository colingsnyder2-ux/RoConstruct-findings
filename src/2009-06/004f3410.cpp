// roc 2009-06 004f3410  unit: RBX::Reflection::EventSource  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f3410
//
// 004f3410  6aff                 push -1
// 004f3412  68f89c8500           push 0x859cf8
// 004f3417  64a100000000         mov eax, dword ptr fs:[0]
// 004f341d  50                   push eax
// 004f341e  64892500000000       mov dword ptr fs:[0], esp
// 004f3425  51                   push ecx
// 004f3426  56                   push esi
// 004f3427  8bf1                 mov esi, ecx
// 004f3429  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f342d  8b01                 mov eax, dword ptr [ecx]
// 004f342f  8906                 mov dword ptr [esi], eax
// 004f3431  8b4104               mov eax, dword ptr [ecx + 4]
// 004f3434  89742404             mov dword ptr [esp + 4], esi
// 004f3438  894604               mov dword ptr [esi + 4], eax
// 004f343b  85c0                 test eax, eax
// 004f343d  740c                 je 0x4f344b
// 004f343f  83c004               add eax, 4
// 004f3442  ba01000000           mov edx, 1
// 004f3447  f00fc110             lock xadd dword ptr [eax], edx
// 004f344b  83c108               add ecx, 8
// 004f344e  51                   push ecx
// 004f344f  8d4e08               lea ecx, [esi + 8]
// 004f3452  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004f345a  e891feffff           call 0x4f32f0
// 004f345f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f3463  8bc6                 mov eax, esi
// 004f3465  5e                   pop esi
// 004f3466  64890d00000000       mov dword ptr fs:[0], ecx
// 004f346d  83c410               add esp, 0x10
// 004f3470  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
