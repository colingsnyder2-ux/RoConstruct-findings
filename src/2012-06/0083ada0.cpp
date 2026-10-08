// roc 2012-06 0083ada0  unit: seg_00830000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083ada0
//
// 0083ada0  a1c413de00           mov eax, dword ptr [0xde13c4]
// 0083ada5  56                   push esi
// 0083ada6  8b742408             mov esi, dword ptr [esp + 8]
// 0083adaa  50                   push eax
// 0083adab  6a01                 push 1
// 0083adad  56                   push esi
// 0083adae  e85d8affff           call 0x833810
// 0083adb3  56                   push esi
// 0083adb4  50                   push eax
// 0083adb5  e836870000           call 0x8434f0
// 0083adba  83c414               add esp, 0x14
// 0083adbd  5e                   pop esi
// 0083adbe  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
