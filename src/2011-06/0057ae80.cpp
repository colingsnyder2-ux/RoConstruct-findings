// roc 2011-06 0057ae80  unit: seg_00570000  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057ae80
//
// 0057ae80  56                   push esi
// 0057ae81  8b742408             mov esi, dword ptr [esp + 8]
// 0057ae85  57                   push edi
// 0057ae86  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 0057ae8c  8b4710               mov eax, dword ptr [edi + 0x10]
// 0057ae8f  894674               mov dword ptr [esi + 0x74], eax
// 0057ae92  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0057ae95  83e800               sub eax, 0
// 0057ae98  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0057ae9b  894e70               mov dword ptr [esi + 0x70], ecx
// 0057ae9e  0f84a3000000         je 0x57af47
// 0057aea4  83e801               sub eax, 1
// 0057aea7  53                   push ebx
// 0057aea8  7460                 je 0x57af0a
// 0057aeaa  83e801               sub eax, 1
// 0057aead  7417                 je 0x57aec6
// 0057aeaf  8b16                 mov edx, dword ptr [esi]
// 0057aeb1  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 0057aeb8  8b06                 mov eax, dword ptr [esi]
// 0057aeba  8b08                 mov ecx, dword ptr [eax]
// 0057aebc  56                   push esi
// 0057aebd  ffd1                 call ecx
// 0057aebf  83c404               add esp, 4
// 0057aec2  5b                   pop ebx
// 0057aec3  5f                   pop edi
// 0057aec4  5e                   pop esi
// 0057aec5  c3                   ret 
// 0057aec6  837f4400             cmp dword ptr [edi + 0x44], 0
// 0057aeca  8d5f44               lea ebx, [edi + 0x44]
// 0057aecd  c74704a0ac5700       mov dword ptr [edi + 4], 0x57aca0
// 0057aed4  c6475400             mov byte ptr [edi + 0x54], 0
// 0057aed8  7505                 jne 0x57aedf
// 0057aeda  e861ffffff           call 0x57ae40
// 0057aedf  55                   push ebp
// 0057aee0  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 0057aee3  33ff                 xor edi, edi
// 0057aee5  397e64               cmp dword ptr [esi + 0x64], edi
// 0057aee8  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 0057aeec  7e17                 jle 0x57af05
// 0057aeee  8bff                 mov edi, edi
// 0057aef0  8b13                 mov edx, dword ptr [ebx]
// 0057aef2  55                   push ebp
// 0057aef3  52                   push edx
// 0057aef4  e847cffeff           call 0x567e40
// 0057aef9  47                   inc edi
// 0057aefa  83c408               add esp, 8
// 0057aefd  83c304               add ebx, 4
// 0057af00  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 0057af03  7ceb                 jl 0x57aef0
// 0057af05  5d                   pop ebp
// 0057af06  5b                   pop ebx
// 0057af07  5f                   pop edi
// 0057af08  5e                   pop esi
// 0057af09  c3                   ret 
// 0057af0a  837e6403             cmp dword ptr [esi + 0x64], 3
// 0057af0e  7509                 jne 0x57af19
// 0057af10  c7470470ab5700       mov dword ptr [edi + 4], 0x57ab70
// 0057af17  eb07                 jmp 0x57af20
// 0057af19  c7470460aa5700       mov dword ptr [edi + 4], 0x57aa60
// 0057af20  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 0057af24  c7473000000000       mov dword ptr [edi + 0x30], 0
// 0057af2b  7509                 jne 0x57af36
// 0057af2d  56                   push esi
// 0057af2e  e8adf7ffff           call 0x57a6e0
// 0057af33  83c404               add esp, 4
// 0057af36  837f3400             cmp dword ptr [edi + 0x34], 0
// 0057af3a  75ca                 jne 0x57af06
// 0057af3c  8bde                 mov ebx, esi
// 0057af3e  e86df9ffff           call 0x57a8b0
// 0057af43  5b                   pop ebx
// 0057af44  5f                   pop edi
// 0057af45  5e                   pop esi
// 0057af46  c3                   ret 
// 0057af47  837e6403             cmp dword ptr [esi + 0x64], 3
// 0057af4b  750a                 jne 0x57af57
// 0057af4d  c74704b0a95700       mov dword ptr [edi + 4], 0x57a9b0
// 0057af54  5f                   pop edi
// 0057af55  5e                   pop esi
// 0057af56  c3                   ret 
// 0057af57  c7470400a95700       mov dword ptr [edi + 4], 0x57a900
// 0057af5e  5f                   pop edi
// 0057af5f  5e                   pop esi
// 0057af60  c3                   ret 
// library jpeg-6b/jquant1.c (function _start_pass_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
