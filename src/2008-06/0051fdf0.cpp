// roc 2008-06 0051fdf0  unit: seg_00510000  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051fdf0
//
// 0051fdf0  55                   push ebp
// 0051fdf1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0051fdf5  8a5508               mov dl, byte ptr [ebp + 8]
// 0051fdf8  56                   push esi
// 0051fdf9  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051fdfd  57                   push edi
// 0051fdfe  8b7d00               mov edi, dword ptr [ebp]
// 0051fe01  8bc6                 mov eax, esi
// 0051fe03  8bce                 mov ecx, esi
// 0051fe05  80fa02               cmp dl, 2
// 0051fe08  0f8540010000         jne 0x51ff4e
// 0051fe0e  807d0a04             cmp byte ptr [ebp + 0xa], 4
// 0051fe12  0f8536010000         jne 0x51ff4e
// 0051fe18  807d0908             cmp byte ptr [ebp + 9], 8
// 0051fe1c  0f857e000000         jne 0x51fea0
// 0051fe22  f644241880           test byte ptr [esp + 0x18], 0x80
// 0051fe27  743e                 je 0x51fe67
// 0051fe29  8d5603               lea edx, [esi + 3]
// 0051fe2c  8d4604               lea eax, [esi + 4]
// 0051fe2f  83ff01               cmp edi, 1
// 0051fe32  765a                 jbe 0x51fe8e
// 0051fe34  8d77ff               lea esi, [edi - 1]
// 0051fe37  0fb608               movzx ecx, byte ptr [eax]
// 0051fe3a  880a                 mov byte ptr [edx], cl
// 0051fe3c  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0051fe40  40                   inc eax
// 0051fe41  42                   inc edx
// 0051fe42  880a                 mov byte ptr [edx], cl
// 0051fe44  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0051fe48  40                   inc eax
// 0051fe49  42                   inc edx
// 0051fe4a  880a                 mov byte ptr [edx], cl
// 0051fe4c  42                   inc edx
// 0051fe4d  83c002               add eax, 2
// 0051fe50  83ee01               sub esi, 1
// 0051fe53  75e2                 jne 0x51fe37
// 0051fe55  8d047f               lea eax, [edi + edi*2]
// 0051fe58  5f                   pop edi
// 0051fe59  5e                   pop esi
// 0051fe5a  c6450b18             mov byte ptr [ebp + 0xb], 0x18
// 0051fe5e  894504               mov dword ptr [ebp + 4], eax
// 0051fe61  c6450a03             mov byte ptr [ebp + 0xa], 3
// 0051fe65  5d                   pop ebp
// 0051fe66  c3                   ret 
// 0051fe67  85ff                 test edi, edi
// 0051fe69  7623                 jbe 0x51fe8e
// 0051fe6b  8bf7                 mov esi, edi
// 0051fe6d  8d4900               lea ecx, [ecx]
// 0051fe70  0fb65001             movzx edx, byte ptr [eax + 1]
// 0051fe74  40                   inc eax
// 0051fe75  8811                 mov byte ptr [ecx], dl
// 0051fe77  0fb65001             movzx edx, byte ptr [eax + 1]
// 0051fe7b  40                   inc eax
// 0051fe7c  41                   inc ecx
// 0051fe7d  8811                 mov byte ptr [ecx], dl
// 0051fe7f  0fb65001             movzx edx, byte ptr [eax + 1]
// 0051fe83  40                   inc eax
// 0051fe84  41                   inc ecx
// 0051fe85  8811                 mov byte ptr [ecx], dl
// 0051fe87  41                   inc ecx
// 0051fe88  40                   inc eax
// 0051fe89  83ee01               sub esi, 1
// 0051fe8c  75e2                 jne 0x51fe70
// 0051fe8e  8d047f               lea eax, [edi + edi*2]
// 0051fe91  5f                   pop edi
// 0051fe92  5e                   pop esi
// 0051fe93  c6450b18             mov byte ptr [ebp + 0xb], 0x18
// 0051fe97  894504               mov dword ptr [ebp + 4], eax
// 0051fe9a  c6450a03             mov byte ptr [ebp + 0xa], 3
// 0051fe9e  5d                   pop ebp
// 0051fe9f  c3                   ret 
// 0051fea0  f644241880           test byte ptr [esp + 0x18], 0x80
// 0051fea5  7453                 je 0x51fefa
// 0051fea7  8d5608               lea edx, [esi + 8]
// 0051feaa  8d4606               lea eax, [esi + 6]
// 0051fead  83ff01               cmp edi, 1
// 0051feb0  0f8684000000         jbe 0x51ff3a
// 0051feb6  8d77ff               lea esi, [edi - 1]
// 0051feb9  8da42400000000       lea esp, [esp]
// 0051fec0  0fb60a               movzx ecx, byte ptr [edx]
// 0051fec3  8808                 mov byte ptr [eax], cl
// 0051fec5  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 0051fec9  42                   inc edx
// 0051feca  884801               mov byte ptr [eax + 1], cl
// 0051fecd  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 0051fed1  40                   inc eax
// 0051fed2  42                   inc edx
// 0051fed3  884801               mov byte ptr [eax + 1], cl
// 0051fed6  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 0051feda  40                   inc eax
// 0051fedb  42                   inc edx
// 0051fedc  40                   inc eax
// 0051fedd  8808                 mov byte ptr [eax], cl
// 0051fedf  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 0051fee3  42                   inc edx
// 0051fee4  40                   inc eax
// 0051fee5  8808                 mov byte ptr [eax], cl
// 0051fee7  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 0051feeb  42                   inc edx
// 0051feec  40                   inc eax
// 0051feed  8808                 mov byte ptr [eax], cl
// 0051feef  40                   inc eax
// 0051fef0  83c203               add edx, 3
// 0051fef3  83ee01               sub esi, 1
// 0051fef6  75c8                 jne 0x51fec0
// 0051fef8  eb40                 jmp 0x51ff3a
// 0051fefa  85ff                 test edi, edi
// 0051fefc  763c                 jbe 0x51ff3a
// 0051fefe  8bf7                 mov esi, edi
// 0051ff00  0fb65002             movzx edx, byte ptr [eax + 2]
// 0051ff04  8811                 mov byte ptr [ecx], dl
// 0051ff06  83c002               add eax, 2
// 0051ff09  0fb65001             movzx edx, byte ptr [eax + 1]
// 0051ff0d  40                   inc eax
// 0051ff0e  885101               mov byte ptr [ecx + 1], dl
// 0051ff11  0fb65001             movzx edx, byte ptr [eax + 1]
// 0051ff15  41                   inc ecx
// 0051ff16  40                   inc eax
// 0051ff17  885101               mov byte ptr [ecx + 1], dl
// 0051ff1a  0fb65001             movzx edx, byte ptr [eax + 1]
// 0051ff1e  41                   inc ecx
// 0051ff1f  40                   inc eax
// 0051ff20  41                   inc ecx
// 0051ff21  8811                 mov byte ptr [ecx], dl
// 0051ff23  0fb65001             movzx edx, byte ptr [eax + 1]
// 0051ff27  40                   inc eax
// 0051ff28  41                   inc ecx
// 0051ff29  8811                 mov byte ptr [ecx], dl
// 0051ff2b  0fb65001             movzx edx, byte ptr [eax + 1]
// 0051ff2f  40                   inc eax
// 0051ff30  41                   inc ecx
// 0051ff31  8811                 mov byte ptr [ecx], dl
// 0051ff33  41                   inc ecx
// 0051ff34  40                   inc eax
// 0051ff35  83ee01               sub esi, 1
// 0051ff38  75c6                 jne 0x51ff00
// 0051ff3a  8d047f               lea eax, [edi + edi*2]
// 0051ff3d  5f                   pop edi
// 0051ff3e  03c0                 add eax, eax
// 0051ff40  5e                   pop esi
// 0051ff41  c6450b30             mov byte ptr [ebp + 0xb], 0x30
// 0051ff45  894504               mov dword ptr [ebp + 4], eax
// 0051ff48  c6450a03             mov byte ptr [ebp + 0xa], 3
// 0051ff4c  5d                   pop ebp
// 0051ff4d  c3                   ret 
// 0051ff4e  84d2                 test dl, dl
// 0051ff50  0f85d0000000         jne 0x520026
// 0051ff56  807d0a02             cmp byte ptr [ebp + 0xa], 2
// 0051ff5a  0f85c6000000         jne 0x520026
// 0051ff60  b208                 mov dl, 8
// 0051ff62  385509               cmp byte ptr [ebp + 9], dl
// 0051ff65  754c                 jne 0x51ffb3
// 0051ff67  f644241880           test byte ptr [esp + 0x18], 0x80
// 0051ff6c  53                   push ebx
// 0051ff6d  7422                 je 0x51ff91
// 0051ff6f  85ff                 test edi, edi
// 0051ff71  7631                 jbe 0x51ffa4
// 0051ff73  8bf7                 mov esi, edi
// 0051ff75  8a18                 mov bl, byte ptr [eax]
// 0051ff77  8819                 mov byte ptr [ecx], bl
// 0051ff79  41                   inc ecx
// 0051ff7a  83c002               add eax, 2
// 0051ff7d  83ee01               sub esi, 1
// 0051ff80  75f3                 jne 0x51ff75
// 0051ff82  5b                   pop ebx
// 0051ff83  897d04               mov dword ptr [ebp + 4], edi
// 0051ff86  5f                   pop edi
// 0051ff87  5e                   pop esi
// 0051ff88  88550b               mov byte ptr [ebp + 0xb], dl
// 0051ff8b  c6450a01             mov byte ptr [ebp + 0xa], 1
// 0051ff8f  5d                   pop ebp
// 0051ff90  c3                   ret 
// 0051ff91  85ff                 test edi, edi
// 0051ff93  760f                 jbe 0x51ffa4
// 0051ff95  8bf7                 mov esi, edi
// 0051ff97  8a5801               mov bl, byte ptr [eax + 1]
// 0051ff9a  40                   inc eax
// 0051ff9b  8819                 mov byte ptr [ecx], bl
// 0051ff9d  41                   inc ecx
// 0051ff9e  40                   inc eax
// 0051ff9f  83ee01               sub esi, 1
// 0051ffa2  75f3                 jne 0x51ff97
// 0051ffa4  5b                   pop ebx
// 0051ffa5  897d04               mov dword ptr [ebp + 4], edi
// 0051ffa8  5f                   pop edi
// 0051ffa9  5e                   pop esi
// 0051ffaa  88550b               mov byte ptr [ebp + 0xb], dl
// 0051ffad  c6450a01             mov byte ptr [ebp + 0xa], 1
// 0051ffb1  5d                   pop ebp
// 0051ffb2  c3                   ret 
// 0051ffb3  f644241880           test byte ptr [esp + 0x18], 0x80
// 0051ffb8  743e                 je 0x51fff8
// 0051ffba  8d5604               lea edx, [esi + 4]
// 0051ffbd  8d4602               lea eax, [esi + 2]
// 0051ffc0  83ff01               cmp edi, 1
// 0051ffc3  7653                 jbe 0x520018
// 0051ffc5  8d77ff               lea esi, [edi - 1]
// 0051ffc8  eb06                 jmp 0x51ffd0
// 0051ffca  8d9b00000000         lea ebx, [ebx]
// 0051ffd0  0fb60a               movzx ecx, byte ptr [edx]
// 0051ffd3  8808                 mov byte ptr [eax], cl
// 0051ffd5  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 0051ffd9  42                   inc edx
// 0051ffda  40                   inc eax
// 0051ffdb  8808                 mov byte ptr [eax], cl
// 0051ffdd  40                   inc eax
// 0051ffde  83c203               add edx, 3
// 0051ffe1  83ee01               sub esi, 1
// 0051ffe4  75ea                 jne 0x51ffd0
// 0051ffe6  8d043f               lea eax, [edi + edi]
// 0051ffe9  5f                   pop edi
// 0051ffea  5e                   pop esi
// 0051ffeb  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 0051ffef  894504               mov dword ptr [ebp + 4], eax
// 0051fff2  c6450a01             mov byte ptr [ebp + 0xa], 1
// 0051fff6  5d                   pop ebp
// 0051fff7  c3                   ret 
// 0051fff8  85ff                 test edi, edi
// 0051fffa  761c                 jbe 0x520018
// 0051fffc  8bf7                 mov esi, edi
// 0051fffe  8bff                 mov edi, edi
// 00520000  0fb65002             movzx edx, byte ptr [eax + 2]
// 00520004  83c002               add eax, 2
// 00520007  8811                 mov byte ptr [ecx], dl
// 00520009  0fb65001             movzx edx, byte ptr [eax + 1]
// 0052000d  40                   inc eax
// 0052000e  41                   inc ecx
// 0052000f  8811                 mov byte ptr [ecx], dl
// 00520011  41                   inc ecx
// 00520012  40                   inc eax
// 00520013  83ee01               sub esi, 1
// 00520016  75e8                 jne 0x520000
// 00520018  8d043f               lea eax, [edi + edi]
// 0052001b  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 0052001f  894504               mov dword ptr [ebp + 4], eax
// 00520022  c6450a01             mov byte ptr [ebp + 0xa], 1
// 00520026  5f                   pop edi
// 00520027  5e                   pop esi
// 00520028  5d                   pop ebp
// 00520029  c3                   ret 
// library libpng-1.2.7/pngtrans.c (function _png_do_strip_filler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.7 pngtrans.c
