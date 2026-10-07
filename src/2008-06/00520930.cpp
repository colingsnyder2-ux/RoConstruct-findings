// roc 2008-06 00520930  unit: seg_00520000  size: 671 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00520930
//
// 00520930  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00520934  53                   push ebx
// 00520935  55                   push ebp
// 00520936  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0052093a  8a4508               mov al, byte ptr [ebp + 8]
// 0052093d  8bda                 mov ebx, edx
// 0052093f  56                   push esi
// 00520940  8b7500               mov esi, dword ptr [ebp]
// 00520943  c1eb08               shr ebx, 8
// 00520946  57                   push edi
// 00520947  885c2414             mov byte ptr [esp + 0x14], bl
// 0052094b  84c0                 test al, al
// 0052094d  0f8511010000         jne 0x520a64
// 00520953  8a4509               mov al, byte ptr [ebp + 9]
// 00520956  3c08                 cmp al, 8
// 00520958  7568                 jne 0x5209c2
// 0052095a  f644242080           test byte ptr [esp + 0x20], 0x80
// 0052095f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00520963  8d3c06               lea edi, [esi + eax]
// 00520966  8d0437               lea eax, [edi + esi]
// 00520969  742d                 je 0x520998
// 0052096b  83fe01               cmp esi, 1
// 0052096e  7612                 jbe 0x520982
// 00520970  8d4eff               lea ecx, [esi - 1]
// 00520973  48                   dec eax
// 00520974  8810                 mov byte ptr [eax], dl
// 00520976  8a5fff               mov bl, byte ptr [edi - 1]
// 00520979  4f                   dec edi
// 0052097a  48                   dec eax
// 0052097b  83e901               sub ecx, 1
// 0052097e  8818                 mov byte ptr [eax], bl
// 00520980  75f1                 jne 0x520973
// 00520982  5f                   pop edi
// 00520983  8850ff               mov byte ptr [eax - 1], dl
// 00520986  8d0c36               lea ecx, [esi + esi]
// 00520989  5e                   pop esi
// 0052098a  c6450a02             mov byte ptr [ebp + 0xa], 2
// 0052098e  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 00520992  894d04               mov dword ptr [ebp + 4], ecx
// 00520995  5d                   pop ebp
// 00520996  5b                   pop ebx
// 00520997  c3                   ret 
// 00520998  85f6                 test esi, esi
// 0052099a  7613                 jbe 0x5209af
// 0052099c  8bce                 mov ecx, esi
// 0052099e  8bff                 mov edi, edi
// 005209a0  8a5fff               mov bl, byte ptr [edi - 1]
// 005209a3  4f                   dec edi
// 005209a4  48                   dec eax
// 005209a5  8818                 mov byte ptr [eax], bl
// 005209a7  48                   dec eax
// 005209a8  83e901               sub ecx, 1
// 005209ab  8810                 mov byte ptr [eax], dl
// 005209ad  75f1                 jne 0x5209a0
// 005209af  5f                   pop edi
// 005209b0  8d0c36               lea ecx, [esi + esi]
// 005209b3  5e                   pop esi
// 005209b4  c6450a02             mov byte ptr [ebp + 0xa], 2
// 005209b8  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 005209bc  894d04               mov dword ptr [ebp + 4], ecx
// 005209bf  5d                   pop ebp
// 005209c0  5b                   pop ebx
// 005209c1  c3                   ret 
// 005209c2  3c10                 cmp al, 0x10
// 005209c4  0f8500020000         jne 0x520bca
// 005209ca  f644242080           test byte ptr [esp + 0x20], 0x80
// 005209cf  8b442418             mov eax, dword ptr [esp + 0x18]
// 005209d3  8d3c70               lea edi, [eax + esi*2]
// 005209d6  8d0477               lea eax, [edi + esi*2]
// 005209d9  7448                 je 0x520a23
// 005209db  83fe01               cmp esi, 1
// 005209de  7625                 jbe 0x520a05
// 005209e0  8d4eff               lea ecx, [esi - 1]
// 005209e3  894c2414             mov dword ptr [esp + 0x14], ecx
// 005209e7  8858ff               mov byte ptr [eax - 1], bl
// 005209ea  48                   dec eax
// 005209eb  48                   dec eax
// 005209ec  8810                 mov byte ptr [eax], dl
// 005209ee  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 005209f2  4f                   dec edi
// 005209f3  48                   dec eax
// 005209f4  8808                 mov byte ptr [eax], cl
// 005209f6  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 005209fa  4f                   dec edi
// 005209fb  48                   dec eax
// 005209fc  836c241401           sub dword ptr [esp + 0x14], 1
// 00520a01  8808                 mov byte ptr [eax], cl
// 00520a03  75e2                 jne 0x5209e7
// 00520a05  8858ff               mov byte ptr [eax - 1], bl
// 00520a08  48                   dec eax
// 00520a09  8850ff               mov byte ptr [eax - 1], dl
// 00520a0c  5f                   pop edi
// 00520a0d  8d14b500000000       lea edx, [esi*4]
// 00520a14  5e                   pop esi
// 00520a15  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00520a19  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 00520a1d  895504               mov dword ptr [ebp + 4], edx
// 00520a20  5d                   pop ebp
// 00520a21  5b                   pop ebx
// 00520a22  c3                   ret 
// 00520a23  85f6                 test esi, esi
// 00520a25  7626                 jbe 0x520a4d
// 00520a27  89742414             mov dword ptr [esp + 0x14], esi
// 00520a2b  eb03                 jmp 0x520a30
// 00520a2d  8d4900               lea ecx, [ecx]
// 00520a30  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 00520a34  4f                   dec edi
// 00520a35  48                   dec eax
// 00520a36  8808                 mov byte ptr [eax], cl
// 00520a38  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 00520a3c  4f                   dec edi
// 00520a3d  48                   dec eax
// 00520a3e  8808                 mov byte ptr [eax], cl
// 00520a40  48                   dec eax
// 00520a41  8818                 mov byte ptr [eax], bl
// 00520a43  48                   dec eax
// 00520a44  836c241401           sub dword ptr [esp + 0x14], 1
// 00520a49  8810                 mov byte ptr [eax], dl
// 00520a4b  75e3                 jne 0x520a30
// 00520a4d  5f                   pop edi
// 00520a4e  8d14b500000000       lea edx, [esi*4]
// 00520a55  5e                   pop esi
// 00520a56  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00520a5a  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 00520a5e  895504               mov dword ptr [ebp + 4], edx
// 00520a61  5d                   pop ebp
// 00520a62  5b                   pop ebx
// 00520a63  c3                   ret 
// 00520a64  3c02                 cmp al, 2
// 00520a66  0f855e010000         jne 0x520bca
// 00520a6c  8a4509               mov al, byte ptr [ebp + 9]
// 00520a6f  3c08                 cmp al, 8
// 00520a71  0f8581000000         jne 0x520af8
// 00520a77  8b442418             mov eax, dword ptr [esp + 0x18]
// 00520a7b  8d3c70               lea edi, [eax + esi*2]
// 00520a7e  03fe                 add edi, esi
// 00520a80  f644242080           test byte ptr [esp + 0x20], 0x80
// 00520a85  8d0437               lea eax, [edi + esi]
// 00520a88  742e                 je 0x520ab8
// 00520a8a  83fe01               cmp esi, 1
// 00520a8d  7624                 jbe 0x520ab3
// 00520a8f  8d4eff               lea ecx, [esi - 1]
// 00520a92  8850ff               mov byte ptr [eax - 1], dl
// 00520a95  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00520a99  48                   dec eax
// 00520a9a  4f                   dec edi
// 00520a9b  48                   dec eax
// 00520a9c  8818                 mov byte ptr [eax], bl
// 00520a9e  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00520aa2  4f                   dec edi
// 00520aa3  48                   dec eax
// 00520aa4  8818                 mov byte ptr [eax], bl
// 00520aa6  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00520aaa  4f                   dec edi
// 00520aab  48                   dec eax
// 00520aac  83e901               sub ecx, 1
// 00520aaf  8818                 mov byte ptr [eax], bl
// 00520ab1  75df                 jne 0x520a92
// 00520ab3  8850ff               mov byte ptr [eax - 1], dl
// 00520ab6  eb29                 jmp 0x520ae1
// 00520ab8  85f6                 test esi, esi
// 00520aba  7625                 jbe 0x520ae1
// 00520abc  8bce                 mov ecx, esi
// 00520abe  8bff                 mov edi, edi
// 00520ac0  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00520ac4  4f                   dec edi
// 00520ac5  8858ff               mov byte ptr [eax - 1], bl
// 00520ac8  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00520acc  48                   dec eax
// 00520acd  4f                   dec edi
// 00520ace  48                   dec eax
// 00520acf  8818                 mov byte ptr [eax], bl
// 00520ad1  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00520ad5  4f                   dec edi
// 00520ad6  48                   dec eax
// 00520ad7  8818                 mov byte ptr [eax], bl
// 00520ad9  48                   dec eax
// 00520ada  83e901               sub ecx, 1
// 00520add  8810                 mov byte ptr [eax], dl
// 00520adf  75df                 jne 0x520ac0
// 00520ae1  5f                   pop edi
// 00520ae2  8d0cb500000000       lea ecx, [esi*4]
// 00520ae9  5e                   pop esi
// 00520aea  c6450a04             mov byte ptr [ebp + 0xa], 4
// 00520aee  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 00520af2  894d04               mov dword ptr [ebp + 4], ecx
// 00520af5  5d                   pop ebp
// 00520af6  5b                   pop ebx
// 00520af7  c3                   ret 
// 00520af8  3c10                 cmp al, 0x10
// 00520afa  0f85ca000000         jne 0x520bca
// 00520b00  f644242080           test byte ptr [esp + 0x20], 0x80
// 00520b05  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00520b09  8d0476               lea eax, [esi + esi*2]
// 00520b0c  8d0c41               lea ecx, [ecx + eax*2]
// 00520b0f  8d0471               lea eax, [ecx + esi*2]
// 00520b12  7459                 je 0x520b6d
// 00520b14  83fe01               cmp esi, 1
// 00520b17  764c                 jbe 0x520b65
// 00520b19  8d7eff               lea edi, [esi - 1]
// 00520b1c  8d642400             lea esp, [esp]
// 00520b20  8858ff               mov byte ptr [eax - 1], bl
// 00520b23  48                   dec eax
// 00520b24  8850ff               mov byte ptr [eax - 1], dl
// 00520b27  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520b2b  48                   dec eax
// 00520b2c  8858ff               mov byte ptr [eax - 1], bl
// 00520b2f  49                   dec ecx
// 00520b30  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520b34  48                   dec eax
// 00520b35  8858ff               mov byte ptr [eax - 1], bl
// 00520b38  49                   dec ecx
// 00520b39  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520b3d  48                   dec eax
// 00520b3e  49                   dec ecx
// 00520b3f  8858ff               mov byte ptr [eax - 1], bl
// 00520b42  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520b46  48                   dec eax
// 00520b47  49                   dec ecx
// 00520b48  8858ff               mov byte ptr [eax - 1], bl
// 00520b4b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520b4f  48                   dec eax
// 00520b50  49                   dec ecx
// 00520b51  48                   dec eax
// 00520b52  8818                 mov byte ptr [eax], bl
// 00520b54  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520b58  49                   dec ecx
// 00520b59  48                   dec eax
// 00520b5a  83ef01               sub edi, 1
// 00520b5d  8818                 mov byte ptr [eax], bl
// 00520b5f  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 00520b63  75bb                 jne 0x520b20
// 00520b65  48                   dec eax
// 00520b66  8818                 mov byte ptr [eax], bl
// 00520b68  8850ff               mov byte ptr [eax - 1], dl
// 00520b6b  eb4b                 jmp 0x520bb8
// 00520b6d  85f6                 test esi, esi
// 00520b6f  7647                 jbe 0x520bb8
// 00520b71  8bfe                 mov edi, esi
// 00520b73  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520b77  8858ff               mov byte ptr [eax - 1], bl
// 00520b7a  49                   dec ecx
// 00520b7b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520b7f  48                   dec eax
// 00520b80  8858ff               mov byte ptr [eax - 1], bl
// 00520b83  49                   dec ecx
// 00520b84  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520b88  48                   dec eax
// 00520b89  8858ff               mov byte ptr [eax - 1], bl
// 00520b8c  49                   dec ecx
// 00520b8d  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520b91  48                   dec eax
// 00520b92  8858ff               mov byte ptr [eax - 1], bl
// 00520b95  49                   dec ecx
// 00520b96  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520b9a  48                   dec eax
// 00520b9b  49                   dec ecx
// 00520b9c  8858ff               mov byte ptr [eax - 1], bl
// 00520b9f  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00520ba3  48                   dec eax
// 00520ba4  49                   dec ecx
// 00520ba5  48                   dec eax
// 00520ba6  8818                 mov byte ptr [eax], bl
// 00520ba8  0fb65c2414           movzx ebx, byte ptr [esp + 0x14]
// 00520bad  48                   dec eax
// 00520bae  8818                 mov byte ptr [eax], bl
// 00520bb0  48                   dec eax
// 00520bb1  83ef01               sub edi, 1
// 00520bb4  8810                 mov byte ptr [eax], dl
// 00520bb6  75bb                 jne 0x520b73
// 00520bb8  8d14f500000000       lea edx, [esi*8]
// 00520bbf  c6450b40             mov byte ptr [ebp + 0xb], 0x40
// 00520bc3  c6450a04             mov byte ptr [ebp + 0xa], 4
// 00520bc7  895504               mov dword ptr [ebp + 4], edx
// 00520bca  5f                   pop edi
// 00520bcb  5e                   pop esi
// 00520bcc  5d                   pop ebp
// 00520bcd  5b                   pop ebx
// 00520bce  c3                   ret 
// library libpng-1.2.7/pngrtran.c (function _png_do_read_filler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.7 pngrtran.c
