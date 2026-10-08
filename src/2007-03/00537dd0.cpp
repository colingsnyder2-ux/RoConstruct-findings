// roc 2007-03 00537dd0  unit: seg_00530000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537dd0
//
// 00537dd0  6aff                 push -1
// 00537dd2  686bc37500           push 0x75c36b
// 00537dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00537ddd  50                   push eax
// 00537dde  64892500000000       mov dword ptr fs:[0], esp
// 00537de5  51                   push ecx
// 00537de6  56                   push esi
// 00537de7  6a20                 push 0x20
// 00537de9  8bf1                 mov esi, ecx
// 00537deb  e818630e00           call 0x61e108
// 00537df0  83c404               add esp, 4
// 00537df3  89442404             mov dword ptr [esp + 4], eax
// 00537df7  85c0                 test eax, eax
// 00537df9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00537e01  740e                 je 0x537e11
// 00537e03  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00537e07  51                   push ecx
// 00537e08  8bc8                 mov ecx, eax
// 00537e0a  e801efffff           call 0x536d10
// 00537e0f  eb02                 jmp 0x537e13
// 00537e11  33c0                 xor eax, eax
// 00537e13  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537e17  8906                 mov dword ptr [esi], eax
// 00537e19  8bc6                 mov eax, esi
// 00537e1b  5e                   pop esi
// 00537e1c  64890d00000000       mov dword ptr fs:[0], ecx
// 00537e23  83c410               add esp, 0x10
// 00537e26  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
