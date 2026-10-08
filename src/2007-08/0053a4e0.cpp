// roc 2007-08 0053a4e0  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053a4e0
//
// 0053a4e0  53                   push ebx
// 0053a4e1  56                   push esi
// 0053a4e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053a4e6  57                   push edi
// 0053a4e7  6a54                 push 0x54
// 0053a4e9  56                   push esi
// 0053a4ea  8bd9                 mov ebx, ecx
// 0053a4ec  e88f380800           call 0x5bdd80
// 0053a4f1  68eed8ffff           push 0xffffd8ee
// 0053a4f6  56                   push esi
// 0053a4f7  e8d4380800           call 0x5bddd0
// 0053a4fc  6aff                 push -1
// 0053a4fe  56                   push esi
// 0053a4ff  e8dc320800           call 0x5bd7e0
// 0053a504  83c418               add esp, 0x18
// 0053a507  85c0                 test eax, eax
// 0053a509  7512                 jne 0x53a51d
// 0053a50b  33ff                 xor edi, edi
// 0053a50d  57                   push edi
// 0053a50e  8bcb                 mov ecx, ebx
// 0053a510  e8eb0cf1ff           call 0x44b200
// 0053a515  5f                   pop edi
// 0053a516  5e                   pop esi
// 0053a517  8bc3                 mov eax, ebx
// 0053a519  5b                   pop ebx
// 0053a51a  c20400               ret 4
// 0053a51d  6aff                 push -1
// 0053a51f  56                   push esi
// 0053a520  e8eb330800           call 0x5bd910
// 0053a525  6afe                 push -2
// 0053a527  56                   push esi
// 0053a528  8bf8                 mov edi, eax
// 0053a52a  e861300800           call 0x5bd590
// 0053a52f  83c410               add esp, 0x10
// 0053a532  57                   push edi
// 0053a533  8bcb                 mov ecx, ebx
// 0053a535  e8c60cf1ff           call 0x44b200
// 0053a53a  5f                   pop edi
// 0053a53b  5e                   pop esi
// 0053a53c  8bc3                 mov eax, ebx
// 0053a53e  5b                   pop ebx
// 0053a53f  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ??0ScriptImpersonator@ScriptContext@RBX@@QAE@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
