// roc 2009-06 0063c240  unit: RBX::ScriptContext  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063c240
//
// 0063c240  6aff                 push -1
// 0063c242  6889a38600           push 0x86a389
// 0063c247  64a100000000         mov eax, dword ptr fs:[0]
// 0063c24d  50                   push eax
// 0063c24e  64892500000000       mov dword ptr fs:[0], esp
// 0063c255  83ec08               sub esp, 8
// 0063c258  56                   push esi
// 0063c259  c744240400000000     mov dword ptr [esp + 4], 0
// 0063c261  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0063c265  57                   push edi
// 0063c266  8bf9                 mov edi, ecx
// 0063c268  c70600000000         mov dword ptr [esi], 0
// 0063c26e  83ec20               sub esp, 0x20
// 0063c271  8bcc                 mov ecx, esp
// 0063c273  8964242c             mov dword ptr [esp + 0x2c], esp
// 0063c277  b8508f6300           mov eax, 0x638f50
// 0063c27c  56                   push esi
// 0063c27d  50                   push eax
// 0063c27e  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0063c286  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0063c28e  c70100000000         mov dword ptr [ecx], 0
// 0063c294  e847adffff           call 0x636fe0
// 0063c299  8b542450             mov edx, dword ptr [esp + 0x50]
// 0063c29d  83ec20               sub esp, 0x20
// 0063c2a0  8bcc                 mov ecx, esp
// 0063c2a2  89642470             mov dword ptr [esp + 0x70], esp
// 0063c2a6  b8d0866300           mov eax, 0x6386d0
// 0063c2ab  52                   push edx
// 0063c2ac  50                   push eax
// 0063c2ad  c70100000000         mov dword ptr [ecx], 0
// 0063c2b3  e8c8acffff           call 0x636f80
// 0063c2b8  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0063c2bc  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0063c2c0  8b542464             mov edx, dword ptr [esp + 0x64]
// 0063c2c4  50                   push eax
// 0063c2c5  51                   push ecx
// 0063c2c6  52                   push edx
// 0063c2c7  8bcf                 mov ecx, edi
// 0063c2c9  e882f7ffff           call 0x63ba50
// 0063c2ce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063c2d2  5f                   pop edi
// 0063c2d3  8bc6                 mov eax, esi
// 0063c2d5  64890d00000000       mov dword ptr fs:[0], ecx
// 0063c2dc  5e                   pop esi
// 0063c2dd  83c414               add esp, 0x14
// 0063c2e0  c21400               ret 0x14
// library rbxgs/script\ScriptContext.cpp (function ?executeInNewThread@ScriptContext@RBX@@QAE?AV?$auto_ptr@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@std@@W4Identities@Security@2@PBD1ABV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
