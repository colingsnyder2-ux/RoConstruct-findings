// roc 2011-06 006198f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006198f0
//
// 006198f0  56                   push esi
// 006198f1  8b742408             mov esi, dword ptr [esp + 8]
// 006198f5  57                   push edi
// 006198f6  6a00                 push 0
// 006198f8  6a02                 push 2
// 006198fa  56                   push esi
// 006198fb  e890a81400           call 0x764190
// 00619900  8bf8                 mov edi, eax
// 00619902  a1c4efc800           mov eax, dword ptr [0xc8efc4]
// 00619907  50                   push eax
// 00619908  6a01                 push 1
// 0061990a  56                   push esi
// 0061990b  e870a71400           call 0x764080
// 00619910  56                   push esi
// 00619911  57                   push edi
// 00619912  50                   push eax
// 00619913  e8982e1500           call 0x76c7b0
// 00619918  83c424               add esp, 0x24
// 0061991b  5f                   pop edi
// 0061991c  5e                   pop esi
// 0061991d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
