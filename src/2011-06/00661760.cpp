// roc 2011-06 00661760  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661760
//
// 00661760  a108f0c800           mov eax, dword ptr [0xc8f008]
// 00661765  56                   push esi
// 00661766  8b742408             mov esi, dword ptr [esp + 8]
// 0066176a  50                   push eax
// 0066176b  6a01                 push 1
// 0066176d  56                   push esi
// 0066176e  e80d291000           call 0x764080
// 00661773  56                   push esi
// 00661774  50                   push eax
// 00661775  e846fc1000           call 0x7713c0
// 0066177a  83c414               add esp, 0x14
// 0066177d  5e                   pop esi
// 0066177e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
