// roc 2007-03 00537470  unit: seg_00530000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537470
//
// 00537470  a150828a00           mov eax, dword ptr [0x8a8250]
// 00537475  56                   push esi
// 00537476  8b742408             mov esi, dword ptr [esp + 8]
// 0053747a  50                   push eax
// 0053747b  6a01                 push 1
// 0053747d  56                   push esi
// 0053747e  e82d300800           call 0x5ba4b0
// 00537483  56                   push esi
// 00537484  50                   push eax
// 00537485  e806f3ffff           call 0x536790
// 0053748a  83c414               add esp, 0x14
// 0053748d  5e                   pop esi
// 0053748e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
