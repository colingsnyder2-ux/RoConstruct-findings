// roc 2009-12 0078ab60  unit: RBX::UniversalTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078ab60
//
// 0078ab60  56                   push esi
// 0078ab61  8b742408             mov esi, dword ptr [esp + 8]
// 0078ab65  6a00                 push 0
// 0078ab67  6a00                 push 0
// 0078ab69  56                   push esi
// 0078ab6a  e861e5ffff           call 0x7890d0
// 0078ab6f  6aff                 push -1
// 0078ab71  56                   push esi
// 0078ab72  e8e9ddffff           call 0x788960
// 0078ab77  6afe                 push -2
// 0078ab79  56                   push esi
// 0078ab7a  e801e8ffff           call 0x789380
// 0078ab7f  6a06                 push 6
// 0078ab81  68489e9e00           push 0x9e9e48
// 0078ab86  56                   push esi
// 0078ab87  e814e2ffff           call 0x788da0
// 0078ab8c  8b442434             mov eax, dword ptr [esp + 0x34]
// 0078ab90  50                   push eax
// 0078ab91  56                   push esi
// 0078ab92  e849e2ffff           call 0x788de0
// 0078ab97  6afd                 push -3
// 0078ab99  56                   push esi
// 0078ab9a  e861e6ffff           call 0x789200
// 0078ab9f  83c438               add esp, 0x38
// 0078aba2  5e                   pop esi
// 0078aba3  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?newweaktable@Lua@RBX@@YAXPAUlua_State@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
