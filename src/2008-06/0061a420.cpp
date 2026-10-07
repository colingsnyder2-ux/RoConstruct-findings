// roc 2008-06 0061a420  unit: RBX::InletTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a420
//
// 0061a420  56                   push esi
// 0061a421  8b742408             mov esi, dword ptr [esp + 8]
// 0061a425  6a00                 push 0
// 0061a427  6a00                 push 0
// 0061a429  56                   push esi
// 0061a42a  e84181ffff           call 0x612570
// 0061a42f  6aff                 push -1
// 0061a431  56                   push esi
// 0061a432  e89979ffff           call 0x611dd0
// 0061a437  6afe                 push -2
// 0061a439  56                   push esi
// 0061a43a  e8b183ffff           call 0x6127f0
// 0061a43f  6a06                 push 6
// 0061a441  6868418400           push 0x844168
// 0061a446  56                   push esi
// 0061a447  e8f47dffff           call 0x612240
// 0061a44c  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061a450  50                   push eax
// 0061a451  56                   push esi
// 0061a452  e8297effff           call 0x612280
// 0061a457  6afd                 push -3
// 0061a459  56                   push esi
// 0061a45a  e82182ffff           call 0x612680
// 0061a45f  83c438               add esp, 0x38
// 0061a462  5e                   pop esi
// 0061a463  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?newweaktable@Lua@RBX@@YAXPAUlua_State@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
