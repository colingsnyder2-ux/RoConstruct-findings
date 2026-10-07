// roc 2008-06 00620210  unit: VFunctionScriptSlot::?$TGenericSlotWrapper  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620210
//
// 00620210  6aff                 push -1
// 00620212  68c1957d00           push 0x7d95c1
// 00620217  64a100000000         mov eax, dword ptr fs:[0]
// 0062021d  50                   push eax
// 0062021e  64892500000000       mov dword ptr fs:[0], esp
// 00620225  51                   push ecx
// 00620226  56                   push esi
// 00620227  8bf1                 mov esi, ecx
// 00620229  c744240400000000     mov dword ptr [esp + 4], 0
// 00620231  8b442444             mov eax, dword ptr [esp + 0x44]
// 00620235  50                   push eax
// 00620236  83ec28               sub esp, 0x28
// 00620239  8d542448             lea edx, [esp + 0x48]
// 0062023d  8bcc                 mov ecx, esp
// 0062023f  89642470             mov dword ptr [esp + 0x70], esp
// 00620243  52                   push edx
// 00620244  c744244001000000     mov dword ptr [esp + 0x40], 1
// 0062024c  e8bff1ffff           call 0x61f410
// 00620251  e89af7ffff           call 0x61f9f0
// 00620256  8b4e08               mov ecx, dword ptr [esi + 8]
// 00620259  8b11                 mov edx, dword ptr [ecx]
// 0062025b  83c428               add esp, 0x28
// 0062025e  50                   push eax
// 0062025f  8b4204               mov eax, dword ptr [edx + 4]
// 00620262  56                   push esi
// 00620263  8b742424             mov esi, dword ptr [esp + 0x24]
// 00620267  56                   push esi
// 00620268  ffd0                 call eax
// 0062026a  8d4c241c             lea ecx, [esp + 0x1c]
// 0062026e  c744240401000000     mov dword ptr [esp + 4], 1
// 00620276  c644241000           mov byte ptr [esp + 0x10], 0
// 0062027b  e8d0f0ffff           call 0x61f350
// 00620280  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00620284  8bc6                 mov eax, esi
// 00620286  64890d00000000       mov dword ptr fs:[0], ecx
// 0062028d  5e                   pop esi
// 0062028e  83c410               add esp, 0x10
// 00620291  c23000               ret 0x30
// library rbxgs/script\LuaSignalBridge.cpp (function ??$connectGeneric@VWaitScriptSlot@@@SignalInstance@Reflection@RBX@@QAE?AVconnection@signals@boost@@VWaitScriptSlot@@W4connect_position@45@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
