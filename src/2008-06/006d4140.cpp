// from server: 100% by auto
// roc 2008-06 006d4140  unit: CXTPReportControl  size: 753 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4140
//
// 006d4140  55                   push ebp
// 006d4141  8dac24f8fbffff       lea ebp, [esp - 0x408]
// 006d4148  81ec08040000         sub esp, 0x408
// 006d414e  6aff                 push -1
// 006d4150  68c91a7e00           push 0x7e1ac9
// 006d4155  64a100000000         mov eax, dword ptr fs:[0]
// 006d415b  50                   push eax
// 006d415c  81ec28010000         sub esp, 0x128
// 006d4162  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006d4167  33c5                 xor eax, ebp
// 006d4169  898504040000         mov dword ptr [ebp + 0x404], eax
// 006d416f  53                   push ebx
// 006d4170  56                   push esi
// 006d4171  57                   push edi
// 006d4172  50                   push eax
// 006d4173  8d45f4               lea eax, [ebp - 0xc]
// 006d4176  64a300000000         mov dword ptr fs:[0], eax
// 006d417c  8965f0               mov dword ptr [ebp - 0x10], esp
// 006d417f  8bf9                 mov edi, ecx
// 006d4181  897de8               mov dword ptr [ebp - 0x18], edi
// 006d4184  e8076fffff           call 0x6cb090
// 006d4189  85c0                 test eax, eax
// 006d418b  0f857b020000         jne 0x6d440c
// 006d4191  e890c7fcff           call 0x6a0926
// 006d4196  8b4804               mov ecx, dword ptr [eax + 4]
// 006d4199  e8b0cffcff           call 0x6a114e
// 006d419e  33db                 xor ebx, ebx
// 006d41a0  685c368500           push 0x85365c
// 006d41a5  895dfc               mov dword ptr [ebp - 4], ebx
// 006d41a8  ff15f02d8000         call dword ptr [0x802df0]
// 006d41ae  53                   push ebx
// 006d41af  8d4d90               lea ecx, [ebp - 0x70]
// 006d41b2  0fb7f0               movzx esi, ax
// 006d41b5  e8b6390000           call 0x6d7b70
// 006d41ba  8b4720               mov eax, dword ptr [edi + 0x20]
// 006d41bd  50                   push eax
// 006d41be  c645fc01             mov byte ptr [ebp - 4], 1
// 006d41c2  ff15f42d8000         call dword ptr [0x802df4]
// 006d41c8  85c0                 test eax, eax
// 006d41ca  0f8421020000         je 0x6d43f1
// 006d41d0  0fb7f6               movzx esi, si
// 006d41d3  56                   push esi
// 006d41d4  ff15ec2d8000         call dword ptr [0x802dec]
// 006d41da  85c0                 test eax, eax
// 006d41dc  0f8453010000         je 0x6d4335
// 006d41e2  56                   push esi
// 006d41e3  ff15e42d8000         call dword ptr [0x802de4]
// 006d41e9  8bf0                 mov esi, eax
// 006d41eb  8975e0               mov dword ptr [ebp - 0x20], esi
// 006d41ee  3bf3                 cmp esi, ebx
// 006d41f0  0f843f010000         je 0x6d4335
// 006d41f6  6800100000           push 0x1000
// 006d41fb  6a02                 push 2
// 006d41fd  8d8d5cffffff         lea ecx, [ebp - 0xa4]
// 006d4203  895de4               mov dword ptr [ebp - 0x1c], ebx
// 006d4206  e84f7f0e00           call 0x7bc15a
// 006d420b  53                   push ebx
// 006d420c  56                   push esi
// 006d420d  8d8d5cffffff         lea ecx, [ebp - 0xa4]
// 006d4213  c645fc02             mov byte ptr [ebp - 4], 2
// 006d4217  e8387f0e00           call 0x7bc154
// 006d421c  53                   push ebx
// 006d421d  6800100000           push 0x1000
// 006d4222  6a01                 push 1
// 006d4224  8d8d5cffffff         lea ecx, [ebp - 0xa4]
// 006d422a  51                   push ecx
// 006d422b  8d8d14ffffff         lea ecx, [ebp - 0xec]
// 006d4231  e80c7f0e00           call 0x7bc142
// 006d4236  8d9514ffffff         lea edx, [ebp - 0xec]
// 006d423c  b304                 mov bl, 4
// 006d423e  52                   push edx
// 006d423f  8d8dccfeffff         lea ecx, [ebp - 0x134]
// 006d4245  885dfc               mov byte ptr [ebp - 4], bl
// 006d4248  e8e3a10200           call 0x6fe430
// 006d424d  8b07                 mov eax, dword ptr [edi]
// 006d424f  8b804c020000         mov eax, dword ptr [eax + 0x24c]
// 006d4255  8d4d90               lea ecx, [ebp - 0x70]
// 006d4258  51                   push ecx
// 006d4259  8d95ccfeffff         lea edx, [ebp - 0x134]
// 006d425f  52                   push edx
// 006d4260  8bcf                 mov ecx, edi
// 006d4262  c645fc05             mov byte ptr [ebp - 4], 5
// 006d4266  ffd0                 call eax
// 006d4268  85c0                 test eax, eax
// 006d426a  7508                 jne 0x6d4274
// 006d426c  8d4d90               lea ecx, [ebp - 0x70]
// 006d426f  e8dc350000           call 0x6d7850
// 006d4274  8d8dccfeffff         lea ecx, [ebp - 0x134]
// 006d427a  885dfc               mov byte ptr [ebp - 4], bl
// 006d427d  e81e870200           call 0x6fc9a0
// 006d4282  c745fc03000000       mov dword ptr [ebp - 4], 3
// 006d4289  eb66                 jmp 0x6d42f1
// 006d428b  8b75d8               mov esi, dword ptr [ebp - 0x28]
// 006d428e  8b16                 mov edx, dword ptr [esi]
// 006d4290  8b5218               mov edx, dword ptr [edx + 0x18]
// 006d4293  6a00                 push 0
// 006d4295  6800040000           push 0x400
// 006d429a  8d4500               lea eax, [ebp]
// 006d429d  50                   push eax
// 006d429e  8bce                 mov ecx, esi
// 006d42a0  ffd2                 call edx
// 006d42a2  8bce                 mov ecx, esi
// 006d42a4  e8a7c6fcff           call 0x6a0950
// 006d42a9  c745fc03000000       mov dword ptr [ebp - 4], 3
// 006d42b0  b8ee426d00           mov eax, 0x6d42ee
// 006d42b5  c3                   ret 
// 006d42b6  8b75dc               mov esi, dword ptr [ebp - 0x24]
// 006d42b9  8b06                 mov eax, dword ptr [esi]
// 006d42bb  8b5018               mov edx, dword ptr [eax + 0x18]
// 006d42be  6a00                 push 0
// 006d42c0  6800040000           push 0x400
// 006d42c5  8d4d00               lea ecx, [ebp]
// 006d42c8  51                   push ecx
// 006d42c9  8bce                 mov ecx, esi
// 006d42cb  ffd2                 call edx
// 006d42cd  8bce                 mov ecx, esi
// 006d42cf  e87cc6fcff           call 0x6a0950
// 006d42d4  c745fc03000000       mov dword ptr [ebp - 4], 3
// 006d42db  b8ee426d00           mov eax, 0x6d42ee
// 006d42e0  c3                   ret 
// 006d42e1  c745fc03000000       mov dword ptr [ebp - 4], 3
// 006d42e8  b8ee426d00           mov eax, 0x6d42ee
// 006d42ed  c3                   ret 
// 006d42ee  8b7de8               mov edi, dword ptr [ebp - 0x18]
// 006d42f1  8d8d14ffffff         lea ecx, [ebp - 0xec]
// 006d42f7  e8347e0e00           call 0x7bc130
// 006d42fc  8d8d5cffffff         lea ecx, [ebp - 0xa4]
// 006d4302  e86d7f0e00           call 0x7bc274
// 006d4307  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 006d430a  50                   push eax
// 006d430b  ff15d4218000         call dword ptr [0x8021d4]
// 006d4311  8d8d14ffffff         lea ecx, [ebp - 0xec]
// 006d4317  c645fc02             mov byte ptr [ebp - 4], 2
// 006d431b  e8047e0e00           call 0x7bc124
// 006d4320  8d8d5cffffff         lea ecx, [ebp - 0xa4]
// 006d4326  c645fc01             mov byte ptr [ebp - 4], 1
// 006d432a  e81f7e0e00           call 0x7bc14e
// 006d432f  837de400             cmp dword ptr [ebp - 0x1c], 0
// 006d4333  7445                 je 0x6d437a
// 006d4335  6a01                 push 1
// 006d4337  ff15ec2d8000         call dword ptr [0x802dec]
// 006d433d  85c0                 test eax, eax
// 006d433f  7439                 je 0x6d437a
// 006d4341  6a01                 push 1
// 006d4343  ff15e42d8000         call dword ptr [0x802de4]
// 006d4349  8bf0                 mov esi, eax
// 006d434b  85f6                 test esi, esi
// 006d434d  742b                 je 0x6d437a
// 006d434f  56                   push esi
// 006d4350  ff15d8218000         call dword ptr [0x8021d8]
// 006d4356  8b17                 mov edx, dword ptr [edi]
// 006d4358  8b9240020000         mov edx, dword ptr [edx + 0x240]
// 006d435e  8d4d90               lea ecx, [ebp - 0x70]
// 006d4361  51                   push ecx
// 006d4362  50                   push eax
// 006d4363  8bcf                 mov ecx, edi
// 006d4365  ffd2                 call edx
// 006d4367  85c0                 test eax, eax
// 006d4369  7508                 jne 0x6d4373
// 006d436b  8d4d90               lea ecx, [ebp - 0x70]
// 006d436e  e8dd340000           call 0x6d7850
// 006d4373  56                   push esi
// 006d4374  ff15d4218000         call dword ptr [0x8021d4]
// 006d437a  ff15e82d8000         call dword ptr [0x802de8]
// 006d4380  8bcf                 mov ecx, edi
// 006d4382  897de0               mov dword ptr [ebp - 0x20], edi
// 006d4385  e8c64cffff           call 0x6c9050
// 006d438a  8d4d90               lea ecx, [ebp - 0x70]
// 006d438d  c645fc07             mov byte ptr [ebp - 4], 7
// 006d4391  e8ba5c0000           call 0x6da050
// 006d4396  8945e4               mov dword ptr [ebp - 0x1c], eax
// 006d4399  85c0                 test eax, eax
// 006d439b  7e49                 jle 0x6d43e6
// 006d439d  33db                 xor ebx, ebx
// 006d439f  85c0                 test eax, eax
// 006d43a1  7e2c                 jle 0x6d43cf
// 006d43a3  53                   push ebx
// 006d43a4  8d4d90               lea ecx, [ebp - 0x70]
// 006d43a7  e874350000           call 0x6d7920
// 006d43ac  8bf0                 mov esi, eax
// 006d43ae  85f6                 test esi, esi
// 006d43b0  7417                 je 0x6d43c9
// 006d43b2  8d4604               lea eax, [esi + 4]
// 006d43b5  50                   push eax
// 006d43b6  ff15b0218000         call dword ptr [0x8021b0]
// 006d43bc  8b17                 mov edx, dword ptr [edi]
// 006d43be  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 006d43c4  56                   push esi
// 006d43c5  8bcf                 mov ecx, edi
// 006d43c7  ffd0                 call eax
// 006d43c9  43                   inc ebx
// 006d43ca  3b5de4               cmp ebx, dword ptr [ebp - 0x1c]
// 006d43cd  7cd4                 jl 0x6d43a3
// 006d43cf  8b17                 mov edx, dword ptr [edi]
// 006d43d1  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 006d43d7  8bcf                 mov ecx, edi
// 006d43d9  ffd0                 call eax
// 006d43db  8d4d90               lea ecx, [ebp - 0x70]
// 006d43de  51                   push ecx
// 006d43df  8bcf                 mov ecx, edi
// 006d43e1  e8aaf3ffff           call 0x6d3790
// 006d43e6  8bcf                 mov ecx, edi
// 006d43e8  c645fc01             mov byte ptr [ebp - 4], 1
// 006d43ec  e8afb4ffff           call 0x6cf8a0
// 006d43f1  8d4d90               lea ecx, [ebp - 0x70]
// 006d43f4  c645fc00             mov byte ptr [ebp - 4], 0
// 006d43f8  e8f3370000           call 0x6d7bf0
// 006d43fd  8d4def               lea ecx, [ebp - 0x11]
// 006d4400  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006d4407  e85450d7ff           call 0x449460
// 006d440c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006d440f  64890d00000000       mov dword ptr fs:[0], ecx
// 006d4416  59                   pop ecx
// 006d4417  5f                   pop edi
// 006d4418  5e                   pop esi
// 006d4419  5b                   pop ebx
// 006d441a  8b8d04040000         mov ecx, dword ptr [ebp + 0x404]
// 006d4420  33cd                 xor ecx, ebp
// 006d4422  e8abd9fcff           call 0x6a1dd2
// 006d4427  81c508040000         add ebp, 0x408
// 006d442d  8be5                 mov esp, ebp
// 006d442f  5d                   pop ebp
// 006d4430  c3                   ret 

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportControl.cpp
