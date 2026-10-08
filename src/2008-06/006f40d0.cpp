// from server: 100% by auto
// roc 2008-06 006f40d0  unit: CXTPControls  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f40d0
//
// 006f40d0  83ec10               sub esp, 0x10
// 006f40d3  8b442424             mov eax, dword ptr [esp + 0x24]
// 006f40d7  8b00                 mov eax, dword ptr [eax]
// 006f40d9  53                   push ebx
// 006f40da  55                   push ebp
// 006f40db  56                   push esi
// 006f40dc  57                   push edi
// 006f40dd  8be9                 mov ebp, ecx
// 006f40df  33db                 xor ebx, ebx
// 006f40e1  53                   push ebx
// 006f40e2  8d4c241c             lea ecx, [esp + 0x1c]
// 006f40e6  83e010               and eax, 0x10
// 006f40e9  51                   push ecx
// 006f40ea  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 006f40ed  89442418             mov dword ptr [esp + 0x18], eax
// 006f40f1  e82afbfcff           call 0x6c3c20
// 006f40f6  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 006f40f9  33f6                 xor esi, esi
// 006f40fb  3bd3                 cmp edx, ebx
// 006f40fd  0f8e32010000         jle 0x6f4235
// 006f4103  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006f4107  83c730               add edi, 0x30
// 006f410a  8d9b00000000         lea ebx, [ebx]
// 006f4110  395ff8               cmp dword ptr [edi - 8], ebx
// 006f4113  0f840d010000         je 0x6f4226
// 006f4119  3bf3                 cmp esi, ebx
// 006f411b  7c15                 jl 0x6f4132
// 006f411d  3bf2                 cmp esi, edx
// 006f411f  7d11                 jge 0x6f4132
// 006f4121  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 006f4124  0f8d31010000         jge 0x6f425b
// 006f412a  8b4528               mov eax, dword ptr [ebp + 0x28]
// 006f412d  8b04b0               mov eax, dword ptr [eax + esi*4]
// 006f4130  eb02                 jmp 0x6f4134
// 006f4132  33c0                 xor eax, eax
// 006f4134  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 006f413a  3bcb                 cmp ecx, ebx
// 006f413c  7404                 je 0x6f4142
// 006f413e  8bc1                 mov eax, ecx
// 006f4140  eb2a                 jmp 0x6f416c
// 006f4142  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 006f4148  3bcb                 cmp ecx, ebx
// 006f414a  7e04                 jle 0x6f4150
// 006f414c  8bc1                 mov eax, ecx
// 006f414e  eb1c                 jmp 0x6f416c
// 006f4150  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 006f4156  3bcb                 cmp ecx, ebx
// 006f4158  740c                 je 0x6f4166
// 006f415a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006f415d  3bc3                 cmp eax, ebx
// 006f415f  7f13                 jg 0x6f4174
// 006f4161  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006f4164  eb06                 jmp 0x6f416c
// 006f4166  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 006f416c  3bc3                 cmp eax, ebx
// 006f416e  0f8e88000000         jle 0x6f41fc
// 006f4174  3bf3                 cmp esi, ebx
// 006f4176  7c15                 jl 0x6f418d
// 006f4178  3bf2                 cmp esi, edx
// 006f417a  7d11                 jge 0x6f418d
// 006f417c  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 006f417f  0f8dd6000000         jge 0x6f425b
// 006f4185  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 006f4188  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 006f418b  eb02                 jmp 0x6f418f
// 006f418d  33c0                 xor eax, eax
// 006f418f  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 006f4195  3bcb                 cmp ecx, ebx
// 006f4197  7404                 je 0x6f419d
// 006f4199  8bc1                 mov eax, ecx
// 006f419b  eb2a                 jmp 0x6f41c7
// 006f419d  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 006f41a3  3bcb                 cmp ecx, ebx
// 006f41a5  7e04                 jle 0x6f41ab
// 006f41a7  8bc1                 mov eax, ecx
// 006f41a9  eb1c                 jmp 0x6f41c7
// 006f41ab  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 006f41b1  3bcb                 cmp ecx, ebx
// 006f41b3  740c                 je 0x6f41c1
// 006f41b5  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006f41b8  3bc3                 cmp eax, ebx
// 006f41ba  7f0b                 jg 0x6f41c7
// 006f41bc  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006f41bf  eb06                 jmp 0x6f41c7
// 006f41c1  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 006f41c7  3bf3                 cmp esi, ebx
// 006f41c9  7c15                 jl 0x6f41e0
// 006f41cb  3bf2                 cmp esi, edx
// 006f41cd  7d11                 jge 0x6f41e0
// 006f41cf  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 006f41d2  0f8d83000000         jge 0x6f425b
// 006f41d8  8b5528               mov edx, dword ptr [ebp + 0x28]
// 006f41db  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 006f41de  eb02                 jmp 0x6f41e2
// 006f41e0  33c9                 xor ecx, ecx
// 006f41e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f41e6  52                   push edx
// 006f41e7  50                   push eax
// 006f41e8  e82370fbff           call 0x6ab210
// 006f41ed  8bc8                 mov ecx, eax
// 006f41ef  e8fc9ffcff           call 0x6be1f0
// 006f41f4  f7d8                 neg eax
// 006f41f6  1bc0                 sbb eax, eax
// 006f41f8  f7d8                 neg eax
// 006f41fa  eb02                 jmp 0x6f41fe
// 006f41fc  33c0                 xor eax, eax
// 006f41fe  3bf3                 cmp esi, ebx
// 006f4200  891f                 mov dword ptr [edi], ebx
// 006f4202  895ffc               mov dword ptr [edi - 4], ebx
// 006f4205  7c0d                 jl 0x6f4214
// 006f4207  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 006f420a  7d08                 jge 0x6f4214
// 006f420c  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 006f420f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 006f4212  eb02                 jmp 0x6f4216
// 006f4214  33c9                 xor ecx, ecx
// 006f4216  33d2                 xor edx, edx
// 006f4218  3bc3                 cmp eax, ebx
// 006f421a  0f95c2               setne dl
// 006f421d  83c203               add edx, 3
// 006f4220  899148010000         mov dword ptr [ecx + 0x148], edx
// 006f4226  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 006f4229  46                   inc esi
// 006f422a  83c740               add edi, 0x40
// 006f422d  3bf2                 cmp esi, edx
// 006f422f  0f8cdbfeffff         jl 0x6f4110
// 006f4235  8b442434             mov eax, dword ptr [esp + 0x34]
// 006f4239  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006f423d  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006f4241  8b742424             mov esi, dword ptr [esp + 0x24]
// 006f4245  50                   push eax
// 006f4246  51                   push ecx
// 006f4247  57                   push edi
// 006f4248  56                   push esi
// 006f4249  8bcd                 mov ecx, ebp
// 006f424b  e840eaffff           call 0x6f2c90
// 006f4250  395c2410             cmp dword ptr [esp + 0x10], ebx
// 006f4254  740a                 je 0x6f4260
// 006f4256  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f4259  eb07                 jmp 0x6f4262
// 006f425b  e8e4c6faff           call 0x6a0944
// 006f4260  8b0e                 mov ecx, dword ptr [esi]
// 006f4262  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f4266  3bc8                 cmp ecx, eax
// 006f4268  7e25                 jle 0x6f428f
// 006f426a  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006f426e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006f4272  53                   push ebx
// 006f4273  50                   push eax
// 006f4274  52                   push edx
// 006f4275  57                   push edi
// 006f4276  8d442420             lea eax, [esp + 0x20]
// 006f427a  50                   push eax
// 006f427b  8bcd                 mov ecx, ebp
// 006f427d  e87ef9ffff           call 0x6f3c00
// 006f4282  8b08                 mov ecx, dword ptr [eax]
// 006f4284  890e                 mov dword ptr [esi], ecx
// 006f4286  8b5004               mov edx, dword ptr [eax + 4]
// 006f4289  895604               mov dword ptr [esi + 4], edx
// 006f428c  830b01               or dword ptr [ebx], 1
// 006f428f  5f                   pop edi
// 006f4290  8bc6                 mov eax, esi
// 006f4292  5e                   pop esi
// 006f4293  5d                   pop ebp
// 006f4294  5b                   pop ebx
// 006f4295  83c410               add esp, 0x10
// 006f4298  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
