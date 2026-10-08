// roc 2007-03 005becd0  unit: seg_005b0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005becd0
//
// 005becd0  6aff                 push -1
// 005becd2  68c8a37500           push 0x75a3c8
// 005becd7  64a100000000         mov eax, dword ptr fs:[0]
// 005becdd  50                   push eax
// 005becde  64892500000000       mov dword ptr fs:[0], esp
// 005bece5  51                   push ecx
// 005bece6  56                   push esi
// 005bece7  8bf1                 mov esi, ecx
// 005bece9  89742404             mov dword ptr [esp + 4], esi
// 005beced  8d4e04               lea ecx, [esi + 4]
// 005becf0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005becf8  e823fcffff           call 0x5be920
// 005becfd  8bce                 mov ecx, esi
// 005becff  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005bed07  e8940dfbff           call 0x56faa0
// 005bed0c  f644241801           test byte ptr [esp + 0x18], 1
// 005bed11  7409                 je 0x5bed1c
// 005bed13  56                   push esi
// 005bed14  e8d7f30500           call 0x61e0f0
// 005bed19  83c404               add esp, 4
// 005bed1c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bed20  8bc6                 mov eax, esi
// 005bed22  5e                   pop esi
// 005bed23  64890d00000000       mov dword ptr fs:[0], ecx
// 005bed2a  83c410               add esp, 0x10
// 005bed2d  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??_G?$TGenericSlotWrapper@VWaitScriptSlot@@@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
