// roc 2008-06 005a9500  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9500
//
// 005a9500  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 005a9505  56                   push esi
// 005a9506  8b742408             mov esi, dword ptr [esp + 8]
// 005a950a  50                   push eax
// 005a950b  6a01                 push 1
// 005a950d  56                   push esi
// 005a950e  e89d800600           call 0x6115b0
// 005a9513  56                   push esi
// 005a9514  50                   push eax
// 005a9515  e836f3ffff           call 0x5a8850
// 005a951a  83c414               add esp, 0x14
// 005a951d  5e                   pop esi
// 005a951e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
