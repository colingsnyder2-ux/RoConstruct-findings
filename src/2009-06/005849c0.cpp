// roc 2009-06 005849c0  unit: seg_00580000  size: 671 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005849c0
//
// 005849c0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005849c4  53                   push ebx
// 005849c5  55                   push ebp
// 005849c6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005849ca  8a4508               mov al, byte ptr [ebp + 8]
// 005849cd  8bda                 mov ebx, edx
// 005849cf  56                   push esi
// 005849d0  8b7500               mov esi, dword ptr [ebp]
// 005849d3  c1eb08               shr ebx, 8
// 005849d6  57                   push edi
// 005849d7  885c2414             mov byte ptr [esp + 0x14], bl
// 005849db  84c0                 test al, al
// 005849dd  0f8511010000         jne 0x584af4
// 005849e3  8a4509               mov al, byte ptr [ebp + 9]
// 005849e6  3c08                 cmp al, 8
// 005849e8  7568                 jne 0x584a52
// 005849ea  f644242080           test byte ptr [esp + 0x20], 0x80
// 005849ef  8b442418             mov eax, dword ptr [esp + 0x18]
// 005849f3  8d3c06               lea edi, [esi + eax]
// 005849f6  8d0437               lea eax, [edi + esi]
// 005849f9  742d                 je 0x584a28
// 005849fb  83fe01               cmp esi, 1
// 005849fe  7612                 jbe 0x584a12
// 00584a00  8d4eff               lea ecx, [esi - 1]
// 00584a03  48                   dec eax
// 00584a04  8810                 mov byte ptr [eax], dl
// 00584a06  8a5fff               mov bl, byte ptr [edi - 1]
// 00584a09  4f                   dec edi
// 00584a0a  48                   dec eax
// 00584a0b  83e901               sub ecx, 1
// 00584a0e  8818                 mov byte ptr [eax], bl
// 00584a10  75f1                 jne 0x584a03
// 00584a12  5f                   pop edi
// 00584a13  8850ff               mov byte ptr [eax - 1], dl
// 00584a16  8d0c36               lea ecx, [esi + esi]
// 00584a19  5e                   pop esi
// 00584a1a  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00584a1e  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 00584a22  894d04               mov dword ptr [ebp + 4], ecx
// 00584a25  5d                   pop ebp
// 00584a26  5b                   pop ebx
// 00584a27  c3                   ret 
// 00584a28  85f6                 test esi, esi
// 00584a2a  7613                 jbe 0x584a3f
// 00584a2c  8bce                 mov ecx, esi
// 00584a2e  8bff                 mov edi, edi
// 00584a30  8a5fff               mov bl, byte ptr [edi - 1]
// 00584a33  4f                   dec edi
// 00584a34  48                   dec eax
// 00584a35  8818                 mov byte ptr [eax], bl
// 00584a37  48                   dec eax
// 00584a38  83e901               sub ecx, 1
// 00584a3b  8810                 mov byte ptr [eax], dl
// 00584a3d  75f1                 jne 0x584a30
// 00584a3f  5f                   pop edi
// 00584a40  8d0c36               lea ecx, [esi + esi]
// 00584a43  5e                   pop esi
// 00584a44  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00584a48  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 00584a4c  894d04               mov dword ptr [ebp + 4], ecx
// 00584a4f  5d                   pop ebp
// 00584a50  5b                   pop ebx
// 00584a51  c3                   ret 
// 00584a52  3c10                 cmp al, 0x10
// 00584a54  0f8500020000         jne 0x584c5a
// 00584a5a  f644242080           test byte ptr [esp + 0x20], 0x80
// 00584a5f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00584a63  8d3c70               lea edi, [eax + esi*2]
// 00584a66  8d0477               lea eax, [edi + esi*2]
// 00584a69  7448                 je 0x584ab3
// 00584a6b  83fe01               cmp esi, 1
// 00584a6e  7625                 jbe 0x584a95
// 00584a70  8d4eff               lea ecx, [esi - 1]
// 00584a73  894c2414             mov dword ptr [esp + 0x14], ecx
// 00584a77  8858ff               mov byte ptr [eax - 1], bl
// 00584a7a  48                   dec eax
// 00584a7b  48                   dec eax
// 00584a7c  8810                 mov byte ptr [eax], dl
// 00584a7e  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 00584a82  4f                   dec edi
// 00584a83  48                   dec eax
// 00584a84  8808                 mov byte ptr [eax], cl
// 00584a86  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 00584a8a  4f                   dec edi
// 00584a8b  48                   dec eax
// 00584a8c  836c241401           sub dword ptr [esp + 0x14], 1
// 00584a91  8808                 mov byte ptr [eax], cl
// 00584a93  75e2                 jne 0x584a77
// 00584a95  8858ff               mov byte ptr [eax - 1], bl
// 00584a98  48                   dec eax
// 00584a99  8850ff               mov byte ptr [eax - 1], dl
// 00584a9c  5f                   pop edi
// 00584a9d  8d14b500000000       lea edx, [esi*4]
// 00584aa4  5e                   pop esi
// 00584aa5  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00584aa9  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 00584aad  895504               mov dword ptr [ebp + 4], edx
// 00584ab0  5d                   pop ebp
// 00584ab1  5b                   pop ebx
// 00584ab2  c3                   ret 
// 00584ab3  85f6                 test esi, esi
// 00584ab5  7626                 jbe 0x584add
// 00584ab7  89742414             mov dword ptr [esp + 0x14], esi
// 00584abb  eb03                 jmp 0x584ac0
// 00584abd  8d4900               lea ecx, [ecx]
// 00584ac0  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 00584ac4  4f                   dec edi
// 00584ac5  48                   dec eax
// 00584ac6  8808                 mov byte ptr [eax], cl
// 00584ac8  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 00584acc  4f                   dec edi
// 00584acd  48                   dec eax
// 00584ace  8808                 mov byte ptr [eax], cl
// 00584ad0  48                   dec eax
// 00584ad1  8818                 mov byte ptr [eax], bl
// 00584ad3  48                   dec eax
// 00584ad4  836c241401           sub dword ptr [esp + 0x14], 1
// 00584ad9  8810                 mov byte ptr [eax], dl
// 00584adb  75e3                 jne 0x584ac0
// 00584add  5f                   pop edi
// 00584ade  8d14b500000000       lea edx, [esi*4]
// 00584ae5  5e                   pop esi
// 00584ae6  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00584aea  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 00584aee  895504               mov dword ptr [ebp + 4], edx
// 00584af1  5d                   pop ebp
// 00584af2  5b                   pop ebx
// 00584af3  c3                   ret 
// 00584af4  3c02                 cmp al, 2
// 00584af6  0f855e010000         jne 0x584c5a
// 00584afc  8a4509               mov al, byte ptr [ebp + 9]
// 00584aff  3c08                 cmp al, 8
// 00584b01  0f8581000000         jne 0x584b88
// 00584b07  8b442418             mov eax, dword ptr [esp + 0x18]
// 00584b0b  8d3c70               lea edi, [eax + esi*2]
// 00584b0e  03fe                 add edi, esi
// 00584b10  f644242080           test byte ptr [esp + 0x20], 0x80
// 00584b15  8d0437               lea eax, [edi + esi]
// 00584b18  742e                 je 0x584b48
// 00584b1a  83fe01               cmp esi, 1
// 00584b1d  7624                 jbe 0x584b43
// 00584b1f  8d4eff               lea ecx, [esi - 1]
// 00584b22  8850ff               mov byte ptr [eax - 1], dl
// 00584b25  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00584b29  48                   dec eax
// 00584b2a  4f                   dec edi
// 00584b2b  48                   dec eax
// 00584b2c  8818                 mov byte ptr [eax], bl
// 00584b2e  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00584b32  4f                   dec edi
// 00584b33  48                   dec eax
// 00584b34  8818                 mov byte ptr [eax], bl
// 00584b36  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00584b3a  4f                   dec edi
// 00584b3b  48                   dec eax
// 00584b3c  83e901               sub ecx, 1
// 00584b3f  8818                 mov byte ptr [eax], bl
// 00584b41  75df                 jne 0x584b22
// 00584b43  8850ff               mov byte ptr [eax - 1], dl
// 00584b46  eb29                 jmp 0x584b71
// 00584b48  85f6                 test esi, esi
// 00584b4a  7625                 jbe 0x584b71
// 00584b4c  8bce                 mov ecx, esi
// 00584b4e  8bff                 mov edi, edi
// 00584b50  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00584b54  4f                   dec edi
// 00584b55  8858ff               mov byte ptr [eax - 1], bl
// 00584b58  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00584b5c  48                   dec eax
// 00584b5d  4f                   dec edi
// 00584b5e  48                   dec eax
// 00584b5f  8818                 mov byte ptr [eax], bl
// 00584b61  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00584b65  4f                   dec edi
// 00584b66  48                   dec eax
// 00584b67  8818                 mov byte ptr [eax], bl
// 00584b69  48                   dec eax
// 00584b6a  83e901               sub ecx, 1
// 00584b6d  8810                 mov byte ptr [eax], dl
// 00584b6f  75df                 jne 0x584b50
// 00584b71  5f                   pop edi
// 00584b72  8d0cb500000000       lea ecx, [esi*4]
// 00584b79  5e                   pop esi
// 00584b7a  c6450a04             mov byte ptr [ebp + 0xa], 4
// 00584b7e  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 00584b82  894d04               mov dword ptr [ebp + 4], ecx
// 00584b85  5d                   pop ebp
// 00584b86  5b                   pop ebx
// 00584b87  c3                   ret 
// 00584b88  3c10                 cmp al, 0x10
// 00584b8a  0f85ca000000         jne 0x584c5a
// 00584b90  f644242080           test byte ptr [esp + 0x20], 0x80
// 00584b95  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00584b99  8d0476               lea eax, [esi + esi*2]
// 00584b9c  8d0c41               lea ecx, [ecx + eax*2]
// 00584b9f  8d0471               lea eax, [ecx + esi*2]
// 00584ba2  7459                 je 0x584bfd
// 00584ba4  83fe01               cmp esi, 1
// 00584ba7  764c                 jbe 0x584bf5
// 00584ba9  8d7eff               lea edi, [esi - 1]
// 00584bac  8d642400             lea esp, [esp]
// 00584bb0  8858ff               mov byte ptr [eax - 1], bl
// 00584bb3  48                   dec eax
// 00584bb4  8850ff               mov byte ptr [eax - 1], dl
// 00584bb7  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584bbb  48                   dec eax
// 00584bbc  8858ff               mov byte ptr [eax - 1], bl
// 00584bbf  49                   dec ecx
// 00584bc0  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584bc4  48                   dec eax
// 00584bc5  8858ff               mov byte ptr [eax - 1], bl
// 00584bc8  49                   dec ecx
// 00584bc9  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584bcd  48                   dec eax
// 00584bce  49                   dec ecx
// 00584bcf  8858ff               mov byte ptr [eax - 1], bl
// 00584bd2  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584bd6  48                   dec eax
// 00584bd7  49                   dec ecx
// 00584bd8  8858ff               mov byte ptr [eax - 1], bl
// 00584bdb  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584bdf  48                   dec eax
// 00584be0  49                   dec ecx
// 00584be1  48                   dec eax
// 00584be2  8818                 mov byte ptr [eax], bl
// 00584be4  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584be8  49                   dec ecx
// 00584be9  48                   dec eax
// 00584bea  83ef01               sub edi, 1
// 00584bed  8818                 mov byte ptr [eax], bl
// 00584bef  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 00584bf3  75bb                 jne 0x584bb0
// 00584bf5  48                   dec eax
// 00584bf6  8818                 mov byte ptr [eax], bl
// 00584bf8  8850ff               mov byte ptr [eax - 1], dl
// 00584bfb  eb4b                 jmp 0x584c48
// 00584bfd  85f6                 test esi, esi
// 00584bff  7647                 jbe 0x584c48
// 00584c01  8bfe                 mov edi, esi
// 00584c03  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584c07  8858ff               mov byte ptr [eax - 1], bl
// 00584c0a  49                   dec ecx
// 00584c0b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584c0f  48                   dec eax
// 00584c10  8858ff               mov byte ptr [eax - 1], bl
// 00584c13  49                   dec ecx
// 00584c14  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584c18  48                   dec eax
// 00584c19  8858ff               mov byte ptr [eax - 1], bl
// 00584c1c  49                   dec ecx
// 00584c1d  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584c21  48                   dec eax
// 00584c22  8858ff               mov byte ptr [eax - 1], bl
// 00584c25  49                   dec ecx
// 00584c26  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584c2a  48                   dec eax
// 00584c2b  49                   dec ecx
// 00584c2c  8858ff               mov byte ptr [eax - 1], bl
// 00584c2f  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00584c33  48                   dec eax
// 00584c34  49                   dec ecx
// 00584c35  48                   dec eax
// 00584c36  8818                 mov byte ptr [eax], bl
// 00584c38  0fb65c2414           movzx ebx, byte ptr [esp + 0x14]
// 00584c3d  48                   dec eax
// 00584c3e  8818                 mov byte ptr [eax], bl
// 00584c40  48                   dec eax
// 00584c41  83ef01               sub edi, 1
// 00584c44  8810                 mov byte ptr [eax], dl
// 00584c46  75bb                 jne 0x584c03
// 00584c48  8d14f500000000       lea edx, [esi*8]
// 00584c4f  c6450b40             mov byte ptr [ebp + 0xb], 0x40
// 00584c53  c6450a04             mov byte ptr [ebp + 0xa], 4
// 00584c57  895504               mov dword ptr [ebp + 4], edx
// 00584c5a  5f                   pop edi
// 00584c5b  5e                   pop esi
// 00584c5c  5d                   pop ebp
// 00584c5d  5b                   pop ebx
// 00584c5e  c3                   ret 
// library libpng-1.2.7/pngrtran.c (function _png_do_read_filler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.7 pngrtran.c
