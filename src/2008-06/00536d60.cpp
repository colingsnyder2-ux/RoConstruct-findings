// from server: 100% by auto
// roc 2008-06 00536d60  unit: seg_00530000  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536d60
//
// 00536d60  56                   push esi
// 00536d61  8b742408             mov esi, dword ptr [esp + 8]
// 00536d65  57                   push edi
// 00536d66  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 00536d6c  8b4710               mov eax, dword ptr [edi + 0x10]
// 00536d6f  894674               mov dword ptr [esi + 0x74], eax
// 00536d72  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00536d75  83e800               sub eax, 0
// 00536d78  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00536d7b  894e70               mov dword ptr [esi + 0x70], ecx
// 00536d7e  0f84a3000000         je 0x536e27
// 00536d84  83e801               sub eax, 1
// 00536d87  53                   push ebx
// 00536d88  7460                 je 0x536dea
// 00536d8a  83e801               sub eax, 1
// 00536d8d  7417                 je 0x536da6
// 00536d8f  8b16                 mov edx, dword ptr [esi]
// 00536d91  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 00536d98  8b06                 mov eax, dword ptr [esi]
// 00536d9a  8b08                 mov ecx, dword ptr [eax]
// 00536d9c  56                   push esi
// 00536d9d  ffd1                 call ecx
// 00536d9f  83c404               add esp, 4
// 00536da2  5b                   pop ebx
// 00536da3  5f                   pop edi
// 00536da4  5e                   pop esi
// 00536da5  c3                   ret 
// 00536da6  837f4400             cmp dword ptr [edi + 0x44], 0
// 00536daa  8d5f44               lea ebx, [edi + 0x44]
// 00536dad  c74704806b5300       mov dword ptr [edi + 4], 0x536b80
// 00536db4  c6475400             mov byte ptr [edi + 0x54], 0
// 00536db8  7505                 jne 0x536dbf
// 00536dba  e861ffffff           call 0x536d20
// 00536dbf  55                   push ebp
// 00536dc0  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 00536dc3  33ff                 xor edi, edi
// 00536dc5  397e64               cmp dword ptr [esi + 0x64], edi
// 00536dc8  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 00536dcc  7e17                 jle 0x536de5
// 00536dce  8bff                 mov edi, edi
// 00536dd0  8b13                 mov edx, dword ptr [ebx]
// 00536dd2  55                   push ebp
// 00536dd3  52                   push edx
// 00536dd4  e8c7edfeff           call 0x525ba0
// 00536dd9  47                   inc edi
// 00536dda  83c408               add esp, 8
// 00536ddd  83c304               add ebx, 4
// 00536de0  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 00536de3  7ceb                 jl 0x536dd0
// 00536de5  5d                   pop ebp
// 00536de6  5b                   pop ebx
// 00536de7  5f                   pop edi
// 00536de8  5e                   pop esi
// 00536de9  c3                   ret 
// 00536dea  837e6403             cmp dword ptr [esi + 0x64], 3
// 00536dee  7509                 jne 0x536df9
// 00536df0  c74704506a5300       mov dword ptr [edi + 4], 0x536a50
// 00536df7  eb07                 jmp 0x536e00
// 00536df9  c7470440695300       mov dword ptr [edi + 4], 0x536940
// 00536e00  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 00536e04  c7473000000000       mov dword ptr [edi + 0x30], 0
// 00536e0b  7509                 jne 0x536e16
// 00536e0d  56                   push esi
// 00536e0e  e8adf7ffff           call 0x5365c0
// 00536e13  83c404               add esp, 4
// 00536e16  837f3400             cmp dword ptr [edi + 0x34], 0
// 00536e1a  75ca                 jne 0x536de6
// 00536e1c  8bde                 mov ebx, esi
// 00536e1e  e86df9ffff           call 0x536790
// 00536e23  5b                   pop ebx
// 00536e24  5f                   pop edi
// 00536e25  5e                   pop esi
// 00536e26  c3                   ret 
// 00536e27  837e6403             cmp dword ptr [esi + 0x64], 3
// 00536e2b  750a                 jne 0x536e37
// 00536e2d  c7470490685300       mov dword ptr [edi + 4], 0x536890
// 00536e34  5f                   pop edi
// 00536e35  5e                   pop esi
// 00536e36  c3                   ret 
// 00536e37  c74704e0675300       mov dword ptr [edi + 4], 0x5367e0
// 00536e3e  5f                   pop edi
// 00536e3f  5e                   pop esi
// 00536e40  c3                   ret 
// library jpeg-6b/jquant1.c (function _start_pass_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
