// roc 2012-06 00833da0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833da0
//
// 00833da0  56                   push esi
// 00833da1  8b742408             mov esi, dword ptr [esp + 8]
// 00833da5  6a00                 push 0
// 00833da7  6a00                 push 0
// 00833da9  56                   push esi
// 00833daa  e871e6ffff           call 0x832420
// 00833daf  6aff                 push -1
// 00833db1  56                   push esi
// 00833db2  e8f9deffff           call 0x831cb0
// 00833db7  6afe                 push -2
// 00833db9  56                   push esi
// 00833dba  e811e9ffff           call 0x8326d0
// 00833dbf  6a06                 push 6
// 00833dc1  68180cbd00           push 0xbd0c18
// 00833dc6  56                   push esi
// 00833dc7  e824e3ffff           call 0x8320f0
// 00833dcc  8b442434             mov eax, dword ptr [esp + 0x34]
// 00833dd0  50                   push eax
// 00833dd1  56                   push esi
// 00833dd2  e859e3ffff           call 0x832130
// 00833dd7  6afd                 push -3
// 00833dd9  56                   push esi
// 00833dda  e871e7ffff           call 0x832550
// 00833ddf  83c438               add esp, 0x38
// 00833de2  5e                   pop esi
// 00833de3  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?newweaktable@Lua@RBX@@YAXPAUlua_State@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
