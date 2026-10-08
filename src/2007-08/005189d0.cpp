// from server: 100% by auto
// roc 2007-08 005189d0  unit: seg_00510000  size: 646 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005189d0
//
// 005189d0  55                   push ebp
// 005189d1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 005189d5  8a5508               mov dl, byte ptr [ebp + 8]
// 005189d8  80fa02               cmp dl, 2
// 005189db  56                   push esi
// 005189dc  8b742410             mov esi, dword ptr [esp + 0x10]
// 005189e0  57                   push edi
// 005189e1  8b7d00               mov edi, dword ptr [ebp]
// 005189e4  8bc6                 mov eax, esi
// 005189e6  8bce                 mov ecx, esi
// 005189e8  0f857e010000         jne 0x518b6c
// 005189ee  807d0a04             cmp byte ptr [ebp + 0xa], 4
// 005189f2  0f8574010000         jne 0x518b6c
// 005189f8  807d0908             cmp byte ptr [ebp + 9], 8
// 005189fc  0f8593000000         jne 0x518a95
// 00518a02  f644241880           test byte ptr [esp + 0x18], 0x80
// 00518a07  7448                 je 0x518a51
// 00518a09  83ff01               cmp edi, 1
// 00518a0c  8d5603               lea edx, [esi + 3]
// 00518a0f  8d4604               lea eax, [esi + 4]
// 00518a12  766f                 jbe 0x518a83
// 00518a14  8d77ff               lea esi, [edi - 1]
// 00518a17  0fb608               movzx ecx, byte ptr [eax]
// 00518a1a  880a                 mov byte ptr [edx], cl
// 00518a1c  0fb64801             movzx ecx, byte ptr [eax + 1]
// 00518a20  83c001               add eax, 1
// 00518a23  83c201               add edx, 1
// 00518a26  880a                 mov byte ptr [edx], cl
// 00518a28  0fb64801             movzx ecx, byte ptr [eax + 1]
// 00518a2c  83c001               add eax, 1
// 00518a2f  83c201               add edx, 1
// 00518a32  880a                 mov byte ptr [edx], cl
// 00518a34  83c201               add edx, 1
// 00518a37  83c002               add eax, 2
// 00518a3a  83ee01               sub esi, 1
// 00518a3d  75d8                 jne 0x518a17
// 00518a3f  8d047f               lea eax, [edi + edi*2]
// 00518a42  5f                   pop edi
// 00518a43  5e                   pop esi
// 00518a44  c6450b18             mov byte ptr [ebp + 0xb], 0x18
// 00518a48  894504               mov dword ptr [ebp + 4], eax
// 00518a4b  c6450a03             mov byte ptr [ebp + 0xa], 3
// 00518a4f  5d                   pop ebp
// 00518a50  c3                   ret 
// 00518a51  85ff                 test edi, edi
// 00518a53  762e                 jbe 0x518a83
// 00518a55  8bf7                 mov esi, edi
// 00518a57  0fb65001             movzx edx, byte ptr [eax + 1]
// 00518a5b  83c001               add eax, 1
// 00518a5e  8811                 mov byte ptr [ecx], dl
// 00518a60  0fb65001             movzx edx, byte ptr [eax + 1]
// 00518a64  83c001               add eax, 1
// 00518a67  83c101               add ecx, 1
// 00518a6a  8811                 mov byte ptr [ecx], dl
// 00518a6c  0fb65001             movzx edx, byte ptr [eax + 1]
// 00518a70  83c001               add eax, 1
// 00518a73  83c101               add ecx, 1
// 00518a76  8811                 mov byte ptr [ecx], dl
// 00518a78  83c101               add ecx, 1
// 00518a7b  83c001               add eax, 1
// 00518a7e  83ee01               sub esi, 1
// 00518a81  75d4                 jne 0x518a57
// 00518a83  8d047f               lea eax, [edi + edi*2]
// 00518a86  5f                   pop edi
// 00518a87  5e                   pop esi
// 00518a88  c6450b18             mov byte ptr [ebp + 0xb], 0x18
// 00518a8c  894504               mov dword ptr [ebp + 4], eax
// 00518a8f  c6450a03             mov byte ptr [ebp + 0xa], 3
// 00518a93  5d                   pop ebp
// 00518a94  c3                   ret 
// 00518a95  f644241880           test byte ptr [esp + 0x18], 0x80
// 00518a9a  7464                 je 0x518b00
// 00518a9c  83ff01               cmp edi, 1
// 00518a9f  8d5608               lea edx, [esi + 8]
// 00518aa2  8d4606               lea eax, [esi + 6]
// 00518aa5  0f86ad000000         jbe 0x518b58
// 00518aab  8d77ff               lea esi, [edi - 1]
// 00518aae  8bff                 mov edi, edi
// 00518ab0  0fb60a               movzx ecx, byte ptr [edx]
// 00518ab3  8808                 mov byte ptr [eax], cl
// 00518ab5  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 00518ab9  83c201               add edx, 1
// 00518abc  884801               mov byte ptr [eax + 1], cl
// 00518abf  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 00518ac3  83c001               add eax, 1
// 00518ac6  83c201               add edx, 1
// 00518ac9  884801               mov byte ptr [eax + 1], cl
// 00518acc  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 00518ad0  83c001               add eax, 1
// 00518ad3  83c201               add edx, 1
// 00518ad6  83c001               add eax, 1
// 00518ad9  8808                 mov byte ptr [eax], cl
// 00518adb  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 00518adf  83c201               add edx, 1
// 00518ae2  83c001               add eax, 1
// 00518ae5  8808                 mov byte ptr [eax], cl
// 00518ae7  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 00518aeb  83c201               add edx, 1
// 00518aee  83c001               add eax, 1
// 00518af1  8808                 mov byte ptr [eax], cl
// 00518af3  83c001               add eax, 1
// 00518af6  83c203               add edx, 3
// 00518af9  83ee01               sub esi, 1
// 00518afc  75b2                 jne 0x518ab0
// 00518afe  eb58                 jmp 0x518b58
// 00518b00  85ff                 test edi, edi
// 00518b02  7654                 jbe 0x518b58
// 00518b04  8bf7                 mov esi, edi
// 00518b06  0fb65002             movzx edx, byte ptr [eax + 2]
// 00518b0a  8811                 mov byte ptr [ecx], dl
// 00518b0c  83c002               add eax, 2
// 00518b0f  0fb65001             movzx edx, byte ptr [eax + 1]
// 00518b13  83c001               add eax, 1
// 00518b16  885101               mov byte ptr [ecx + 1], dl
// 00518b19  0fb65001             movzx edx, byte ptr [eax + 1]
// 00518b1d  83c101               add ecx, 1
// 00518b20  83c001               add eax, 1
// 00518b23  885101               mov byte ptr [ecx + 1], dl
// 00518b26  0fb65001             movzx edx, byte ptr [eax + 1]
// 00518b2a  83c101               add ecx, 1
// 00518b2d  83c001               add eax, 1
// 00518b30  83c101               add ecx, 1
// 00518b33  8811                 mov byte ptr [ecx], dl
// 00518b35  0fb65001             movzx edx, byte ptr [eax + 1]
// 00518b39  83c001               add eax, 1
// 00518b3c  83c101               add ecx, 1
// 00518b3f  8811                 mov byte ptr [ecx], dl
// 00518b41  0fb65001             movzx edx, byte ptr [eax + 1]
// 00518b45  83c001               add eax, 1
// 00518b48  83c101               add ecx, 1
// 00518b4b  8811                 mov byte ptr [ecx], dl
// 00518b4d  83c101               add ecx, 1
// 00518b50  83c001               add eax, 1
// 00518b53  83ee01               sub esi, 1
// 00518b56  75ae                 jne 0x518b06
// 00518b58  8d047f               lea eax, [edi + edi*2]
// 00518b5b  5f                   pop edi
// 00518b5c  03c0                 add eax, eax
// 00518b5e  5e                   pop esi
// 00518b5f  c6450b30             mov byte ptr [ebp + 0xb], 0x30
// 00518b63  894504               mov dword ptr [ebp + 4], eax
// 00518b66  c6450a03             mov byte ptr [ebp + 0xa], 3
// 00518b6a  5d                   pop ebp
// 00518b6b  c3                   ret 
// 00518b6c  84d2                 test dl, dl
// 00518b6e  0f85de000000         jne 0x518c52
// 00518b74  807d0a02             cmp byte ptr [ebp + 0xa], 2
// 00518b78  0f85d4000000         jne 0x518c52
// 00518b7e  b208                 mov dl, 8
// 00518b80  385509               cmp byte ptr [ebp + 9], dl
// 00518b83  7554                 jne 0x518bd9
// 00518b85  f644241880           test byte ptr [esp + 0x18], 0x80
// 00518b8a  53                   push ebx
// 00518b8b  7424                 je 0x518bb1
// 00518b8d  85ff                 test edi, edi
// 00518b8f  7639                 jbe 0x518bca
// 00518b91  8bf7                 mov esi, edi
// 00518b93  8a18                 mov bl, byte ptr [eax]
// 00518b95  8819                 mov byte ptr [ecx], bl
// 00518b97  83c101               add ecx, 1
// 00518b9a  83c002               add eax, 2
// 00518b9d  83ee01               sub esi, 1
// 00518ba0  75f1                 jne 0x518b93
// 00518ba2  5b                   pop ebx
// 00518ba3  897d04               mov dword ptr [ebp + 4], edi
// 00518ba6  5f                   pop edi
// 00518ba7  5e                   pop esi
// 00518ba8  88550b               mov byte ptr [ebp + 0xb], dl
// 00518bab  c6450a01             mov byte ptr [ebp + 0xa], 1
// 00518baf  5d                   pop ebp
// 00518bb0  c3                   ret 
// 00518bb1  85ff                 test edi, edi
// 00518bb3  7615                 jbe 0x518bca
// 00518bb5  8bf7                 mov esi, edi
// 00518bb7  8a5801               mov bl, byte ptr [eax + 1]
// 00518bba  83c001               add eax, 1
// 00518bbd  8819                 mov byte ptr [ecx], bl
// 00518bbf  83c101               add ecx, 1
// 00518bc2  83c001               add eax, 1
// 00518bc5  83ee01               sub esi, 1
// 00518bc8  75ed                 jne 0x518bb7
// 00518bca  5b                   pop ebx
// 00518bcb  897d04               mov dword ptr [ebp + 4], edi
// 00518bce  5f                   pop edi
// 00518bcf  5e                   pop esi
// 00518bd0  88550b               mov byte ptr [ebp + 0xb], dl
// 00518bd3  c6450a01             mov byte ptr [ebp + 0xa], 1
// 00518bd7  5d                   pop ebp
// 00518bd8  c3                   ret 
// 00518bd9  f644241880           test byte ptr [esp + 0x18], 0x80
// 00518bde  743e                 je 0x518c1e
// 00518be0  83ff01               cmp edi, 1
// 00518be3  8d5604               lea edx, [esi + 4]
// 00518be6  8d4602               lea eax, [esi + 2]
// 00518be9  7659                 jbe 0x518c44
// 00518beb  8d77ff               lea esi, [edi - 1]
// 00518bee  8bff                 mov edi, edi
// 00518bf0  0fb60a               movzx ecx, byte ptr [edx]
// 00518bf3  8808                 mov byte ptr [eax], cl
// 00518bf5  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 00518bf9  83c201               add edx, 1
// 00518bfc  83c001               add eax, 1
// 00518bff  8808                 mov byte ptr [eax], cl
// 00518c01  83c001               add eax, 1
// 00518c04  83c203               add edx, 3
// 00518c07  83ee01               sub esi, 1
// 00518c0a  75e4                 jne 0x518bf0
// 00518c0c  8d043f               lea eax, [edi + edi]
// 00518c0f  5f                   pop edi
// 00518c10  5e                   pop esi
// 00518c11  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 00518c15  894504               mov dword ptr [ebp + 4], eax
// 00518c18  c6450a01             mov byte ptr [ebp + 0xa], 1
// 00518c1c  5d                   pop ebp
// 00518c1d  c3                   ret 
// 00518c1e  85ff                 test edi, edi
// 00518c20  7622                 jbe 0x518c44
// 00518c22  8bf7                 mov esi, edi
// 00518c24  0fb65002             movzx edx, byte ptr [eax + 2]
// 00518c28  83c002               add eax, 2
// 00518c2b  8811                 mov byte ptr [ecx], dl
// 00518c2d  0fb65001             movzx edx, byte ptr [eax + 1]
// 00518c31  83c001               add eax, 1
// 00518c34  83c101               add ecx, 1
// 00518c37  8811                 mov byte ptr [ecx], dl
// 00518c39  83c101               add ecx, 1
// 00518c3c  83c001               add eax, 1
// 00518c3f  83ee01               sub esi, 1
// 00518c42  75e0                 jne 0x518c24
// 00518c44  8d043f               lea eax, [edi + edi]
// 00518c47  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 00518c4b  894504               mov dword ptr [ebp + 4], eax
// 00518c4e  c6450a01             mov byte ptr [ebp + 0xa], 1
// 00518c52  5f                   pop edi
// 00518c53  5e                   pop esi
// 00518c54  5d                   pop ebp
// 00518c55  c3                   ret 
// library libpng-1.2.7/pngtrans.c (function _png_do_strip_filler)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.7 pngtrans.c
