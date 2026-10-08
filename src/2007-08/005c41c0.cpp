// roc 2007-08 005c41c0  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c41c0
//
// 005c41c0  6aff                 push -1
// 005c41c2  68a3977500           push 0x7597a3
// 005c41c7  64a100000000         mov eax, dword ptr fs:[0]
// 005c41cd  50                   push eax
// 005c41ce  64892500000000       mov dword ptr fs:[0], esp
// 005c41d5  51                   push ecx
// 005c41d6  56                   push esi
// 005c41d7  33f6                 xor esi, esi
// 005c41d9  6a2c                 push 0x2c
// 005c41db  89742414             mov dword ptr [esp + 0x14], esi
// 005c41df  e812bd0600           call 0x62fef6
// 005c41e4  83c404               add esp, 4
// 005c41e7  89442404             mov dword ptr [esp + 4], eax
// 005c41eb  3bc6                 cmp eax, esi
// 005c41ed  c644241001           mov byte ptr [esp + 0x10], 1
// 005c41f2  740e                 je 0x5c4202
// 005c41f4  8d4c2418             lea ecx, [esp + 0x18]
// 005c41f8  51                   push ecx
// 005c41f9  8bc8                 mov ecx, eax
// 005c41fb  e810f9ffff           call 0x5c3b10
// 005c4200  8bf0                 mov esi, eax
// 005c4202  8d4c2418             lea ecx, [esp + 0x18]
// 005c4206  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005c420e  e84df6ffff           call 0x5c3860
// 005c4213  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c4217  8bc6                 mov eax, esi
// 005c4219  5e                   pop esi
// 005c421a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c4221  83c410               add esp, 0x10
// 005c4224  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??$create@VWaitScriptSlot@@@GenericSlotWrapper@Reflection@RBX@@SAPAV012@VWaitScriptSlot@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
