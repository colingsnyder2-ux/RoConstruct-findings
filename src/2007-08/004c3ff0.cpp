// from server: 100% by auto
// roc 2007-08 004c3ff0  unit: RakPeer  size: 362 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c3ff0
//
// 004c3ff0  6aff                 push -1
// 004c3ff2  6818bd7400           push 0x74bd18
// 004c3ff7  64a100000000         mov eax, dword ptr fs:[0]
// 004c3ffd  50                   push eax
// 004c3ffe  83ec14               sub esp, 0x14
// 004c4001  53                   push ebx
// 004c4002  55                   push ebp
// 004c4003  56                   push esi
// 004c4004  57                   push edi
// 004c4005  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c400a  33c4                 xor eax, esp
// 004c400c  50                   push eax
// 004c400d  8d442428             lea eax, [esp + 0x28]
// 004c4011  64a300000000         mov dword ptr fs:[0], eax
// 004c4017  8bf9                 mov edi, ecx
// 004c4019  897c2414             mov dword ptr [esp + 0x14], edi
// 004c401d  33f6                 xor esi, esi
// 004c401f  3937                 cmp dword ptr [edi], esi
// 004c4021  0f841f010000         je 0x4c4146
// 004c4027  33c9                 xor ecx, ecx
// 004c4029  b810000000           mov eax, 0x10
// 004c402e  89442424             mov dword ptr [esp + 0x24], eax
// 004c4032  ba04000000           mov edx, 4
// 004c4037  f7e2                 mul edx
// 004c4039  0f90c1               seto cl
// 004c403c  f7d9                 neg ecx
// 004c403e  0bc8                 or ecx, eax
// 004c4040  51                   push ecx
// 004c4041  e8b0be1600           call 0x62fef6
// 004c4046  83c404               add esp, 4
// 004c4049  89442418             mov dword ptr [esp + 0x18], eax
// 004c404d  8974241c             mov dword ptr [esp + 0x1c], esi
// 004c4051  89742420             mov dword ptr [esp + 0x20], esi
// 004c4055  57                   push edi
// 004c4056  8d4c241c             lea ecx, [esp + 0x1c]
// 004c405a  89742434             mov dword ptr [esp + 0x34], esi
// 004c405e  e84d0c0000           call 0x4c4cb0
// 004c4063  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004c4067  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004c406b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004c406f  90                   nop 
// 004c4070  8bc3                 mov eax, ebx
// 004c4072  2bc6                 sub eax, esi
// 004c4074  3bf3                 cmp esi, ebx
// 004c4076  7602                 jbe 0x4c407a
// 004c4078  03c5                 add eax, ebp
// 004c407a  85c0                 test eax, eax
// 004c407c  0f8681000000         jbe 0x4c4103
// 004c4082  83c601               add esi, 1
// 004c4085  3bf5                 cmp esi, ebp
// 004c4087  8974241c             mov dword ptr [esp + 0x1c], esi
// 004c408b  7510                 jne 0x4c409d
// 004c408d  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c4091  8b7ca8fc             mov edi, dword ptr [eax + ebp*4 - 4]
// 004c4095  33f6                 xor esi, esi
// 004c4097  8974241c             mov dword ptr [esp + 0x1c], esi
// 004c409b  eb16                 jmp 0x4c40b3
// 004c409d  85f6                 test esi, esi
// 004c409f  750a                 jne 0x4c40ab
// 004c40a1  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c40a5  8b7ca8fc             mov edi, dword ptr [eax + ebp*4 - 4]
// 004c40a9  eb08                 jmp 0x4c40b3
// 004c40ab  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c40af  8b7cb1fc             mov edi, dword ptr [ecx + esi*4 - 4]
// 004c40b3  837f0800             cmp dword ptr [edi + 8], 0
// 004c40b7  8d4708               lea eax, [edi + 8]
// 004c40ba  7416                 je 0x4c40d2
// 004c40bc  50                   push eax
// 004c40bd  8d4c241c             lea ecx, [esp + 0x1c]
// 004c40c1  e8ea0b0000           call 0x4c4cb0
// 004c40c6  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004c40ca  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004c40ce  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004c40d2  837f0c00             cmp dword ptr [edi + 0xc], 0
// 004c40d6  8d470c               lea eax, [edi + 0xc]
// 004c40d9  7416                 je 0x4c40f1
// 004c40db  50                   push eax
// 004c40dc  8d4c241c             lea ecx, [esp + 0x1c]
// 004c40e0  e8cb0b0000           call 0x4c4cb0
// 004c40e5  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004c40e9  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004c40ed  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004c40f1  57                   push edi
// 004c40f2  e86bbb1600           call 0x62fc62
// 004c40f7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004c40fb  83c404               add esp, 4
// 004c40fe  e96dffffff           jmp 0x4c4070
// 004c4103  8d7704               lea esi, [edi + 4]
// 004c4106  bf00010000           mov edi, 0x100
// 004c410b  eb03                 jmp 0x4c4110
// 004c410d  8d4900               lea ecx, [ecx]
// 004c4110  8b06                 mov eax, dword ptr [esi]
// 004c4112  50                   push eax
// 004c4113  e84abb1600           call 0x62fc62
// 004c4118  83c404               add esp, 4
// 004c411b  83c608               add esi, 8
// 004c411e  83ef01               sub edi, 1
// 004c4121  75ed                 jne 0x4c4110
// 004c4123  85ed                 test ebp, ebp
// 004c4125  8b542414             mov edx, dword ptr [esp + 0x14]
// 004c4129  c70200000000         mov dword ptr [edx], 0
// 004c412f  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 004c4137  760d                 jbe 0x4c4146
// 004c4139  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c413d  50                   push eax
// 004c413e  e81fbb1600           call 0x62fc62
// 004c4143  83c404               add esp, 4
// 004c4146  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004c414a  64890d00000000       mov dword ptr fs:[0], ecx
// 004c4151  59                   pop ecx
// 004c4152  5f                   pop edi
// 004c4153  5e                   pop esi
// 004c4154  5d                   pop ebp
// 004c4155  5b                   pop ebx
// 004c4156  83c420               add esp, 0x20
// 004c4159  c3                   ret 

// from server: 72% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp