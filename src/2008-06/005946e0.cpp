// roc 2008-06 005946e0  unit: RBX::Lua::VFunctionRef::?$holder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005946e0
//
// 005946e0  6aff                 push -1
// 005946e2  6898987d00           push 0x7d9898
// 005946e7  64a100000000         mov eax, dword ptr fs:[0]
// 005946ed  50                   push eax
// 005946ee  64892500000000       mov dword ptr fs:[0], esp
// 005946f5  51                   push ecx
// 005946f6  56                   push esi
// 005946f7  8bf1                 mov esi, ecx
// 005946f9  89742404             mov dword ptr [esp + 4], esi
// 005946fd  8d4e04               lea ecx, [esi + 4]
// 00594700  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00594708  e863fdffff           call 0x594470
// 0059470d  f644241801           test byte ptr [esp + 0x18], 1
// 00594712  c7061cba8000         mov dword ptr [esi], 0x80ba1c
// 00594718  7409                 je 0x594723
// 0059471a  56                   push esi
// 0059471b  e85abf1000           call 0x6a067a
// 00594720  83c404               add esp, 4
// 00594723  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00594727  8bc6                 mov eax, esi
// 00594729  5e                   pop esi
// 0059472a  64890d00000000       mov dword ptr fs:[0], ecx
// 00594731  83c410               add esp, 0x10
// 00594734  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??_G?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
