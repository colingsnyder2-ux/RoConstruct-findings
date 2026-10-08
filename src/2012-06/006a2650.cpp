// roc 2012-06 006a2650  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2650
//
// 006a2650  56                   push esi
// 006a2651  8b742408             mov esi, dword ptr [esp + 8]
// 006a2655  57                   push edi
// 006a2656  6a00                 push 0
// 006a2658  6a02                 push 2
// 006a265a  56                   push esi
// 006a265b  e8c0121900           call 0x833920
// 006a2660  8bf8                 mov edi, eax
// 006a2662  a1fc13de00           mov eax, dword ptr [0xde13fc]
// 006a2667  50                   push eax
// 006a2668  6a01                 push 1
// 006a266a  56                   push esi
// 006a266b  e8a0111900           call 0x833810
// 006a2670  56                   push esi
// 006a2671  57                   push edi
// 006a2672  50                   push eax
// 006a2673  e898ed1900           call 0x841410
// 006a2678  83c424               add esp, 0x24
// 006a267b  5f                   pop edi
// 006a267c  5e                   pop esi
// 006a267d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
