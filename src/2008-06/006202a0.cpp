// roc 2008-06 006202a0  unit: VFunctionScriptSlot::?$TGenericSlotWrapper  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006202a0
//
// 006202a0  6aff                 push -1
// 006202a2  68e3957d00           push 0x7d95e3
// 006202a7  64a100000000         mov eax, dword ptr fs:[0]
// 006202ad  50                   push eax
// 006202ae  64892500000000       mov dword ptr fs:[0], esp
// 006202b5  51                   push ecx
// 006202b6  56                   push esi
// 006202b7  33f6                 xor esi, esi
// 006202b9  6a58                 push 0x58
// 006202bb  89742414             mov dword ptr [esp + 0x14], esi
// 006202bf  e85c060800           call 0x6a0920
// 006202c4  83c404               add esp, 4
// 006202c7  89442404             mov dword ptr [esp + 4], eax
// 006202cb  c644241001           mov byte ptr [esp + 0x10], 1
// 006202d0  3bc6                 cmp eax, esi
// 006202d2  740e                 je 0x6202e2
// 006202d4  8d4c2418             lea ecx, [esp + 0x18]
// 006202d8  51                   push ecx
// 006202d9  8bc8                 mov ecx, eax
// 006202db  e880f7ffff           call 0x61fa60
// 006202e0  8bf0                 mov esi, eax
// 006202e2  8d4c2418             lea ecx, [esp + 0x18]
// 006202e6  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006202ee  e8cdefffff           call 0x61f2c0
// 006202f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006202f7  8bc6                 mov eax, esi
// 006202f9  5e                   pop esi
// 006202fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00620301  83c410               add esp, 0x10
// 00620304  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$create@VFunctionScriptSlot@@@GenericSlotWrapper@Reflection@RBX@@SAPAV012@VFunctionScriptSlot@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
