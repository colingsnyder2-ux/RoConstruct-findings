// roc 2009-06 006ec2e0  unit: RBX::PartDropTool  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ec2e0
//
// 006ec2e0  83ec08               sub esp, 8
// 006ec2e3  57                   push edi
// 006ec2e4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006ec2e8  8b4708               mov eax, dword ptr [edi + 8]
// 006ec2eb  83e800               sub eax, 0
// 006ec2ee  0f8487000000         je 0x6ec37b
// 006ec2f4  83e803               sub eax, 3
// 006ec2f7  7414                 je 0x6ec30d
// 006ec2f9  83e801               sub eax, 1
// 006ec2fc  7541                 jne 0x6ec33f
// 006ec2fe  8b07                 mov eax, dword ptr [edi]
// 006ec300  5f                   pop edi
// 006ec301  83c408               add esp, 8
// 006ec304  89442408             mov dword ptr [esp + 8], eax
// 006ec308  e993ffffff           jmp 0x6ec2a0
// 006ec30d  dd07                 fld qword ptr [edi]
// 006ec30f  dd5c2404             fstp qword ptr [esp + 4]
// 006ec313  dd442404             fld qword ptr [esp + 4]
// 006ec317  db5c2414             fistp dword ptr [esp + 0x14]
// 006ec31b  db442414             fild dword ptr [esp + 0x14]
// 006ec31f  dc1f                 fcomp qword ptr [edi]
// 006ec321  dfe0                 fnstsw ax
// 006ec323  f6c444               test ah, 0x44
// 006ec326  7a17                 jp 0x6ec33f
// 006ec328  8b542414             mov edx, dword ptr [esp + 0x14]
// 006ec32c  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ec330  52                   push edx
// 006ec331  50                   push eax
// 006ec332  e8d9feffff           call 0x6ec210
// 006ec337  83c408               add esp, 8
// 006ec33a  5f                   pop edi
// 006ec33b  83c408               add esp, 8
// 006ec33e  c3                   ret 
// 006ec33f  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ec343  56                   push esi
// 006ec344  8bd7                 mov edx, edi
// 006ec346  e815f9ffff           call 0x6ebc60
// 006ec34b  8bf0                 mov esi, eax
// 006ec34d  8d4900               lea ecx, [ecx]
// 006ec350  8d4e10               lea ecx, [esi + 0x10]
// 006ec353  57                   push edi
// 006ec354  51                   push ecx
// 006ec355  e8f6c8fdff           call 0x6c8c50
// 006ec35a  83c408               add esp, 8
// 006ec35d  85c0                 test eax, eax
// 006ec35f  7512                 jne 0x6ec373
// 006ec361  8b761c               mov esi, dword ptr [esi + 0x1c]
// 006ec364  85f6                 test esi, esi
// 006ec366  75e8                 jne 0x6ec350
// 006ec368  5e                   pop esi
// 006ec369  b878c38e00           mov eax, 0x8ec378
// 006ec36e  5f                   pop edi
// 006ec36f  83c408               add esp, 8
// 006ec372  c3                   ret 
// 006ec373  8bc6                 mov eax, esi
// 006ec375  5e                   pop esi
// 006ec376  5f                   pop edi
// 006ec377  83c408               add esp, 8
// 006ec37a  c3                   ret 
// 006ec37b  b878c38e00           mov eax, 0x8ec378
// 006ec380  5f                   pop edi
// 006ec381  83c408               add esp, 8
// 006ec384  c3                   ret 
// library lua-5.1.4/ltable.c (function _luaH_get)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltable.c
