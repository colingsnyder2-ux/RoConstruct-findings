// from server: 100% by auto
// roc 2012-06 00663d60  unit: seg_00660000  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663d60
//
// 00663d60  83ec24               sub esp, 0x24
// 00663d63  836c243801           sub dword ptr [esp + 0x38], 1
// 00663d68  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00663d6c  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00663d72  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 00663d78  55                   push ebp
// 00663d79  8b695c               mov ebp, dword ptr [ecx + 0x5c]
// 00663d7c  8b4808               mov ecx, dword ptr [eax + 8]
// 00663d7f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00663d83  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00663d86  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00663d8a  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00663d8d  8b4014               mov eax, dword ptr [eax + 0x14]
// 00663d90  896c2420             mov dword ptr [esp + 0x20], ebp
// 00663d94  89542418             mov dword ptr [esp + 0x18], edx
// 00663d98  894c2414             mov dword ptr [esp + 0x14], ecx
// 00663d9c  89442410             mov dword ptr [esp + 0x10], eax
// 00663da0  0f88d2000000         js 0x663e78
// 00663da6  53                   push ebx
// 00663da7  56                   push esi
// 00663da8  8b742438             mov esi, dword ptr [esp + 0x38]
// 00663dac  57                   push edi
// 00663dad  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00663db1  03ff                 add edi, edi
// 00663db3  03ff                 add edi, edi
// 00663db5  8b0e                 mov ecx, dword ptr [esi]
// 00663db7  8b040f               mov eax, dword ptr [edi + ecx]
// 00663dba  8b4e04               mov ecx, dword ptr [esi + 4]
// 00663dbd  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00663dc1  89442438             mov dword ptr [esp + 0x38], eax
// 00663dc5  8b040f               mov eax, dword ptr [edi + ecx]
// 00663dc8  8b4e08               mov ecx, dword ptr [esi + 8]
// 00663dcb  8b0c0f               mov ecx, dword ptr [edi + ecx]
// 00663dce  894c2410             mov dword ptr [esp + 0x10], ecx
// 00663dd2  8b0b                 mov ecx, dword ptr [ebx]
// 00663dd4  83c704               add edi, 4
// 00663dd7  83c304               add ebx, 4
// 00663dda  897c2430             mov dword ptr [esp + 0x30], edi
// 00663dde  895c2444             mov dword ptr [esp + 0x44], ebx
// 00663de2  85ed                 test ebp, ebp
// 00663de4  0f8680000000         jbe 0x663e6a
// 00663dea  8b742438             mov esi, dword ptr [esp + 0x38]
// 00663dee  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00663df2  2bf0                 sub esi, eax
// 00663df4  2bd8                 sub ebx, eax
// 00663df6  89742414             mov dword ptr [esp + 0x14], esi
// 00663dfa  895c2410             mov dword ptr [esp + 0x10], ebx
// 00663dfe  896c2438             mov dword ptr [esp + 0x38], ebp
// 00663e02  eb08                 jmp 0x663e0c
// 00663e04  8b742414             mov esi, dword ptr [esp + 0x14]
// 00663e08  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00663e0c  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 00663e10  0fb63406             movzx esi, byte ptr [esi + eax]
// 00663e14  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00663e18  8b1cab               mov ebx, dword ptr [ebx + ebp*4]
// 00663e1b  0fb638               movzx edi, byte ptr [eax]
// 00663e1e  03de                 add ebx, esi
// 00663e20  8a1413               mov dl, byte ptr [ebx + edx]
// 00663e23  8811                 mov byte ptr [ecx], dl
// 00663e25  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00663e29  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 00663e2c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00663e30  031caa               add ebx, dword ptr [edx + ebp*4]
// 00663e33  8b542424             mov edx, dword ptr [esp + 0x24]
// 00663e37  c1fb10               sar ebx, 0x10
// 00663e3a  03de                 add ebx, esi
// 00663e3c  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 00663e40  885901               mov byte ptr [ecx + 1], bl
// 00663e43  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00663e47  8b3cbb               mov edi, dword ptr [ebx + edi*4]
// 00663e4a  03fe                 add edi, esi
// 00663e4c  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 00663e50  885902               mov byte ptr [ecx + 2], bl
// 00663e53  83c103               add ecx, 3
// 00663e56  40                   inc eax
// 00663e57  836c243801           sub dword ptr [esp + 0x38], 1
// 00663e5c  75a6                 jne 0x663e04
// 00663e5e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00663e62  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00663e66  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00663e6a  836c244801           sub dword ptr [esp + 0x48], 1
// 00663e6f  0f8940ffffff         jns 0x663db5
// 00663e75  5f                   pop edi
// 00663e76  5e                   pop esi
// 00663e77  5b                   pop ebx
// 00663e78  5d                   pop ebp
// 00663e79  83c424               add esp, 0x24
// 00663e7c  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycc_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
