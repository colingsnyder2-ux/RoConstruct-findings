// roc 2008-06 0061f9f0  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f9f0
//
// 0061f9f0  6aff                 push -1
// 0061f9f2  6823957d00           push 0x7d9523
// 0061f9f7  64a100000000         mov eax, dword ptr fs:[0]
// 0061f9fd  50                   push eax
// 0061f9fe  64892500000000       mov dword ptr fs:[0], esp
// 0061fa05  51                   push ecx
// 0061fa06  56                   push esi
// 0061fa07  33f6                 xor esi, esi
// 0061fa09  6a2c                 push 0x2c
// 0061fa0b  89742414             mov dword ptr [esp + 0x14], esi
// 0061fa0f  e80c0f0800           call 0x6a0920
// 0061fa14  83c404               add esp, 4
// 0061fa17  89442404             mov dword ptr [esp + 4], eax
// 0061fa1b  c644241001           mov byte ptr [esp + 0x10], 1
// 0061fa20  3bc6                 cmp eax, esi
// 0061fa22  740e                 je 0x61fa32
// 0061fa24  8d4c2418             lea ecx, [esp + 0x18]
// 0061fa28  51                   push ecx
// 0061fa29  8bc8                 mov ecx, eax
// 0061fa2b  e820fcffff           call 0x61f650
// 0061fa30  8bf0                 mov esi, eax
// 0061fa32  8d4c2418             lea ecx, [esp + 0x18]
// 0061fa36  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061fa3e  e80df9ffff           call 0x61f350
// 0061fa43  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061fa47  8bc6                 mov eax, esi
// 0061fa49  5e                   pop esi
// 0061fa4a  64890d00000000       mov dword ptr fs:[0], ecx
// 0061fa51  83c410               add esp, 0x10
// 0061fa54  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??$create@VWaitScriptSlot@@@GenericSlotWrapper@Reflection@RBX@@SAPAV012@VWaitScriptSlot@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
