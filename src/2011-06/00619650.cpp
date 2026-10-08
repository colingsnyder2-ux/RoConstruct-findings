// roc 2011-06 00619650  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619650
//
// 00619650  56                   push esi
// 00619651  8b742408             mov esi, dword ptr [esp + 8]
// 00619655  57                   push edi
// 00619656  6a00                 push 0
// 00619658  6a02                 push 2
// 0061965a  56                   push esi
// 0061965b  e830ab1400           call 0x764190
// 00619660  8bf8                 mov edi, eax
// 00619662  a15cd5c400           mov eax, dword ptr [0xc4d55c]
// 00619667  50                   push eax
// 00619668  6a01                 push 1
// 0061966a  56                   push esi
// 0061966b  e810aa1400           call 0x764080
// 00619670  56                   push esi
// 00619671  57                   push edi
// 00619672  50                   push eax
// 00619673  e878150100           call 0x62abf0
// 00619678  83c424               add esp, 0x24
// 0061967b  5f                   pop edi
// 0061967c  5e                   pop esi
// 0061967d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
