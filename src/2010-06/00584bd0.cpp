// from server: 100% by auto
// roc 2010-06 00584bd0  unit: seg_00580000  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584bd0
//
// 00584bd0  56                   push esi
// 00584bd1  8b742408             mov esi, dword ptr [esp + 8]
// 00584bd5  57                   push edi
// 00584bd6  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 00584bdc  8b4710               mov eax, dword ptr [edi + 0x10]
// 00584bdf  894674               mov dword ptr [esi + 0x74], eax
// 00584be2  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00584be5  83e800               sub eax, 0
// 00584be8  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00584beb  894e70               mov dword ptr [esi + 0x70], ecx
// 00584bee  0f84a3000000         je 0x584c97
// 00584bf4  83e801               sub eax, 1
// 00584bf7  53                   push ebx
// 00584bf8  7460                 je 0x584c5a
// 00584bfa  83e801               sub eax, 1
// 00584bfd  7417                 je 0x584c16
// 00584bff  8b16                 mov edx, dword ptr [esi]
// 00584c01  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 00584c08  8b06                 mov eax, dword ptr [esi]
// 00584c0a  8b08                 mov ecx, dword ptr [eax]
// 00584c0c  56                   push esi
// 00584c0d  ffd1                 call ecx
// 00584c0f  83c404               add esp, 4
// 00584c12  5b                   pop ebx
// 00584c13  5f                   pop edi
// 00584c14  5e                   pop esi
// 00584c15  c3                   ret 
// 00584c16  837f4400             cmp dword ptr [edi + 0x44], 0
// 00584c1a  8d5f44               lea ebx, [edi + 0x44]
// 00584c1d  c74704f0495800       mov dword ptr [edi + 4], 0x5849f0
// 00584c24  c6475400             mov byte ptr [edi + 0x54], 0
// 00584c28  7505                 jne 0x584c2f
// 00584c2a  e861ffffff           call 0x584b90
// 00584c2f  55                   push ebp
// 00584c30  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 00584c33  33ff                 xor edi, edi
// 00584c35  397e64               cmp dword ptr [esi + 0x64], edi
// 00584c38  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 00584c3c  7e17                 jle 0x584c55
// 00584c3e  8bff                 mov edi, edi
// 00584c40  8b13                 mov edx, dword ptr [ebx]
// 00584c42  55                   push ebp
// 00584c43  52                   push edx
// 00584c44  e89787feff           call 0x56d3e0
// 00584c49  47                   inc edi
// 00584c4a  83c408               add esp, 8
// 00584c4d  83c304               add ebx, 4
// 00584c50  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 00584c53  7ceb                 jl 0x584c40
// 00584c55  5d                   pop ebp
// 00584c56  5b                   pop ebx
// 00584c57  5f                   pop edi
// 00584c58  5e                   pop esi
// 00584c59  c3                   ret 
// 00584c5a  837e6403             cmp dword ptr [esi + 0x64], 3
// 00584c5e  7509                 jne 0x584c69
// 00584c60  c74704c0485800       mov dword ptr [edi + 4], 0x5848c0
// 00584c67  eb07                 jmp 0x584c70
// 00584c69  c74704b0475800       mov dword ptr [edi + 4], 0x5847b0
// 00584c70  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 00584c74  c7473000000000       mov dword ptr [edi + 0x30], 0
// 00584c7b  7509                 jne 0x584c86
// 00584c7d  56                   push esi
// 00584c7e  e8adf7ffff           call 0x584430
// 00584c83  83c404               add esp, 4
// 00584c86  837f3400             cmp dword ptr [edi + 0x34], 0
// 00584c8a  75ca                 jne 0x584c56
// 00584c8c  8bde                 mov ebx, esi
// 00584c8e  e86df9ffff           call 0x584600
// 00584c93  5b                   pop ebx
// 00584c94  5f                   pop edi
// 00584c95  5e                   pop esi
// 00584c96  c3                   ret 
// 00584c97  837e6403             cmp dword ptr [esi + 0x64], 3
// 00584c9b  750a                 jne 0x584ca7
// 00584c9d  c7470400475800       mov dword ptr [edi + 4], 0x584700
// 00584ca4  5f                   pop edi
// 00584ca5  5e                   pop esi
// 00584ca6  c3                   ret 
// 00584ca7  c7470450465800       mov dword ptr [edi + 4], 0x584650
// 00584cae  5f                   pop edi
// 00584caf  5e                   pop esi
// 00584cb0  c3                   ret 
// library jpeg-6b/jquant1.c (function _start_pass_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
