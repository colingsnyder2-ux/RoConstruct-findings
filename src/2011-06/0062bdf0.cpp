// from server: 100% by tester
// roc 2007-03 00537ed0  unit: seg_00530000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537ed0
//
// 00537ed0  6aff                 push -1
// 00537ed2  68181a7500           push 0x751a18
// 00537ed7  64a100000000         mov eax, dword ptr fs:[0]
// 00537edd  50                   push eax
// 00537ede  64892500000000       mov dword ptr fs:[0], esp
// 00537ee5  51                   push ecx
// 00537ee6  56                   push esi
// 00537ee7  8bf1                 mov esi, ecx
// 00537ee9  89742404             mov dword ptr [esp + 4], esi
// 00537eed  8d4e04               lea ecx, [esi + 4]
// 00537ef0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00537ef8  e8234a0300           call 0x56c920
// 00537efd  f644241801           test byte ptr [esp + 0x18], 1
// 00537f02  c7066c617800         mov dword ptr [esi], 0x78616c
// 00537f08  7409                 je 0x537f13
// 00537f0a  56                   push esi
// 00537f0b  e8e0610e00           call 0x61e0f0
// 00537f10  83c404               add esp, 4
// 00537f13  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537f17  8bc6                 mov eax, esi
// 00537f19  5e                   pop esi
// 00537f1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00537f21  83c410               add esp, 0x10
// 00537f24  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??_G?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
