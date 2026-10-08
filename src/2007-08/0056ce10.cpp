// roc 2007-08 0056ce10  unit: RBX::Lua::FunctionRef  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ce10
//
// 0056ce10  6aff                 push -1
// 0056ce12  68f8487500           push 0x7548f8
// 0056ce17  64a100000000         mov eax, dword ptr fs:[0]
// 0056ce1d  50                   push eax
// 0056ce1e  64892500000000       mov dword ptr fs:[0], esp
// 0056ce25  51                   push ecx
// 0056ce26  56                   push esi
// 0056ce27  57                   push edi
// 0056ce28  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0056ce2c  8bf1                 mov esi, ecx
// 0056ce2e  57                   push edi
// 0056ce2f  8974240c             mov dword ptr [esp + 0xc], esi
// 0056ce33  e8b8faffff           call 0x56c8f0
// 0056ce38  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056ce3c  50                   push eax
// 0056ce3d  57                   push edi
// 0056ce3e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056ce46  c70608727800         mov dword ptr [esi], 0x787208
// 0056ce4c  e8ef080500           call 0x5bd740
// 0056ce51  68f0d8ffff           push 0xffffd8f0
// 0056ce56  57                   push edi
// 0056ce57  e8041f0500           call 0x5bed60
// 0056ce5c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056ce60  83c410               add esp, 0x10
// 0056ce63  894620               mov dword ptr [esi + 0x20], eax
// 0056ce66  5f                   pop edi
// 0056ce67  8bc6                 mov eax, esi
// 0056ce69  5e                   pop esi
// 0056ce6a  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ce71  83c410               add esp, 0x10
// 0056ce74  c20800               ret 8
// library rbxgs/script\ThreadRef.cpp (function ??0FunctionRef@Lua@RBX@@QAE@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
