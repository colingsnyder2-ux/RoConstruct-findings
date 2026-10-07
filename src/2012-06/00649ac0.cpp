// roc 2012-06 00649ac0  unit: seg_00640000  size: 671 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00649ac0
//
// 00649ac0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00649ac4  53                   push ebx
// 00649ac5  55                   push ebp
// 00649ac6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00649aca  8a4508               mov al, byte ptr [ebp + 8]
// 00649acd  8bda                 mov ebx, edx
// 00649acf  56                   push esi
// 00649ad0  8b7500               mov esi, dword ptr [ebp]
// 00649ad3  c1eb08               shr ebx, 8
// 00649ad6  57                   push edi
// 00649ad7  885c2414             mov byte ptr [esp + 0x14], bl
// 00649adb  84c0                 test al, al
// 00649add  0f8511010000         jne 0x649bf4
// 00649ae3  8a4509               mov al, byte ptr [ebp + 9]
// 00649ae6  3c08                 cmp al, 8
// 00649ae8  7568                 jne 0x649b52
// 00649aea  f644242080           test byte ptr [esp + 0x20], 0x80
// 00649aef  8b442418             mov eax, dword ptr [esp + 0x18]
// 00649af3  8d3c06               lea edi, [esi + eax]
// 00649af6  8d0437               lea eax, [edi + esi]
// 00649af9  742d                 je 0x649b28
// 00649afb  83fe01               cmp esi, 1
// 00649afe  7612                 jbe 0x649b12
// 00649b00  8d4eff               lea ecx, [esi - 1]
// 00649b03  48                   dec eax
// 00649b04  8810                 mov byte ptr [eax], dl
// 00649b06  8a5fff               mov bl, byte ptr [edi - 1]
// 00649b09  4f                   dec edi
// 00649b0a  48                   dec eax
// 00649b0b  83e901               sub ecx, 1
// 00649b0e  8818                 mov byte ptr [eax], bl
// 00649b10  75f1                 jne 0x649b03
// 00649b12  5f                   pop edi
// 00649b13  8850ff               mov byte ptr [eax - 1], dl
// 00649b16  8d0c36               lea ecx, [esi + esi]
// 00649b19  5e                   pop esi
// 00649b1a  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00649b1e  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 00649b22  894d04               mov dword ptr [ebp + 4], ecx
// 00649b25  5d                   pop ebp
// 00649b26  5b                   pop ebx
// 00649b27  c3                   ret 
// 00649b28  85f6                 test esi, esi
// 00649b2a  7613                 jbe 0x649b3f
// 00649b2c  8bce                 mov ecx, esi
// 00649b2e  8bff                 mov edi, edi
// 00649b30  8a5fff               mov bl, byte ptr [edi - 1]
// 00649b33  4f                   dec edi
// 00649b34  48                   dec eax
// 00649b35  8818                 mov byte ptr [eax], bl
// 00649b37  48                   dec eax
// 00649b38  83e901               sub ecx, 1
// 00649b3b  8810                 mov byte ptr [eax], dl
// 00649b3d  75f1                 jne 0x649b30
// 00649b3f  5f                   pop edi
// 00649b40  8d0c36               lea ecx, [esi + esi]
// 00649b43  5e                   pop esi
// 00649b44  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00649b48  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 00649b4c  894d04               mov dword ptr [ebp + 4], ecx
// 00649b4f  5d                   pop ebp
// 00649b50  5b                   pop ebx
// 00649b51  c3                   ret 
// 00649b52  3c10                 cmp al, 0x10
// 00649b54  0f8500020000         jne 0x649d5a
// 00649b5a  f644242080           test byte ptr [esp + 0x20], 0x80
// 00649b5f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00649b63  8d3c70               lea edi, [eax + esi*2]
// 00649b66  8d0477               lea eax, [edi + esi*2]
// 00649b69  7448                 je 0x649bb3
// 00649b6b  83fe01               cmp esi, 1
// 00649b6e  7625                 jbe 0x649b95
// 00649b70  8d4eff               lea ecx, [esi - 1]
// 00649b73  894c2414             mov dword ptr [esp + 0x14], ecx
// 00649b77  8858ff               mov byte ptr [eax - 1], bl
// 00649b7a  48                   dec eax
// 00649b7b  48                   dec eax
// 00649b7c  8810                 mov byte ptr [eax], dl
// 00649b7e  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 00649b82  4f                   dec edi
// 00649b83  48                   dec eax
// 00649b84  8808                 mov byte ptr [eax], cl
// 00649b86  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 00649b8a  4f                   dec edi
// 00649b8b  48                   dec eax
// 00649b8c  836c241401           sub dword ptr [esp + 0x14], 1
// 00649b91  8808                 mov byte ptr [eax], cl
// 00649b93  75e2                 jne 0x649b77
// 00649b95  8858ff               mov byte ptr [eax - 1], bl
// 00649b98  48                   dec eax
// 00649b99  8850ff               mov byte ptr [eax - 1], dl
// 00649b9c  5f                   pop edi
// 00649b9d  8d14b500000000       lea edx, [esi*4]
// 00649ba4  5e                   pop esi
// 00649ba5  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00649ba9  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 00649bad  895504               mov dword ptr [ebp + 4], edx
// 00649bb0  5d                   pop ebp
// 00649bb1  5b                   pop ebx
// 00649bb2  c3                   ret 
// 00649bb3  85f6                 test esi, esi
// 00649bb5  7626                 jbe 0x649bdd
// 00649bb7  89742414             mov dword ptr [esp + 0x14], esi
// 00649bbb  eb03                 jmp 0x649bc0
// 00649bbd  8d4900               lea ecx, [ecx]
// 00649bc0  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 00649bc4  4f                   dec edi
// 00649bc5  48                   dec eax
// 00649bc6  8808                 mov byte ptr [eax], cl
// 00649bc8  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 00649bcc  4f                   dec edi
// 00649bcd  48                   dec eax
// 00649bce  8808                 mov byte ptr [eax], cl
// 00649bd0  48                   dec eax
// 00649bd1  8818                 mov byte ptr [eax], bl
// 00649bd3  48                   dec eax
// 00649bd4  836c241401           sub dword ptr [esp + 0x14], 1
// 00649bd9  8810                 mov byte ptr [eax], dl
// 00649bdb  75e3                 jne 0x649bc0
// 00649bdd  5f                   pop edi
// 00649bde  8d14b500000000       lea edx, [esi*4]
// 00649be5  5e                   pop esi
// 00649be6  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00649bea  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 00649bee  895504               mov dword ptr [ebp + 4], edx
// 00649bf1  5d                   pop ebp
// 00649bf2  5b                   pop ebx
// 00649bf3  c3                   ret 
// 00649bf4  3c02                 cmp al, 2
// 00649bf6  0f855e010000         jne 0x649d5a
// 00649bfc  8a4509               mov al, byte ptr [ebp + 9]
// 00649bff  3c08                 cmp al, 8
// 00649c01  0f8581000000         jne 0x649c88
// 00649c07  8b442418             mov eax, dword ptr [esp + 0x18]
// 00649c0b  8d3c70               lea edi, [eax + esi*2]
// 00649c0e  03fe                 add edi, esi
// 00649c10  f644242080           test byte ptr [esp + 0x20], 0x80
// 00649c15  8d0437               lea eax, [edi + esi]
// 00649c18  742e                 je 0x649c48
// 00649c1a  83fe01               cmp esi, 1
// 00649c1d  7624                 jbe 0x649c43
// 00649c1f  8d4eff               lea ecx, [esi - 1]
// 00649c22  8850ff               mov byte ptr [eax - 1], dl
// 00649c25  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00649c29  48                   dec eax
// 00649c2a  4f                   dec edi
// 00649c2b  48                   dec eax
// 00649c2c  8818                 mov byte ptr [eax], bl
// 00649c2e  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00649c32  4f                   dec edi
// 00649c33  48                   dec eax
// 00649c34  8818                 mov byte ptr [eax], bl
// 00649c36  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00649c3a  4f                   dec edi
// 00649c3b  48                   dec eax
// 00649c3c  83e901               sub ecx, 1
// 00649c3f  8818                 mov byte ptr [eax], bl
// 00649c41  75df                 jne 0x649c22
// 00649c43  8850ff               mov byte ptr [eax - 1], dl
// 00649c46  eb29                 jmp 0x649c71
// 00649c48  85f6                 test esi, esi
// 00649c4a  7625                 jbe 0x649c71
// 00649c4c  8bce                 mov ecx, esi
// 00649c4e  8bff                 mov edi, edi
// 00649c50  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00649c54  4f                   dec edi
// 00649c55  8858ff               mov byte ptr [eax - 1], bl
// 00649c58  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00649c5c  48                   dec eax
// 00649c5d  4f                   dec edi
// 00649c5e  48                   dec eax
// 00649c5f  8818                 mov byte ptr [eax], bl
// 00649c61  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00649c65  4f                   dec edi
// 00649c66  48                   dec eax
// 00649c67  8818                 mov byte ptr [eax], bl
// 00649c69  48                   dec eax
// 00649c6a  83e901               sub ecx, 1
// 00649c6d  8810                 mov byte ptr [eax], dl
// 00649c6f  75df                 jne 0x649c50
// 00649c71  5f                   pop edi
// 00649c72  8d0cb500000000       lea ecx, [esi*4]
// 00649c79  5e                   pop esi
// 00649c7a  c6450a04             mov byte ptr [ebp + 0xa], 4
// 00649c7e  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 00649c82  894d04               mov dword ptr [ebp + 4], ecx
// 00649c85  5d                   pop ebp
// 00649c86  5b                   pop ebx
// 00649c87  c3                   ret 
// 00649c88  3c10                 cmp al, 0x10
// 00649c8a  0f85ca000000         jne 0x649d5a
// 00649c90  f644242080           test byte ptr [esp + 0x20], 0x80
// 00649c95  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00649c99  8d0476               lea eax, [esi + esi*2]
// 00649c9c  8d0c41               lea ecx, [ecx + eax*2]
// 00649c9f  8d0471               lea eax, [ecx + esi*2]
// 00649ca2  7459                 je 0x649cfd
// 00649ca4  83fe01               cmp esi, 1
// 00649ca7  764c                 jbe 0x649cf5
// 00649ca9  8d7eff               lea edi, [esi - 1]
// 00649cac  8d642400             lea esp, [esp]
// 00649cb0  8858ff               mov byte ptr [eax - 1], bl
// 00649cb3  48                   dec eax
// 00649cb4  8850ff               mov byte ptr [eax - 1], dl
// 00649cb7  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649cbb  48                   dec eax
// 00649cbc  8858ff               mov byte ptr [eax - 1], bl
// 00649cbf  49                   dec ecx
// 00649cc0  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649cc4  48                   dec eax
// 00649cc5  8858ff               mov byte ptr [eax - 1], bl
// 00649cc8  49                   dec ecx
// 00649cc9  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649ccd  48                   dec eax
// 00649cce  49                   dec ecx
// 00649ccf  8858ff               mov byte ptr [eax - 1], bl
// 00649cd2  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649cd6  48                   dec eax
// 00649cd7  49                   dec ecx
// 00649cd8  8858ff               mov byte ptr [eax - 1], bl
// 00649cdb  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649cdf  48                   dec eax
// 00649ce0  49                   dec ecx
// 00649ce1  48                   dec eax
// 00649ce2  8818                 mov byte ptr [eax], bl
// 00649ce4  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649ce8  49                   dec ecx
// 00649ce9  48                   dec eax
// 00649cea  83ef01               sub edi, 1
// 00649ced  8818                 mov byte ptr [eax], bl
// 00649cef  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 00649cf3  75bb                 jne 0x649cb0
// 00649cf5  48                   dec eax
// 00649cf6  8818                 mov byte ptr [eax], bl
// 00649cf8  8850ff               mov byte ptr [eax - 1], dl
// 00649cfb  eb4b                 jmp 0x649d48
// 00649cfd  85f6                 test esi, esi
// 00649cff  7647                 jbe 0x649d48
// 00649d01  8bfe                 mov edi, esi
// 00649d03  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649d07  8858ff               mov byte ptr [eax - 1], bl
// 00649d0a  49                   dec ecx
// 00649d0b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649d0f  48                   dec eax
// 00649d10  8858ff               mov byte ptr [eax - 1], bl
// 00649d13  49                   dec ecx
// 00649d14  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649d18  48                   dec eax
// 00649d19  8858ff               mov byte ptr [eax - 1], bl
// 00649d1c  49                   dec ecx
// 00649d1d  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649d21  48                   dec eax
// 00649d22  8858ff               mov byte ptr [eax - 1], bl
// 00649d25  49                   dec ecx
// 00649d26  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649d2a  48                   dec eax
// 00649d2b  49                   dec ecx
// 00649d2c  8858ff               mov byte ptr [eax - 1], bl
// 00649d2f  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00649d33  48                   dec eax
// 00649d34  49                   dec ecx
// 00649d35  48                   dec eax
// 00649d36  8818                 mov byte ptr [eax], bl
// 00649d38  0fb65c2414           movzx ebx, byte ptr [esp + 0x14]
// 00649d3d  48                   dec eax
// 00649d3e  8818                 mov byte ptr [eax], bl
// 00649d40  48                   dec eax
// 00649d41  83ef01               sub edi, 1
// 00649d44  8810                 mov byte ptr [eax], dl
// 00649d46  75bb                 jne 0x649d03
// 00649d48  8d14f500000000       lea edx, [esi*8]
// 00649d4f  c6450b40             mov byte ptr [ebp + 0xb], 0x40
// 00649d53  c6450a04             mov byte ptr [ebp + 0xa], 4
// 00649d57  895504               mov dword ptr [ebp + 4], edx
// 00649d5a  5f                   pop edi
// 00649d5b  5e                   pop esi
// 00649d5c  5d                   pop ebp
// 00649d5d  5b                   pop ebx
// 00649d5e  c3                   ret 
// library libpng-1.2.7/pngrtran.c (function _png_do_read_filler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.7 pngrtran.c
