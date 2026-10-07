// roc 2011-06 0055c6e0  unit: seg_00550000  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055c6e0
//
// 0055c6e0  8b542404             mov edx, dword ptr [esp + 4]
// 0055c6e4  8a4209               mov al, byte ptr [edx + 9]
// 0055c6e7  3c08                 cmp al, 8
// 0055c6e9  0f8324010000         jae 0x55c813
// 0055c6ef  53                   push ebx
// 0055c6f0  55                   push ebp
// 0055c6f1  0fb6c0               movzx eax, al
// 0055c6f4  83e801               sub eax, 1
// 0055c6f7  56                   push esi
// 0055c6f8  57                   push edi
// 0055c6f9  8b3a                 mov edi, dword ptr [edx]
// 0055c6fb  0f84b0000000         je 0x55c7b1
// 0055c701  83e801               sub eax, 1
// 0055c704  7462                 je 0x55c768
// 0055c706  83e802               sub eax, 2
// 0055c709  0f85e5000000         jne 0x55c7f4
// 0055c70f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055c713  8d4fff               lea ecx, [edi - 1]
// 0055c716  8bf1                 mov esi, ecx
// 0055c718  d1ee                 shr esi, 1
// 0055c71a  03f0                 add esi, eax
// 0055c71c  8d6c07ff             lea ebp, [edi + eax - 1]
// 0055c720  83e101               and ecx, 1
// 0055c723  b801000000           mov eax, 1
// 0055c728  2bc1                 sub eax, ecx
// 0055c72a  03c0                 add eax, eax
// 0055c72c  03c0                 add eax, eax
// 0055c72e  85ff                 test edi, edi
// 0055c730  0f86be000000         jbe 0x55c7f4
// 0055c736  897c2414             mov dword ptr [esp + 0x14], edi
// 0055c73a  8d9b00000000         lea ebx, [ebx]
// 0055c740  8a1e                 mov bl, byte ptr [esi]
// 0055c742  8ac8                 mov cl, al
// 0055c744  d2eb                 shr bl, cl
// 0055c746  80e30f               and bl, 0xf
// 0055c749  885d00               mov byte ptr [ebp], bl
// 0055c74c  83f804               cmp eax, 4
// 0055c74f  7505                 jne 0x55c756
// 0055c751  33c0                 xor eax, eax
// 0055c753  4e                   dec esi
// 0055c754  eb05                 jmp 0x55c75b
// 0055c756  b804000000           mov eax, 4
// 0055c75b  4d                   dec ebp
// 0055c75c  836c241401           sub dword ptr [esp + 0x14], 1
// 0055c761  75dd                 jne 0x55c740
// 0055c763  e98c000000           jmp 0x55c7f4
// 0055c768  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055c76c  8d4fff               lea ecx, [edi - 1]
// 0055c76f  8bf1                 mov esi, ecx
// 0055c771  c1ee02               shr esi, 2
// 0055c774  03f0                 add esi, eax
// 0055c776  8d6c07ff             lea ebp, [edi + eax - 1]
// 0055c77a  83e103               and ecx, 3
// 0055c77d  b803000000           mov eax, 3
// 0055c782  2bc1                 sub eax, ecx
// 0055c784  03c0                 add eax, eax
// 0055c786  85ff                 test edi, edi
// 0055c788  766a                 jbe 0x55c7f4
// 0055c78a  8bd7                 mov edx, edi
// 0055c78c  8d642400             lea esp, [esp]
// 0055c790  8a1e                 mov bl, byte ptr [esi]
// 0055c792  8ac8                 mov cl, al
// 0055c794  d2eb                 shr bl, cl
// 0055c796  80e303               and bl, 3
// 0055c799  885d00               mov byte ptr [ebp], bl
// 0055c79c  83f806               cmp eax, 6
// 0055c79f  7505                 jne 0x55c7a6
// 0055c7a1  33c0                 xor eax, eax
// 0055c7a3  4e                   dec esi
// 0055c7a4  eb03                 jmp 0x55c7a9
// 0055c7a6  83c002               add eax, 2
// 0055c7a9  4d                   dec ebp
// 0055c7aa  83ea01               sub edx, 1
// 0055c7ad  75e1                 jne 0x55c790
// 0055c7af  eb3f                 jmp 0x55c7f0
// 0055c7b1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055c7b5  8d4fff               lea ecx, [edi - 1]
// 0055c7b8  8bf1                 mov esi, ecx
// 0055c7ba  c1ee03               shr esi, 3
// 0055c7bd  03f0                 add esi, eax
// 0055c7bf  8d6c07ff             lea ebp, [edi + eax - 1]
// 0055c7c3  83e107               and ecx, 7
// 0055c7c6  b807000000           mov eax, 7
// 0055c7cb  2bc1                 sub eax, ecx
// 0055c7cd  85ff                 test edi, edi
// 0055c7cf  7623                 jbe 0x55c7f4
// 0055c7d1  8bd7                 mov edx, edi
// 0055c7d3  8a1e                 mov bl, byte ptr [esi]
// 0055c7d5  8ac8                 mov cl, al
// 0055c7d7  d2eb                 shr bl, cl
// 0055c7d9  80e301               and bl, 1
// 0055c7dc  885d00               mov byte ptr [ebp], bl
// 0055c7df  83f807               cmp eax, 7
// 0055c7e2  7505                 jne 0x55c7e9
// 0055c7e4  33c0                 xor eax, eax
// 0055c7e6  4e                   dec esi
// 0055c7e7  eb01                 jmp 0x55c7ea
// 0055c7e9  40                   inc eax
// 0055c7ea  4d                   dec ebp
// 0055c7eb  83ea01               sub edx, 1
// 0055c7ee  75e3                 jne 0x55c7d3
// 0055c7f0  8b542414             mov edx, dword ptr [esp + 0x14]
// 0055c7f4  8a420a               mov al, byte ptr [edx + 0xa]
// 0055c7f7  8ac8                 mov cl, al
// 0055c7f9  02c9                 add cl, cl
// 0055c7fb  02c9                 add cl, cl
// 0055c7fd  0fb6c0               movzx eax, al
// 0055c800  02c9                 add cl, cl
// 0055c802  0fafc7               imul eax, edi
// 0055c805  5f                   pop edi
// 0055c806  5e                   pop esi
// 0055c807  5d                   pop ebp
// 0055c808  c6420908             mov byte ptr [edx + 9], 8
// 0055c80c  884a0b               mov byte ptr [edx + 0xb], cl
// 0055c80f  894204               mov dword ptr [edx + 4], eax
// 0055c812  5b                   pop ebx
// 0055c813  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
