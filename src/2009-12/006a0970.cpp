// roc 2009-12 006a0970  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0970
//
// 006a0970  56                   push esi
// 006a0971  8b742408             mov esi, dword ptr [esp + 8]
// 006a0975  57                   push edi
// 006a0976  6a00                 push 0
// 006a0978  6a02                 push 2
// 006a097a  56                   push esi
// 006a097b  e8f09d0e00           call 0x78a770
// 006a0980  8bf8                 mov edi, eax
// 006a0982  a1842bb600           mov eax, dword ptr [0xb62b84]
// 006a0987  50                   push eax
// 006a0988  6a01                 push 1
// 006a098a  56                   push esi
// 006a098b  e8d09c0e00           call 0x78a660
// 006a0990  56                   push esi
// 006a0991  57                   push edi
// 006a0992  50                   push eax
// 006a0993  e8f84f0f00           call 0x795990
// 006a0998  83c424               add esp, 0x24
// 006a099b  5f                   pop edi
// 006a099c  5e                   pop esi
// 006a099d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
