// roc 2011-06 0076bed0  unit: seg_00760000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0076bed0
//
// 0076bed0  a1dcefc800           mov eax, dword ptr [0xc8efdc]
// 0076bed5  56                   push esi
// 0076bed6  8b742408             mov esi, dword ptr [esp + 8]
// 0076beda  50                   push eax
// 0076bedb  6a01                 push 1
// 0076bedd  56                   push esi
// 0076bede  e89d81ffff           call 0x764080
// 0076bee3  56                   push esi
// 0076bee4  50                   push eax
// 0076bee5  e8a654efff           call 0x661390
// 0076beea  83c414               add esp, 0x14
// 0076beed  5e                   pop esi
// 0076beee  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
