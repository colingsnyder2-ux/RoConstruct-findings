// roc 2007-08 0052acd0  unit: seg_00520000  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052acd0
//
// 0052acd0  56                   push esi
// 0052acd1  8b742408             mov esi, dword ptr [esp + 8]
// 0052acd5  57                   push edi
// 0052acd6  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 0052acdc  8b4710               mov eax, dword ptr [edi + 0x10]
// 0052acdf  894674               mov dword ptr [esi + 0x74], eax
// 0052ace2  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0052ace5  83e800               sub eax, 0
// 0052ace8  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0052aceb  894e70               mov dword ptr [esi + 0x70], ecx
// 0052acee  0f84a5000000         je 0x52ad99
// 0052acf4  83e801               sub eax, 1
// 0052acf7  53                   push ebx
// 0052acf8  7462                 je 0x52ad5c
// 0052acfa  83e801               sub eax, 1
// 0052acfd  7417                 je 0x52ad16
// 0052acff  8b16                 mov edx, dword ptr [esi]
// 0052ad01  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 0052ad08  8b06                 mov eax, dword ptr [esi]
// 0052ad0a  8b08                 mov ecx, dword ptr [eax]
// 0052ad0c  56                   push esi
// 0052ad0d  ffd1                 call ecx
// 0052ad0f  83c404               add esp, 4
// 0052ad12  5b                   pop ebx
// 0052ad13  5f                   pop edi
// 0052ad14  5e                   pop esi
// 0052ad15  c3                   ret 
// 0052ad16  837f4400             cmp dword ptr [edi + 0x44], 0
// 0052ad1a  8d5f44               lea ebx, [edi + 0x44]
// 0052ad1d  c74704e0aa5200       mov dword ptr [edi + 4], 0x52aae0
// 0052ad24  c6475400             mov byte ptr [edi + 0x54], 0
// 0052ad28  7505                 jne 0x52ad2f
// 0052ad2a  e861ffffff           call 0x52ac90
// 0052ad2f  55                   push ebp
// 0052ad30  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 0052ad33  33ff                 xor edi, edi
// 0052ad35  397e64               cmp dword ptr [esi + 0x64], edi
// 0052ad38  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 0052ad3c  7e19                 jle 0x52ad57
// 0052ad3e  8bff                 mov edi, edi
// 0052ad40  8b13                 mov edx, dword ptr [ebx]
// 0052ad42  55                   push ebp
// 0052ad43  52                   push edx
// 0052ad44  e8a735ffff           call 0x51e2f0
// 0052ad49  83c701               add edi, 1
// 0052ad4c  83c408               add esp, 8
// 0052ad4f  83c304               add ebx, 4
// 0052ad52  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 0052ad55  7ce9                 jl 0x52ad40
// 0052ad57  5d                   pop ebp
// 0052ad58  5b                   pop ebx
// 0052ad59  5f                   pop edi
// 0052ad5a  5e                   pop esi
// 0052ad5b  c3                   ret 
// 0052ad5c  837e6403             cmp dword ptr [esi + 0x64], 3
// 0052ad60  7509                 jne 0x52ad6b
// 0052ad62  c74704b0a95200       mov dword ptr [edi + 4], 0x52a9b0
// 0052ad69  eb07                 jmp 0x52ad72
// 0052ad6b  c7470490a85200       mov dword ptr [edi + 4], 0x52a890
// 0052ad72  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 0052ad76  c7473000000000       mov dword ptr [edi + 0x30], 0
// 0052ad7d  7509                 jne 0x52ad88
// 0052ad7f  56                   push esi
// 0052ad80  e87bf7ffff           call 0x52a500
// 0052ad85  83c404               add esp, 4
// 0052ad88  837f3400             cmp dword ptr [edi + 0x34], 0
// 0052ad8c  75ca                 jne 0x52ad58
// 0052ad8e  8bde                 mov ebx, esi
// 0052ad90  e83bf9ffff           call 0x52a6d0
// 0052ad95  5b                   pop ebx
// 0052ad96  5f                   pop edi
// 0052ad97  5e                   pop esi
// 0052ad98  c3                   ret 
// 0052ad99  837e6403             cmp dword ptr [esi + 0x64], 3
// 0052ad9d  750a                 jne 0x52ada9
// 0052ad9f  c74704d0a75200       mov dword ptr [edi + 4], 0x52a7d0
// 0052ada6  5f                   pop edi
// 0052ada7  5e                   pop esi
// 0052ada8  c3                   ret 
// 0052ada9  c7470420a75200       mov dword ptr [edi + 4], 0x52a720
// 0052adb0  5f                   pop edi
// 0052adb1  5e                   pop esi
// 0052adb2  c3                   ret 
// library jpeg-6b/jquant1.c (function _start_pass_1_quant)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
