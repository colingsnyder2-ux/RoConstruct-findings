// roc 2008-06 005ad8c0  unit: RBX::Reflection::UTuple::?$holder  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad8c0
//
// 005ad8c0  53                   push ebx
// 005ad8c1  56                   push esi
// 005ad8c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ad8c6  57                   push edi
// 005ad8c7  6a54                 push 0x54
// 005ad8c9  56                   push esi
// 005ad8ca  8bd9                 mov ebx, ecx
// 005ad8cc  e83f4b0600           call 0x612410
// 005ad8d1  68eed8ffff           push 0xffffd8ee
// 005ad8d6  56                   push esi
// 005ad8d7  e8844b0600           call 0x612460
// 005ad8dc  6aff                 push -1
// 005ad8de  56                   push esi
// 005ad8df  e88c450600           call 0x611e70
// 005ad8e4  83c418               add esp, 0x18
// 005ad8e7  85c0                 test eax, eax
// 005ad8e9  7512                 jne 0x5ad8fd
// 005ad8eb  33ff                 xor edi, edi
// 005ad8ed  57                   push edi
// 005ad8ee  8bcb                 mov ecx, ebx
// 005ad8f0  e81be3e7ff           call 0x42bc10
// 005ad8f5  5f                   pop edi
// 005ad8f6  5e                   pop esi
// 005ad8f7  8bc3                 mov eax, ebx
// 005ad8f9  5b                   pop ebx
// 005ad8fa  c20400               ret 4
// 005ad8fd  6aff                 push -1
// 005ad8ff  56                   push esi
// 005ad900  e89b460600           call 0x611fa0
// 005ad905  6afe                 push -2
// 005ad907  56                   push esi
// 005ad908  8bf8                 mov edi, eax
// 005ad90a  e811430600           call 0x611c20
// 005ad90f  83c410               add esp, 0x10
// 005ad912  57                   push edi
// 005ad913  8bcb                 mov ecx, ebx
// 005ad915  e8f6e2e7ff           call 0x42bc10
// 005ad91a  5f                   pop edi
// 005ad91b  5e                   pop esi
// 005ad91c  8bc3                 mov eax, ebx
// 005ad91e  5b                   pop ebx
// 005ad91f  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ??0ScriptImpersonator@ScriptContext@RBX@@QAE@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
