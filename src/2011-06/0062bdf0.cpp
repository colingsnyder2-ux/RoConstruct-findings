// roc 2011-06 0062bdf0  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062bdf0
//
// 0062bdf0  6aff                 push -1
// 0062bdf2  68a82b9e00           push 0x9e2ba8
// 0062bdf7  64a100000000         mov eax, dword ptr fs:[0]
// 0062bdfd  50                   push eax
// 0062bdfe  64892500000000       mov dword ptr fs:[0], esp
// 0062be05  51                   push ecx
// 0062be06  56                   push esi
// 0062be07  8bf1                 mov esi, ecx
// 0062be09  89742404             mov dword ptr [esp + 4], esi
// 0062be0d  8d4e04               lea ecx, [esi + 4]
// 0062be10  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062be18  e8f3f7ffff           call 0x62b610
// 0062be1d  f644241801           test byte ptr [esp + 0x18], 1
// 0062be22  c706f4c0a500         mov dword ptr [esi], 0xa5c0f4
// 0062be28  7409                 je 0x62be33
// 0062be2a  56                   push esi
// 0062be2b  e828e21d00           call 0x80a058
// 0062be30  83c404               add esp, 4
// 0062be33  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062be37  8bc6                 mov eax, esi
// 0062be39  5e                   pop esi
// 0062be3a  64890d00000000       mov dword ptr fs:[0], ecx
// 0062be41  83c410               add esp, 0x10
// 0062be44  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??_G?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
