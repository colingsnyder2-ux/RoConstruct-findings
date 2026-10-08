// from server: 100% by auto
// roc 2010-06 00567b90  unit: seg_00560000  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00567b90
//
// 00567b90  8b542404             mov edx, dword ptr [esp + 4]
// 00567b94  8a4209               mov al, byte ptr [edx + 9]
// 00567b97  3c08                 cmp al, 8
// 00567b99  0f8324010000         jae 0x567cc3
// 00567b9f  53                   push ebx
// 00567ba0  55                   push ebp
// 00567ba1  0fb6c0               movzx eax, al
// 00567ba4  83e801               sub eax, 1
// 00567ba7  56                   push esi
// 00567ba8  57                   push edi
// 00567ba9  8b3a                 mov edi, dword ptr [edx]
// 00567bab  0f84b0000000         je 0x567c61
// 00567bb1  83e801               sub eax, 1
// 00567bb4  7462                 je 0x567c18
// 00567bb6  83e802               sub eax, 2
// 00567bb9  0f85e5000000         jne 0x567ca4
// 00567bbf  8b442418             mov eax, dword ptr [esp + 0x18]
// 00567bc3  8d4fff               lea ecx, [edi - 1]
// 00567bc6  8bf1                 mov esi, ecx
// 00567bc8  d1ee                 shr esi, 1
// 00567bca  03f0                 add esi, eax
// 00567bcc  8d6c07ff             lea ebp, [edi + eax - 1]
// 00567bd0  83e101               and ecx, 1
// 00567bd3  b801000000           mov eax, 1
// 00567bd8  2bc1                 sub eax, ecx
// 00567bda  03c0                 add eax, eax
// 00567bdc  03c0                 add eax, eax
// 00567bde  85ff                 test edi, edi
// 00567be0  0f86be000000         jbe 0x567ca4
// 00567be6  897c2414             mov dword ptr [esp + 0x14], edi
// 00567bea  8d9b00000000         lea ebx, [ebx]
// 00567bf0  8a1e                 mov bl, byte ptr [esi]
// 00567bf2  8ac8                 mov cl, al
// 00567bf4  d2eb                 shr bl, cl
// 00567bf6  80e30f               and bl, 0xf
// 00567bf9  885d00               mov byte ptr [ebp], bl
// 00567bfc  83f804               cmp eax, 4
// 00567bff  7505                 jne 0x567c06
// 00567c01  33c0                 xor eax, eax
// 00567c03  4e                   dec esi
// 00567c04  eb05                 jmp 0x567c0b
// 00567c06  b804000000           mov eax, 4
// 00567c0b  4d                   dec ebp
// 00567c0c  836c241401           sub dword ptr [esp + 0x14], 1
// 00567c11  75dd                 jne 0x567bf0
// 00567c13  e98c000000           jmp 0x567ca4
// 00567c18  8b442418             mov eax, dword ptr [esp + 0x18]
// 00567c1c  8d4fff               lea ecx, [edi - 1]
// 00567c1f  8bf1                 mov esi, ecx
// 00567c21  c1ee02               shr esi, 2
// 00567c24  03f0                 add esi, eax
// 00567c26  8d6c07ff             lea ebp, [edi + eax - 1]
// 00567c2a  83e103               and ecx, 3
// 00567c2d  b803000000           mov eax, 3
// 00567c32  2bc1                 sub eax, ecx
// 00567c34  03c0                 add eax, eax
// 00567c36  85ff                 test edi, edi
// 00567c38  766a                 jbe 0x567ca4
// 00567c3a  8bd7                 mov edx, edi
// 00567c3c  8d642400             lea esp, [esp]
// 00567c40  8a1e                 mov bl, byte ptr [esi]
// 00567c42  8ac8                 mov cl, al
// 00567c44  d2eb                 shr bl, cl
// 00567c46  80e303               and bl, 3
// 00567c49  885d00               mov byte ptr [ebp], bl
// 00567c4c  83f806               cmp eax, 6
// 00567c4f  7505                 jne 0x567c56
// 00567c51  33c0                 xor eax, eax
// 00567c53  4e                   dec esi
// 00567c54  eb03                 jmp 0x567c59
// 00567c56  83c002               add eax, 2
// 00567c59  4d                   dec ebp
// 00567c5a  83ea01               sub edx, 1
// 00567c5d  75e1                 jne 0x567c40
// 00567c5f  eb3f                 jmp 0x567ca0
// 00567c61  8b442418             mov eax, dword ptr [esp + 0x18]
// 00567c65  8d4fff               lea ecx, [edi - 1]
// 00567c68  8bf1                 mov esi, ecx
// 00567c6a  c1ee03               shr esi, 3
// 00567c6d  03f0                 add esi, eax
// 00567c6f  8d6c07ff             lea ebp, [edi + eax - 1]
// 00567c73  83e107               and ecx, 7
// 00567c76  b807000000           mov eax, 7
// 00567c7b  2bc1                 sub eax, ecx
// 00567c7d  85ff                 test edi, edi
// 00567c7f  7623                 jbe 0x567ca4
// 00567c81  8bd7                 mov edx, edi
// 00567c83  8a1e                 mov bl, byte ptr [esi]
// 00567c85  8ac8                 mov cl, al
// 00567c87  d2eb                 shr bl, cl
// 00567c89  80e301               and bl, 1
// 00567c8c  885d00               mov byte ptr [ebp], bl
// 00567c8f  83f807               cmp eax, 7
// 00567c92  7505                 jne 0x567c99
// 00567c94  33c0                 xor eax, eax
// 00567c96  4e                   dec esi
// 00567c97  eb01                 jmp 0x567c9a
// 00567c99  40                   inc eax
// 00567c9a  4d                   dec ebp
// 00567c9b  83ea01               sub edx, 1
// 00567c9e  75e3                 jne 0x567c83
// 00567ca0  8b542414             mov edx, dword ptr [esp + 0x14]
// 00567ca4  8a420a               mov al, byte ptr [edx + 0xa]
// 00567ca7  8ac8                 mov cl, al
// 00567ca9  02c9                 add cl, cl
// 00567cab  02c9                 add cl, cl
// 00567cad  0fb6c0               movzx eax, al
// 00567cb0  02c9                 add cl, cl
// 00567cb2  0fafc7               imul eax, edi
// 00567cb5  5f                   pop edi
// 00567cb6  5e                   pop esi
// 00567cb7  5d                   pop ebp
// 00567cb8  c6420908             mov byte ptr [edx + 9], 8
// 00567cbc  884a0b               mov byte ptr [edx + 0xb], cl
// 00567cbf  894204               mov dword ptr [edx + 4], eax
// 00567cc2  5b                   pop ebx
// 00567cc3  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
