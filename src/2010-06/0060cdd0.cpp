// roc 2010-06 0060cdd0  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cdd0
//
// 0060cdd0  a1702abe00           mov eax, dword ptr [0xbe2a70]
// 0060cdd5  56                   push esi
// 0060cdd6  8b742408             mov esi, dword ptr [esp + 8]
// 0060cdda  50                   push eax
// 0060cddb  6a01                 push 1
// 0060cddd  56                   push esi
// 0060cdde  e82d601100           call 0x722e10
// 0060cde3  56                   push esi
// 0060cde4  50                   push eax
// 0060cde5  e856e5ffff           call 0x60b340
// 0060cdea  83c414               add esp, 0x14
// 0060cded  5e                   pop esi
// 0060cdee  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
