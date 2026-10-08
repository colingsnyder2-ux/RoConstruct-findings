// roc 2011-06 0076bfa0  unit: seg_00760000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0076bfa0
//
// 0076bfa0  a1ccefc800           mov eax, dword ptr [0xc8efcc]
// 0076bfa5  56                   push esi
// 0076bfa6  8b742408             mov esi, dword ptr [esp + 8]
// 0076bfaa  50                   push eax
// 0076bfab  6a01                 push 1
// 0076bfad  56                   push esi
// 0076bfae  e8cd80ffff           call 0x764080
// 0076bfb3  56                   push esi
// 0076bfb4  50                   push eax
// 0076bfb5  e85652efff           call 0x661210
// 0076bfba  83c414               add esp, 0x14
// 0076bfbd  5e                   pop esi
// 0076bfbe  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
