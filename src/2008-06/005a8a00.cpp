// roc 2008-06 005a8a00  unit: RBX::ScriptContext  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8a00
//
// 005a8a00  56                   push esi
// 005a8a01  8b742408             mov esi, dword ptr [esp + 8]
// 005a8a05  57                   push edi
// 005a8a06  6a00                 push 0
// 005a8a08  6a02                 push 2
// 005a8a0a  56                   push esi
// 005a8a0b  e8b08c0600           call 0x6116c0
// 005a8a10  8bf8                 mov edi, eax
// 005a8a12  a174af9500           mov eax, dword ptr [0x95af74]
// 005a8a17  50                   push eax
// 005a8a18  6a01                 push 1
// 005a8a1a  56                   push esi
// 005a8a1b  e8908b0600           call 0x6115b0
// 005a8a20  56                   push esi
// 005a8a21  57                   push edi
// 005a8a22  50                   push eax
// 005a8a23  e898380700           call 0x61c2c0
// 005a8a28  83c424               add esp, 0x24
// 005a8a2b  5f                   pop edi
// 005a8a2c  5e                   pop esi
// 005a8a2d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
