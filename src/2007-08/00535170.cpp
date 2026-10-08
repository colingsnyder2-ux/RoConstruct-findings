// roc 2007-08 00535170  unit: std::logic_error  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535170
//
// 00535170  56                   push esi
// 00535171  8b742408             mov esi, dword ptr [esp + 8]
// 00535175  57                   push edi
// 00535176  6a00                 push 0
// 00535178  6a02                 push 2
// 0053517a  56                   push esi
// 0053517b  e8d0a10800           call 0x5bf350
// 00535180  8bf8                 mov edi, eax
// 00535182  a180be8a00           mov eax, dword ptr [0x8abe80]
// 00535187  50                   push eax
// 00535188  6a01                 push 1
// 0053518a  56                   push esi
// 0053518b  e8b0a00800           call 0x5bf240
// 00535190  56                   push esi
// 00535191  57                   push edi
// 00535192  50                   push eax
// 00535193  e868e00800           call 0x5c3200
// 00535198  83c424               add esp, 0x24
// 0053519b  5f                   pop edi
// 0053519c  5e                   pop esi
// 0053519d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
