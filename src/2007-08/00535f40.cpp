// roc 2007-08 00535f40  unit: RBX::Lua::VFunctionRef::?$holder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535f40
//
// 00535f40  6aff                 push -1
// 00535f42  68f8b57500           push 0x75b5f8
// 00535f47  64a100000000         mov eax, dword ptr fs:[0]
// 00535f4d  50                   push eax
// 00535f4e  64892500000000       mov dword ptr fs:[0], esp
// 00535f55  51                   push ecx
// 00535f56  56                   push esi
// 00535f57  8bf1                 mov esi, ecx
// 00535f59  89742404             mov dword ptr [esp + 4], esi
// 00535f5d  8d4e04               lea ecx, [esi + 4]
// 00535f60  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00535f68  e8136f0300           call 0x56ce80
// 00535f6d  f644241801           test byte ptr [esp + 0x18], 1
// 00535f72  c706bc707800         mov dword ptr [esi], 0x7870bc
// 00535f78  7409                 je 0x535f83
// 00535f7a  56                   push esi
// 00535f7b  e8e29c0f00           call 0x62fc62
// 00535f80  83c404               add esp, 4
// 00535f83  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00535f87  8bc6                 mov eax, esi
// 00535f89  5e                   pop esi
// 00535f8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00535f91  83c410               add esp, 0x10
// 00535f94  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??_G?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
