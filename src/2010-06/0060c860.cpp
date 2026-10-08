// roc 2010-06 0060c860  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c860
//
// 0060c860  a1582abe00           mov eax, dword ptr [0xbe2a58]
// 0060c865  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060c869  50                   push eax
// 0060c86a  6a01                 push 1
// 0060c86c  51                   push ecx
// 0060c86d  e89e651100           call 0x722e10
// 0060c872  83c40c               add esp, 0xc
// 0060c875  33c0                 xor eax, eax
// 0060c877  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
