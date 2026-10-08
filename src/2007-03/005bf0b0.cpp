// roc 2007-03 005bf0b0  unit: seg_005b0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bf0b0
//
// 005bf0b0  6aff                 push -1
// 005bf0b2  68c8a37500           push 0x75a3c8
// 005bf0b7  64a100000000         mov eax, dword ptr fs:[0]
// 005bf0bd  50                   push eax
// 005bf0be  64892500000000       mov dword ptr fs:[0], esp
// 005bf0c5  51                   push ecx
// 005bf0c6  56                   push esi
// 005bf0c7  8bf1                 mov esi, ecx
// 005bf0c9  89742404             mov dword ptr [esp + 4], esi
// 005bf0cd  8d4e04               lea ecx, [esi + 4]
// 005bf0d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bf0d8  e8b3f7ffff           call 0x5be890
// 005bf0dd  8bce                 mov ecx, esi
// 005bf0df  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005bf0e7  e8b409fbff           call 0x56faa0
// 005bf0ec  f644241801           test byte ptr [esp + 0x18], 1
// 005bf0f1  7409                 je 0x5bf0fc
// 005bf0f3  56                   push esi
// 005bf0f4  e8f7ef0500           call 0x61e0f0
// 005bf0f9  83c404               add esp, 4
// 005bf0fc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bf100  8bc6                 mov eax, esi
// 005bf102  5e                   pop esi
// 005bf103  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf10a  83c410               add esp, 0x10
// 005bf10d  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??_G?$TGenericSlotWrapper@VWaitScriptSlot@@@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
