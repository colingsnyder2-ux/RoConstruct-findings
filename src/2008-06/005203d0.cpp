// roc 2008-06 005203d0  unit: seg_00520000  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005203d0
//
// 005203d0  8b542404             mov edx, dword ptr [esp + 4]
// 005203d4  8a4209               mov al, byte ptr [edx + 9]
// 005203d7  3c08                 cmp al, 8
// 005203d9  0f8324010000         jae 0x520503
// 005203df  53                   push ebx
// 005203e0  55                   push ebp
// 005203e1  0fb6c0               movzx eax, al
// 005203e4  83e801               sub eax, 1
// 005203e7  56                   push esi
// 005203e8  57                   push edi
// 005203e9  8b3a                 mov edi, dword ptr [edx]
// 005203eb  0f84b0000000         je 0x5204a1
// 005203f1  83e801               sub eax, 1
// 005203f4  7462                 je 0x520458
// 005203f6  83e802               sub eax, 2
// 005203f9  0f85e5000000         jne 0x5204e4
// 005203ff  8b442418             mov eax, dword ptr [esp + 0x18]
// 00520403  8d4fff               lea ecx, [edi - 1]
// 00520406  8bf1                 mov esi, ecx
// 00520408  d1ee                 shr esi, 1
// 0052040a  03f0                 add esi, eax
// 0052040c  8d6c07ff             lea ebp, [edi + eax - 1]
// 00520410  83e101               and ecx, 1
// 00520413  b801000000           mov eax, 1
// 00520418  2bc1                 sub eax, ecx
// 0052041a  03c0                 add eax, eax
// 0052041c  03c0                 add eax, eax
// 0052041e  85ff                 test edi, edi
// 00520420  0f86be000000         jbe 0x5204e4
// 00520426  897c2414             mov dword ptr [esp + 0x14], edi
// 0052042a  8d9b00000000         lea ebx, [ebx]
// 00520430  8a1e                 mov bl, byte ptr [esi]
// 00520432  8ac8                 mov cl, al
// 00520434  d2eb                 shr bl, cl
// 00520436  80e30f               and bl, 0xf
// 00520439  885d00               mov byte ptr [ebp], bl
// 0052043c  83f804               cmp eax, 4
// 0052043f  7505                 jne 0x520446
// 00520441  33c0                 xor eax, eax
// 00520443  4e                   dec esi
// 00520444  eb05                 jmp 0x52044b
// 00520446  b804000000           mov eax, 4
// 0052044b  4d                   dec ebp
// 0052044c  836c241401           sub dword ptr [esp + 0x14], 1
// 00520451  75dd                 jne 0x520430
// 00520453  e98c000000           jmp 0x5204e4
// 00520458  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052045c  8d4fff               lea ecx, [edi - 1]
// 0052045f  8bf1                 mov esi, ecx
// 00520461  c1ee02               shr esi, 2
// 00520464  03f0                 add esi, eax
// 00520466  8d6c07ff             lea ebp, [edi + eax - 1]
// 0052046a  83e103               and ecx, 3
// 0052046d  b803000000           mov eax, 3
// 00520472  2bc1                 sub eax, ecx
// 00520474  03c0                 add eax, eax
// 00520476  85ff                 test edi, edi
// 00520478  766a                 jbe 0x5204e4
// 0052047a  8bd7                 mov edx, edi
// 0052047c  8d642400             lea esp, [esp]
// 00520480  8a1e                 mov bl, byte ptr [esi]
// 00520482  8ac8                 mov cl, al
// 00520484  d2eb                 shr bl, cl
// 00520486  80e303               and bl, 3
// 00520489  885d00               mov byte ptr [ebp], bl
// 0052048c  83f806               cmp eax, 6
// 0052048f  7505                 jne 0x520496
// 00520491  33c0                 xor eax, eax
// 00520493  4e                   dec esi
// 00520494  eb03                 jmp 0x520499
// 00520496  83c002               add eax, 2
// 00520499  4d                   dec ebp
// 0052049a  83ea01               sub edx, 1
// 0052049d  75e1                 jne 0x520480
// 0052049f  eb3f                 jmp 0x5204e0
// 005204a1  8b442418             mov eax, dword ptr [esp + 0x18]
// 005204a5  8d4fff               lea ecx, [edi - 1]
// 005204a8  8bf1                 mov esi, ecx
// 005204aa  c1ee03               shr esi, 3
// 005204ad  03f0                 add esi, eax
// 005204af  8d6c07ff             lea ebp, [edi + eax - 1]
// 005204b3  83e107               and ecx, 7
// 005204b6  b807000000           mov eax, 7
// 005204bb  2bc1                 sub eax, ecx
// 005204bd  85ff                 test edi, edi
// 005204bf  7623                 jbe 0x5204e4
// 005204c1  8bd7                 mov edx, edi
// 005204c3  8a1e                 mov bl, byte ptr [esi]
// 005204c5  8ac8                 mov cl, al
// 005204c7  d2eb                 shr bl, cl
// 005204c9  80e301               and bl, 1
// 005204cc  885d00               mov byte ptr [ebp], bl
// 005204cf  83f807               cmp eax, 7
// 005204d2  7505                 jne 0x5204d9
// 005204d4  33c0                 xor eax, eax
// 005204d6  4e                   dec esi
// 005204d7  eb01                 jmp 0x5204da
// 005204d9  40                   inc eax
// 005204da  4d                   dec ebp
// 005204db  83ea01               sub edx, 1
// 005204de  75e3                 jne 0x5204c3
// 005204e0  8b542414             mov edx, dword ptr [esp + 0x14]
// 005204e4  8a420a               mov al, byte ptr [edx + 0xa]
// 005204e7  8ac8                 mov cl, al
// 005204e9  02c9                 add cl, cl
// 005204eb  02c9                 add cl, cl
// 005204ed  0fb6c0               movzx eax, al
// 005204f0  02c9                 add cl, cl
// 005204f2  0fafc7               imul eax, edi
// 005204f5  5f                   pop edi
// 005204f6  5e                   pop esi
// 005204f7  5d                   pop ebp
// 005204f8  c6420908             mov byte ptr [edx + 9], 8
// 005204fc  884a0b               mov byte ptr [edx + 0xb], cl
// 005204ff  894204               mov dword ptr [edx + 4], eax
// 00520502  5b                   pop ebx
// 00520503  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
