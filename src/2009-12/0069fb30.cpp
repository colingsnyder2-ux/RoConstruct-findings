// roc 2009-12 0069fb30  unit: std::strstream  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069fb30
//
// 0069fb30  a1782bb600           mov eax, dword ptr [0xb62b78]
// 0069fb35  56                   push esi
// 0069fb36  8b742408             mov esi, dword ptr [esp + 8]
// 0069fb3a  50                   push eax
// 0069fb3b  6a01                 push 1
// 0069fb3d  56                   push esi
// 0069fb3e  e81dab0e00           call 0x78a660
// 0069fb43  56                   push esi
// 0069fb44  50                   push eax
// 0069fb45  e896f3ffff           call 0x69eee0
// 0069fb4a  83c414               add esp, 0x14
// 0069fb4d  5e                   pop esi
// 0069fb4e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
