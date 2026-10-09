// roc 2009-12 006a0bf0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0bf0
//
// 006a0bf0  56                   push esi
// 006a0bf1  8b742408             mov esi, dword ptr [esp + 8]
// 006a0bf5  57                   push edi
// 006a0bf6  6a00                 push 0
// 006a0bf8  6a02                 push 2
// 006a0bfa  56                   push esi
// 006a0bfb  e8709b0e00           call 0x78a770
// 006a0c00  8bf8                 mov edi, eax
// 006a0c02  a1442bb600           mov eax, dword ptr [0xb62b44]
// 006a0c07  50                   push eax
// 006a0c08  6a01                 push 1
// 006a0c0a  56                   push esi
// 006a0c0b  e8509a0e00           call 0x78a660
// 006a0c10  56                   push esi
// 006a0c11  57                   push edi
// 006a0c12  50                   push eax
// 006a0c13  e8680f0f00           call 0x791b80
// 006a0c18  83c424               add esp, 0x24
// 006a0c1b  5f                   pop edi
// 006a0c1c  5e                   pop esi
// 006a0c1d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
