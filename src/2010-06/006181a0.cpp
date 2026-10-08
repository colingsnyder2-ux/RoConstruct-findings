// roc 2010-06 006181a0  unit: RBX::VScriptStats::?$sp_counted_impl_p  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006181a0
//
// 006181a0  6aff                 push -1
// 006181a2  6859a99900           push 0x99a959
// 006181a7  64a100000000         mov eax, dword ptr fs:[0]
// 006181ad  50                   push eax
// 006181ae  64892500000000       mov dword ptr fs:[0], esp
// 006181b5  83ec08               sub esp, 8
// 006181b8  56                   push esi
// 006181b9  c744240400000000     mov dword ptr [esp + 4], 0
// 006181c1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006181c5  57                   push edi
// 006181c6  8bf9                 mov edi, ecx
// 006181c8  c70600000000         mov dword ptr [esi], 0
// 006181ce  83ec20               sub esp, 0x20
// 006181d1  8bcc                 mov ecx, esp
// 006181d3  8964242c             mov dword ptr [esp + 0x2c], esp
// 006181d7  b8d0356100           mov eax, 0x6135d0
// 006181dc  56                   push esi
// 006181dd  50                   push eax
// 006181de  c744244000000000     mov dword ptr [esp + 0x40], 0
// 006181e6  c744243001000000     mov dword ptr [esp + 0x30], 1
// 006181ee  c70100000000         mov dword ptr [ecx], 0
// 006181f4  e8478fffff           call 0x611140
// 006181f9  8b542450             mov edx, dword ptr [esp + 0x50]
// 006181fd  83ec20               sub esp, 0x20
// 00618200  8bcc                 mov ecx, esp
// 00618202  89642470             mov dword ptr [esp + 0x70], esp
// 00618206  b830356100           mov eax, 0x613530
// 0061820b  52                   push edx
// 0061820c  50                   push eax
// 0061820d  c70100000000         mov dword ptr [ecx], 0
// 00618213  e8c88effff           call 0x6110e0
// 00618218  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0061821c  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00618220  8b542464             mov edx, dword ptr [esp + 0x64]
// 00618224  50                   push eax
// 00618225  51                   push ecx
// 00618226  52                   push edx
// 00618227  8bcf                 mov ecx, edi
// 00618229  e862f7ffff           call 0x617990
// 0061822e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00618232  5f                   pop edi
// 00618233  8bc6                 mov eax, esi
// 00618235  64890d00000000       mov dword ptr fs:[0], ecx
// 0061823c  5e                   pop esi
// 0061823d  83c414               add esp, 0x14
// 00618240  c21400               ret 0x14
// library rbxgs/script\ScriptContext.cpp (function ?executeInNewThread@ScriptContext@RBX@@QAE?AV?$auto_ptr@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@std@@W4Identities@Security@2@PBD1ABV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
