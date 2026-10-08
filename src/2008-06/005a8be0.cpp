// roc 2008-06 005a8be0  unit: RBX::ScriptContext  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8be0
//
// 005a8be0  56                   push esi
// 005a8be1  8b742408             mov esi, dword ptr [esp + 8]
// 005a8be5  57                   push edi
// 005a8be6  6a00                 push 0
// 005a8be8  6a02                 push 2
// 005a8bea  56                   push esi
// 005a8beb  e8d08a0600           call 0x6116c0
// 005a8bf0  8bf8                 mov edi, eax
// 005a8bf2  a1dcb19500           mov eax, dword ptr [0x95b1dc]
// 005a8bf7  50                   push eax
// 005a8bf8  6a01                 push 1
// 005a8bfa  56                   push esi
// 005a8bfb  e8b0890600           call 0x6115b0
// 005a8c00  56                   push esi
// 005a8c01  57                   push edi
// 005a8c02  50                   push eax
// 005a8c03  e848620700           call 0x61ee50
// 005a8c08  83c424               add esp, 0x24
// 005a8c0b  5f                   pop edi
// 005a8c0c  5e                   pop esi
// 005a8c0d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
