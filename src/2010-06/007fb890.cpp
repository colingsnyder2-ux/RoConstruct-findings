// roc 2010-06 007fb890  unit: CXTPControls  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fb890
//
// 007fb890  83ec10               sub esp, 0x10
// 007fb893  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fb897  8b00                 mov eax, dword ptr [eax]
// 007fb899  53                   push ebx
// 007fb89a  55                   push ebp
// 007fb89b  56                   push esi
// 007fb89c  57                   push edi
// 007fb89d  8be9                 mov ebp, ecx
// 007fb89f  33db                 xor ebx, ebx
// 007fb8a1  53                   push ebx
// 007fb8a2  8d4c241c             lea ecx, [esp + 0x1c]
// 007fb8a6  83e010               and eax, 0x10
// 007fb8a9  51                   push ecx
// 007fb8aa  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 007fb8ad  89442418             mov dword ptr [esp + 0x18], eax
// 007fb8b1  e8dabafcff           call 0x7c7390
// 007fb8b6  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 007fb8b9  33f6                 xor esi, esi
// 007fb8bb  3bd3                 cmp edx, ebx
// 007fb8bd  0f8e32010000         jle 0x7fb9f5
// 007fb8c3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007fb8c7  83c730               add edi, 0x30
// 007fb8ca  8d9b00000000         lea ebx, [ebx]
// 007fb8d0  395ff8               cmp dword ptr [edi - 8], ebx
// 007fb8d3  0f840d010000         je 0x7fb9e6
// 007fb8d9  3bf3                 cmp esi, ebx
// 007fb8db  7c15                 jl 0x7fb8f2
// 007fb8dd  3bf2                 cmp esi, edx
// 007fb8df  7d11                 jge 0x7fb8f2
// 007fb8e1  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 007fb8e4  0f8d31010000         jge 0x7fba1b
// 007fb8ea  8b4528               mov eax, dword ptr [ebp + 0x28]
// 007fb8ed  8b04b0               mov eax, dword ptr [eax + esi*4]
// 007fb8f0  eb02                 jmp 0x7fb8f4
// 007fb8f2  33c0                 xor eax, eax
// 007fb8f4  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 007fb8fa  3bcb                 cmp ecx, ebx
// 007fb8fc  7404                 je 0x7fb902
// 007fb8fe  8bc1                 mov eax, ecx
// 007fb900  eb2a                 jmp 0x7fb92c
// 007fb902  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 007fb908  3bcb                 cmp ecx, ebx
// 007fb90a  7e04                 jle 0x7fb910
// 007fb90c  8bc1                 mov eax, ecx
// 007fb90e  eb1c                 jmp 0x7fb92c
// 007fb910  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 007fb916  3bcb                 cmp ecx, ebx
// 007fb918  740c                 je 0x7fb926
// 007fb91a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 007fb91d  3bc3                 cmp eax, ebx
// 007fb91f  7f13                 jg 0x7fb934
// 007fb921  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007fb924  eb06                 jmp 0x7fb92c
// 007fb926  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 007fb92c  3bc3                 cmp eax, ebx
// 007fb92e  0f8e88000000         jle 0x7fb9bc
// 007fb934  3bf3                 cmp esi, ebx
// 007fb936  7c15                 jl 0x7fb94d
// 007fb938  3bf2                 cmp esi, edx
// 007fb93a  7d11                 jge 0x7fb94d
// 007fb93c  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 007fb93f  0f8dd6000000         jge 0x7fba1b
// 007fb945  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 007fb948  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 007fb94b  eb02                 jmp 0x7fb94f
// 007fb94d  33c0                 xor eax, eax
// 007fb94f  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 007fb955  3bcb                 cmp ecx, ebx
// 007fb957  7404                 je 0x7fb95d
// 007fb959  8bc1                 mov eax, ecx
// 007fb95b  eb2a                 jmp 0x7fb987
// 007fb95d  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 007fb963  3bcb                 cmp ecx, ebx
// 007fb965  7e04                 jle 0x7fb96b
// 007fb967  8bc1                 mov eax, ecx
// 007fb969  eb1c                 jmp 0x7fb987
// 007fb96b  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 007fb971  3bcb                 cmp ecx, ebx
// 007fb973  740c                 je 0x7fb981
// 007fb975  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 007fb978  3bc3                 cmp eax, ebx
// 007fb97a  7f0b                 jg 0x7fb987
// 007fb97c  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007fb97f  eb06                 jmp 0x7fb987
// 007fb981  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 007fb987  3bf3                 cmp esi, ebx
// 007fb989  7c15                 jl 0x7fb9a0
// 007fb98b  3bf2                 cmp esi, edx
// 007fb98d  7d11                 jge 0x7fb9a0
// 007fb98f  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 007fb992  0f8d83000000         jge 0x7fba1b
// 007fb998  8b5528               mov edx, dword ptr [ebp + 0x28]
// 007fb99b  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 007fb99e  eb02                 jmp 0x7fb9a2
// 007fb9a0  33c9                 xor ecx, ecx
// 007fb9a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007fb9a6  52                   push edx
// 007fb9a7  50                   push eax
// 007fb9a8  e8a3e6faff           call 0x7aa050
// 007fb9ad  8bc8                 mov ecx, eax
// 007fb9af  e80c5ffcff           call 0x7c18c0
// 007fb9b4  f7d8                 neg eax
// 007fb9b6  1bc0                 sbb eax, eax
// 007fb9b8  f7d8                 neg eax
// 007fb9ba  eb02                 jmp 0x7fb9be
// 007fb9bc  33c0                 xor eax, eax
// 007fb9be  3bf3                 cmp esi, ebx
// 007fb9c0  891f                 mov dword ptr [edi], ebx
// 007fb9c2  895ffc               mov dword ptr [edi - 4], ebx
// 007fb9c5  7c0d                 jl 0x7fb9d4
// 007fb9c7  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 007fb9ca  7d08                 jge 0x7fb9d4
// 007fb9cc  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 007fb9cf  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 007fb9d2  eb02                 jmp 0x7fb9d6
// 007fb9d4  33c9                 xor ecx, ecx
// 007fb9d6  33d2                 xor edx, edx
// 007fb9d8  3bc3                 cmp eax, ebx
// 007fb9da  0f95c2               setne dl
// 007fb9dd  83c203               add edx, 3
// 007fb9e0  899148010000         mov dword ptr [ecx + 0x148], edx
// 007fb9e6  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 007fb9e9  46                   inc esi
// 007fb9ea  83c740               add edi, 0x40
// 007fb9ed  3bf2                 cmp esi, edx
// 007fb9ef  0f8cdbfeffff         jl 0x7fb8d0
// 007fb9f5  8b442434             mov eax, dword ptr [esp + 0x34]
// 007fb9f9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fb9fd  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007fba01  8b742424             mov esi, dword ptr [esp + 0x24]
// 007fba05  50                   push eax
// 007fba06  51                   push ecx
// 007fba07  57                   push edi
// 007fba08  56                   push esi
// 007fba09  8bcd                 mov ecx, ebp
// 007fba0b  e840eaffff           call 0x7fa450
// 007fba10  395c2410             cmp dword ptr [esp + 0x10], ebx
// 007fba14  740a                 je 0x7fba20
// 007fba16  8b4e04               mov ecx, dword ptr [esi + 4]
// 007fba19  eb07                 jmp 0x7fba22
// 007fba1b  e82cc2faff           call 0x7a7c4c
// 007fba20  8b0e                 mov ecx, dword ptr [esi]
// 007fba22  8b442430             mov eax, dword ptr [esp + 0x30]
// 007fba26  3bc8                 cmp ecx, eax
// 007fba28  7e25                 jle 0x7fba4f
// 007fba2a  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007fba2e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007fba32  53                   push ebx
// 007fba33  50                   push eax
// 007fba34  52                   push edx
// 007fba35  57                   push edi
// 007fba36  8d442420             lea eax, [esp + 0x20]
// 007fba3a  50                   push eax
// 007fba3b  8bcd                 mov ecx, ebp
// 007fba3d  e87ef9ffff           call 0x7fb3c0
// 007fba42  8b08                 mov ecx, dword ptr [eax]
// 007fba44  890e                 mov dword ptr [esi], ecx
// 007fba46  8b5004               mov edx, dword ptr [eax + 4]
// 007fba49  895604               mov dword ptr [esi + 4], edx
// 007fba4c  830b01               or dword ptr [ebx], 1
// 007fba4f  5f                   pop edi
// 007fba50  8bc6                 mov eax, esi
// 007fba52  5e                   pop esi
// 007fba53  5d                   pop ebp
// 007fba54  5b                   pop ebx
// 007fba55  83c410               add esp, 0x10
// 007fba58  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
