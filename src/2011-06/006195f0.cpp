// roc 2011-06 006195f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006195f0
//
// 006195f0  56                   push esi
// 006195f1  8b742408             mov esi, dword ptr [esp + 8]
// 006195f5  57                   push edi
// 006195f6  6a00                 push 0
// 006195f8  6a02                 push 2
// 006195fa  56                   push esi
// 006195fb  e890ab1400           call 0x764190
// 00619600  8bf8                 mov edi, eax
// 00619602  a10cf0c800           mov eax, dword ptr [0xc8f00c]
// 00619607  50                   push eax
// 00619608  6a01                 push 1
// 0061960a  56                   push esi
// 0061960b  e870aa1400           call 0x764080
// 00619610  56                   push esi
// 00619611  57                   push edi
// 00619612  50                   push eax
// 00619613  e8a87f1500           call 0x7715c0
// 00619618  83c424               add esp, 0x24
// 0061961b  5f                   pop edi
// 0061961c  5e                   pop esi
// 0061961d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
