// roc 2009-12 006aa560  unit: RBX::ScriptContext  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006aa560
//
// 006aa560  6aff                 push -1
// 006aa562  6829809400           push 0x948029
// 006aa567  64a100000000         mov eax, dword ptr fs:[0]
// 006aa56d  50                   push eax
// 006aa56e  64892500000000       mov dword ptr fs:[0], esp
// 006aa575  83ec08               sub esp, 8
// 006aa578  56                   push esi
// 006aa579  c744240400000000     mov dword ptr [esp + 4], 0
// 006aa581  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006aa585  57                   push edi
// 006aa586  8bf9                 mov edi, ecx
// 006aa588  c70600000000         mov dword ptr [esi], 0
// 006aa58e  83ec20               sub esp, 0x20
// 006aa591  8bcc                 mov ecx, esp
// 006aa593  8964242c             mov dword ptr [esp + 0x2c], esp
// 006aa597  b830646a00           mov eax, 0x6a6430
// 006aa59c  56                   push esi
// 006aa59d  50                   push eax
// 006aa59e  c744244000000000     mov dword ptr [esp + 0x40], 0
// 006aa5a6  c744243001000000     mov dword ptr [esp + 0x30], 1
// 006aa5ae  c70100000000         mov dword ptr [ecx], 0
// 006aa5b4  e847a1ffff           call 0x6a4700
// 006aa5b9  8b542450             mov edx, dword ptr [esp + 0x50]
// 006aa5bd  83ec20               sub esp, 0x20
// 006aa5c0  8bcc                 mov ecx, esp
// 006aa5c2  89642470             mov dword ptr [esp + 0x70], esp
// 006aa5c6  b890636a00           mov eax, 0x6a6390
// 006aa5cb  52                   push edx
// 006aa5cc  50                   push eax
// 006aa5cd  c70100000000         mov dword ptr [ecx], 0
// 006aa5d3  e8c8a0ffff           call 0x6a46a0
// 006aa5d8  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 006aa5dc  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 006aa5e0  8b542464             mov edx, dword ptr [esp + 0x64]
// 006aa5e4  50                   push eax
// 006aa5e5  51                   push ecx
// 006aa5e6  52                   push edx
// 006aa5e7  8bcf                 mov ecx, edi
// 006aa5e9  e802f5ffff           call 0x6a9af0
// 006aa5ee  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006aa5f2  5f                   pop edi
// 006aa5f3  8bc6                 mov eax, esi
// 006aa5f5  64890d00000000       mov dword ptr fs:[0], ecx
// 006aa5fc  5e                   pop esi
// 006aa5fd  83c414               add esp, 0x14
// 006aa600  c21400               ret 0x14
// library rbxgs/script\ScriptContext.cpp (function ?executeInNewThread@ScriptContext@RBX@@QAE?AV?$auto_ptr@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@std@@W4Identities@Security@2@PBD1ABV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
