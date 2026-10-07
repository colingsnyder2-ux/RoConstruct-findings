// roc 2009-06 005a42f0  unit: seg_005a0000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a42f0
//
// 005a42f0  53                   push ebx
// 005a42f1  56                   push esi
// 005a42f2  57                   push edi
// 005a42f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005a42f7  8b4704               mov eax, dword ptr [edi + 4]
// 005a42fa  8b08                 mov ecx, dword ptr [eax]
// 005a42fc  6a30                 push 0x30
// 005a42fe  6a01                 push 1
// 005a4300  57                   push edi
// 005a4301  ffd1                 call ecx
// 005a4303  8bf0                 mov esi, eax
// 005a4305  89b758010000         mov dword ptr [edi + 0x158], esi
// 005a430b  c70640365a00         mov dword ptr [esi], 0x5a3640
// 005a4311  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 005a4317  33db                 xor ebx, ebx
// 005a4319  83c40c               add esp, 0xc
// 005a431c  2bc3                 sub eax, ebx
// 005a431e  7438                 je 0x5a4358
// 005a4320  83e801               sub eax, 1
// 005a4323  742a                 je 0x5a434f
// 005a4325  83e801               sub eax, 1
// 005a4328  7415                 je 0x5a433f
// 005a432a  8b17                 mov edx, dword ptr [edi]
// 005a432c  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 005a4333  8b07                 mov eax, dword ptr [edi]
// 005a4335  8b08                 mov ecx, dword ptr [eax]
// 005a4337  57                   push edi
// 005a4338  ffd1                 call ecx
// 005a433a  83c404               add esp, 4
// 005a433d  eb27                 jmp 0x5a4366
// 005a433f  c74604a03c5a00       mov dword ptr [esi + 4], 0x5a3ca0
// 005a4346  c7461cc0835a00       mov dword ptr [esi + 0x1c], 0x5a83c0
// 005a434d  eb17                 jmp 0x5a4366
// 005a434f  c74608f07c5a00       mov dword ptr [esi + 8], 0x5a7cf0
// 005a4356  eb07                 jmp 0x5a435f
// 005a4358  c74608d0795a00       mov dword ptr [esi + 8], 0x5a79d0
// 005a435f  c7460420395a00       mov dword ptr [esi + 4], 0x5a3920
// 005a4366  5f                   pop edi
// 005a4367  895e0c               mov dword ptr [esi + 0xc], ebx
// 005a436a  895e20               mov dword ptr [esi + 0x20], ebx
// 005a436d  895e10               mov dword ptr [esi + 0x10], ebx
// 005a4370  895e24               mov dword ptr [esi + 0x24], ebx
// 005a4373  895e14               mov dword ptr [esi + 0x14], ebx
// 005a4376  895e28               mov dword ptr [esi + 0x28], ebx
// 005a4379  895e18               mov dword ptr [esi + 0x18], ebx
// 005a437c  895e2c               mov dword ptr [esi + 0x2c], ebx
// 005a437f  5e                   pop esi
// 005a4380  5b                   pop ebx
// 005a4381  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _jinit_forward_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
