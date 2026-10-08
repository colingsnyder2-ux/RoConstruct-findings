// roc 2009-06 00636e30  unit: RBX::VScriptContext::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00636e30
//
// 00636e30  53                   push ebx
// 00636e31  56                   push esi
// 00636e32  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00636e36  57                   push edi
// 00636e37  6a54                 push 0x54
// 00636e39  56                   push esi
// 00636e3a  8bd9                 mov ebx, ecx
// 00636e3c  e80f270800           call 0x6b9550
// 00636e41  68eed8ffff           push 0xffffd8ee
// 00636e46  56                   push esi
// 00636e47  e854270800           call 0x6b95a0
// 00636e4c  6aff                 push -1
// 00636e4e  56                   push esi
// 00636e4f  e88c210800           call 0x6b8fe0
// 00636e54  83c418               add esp, 0x18
// 00636e57  85c0                 test eax, eax
// 00636e59  7512                 jne 0x636e6d
// 00636e5b  33ff                 xor edi, edi
// 00636e5d  57                   push edi
// 00636e5e  8bcb                 mov ecx, ebx
// 00636e60  e8cbf6deff           call 0x426530
// 00636e65  5f                   pop edi
// 00636e66  5e                   pop esi
// 00636e67  8bc3                 mov eax, ebx
// 00636e69  5b                   pop ebx
// 00636e6a  c20400               ret 4
// 00636e6d  6aff                 push -1
// 00636e6f  56                   push esi
// 00636e70  e89b220800           call 0x6b9110
// 00636e75  6afe                 push -2
// 00636e77  56                   push esi
// 00636e78  8bf8                 mov edi, eax
// 00636e7a  e8111f0800           call 0x6b8d90
// 00636e7f  83c410               add esp, 0x10
// 00636e82  57                   push edi
// 00636e83  8bcb                 mov ecx, ebx
// 00636e85  e8a6f6deff           call 0x426530
// 00636e8a  5f                   pop edi
// 00636e8b  5e                   pop esi
// 00636e8c  8bc3                 mov eax, ebx
// 00636e8e  5b                   pop ebx
// 00636e8f  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ??0ScriptImpersonator@ScriptContext@RBX@@QAE@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
