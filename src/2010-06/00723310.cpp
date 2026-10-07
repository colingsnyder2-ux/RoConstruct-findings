// roc 2010-06 00723310  unit: RBX::UniversalTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00723310
//
// 00723310  56                   push esi
// 00723311  8b742408             mov esi, dword ptr [esp + 8]
// 00723315  6a00                 push 0
// 00723317  6a00                 push 0
// 00723319  56                   push esi
// 0072331a  e861e5ffff           call 0x721880
// 0072331f  6aff                 push -1
// 00723321  56                   push esi
// 00723322  e8e9ddffff           call 0x721110
// 00723327  6afe                 push -2
// 00723329  56                   push esi
// 0072332a  e801e8ffff           call 0x721b30
// 0072332f  6a06                 push 6
// 00723331  6830d0a400           push 0xa4d030
// 00723336  56                   push esi
// 00723337  e814e2ffff           call 0x721550
// 0072333c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00723340  50                   push eax
// 00723341  56                   push esi
// 00723342  e849e2ffff           call 0x721590
// 00723347  6afd                 push -3
// 00723349  56                   push esi
// 0072334a  e861e6ffff           call 0x7219b0
// 0072334f  83c438               add esp, 0x38
// 00723352  5e                   pop esi
// 00723353  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?newweaktable@Lua@RBX@@YAXPAUlua_State@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
