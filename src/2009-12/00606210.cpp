// roc 2009-12 00606210  unit: seg_00600000  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00606210
//
// 00606210  8b542404             mov edx, dword ptr [esp + 4]
// 00606214  8a4209               mov al, byte ptr [edx + 9]
// 00606217  3c08                 cmp al, 8
// 00606219  0f8324010000         jae 0x606343
// 0060621f  53                   push ebx
// 00606220  55                   push ebp
// 00606221  0fb6c0               movzx eax, al
// 00606224  83e801               sub eax, 1
// 00606227  56                   push esi
// 00606228  57                   push edi
// 00606229  8b3a                 mov edi, dword ptr [edx]
// 0060622b  0f84b0000000         je 0x6062e1
// 00606231  83e801               sub eax, 1
// 00606234  7462                 je 0x606298
// 00606236  83e802               sub eax, 2
// 00606239  0f85e5000000         jne 0x606324
// 0060623f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00606243  8d4fff               lea ecx, [edi - 1]
// 00606246  8bf1                 mov esi, ecx
// 00606248  d1ee                 shr esi, 1
// 0060624a  03f0                 add esi, eax
// 0060624c  8d6c07ff             lea ebp, [edi + eax - 1]
// 00606250  83e101               and ecx, 1
// 00606253  b801000000           mov eax, 1
// 00606258  2bc1                 sub eax, ecx
// 0060625a  03c0                 add eax, eax
// 0060625c  03c0                 add eax, eax
// 0060625e  85ff                 test edi, edi
// 00606260  0f86be000000         jbe 0x606324
// 00606266  897c2414             mov dword ptr [esp + 0x14], edi
// 0060626a  8d9b00000000         lea ebx, [ebx]
// 00606270  8a1e                 mov bl, byte ptr [esi]
// 00606272  8ac8                 mov cl, al
// 00606274  d2eb                 shr bl, cl
// 00606276  80e30f               and bl, 0xf
// 00606279  885d00               mov byte ptr [ebp], bl
// 0060627c  83f804               cmp eax, 4
// 0060627f  7505                 jne 0x606286
// 00606281  33c0                 xor eax, eax
// 00606283  4e                   dec esi
// 00606284  eb05                 jmp 0x60628b
// 00606286  b804000000           mov eax, 4
// 0060628b  4d                   dec ebp
// 0060628c  836c241401           sub dword ptr [esp + 0x14], 1
// 00606291  75dd                 jne 0x606270
// 00606293  e98c000000           jmp 0x606324
// 00606298  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060629c  8d4fff               lea ecx, [edi - 1]
// 0060629f  8bf1                 mov esi, ecx
// 006062a1  c1ee02               shr esi, 2
// 006062a4  03f0                 add esi, eax
// 006062a6  8d6c07ff             lea ebp, [edi + eax - 1]
// 006062aa  83e103               and ecx, 3
// 006062ad  b803000000           mov eax, 3
// 006062b2  2bc1                 sub eax, ecx
// 006062b4  03c0                 add eax, eax
// 006062b6  85ff                 test edi, edi
// 006062b8  766a                 jbe 0x606324
// 006062ba  8bd7                 mov edx, edi
// 006062bc  8d642400             lea esp, [esp]
// 006062c0  8a1e                 mov bl, byte ptr [esi]
// 006062c2  8ac8                 mov cl, al
// 006062c4  d2eb                 shr bl, cl
// 006062c6  80e303               and bl, 3
// 006062c9  885d00               mov byte ptr [ebp], bl
// 006062cc  83f806               cmp eax, 6
// 006062cf  7505                 jne 0x6062d6
// 006062d1  33c0                 xor eax, eax
// 006062d3  4e                   dec esi
// 006062d4  eb03                 jmp 0x6062d9
// 006062d6  83c002               add eax, 2
// 006062d9  4d                   dec ebp
// 006062da  83ea01               sub edx, 1
// 006062dd  75e1                 jne 0x6062c0
// 006062df  eb3f                 jmp 0x606320
// 006062e1  8b442418             mov eax, dword ptr [esp + 0x18]
// 006062e5  8d4fff               lea ecx, [edi - 1]
// 006062e8  8bf1                 mov esi, ecx
// 006062ea  c1ee03               shr esi, 3
// 006062ed  03f0                 add esi, eax
// 006062ef  8d6c07ff             lea ebp, [edi + eax - 1]
// 006062f3  83e107               and ecx, 7
// 006062f6  b807000000           mov eax, 7
// 006062fb  2bc1                 sub eax, ecx
// 006062fd  85ff                 test edi, edi
// 006062ff  7623                 jbe 0x606324
// 00606301  8bd7                 mov edx, edi
// 00606303  8a1e                 mov bl, byte ptr [esi]
// 00606305  8ac8                 mov cl, al
// 00606307  d2eb                 shr bl, cl
// 00606309  80e301               and bl, 1
// 0060630c  885d00               mov byte ptr [ebp], bl
// 0060630f  83f807               cmp eax, 7
// 00606312  7505                 jne 0x606319
// 00606314  33c0                 xor eax, eax
// 00606316  4e                   dec esi
// 00606317  eb01                 jmp 0x60631a
// 00606319  40                   inc eax
// 0060631a  4d                   dec ebp
// 0060631b  83ea01               sub edx, 1
// 0060631e  75e3                 jne 0x606303
// 00606320  8b542414             mov edx, dword ptr [esp + 0x14]
// 00606324  8a420a               mov al, byte ptr [edx + 0xa]
// 00606327  8ac8                 mov cl, al
// 00606329  02c9                 add cl, cl
// 0060632b  02c9                 add cl, cl
// 0060632d  0fb6c0               movzx eax, al
// 00606330  02c9                 add cl, cl
// 00606332  0fafc7               imul eax, edi
// 00606335  5f                   pop edi
// 00606336  5e                   pop esi
// 00606337  5d                   pop ebp
// 00606338  c6420908             mov byte ptr [edx + 9], 8
// 0060633c  884a0b               mov byte ptr [edx + 0xb], cl
// 0060633f  894204               mov dword ptr [edx + 4], eax
// 00606342  5b                   pop ebx
// 00606343  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
