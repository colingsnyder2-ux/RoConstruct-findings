// roc 2007-08 005c4690  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4690
//
// 005c4690  6aff                 push -1
// 005c4692  6833987500           push 0x759833
// 005c4697  64a100000000         mov eax, dword ptr fs:[0]
// 005c469d  50                   push eax
// 005c469e  64892500000000       mov dword ptr fs:[0], esp
// 005c46a5  51                   push ecx
// 005c46a6  56                   push esi
// 005c46a7  33f6                 xor esi, esi
// 005c46a9  6a54                 push 0x54
// 005c46ab  89742414             mov dword ptr [esp + 0x14], esi
// 005c46af  e842b80600           call 0x62fef6
// 005c46b4  83c404               add esp, 4
// 005c46b7  89442404             mov dword ptr [esp + 4], eax
// 005c46bb  3bc6                 cmp eax, esi
// 005c46bd  c644241001           mov byte ptr [esp + 0x10], 1
// 005c46c2  740e                 je 0x5c46d2
// 005c46c4  8d4c2418             lea ecx, [esp + 0x18]
// 005c46c8  51                   push ecx
// 005c46c9  8bc8                 mov ecx, eax
// 005c46cb  e860fbffff           call 0x5c4230
// 005c46d0  8bf0                 mov esi, eax
// 005c46d2  8d4c2418             lea ecx, [esp + 0x18]
// 005c46d6  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005c46de  e8edf0ffff           call 0x5c37d0
// 005c46e3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c46e7  8bc6                 mov eax, esi
// 005c46e9  5e                   pop esi
// 005c46ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005c46f1  83c410               add esp, 0x10
// 005c46f4  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??$create@VFunctionScriptSlot@@@GenericSlotWrapper@Reflection@RBX@@SAPAV012@VFunctionScriptSlot@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
