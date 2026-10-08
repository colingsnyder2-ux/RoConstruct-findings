// roc 2007-03 00537780  unit: seg_00530000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537780
//
// 00537780  a108e48900           mov eax, dword ptr [0x89e408]
// 00537785  56                   push esi
// 00537786  8b742408             mov esi, dword ptr [esp + 8]
// 0053778a  50                   push eax
// 0053778b  6a01                 push 1
// 0053778d  56                   push esi
// 0053778e  e81d2d0800           call 0x5ba4b0
// 00537793  6830567a00           push 0x7a5630
// 00537798  56                   push esi
// 00537799  e822190800           call 0x5b90c0
// 0053779e  83c414               add esp, 0x14
// 005377a1  b801000000           mov eax, 1
// 005377a6  5e                   pop esi
// 005377a7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
