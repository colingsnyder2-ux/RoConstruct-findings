// roc 2009-12 006a10e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a10e0
//
// 006a10e0  56                   push esi
// 006a10e1  8b742408             mov esi, dword ptr [esp + 8]
// 006a10e5  57                   push edi
// 006a10e6  6a00                 push 0
// 006a10e8  6a02                 push 2
// 006a10ea  56                   push esi
// 006a10eb  e880960e00           call 0x78a770
// 006a10f0  8bf8                 mov edi, eax
// 006a10f2  a1642bb600           mov eax, dword ptr [0xb62b64]
// 006a10f7  50                   push eax
// 006a10f8  6a01                 push 1
// 006a10fa  56                   push esi
// 006a10fb  e860950e00           call 0x78a660
// 006a1100  56                   push esi
// 006a1101  57                   push edi
// 006a1102  50                   push eax
// 006a1103  e818f70e00           call 0x790820
// 006a1108  83c424               add esp, 0x24
// 006a110b  5f                   pop edi
// 006a110c  5e                   pop esi
// 006a110d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
