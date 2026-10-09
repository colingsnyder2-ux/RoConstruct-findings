// roc 2009-12 0069f170  unit: std::strstream  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f170
//
// 0069f170  a1802bb600           mov eax, dword ptr [0xb62b80]
// 0069f175  56                   push esi
// 0069f176  8b742408             mov esi, dword ptr [esp + 8]
// 0069f17a  50                   push eax
// 0069f17b  6a01                 push 1
// 0069f17d  56                   push esi
// 0069f17e  e8ddb40e00           call 0x78a660
// 0069f183  56                   push esi
// 0069f184  50                   push eax
// 0069f185  e8c6fcffff           call 0x69ee50
// 0069f18a  83c414               add esp, 0x14
// 0069f18d  5e                   pop esi
// 0069f18e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
