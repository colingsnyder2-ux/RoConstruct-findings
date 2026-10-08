// roc 2007-08 005354d0  unit: std::logic_error  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005354d0
//
// 005354d0  a18cbe8a00           mov eax, dword ptr [0x8abe8c]
// 005354d5  56                   push esi
// 005354d6  8b742408             mov esi, dword ptr [esp + 8]
// 005354da  57                   push edi
// 005354db  50                   push eax
// 005354dc  6a02                 push 2
// 005354de  56                   push esi
// 005354df  e85c9d0800           call 0x5bf240
// 005354e4  8b0d8cbe8a00         mov ecx, dword ptr [0x8abe8c]
// 005354ea  51                   push ecx
// 005354eb  6a01                 push 1
// 005354ed  56                   push esi
// 005354ee  8bf8                 mov edi, eax
// 005354f0  e84b9d0800           call 0x5bf240
// 005354f5  83c418               add esp, 0x18
// 005354f8  57                   push edi
// 005354f9  8bc8                 mov ecx, eax
// 005354fb  e8502d1f00           call 0x728250
// 00535500  0fb6d0               movzx edx, al
// 00535503  52                   push edx
// 00535504  56                   push esi
// 00535505  e856880800           call 0x5bdd60
// 0053550a  83c408               add esp, 8
// 0053550d  5f                   pop edi
// 0053550e  b801000000           mov eax, 1
// 00535513  5e                   pop esi
// 00535514  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
