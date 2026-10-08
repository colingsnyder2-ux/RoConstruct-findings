// roc 2007-03 0053aeb0  unit: seg_00530000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053aeb0
//
// 0053aeb0  6aff                 push -1
// 0053aeb2  68181a7500           push 0x751a18
// 0053aeb7  64a100000000         mov eax, dword ptr fs:[0]
// 0053aebd  50                   push eax
// 0053aebe  64892500000000       mov dword ptr fs:[0], esp
// 0053aec5  51                   push ecx
// 0053aec6  56                   push esi
// 0053aec7  8bf1                 mov esi, ecx
// 0053aec9  89742404             mov dword ptr [esp + 4], esi
// 0053aecd  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053aed1  50                   push eax
// 0053aed2  8d4e04               lea ecx, [esi + 4]
// 0053aed5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053aedd  c70654597a00         mov dword ptr [esi], 0x7a5954
// 0053aee3  e898faffff           call 0x53a980
// 0053aee8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053aeec  8bc6                 mov eax, esi
// 0053aeee  5e                   pop esi
// 0053aeef  64890d00000000       mov dword ptr fs:[0], ecx
// 0053aef6  83c410               add esp, 0x10
// 0053aef9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
