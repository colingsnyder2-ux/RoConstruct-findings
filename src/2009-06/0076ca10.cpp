// roc 2009-06 0076ca10  unit: CXTPControls  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076ca10
//
// 0076ca10  83ec10               sub esp, 0x10
// 0076ca13  8b442424             mov eax, dword ptr [esp + 0x24]
// 0076ca17  8b00                 mov eax, dword ptr [eax]
// 0076ca19  53                   push ebx
// 0076ca1a  55                   push ebp
// 0076ca1b  56                   push esi
// 0076ca1c  57                   push edi
// 0076ca1d  8be9                 mov ebp, ecx
// 0076ca1f  33db                 xor ebx, ebx
// 0076ca21  53                   push ebx
// 0076ca22  8d4c241c             lea ecx, [esp + 0x1c]
// 0076ca26  83e010               and eax, 0x10
// 0076ca29  51                   push ecx
// 0076ca2a  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0076ca2d  89442418             mov dword ptr [esp + 0x18], eax
// 0076ca31  e8aaf7fcff           call 0x73c1e0
// 0076ca36  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 0076ca39  33f6                 xor esi, esi
// 0076ca3b  3bd3                 cmp edx, ebx
// 0076ca3d  0f8e32010000         jle 0x76cb75
// 0076ca43  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0076ca47  83c730               add edi, 0x30
// 0076ca4a  8d9b00000000         lea ebx, [ebx]
// 0076ca50  395ff8               cmp dword ptr [edi - 8], ebx
// 0076ca53  0f840d010000         je 0x76cb66
// 0076ca59  3bf3                 cmp esi, ebx
// 0076ca5b  7c15                 jl 0x76ca72
// 0076ca5d  3bf2                 cmp esi, edx
// 0076ca5f  7d11                 jge 0x76ca72
// 0076ca61  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 0076ca64  0f8d31010000         jge 0x76cb9b
// 0076ca6a  8b4528               mov eax, dword ptr [ebp + 0x28]
// 0076ca6d  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0076ca70  eb02                 jmp 0x76ca74
// 0076ca72  33c0                 xor eax, eax
// 0076ca74  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 0076ca7a  3bcb                 cmp ecx, ebx
// 0076ca7c  7404                 je 0x76ca82
// 0076ca7e  8bc1                 mov eax, ecx
// 0076ca80  eb2a                 jmp 0x76caac
// 0076ca82  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 0076ca88  3bcb                 cmp ecx, ebx
// 0076ca8a  7e04                 jle 0x76ca90
// 0076ca8c  8bc1                 mov eax, ecx
// 0076ca8e  eb1c                 jmp 0x76caac
// 0076ca90  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 0076ca96  3bcb                 cmp ecx, ebx
// 0076ca98  740c                 je 0x76caa6
// 0076ca9a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0076ca9d  3bc3                 cmp eax, ebx
// 0076ca9f  7f13                 jg 0x76cab4
// 0076caa1  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0076caa4  eb06                 jmp 0x76caac
// 0076caa6  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0076caac  3bc3                 cmp eax, ebx
// 0076caae  0f8e88000000         jle 0x76cb3c
// 0076cab4  3bf3                 cmp esi, ebx
// 0076cab6  7c15                 jl 0x76cacd
// 0076cab8  3bf2                 cmp esi, edx
// 0076caba  7d11                 jge 0x76cacd
// 0076cabc  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 0076cabf  0f8dd6000000         jge 0x76cb9b
// 0076cac5  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 0076cac8  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 0076cacb  eb02                 jmp 0x76cacf
// 0076cacd  33c0                 xor eax, eax
// 0076cacf  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 0076cad5  3bcb                 cmp ecx, ebx
// 0076cad7  7404                 je 0x76cadd
// 0076cad9  8bc1                 mov eax, ecx
// 0076cadb  eb2a                 jmp 0x76cb07
// 0076cadd  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 0076cae3  3bcb                 cmp ecx, ebx
// 0076cae5  7e04                 jle 0x76caeb
// 0076cae7  8bc1                 mov eax, ecx
// 0076cae9  eb1c                 jmp 0x76cb07
// 0076caeb  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 0076caf1  3bcb                 cmp ecx, ebx
// 0076caf3  740c                 je 0x76cb01
// 0076caf5  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0076caf8  3bc3                 cmp eax, ebx
// 0076cafa  7f0b                 jg 0x76cb07
// 0076cafc  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0076caff  eb06                 jmp 0x76cb07
// 0076cb01  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0076cb07  3bf3                 cmp esi, ebx
// 0076cb09  7c15                 jl 0x76cb20
// 0076cb0b  3bf2                 cmp esi, edx
// 0076cb0d  7d11                 jge 0x76cb20
// 0076cb0f  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 0076cb12  0f8d83000000         jge 0x76cb9b
// 0076cb18  8b5528               mov edx, dword ptr [ebp + 0x28]
// 0076cb1b  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 0076cb1e  eb02                 jmp 0x76cb22
// 0076cb20  33c9                 xor ecx, ecx
// 0076cb22  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076cb26  52                   push edx
// 0076cb27  50                   push eax
// 0076cb28  e8c32dfbff           call 0x71f8f0
// 0076cb2d  8bc8                 mov ecx, eax
// 0076cb2f  e8ac9cfcff           call 0x7367e0
// 0076cb34  f7d8                 neg eax
// 0076cb36  1bc0                 sbb eax, eax
// 0076cb38  f7d8                 neg eax
// 0076cb3a  eb02                 jmp 0x76cb3e
// 0076cb3c  33c0                 xor eax, eax
// 0076cb3e  3bf3                 cmp esi, ebx
// 0076cb40  891f                 mov dword ptr [edi], ebx
// 0076cb42  895ffc               mov dword ptr [edi - 4], ebx
// 0076cb45  7c0d                 jl 0x76cb54
// 0076cb47  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 0076cb4a  7d08                 jge 0x76cb54
// 0076cb4c  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 0076cb4f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0076cb52  eb02                 jmp 0x76cb56
// 0076cb54  33c9                 xor ecx, ecx
// 0076cb56  33d2                 xor edx, edx
// 0076cb58  3bc3                 cmp eax, ebx
// 0076cb5a  0f95c2               setne dl
// 0076cb5d  83c203               add edx, 3
// 0076cb60  899148010000         mov dword ptr [ecx + 0x148], edx
// 0076cb66  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 0076cb69  46                   inc esi
// 0076cb6a  83c740               add edi, 0x40
// 0076cb6d  3bf2                 cmp esi, edx
// 0076cb6f  0f8cdbfeffff         jl 0x76ca50
// 0076cb75  8b442434             mov eax, dword ptr [esp + 0x34]
// 0076cb79  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0076cb7d  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0076cb81  8b742424             mov esi, dword ptr [esp + 0x24]
// 0076cb85  50                   push eax
// 0076cb86  51                   push ecx
// 0076cb87  57                   push edi
// 0076cb88  56                   push esi
// 0076cb89  8bcd                 mov ecx, ebp
// 0076cb8b  e840eaffff           call 0x76b5d0
// 0076cb90  395c2410             cmp dword ptr [esp + 0x10], ebx
// 0076cb94  740a                 je 0x76cba0
// 0076cb96  8b4e04               mov ecx, dword ptr [esi + 4]
// 0076cb99  eb07                 jmp 0x76cba2
// 0076cb9b  e844c1faff           call 0x718ce4
// 0076cba0  8b0e                 mov ecx, dword ptr [esi]
// 0076cba2  8b442430             mov eax, dword ptr [esp + 0x30]
// 0076cba6  3bc8                 cmp ecx, eax
// 0076cba8  7e25                 jle 0x76cbcf
// 0076cbaa  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0076cbae  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0076cbb2  53                   push ebx
// 0076cbb3  50                   push eax
// 0076cbb4  52                   push edx
// 0076cbb5  57                   push edi
// 0076cbb6  8d442420             lea eax, [esp + 0x20]
// 0076cbba  50                   push eax
// 0076cbbb  8bcd                 mov ecx, ebp
// 0076cbbd  e87ef9ffff           call 0x76c540
// 0076cbc2  8b08                 mov ecx, dword ptr [eax]
// 0076cbc4  890e                 mov dword ptr [esi], ecx
// 0076cbc6  8b5004               mov edx, dword ptr [eax + 4]
// 0076cbc9  895604               mov dword ptr [esi + 4], edx
// 0076cbcc  830b01               or dword ptr [ebx], 1
// 0076cbcf  5f                   pop edi
// 0076cbd0  8bc6                 mov eax, esi
// 0076cbd2  5e                   pop esi
// 0076cbd3  5d                   pop ebp
// 0076cbd4  5b                   pop ebx
// 0076cbd5  83c410               add esp, 0x10
// 0076cbd8  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
