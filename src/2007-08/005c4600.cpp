// roc 2007-08 005c4600  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4600
//
// 005c4600  6aff                 push -1
// 005c4602  6811987500           push 0x759811
// 005c4607  64a100000000         mov eax, dword ptr fs:[0]
// 005c460d  50                   push eax
// 005c460e  64892500000000       mov dword ptr fs:[0], esp
// 005c4615  51                   push ecx
// 005c4616  56                   push esi
// 005c4617  8bf1                 mov esi, ecx
// 005c4619  c744240400000000     mov dword ptr [esp + 4], 0
// 005c4621  8b442444             mov eax, dword ptr [esp + 0x44]
// 005c4625  50                   push eax
// 005c4626  83ec28               sub esp, 0x28
// 005c4629  8d542448             lea edx, [esp + 0x48]
// 005c462d  8bcc                 mov ecx, esp
// 005c462f  89642470             mov dword ptr [esp + 0x70], esp
// 005c4633  52                   push edx
// 005c4634  c744244001000000     mov dword ptr [esp + 0x40], 1
// 005c463c  e8dff2ffff           call 0x5c3920
// 005c4641  e87afbffff           call 0x5c41c0
// 005c4646  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c4649  8b11                 mov edx, dword ptr [ecx]
// 005c464b  83c428               add esp, 0x28
// 005c464e  50                   push eax
// 005c464f  8b4204               mov eax, dword ptr [edx + 4]
// 005c4652  56                   push esi
// 005c4653  8b742424             mov esi, dword ptr [esp + 0x24]
// 005c4657  56                   push esi
// 005c4658  ffd0                 call eax
// 005c465a  8d4c241c             lea ecx, [esp + 0x1c]
// 005c465e  c744240401000000     mov dword ptr [esp + 4], 1
// 005c4666  c644241000           mov byte ptr [esp + 0x10], 0
// 005c466b  e8f0f1ffff           call 0x5c3860
// 005c4670  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c4674  8bc6                 mov eax, esi
// 005c4676  64890d00000000       mov dword ptr fs:[0], ecx
// 005c467d  5e                   pop esi
// 005c467e  83c410               add esp, 0x10
// 005c4681  c23000               ret 0x30
// library rbxgs/script\LuaSignalBridge.cpp (function ??$connectGeneric@VWaitScriptSlot@@@SignalInstance@Reflection@RBX@@QAE?AVconnection@signals@boost@@VWaitScriptSlot@@W4connect_position@45@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
