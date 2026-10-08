// roc 2010-06 0060aa30  unit: RBX::ScriptContext  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060aa30
//
// 0060aa30  a1902abe00           mov eax, dword ptr [0xbe2a90]
// 0060aa35  56                   push esi
// 0060aa36  8b742408             mov esi, dword ptr [esp + 8]
// 0060aa3a  50                   push eax
// 0060aa3b  6a01                 push 1
// 0060aa3d  56                   push esi
// 0060aa3e  e8cd831100           call 0x722e10
// 0060aa43  684014a300           push 0xa31440
// 0060aa48  56                   push esi
// 0060aa49  e8426b1100           call 0x721590
// 0060aa4e  83c414               add esp, 0x14
// 0060aa51  b801000000           mov eax, 1
// 0060aa56  5e                   pop esi
// 0060aa57  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
