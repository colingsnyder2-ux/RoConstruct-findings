// roc 2007-08 00535760  unit: std::logic_error  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535760
//
// 00535760  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 00535765  56                   push esi
// 00535766  8b742408             mov esi, dword ptr [esp + 8]
// 0053576a  57                   push edi
// 0053576b  50                   push eax
// 0053576c  6a02                 push 2
// 0053576e  56                   push esi
// 0053576f  e8cc9a0800           call 0x5bf240
// 00535774  8b0d7cbe8a00         mov ecx, dword ptr [0x8abe7c]
// 0053577a  51                   push ecx
// 0053577b  6a01                 push 1
// 0053577d  56                   push esi
// 0053577e  8bf8                 mov edi, eax
// 00535780  e8bb9a0800           call 0x5bf240
// 00535785  8b10                 mov edx, dword ptr [eax]
// 00535787  33c0                 xor eax, eax
// 00535789  3b17                 cmp edx, dword ptr [edi]
// 0053578b  0f94c0               sete al
// 0053578e  50                   push eax
// 0053578f  56                   push esi
// 00535790  e8cb850800           call 0x5bdd60
// 00535795  83c420               add esp, 0x20
// 00535798  5f                   pop edi
// 00535799  b801000000           mov eax, 1
// 0053579e  5e                   pop esi
// 0053579f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
