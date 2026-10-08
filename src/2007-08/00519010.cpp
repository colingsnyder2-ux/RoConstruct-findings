// from server: 100% by auto
// roc 2007-08 00519010  unit: seg_00510000  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00519010
//
// 00519010  8b542404             mov edx, dword ptr [esp + 4]
// 00519014  8a4209               mov al, byte ptr [edx + 9]
// 00519017  3c08                 cmp al, 8
// 00519019  0f832e010000         jae 0x51914d
// 0051901f  53                   push ebx
// 00519020  55                   push ebp
// 00519021  0fb6c0               movzx eax, al
// 00519024  83e801               sub eax, 1
// 00519027  56                   push esi
// 00519028  57                   push edi
// 00519029  8b3a                 mov edi, dword ptr [edx]
// 0051902b  0f84b4000000         je 0x5190e5
// 00519031  83e801               sub eax, 1
// 00519034  7466                 je 0x51909c
// 00519036  83e802               sub eax, 2
// 00519039  0f85ef000000         jne 0x51912e
// 0051903f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00519043  8d4fff               lea ecx, [edi - 1]
// 00519046  8bf1                 mov esi, ecx
// 00519048  d1ee                 shr esi, 1
// 0051904a  03f0                 add esi, eax
// 0051904c  8d6c07ff             lea ebp, [edi + eax - 1]
// 00519050  83e101               and ecx, 1
// 00519053  b801000000           mov eax, 1
// 00519058  2bc1                 sub eax, ecx
// 0051905a  03c0                 add eax, eax
// 0051905c  03c0                 add eax, eax
// 0051905e  85ff                 test edi, edi
// 00519060  0f86c8000000         jbe 0x51912e
// 00519066  897c2414             mov dword ptr [esp + 0x14], edi
// 0051906a  8d9b00000000         lea ebx, [ebx]
// 00519070  8a1e                 mov bl, byte ptr [esi]
// 00519072  8ac8                 mov cl, al
// 00519074  d2eb                 shr bl, cl
// 00519076  80e30f               and bl, 0xf
// 00519079  83f804               cmp eax, 4
// 0051907c  885d00               mov byte ptr [ebp], bl
// 0051907f  7507                 jne 0x519088
// 00519081  33c0                 xor eax, eax
// 00519083  83ee01               sub esi, 1
// 00519086  eb05                 jmp 0x51908d
// 00519088  b804000000           mov eax, 4
// 0051908d  83ed01               sub ebp, 1
// 00519090  836c241401           sub dword ptr [esp + 0x14], 1
// 00519095  75d9                 jne 0x519070
// 00519097  e992000000           jmp 0x51912e
// 0051909c  8b442418             mov eax, dword ptr [esp + 0x18]
// 005190a0  8d4fff               lea ecx, [edi - 1]
// 005190a3  8bf1                 mov esi, ecx
// 005190a5  c1ee02               shr esi, 2
// 005190a8  03f0                 add esi, eax
// 005190aa  8d6c07ff             lea ebp, [edi + eax - 1]
// 005190ae  83e103               and ecx, 3
// 005190b1  b803000000           mov eax, 3
// 005190b6  2bc1                 sub eax, ecx
// 005190b8  03c0                 add eax, eax
// 005190ba  85ff                 test edi, edi
// 005190bc  7670                 jbe 0x51912e
// 005190be  8bd7                 mov edx, edi
// 005190c0  8a1e                 mov bl, byte ptr [esi]
// 005190c2  8ac8                 mov cl, al
// 005190c4  d2eb                 shr bl, cl
// 005190c6  80e303               and bl, 3
// 005190c9  83f806               cmp eax, 6
// 005190cc  885d00               mov byte ptr [ebp], bl
// 005190cf  7507                 jne 0x5190d8
// 005190d1  33c0                 xor eax, eax
// 005190d3  83ee01               sub esi, 1
// 005190d6  eb03                 jmp 0x5190db
// 005190d8  83c002               add eax, 2
// 005190db  83ed01               sub ebp, 1
// 005190de  83ea01               sub edx, 1
// 005190e1  75dd                 jne 0x5190c0
// 005190e3  eb45                 jmp 0x51912a
// 005190e5  8b442418             mov eax, dword ptr [esp + 0x18]
// 005190e9  8d4fff               lea ecx, [edi - 1]
// 005190ec  8bf1                 mov esi, ecx
// 005190ee  c1ee03               shr esi, 3
// 005190f1  03f0                 add esi, eax
// 005190f3  8d6c07ff             lea ebp, [edi + eax - 1]
// 005190f7  83e107               and ecx, 7
// 005190fa  b807000000           mov eax, 7
// 005190ff  2bc1                 sub eax, ecx
// 00519101  85ff                 test edi, edi
// 00519103  7629                 jbe 0x51912e
// 00519105  8bd7                 mov edx, edi
// 00519107  8a1e                 mov bl, byte ptr [esi]
// 00519109  8ac8                 mov cl, al
// 0051910b  d2eb                 shr bl, cl
// 0051910d  80e301               and bl, 1
// 00519110  83f807               cmp eax, 7
// 00519113  885d00               mov byte ptr [ebp], bl
// 00519116  7507                 jne 0x51911f
// 00519118  33c0                 xor eax, eax
// 0051911a  83ee01               sub esi, 1
// 0051911d  eb03                 jmp 0x519122
// 0051911f  83c001               add eax, 1
// 00519122  83ed01               sub ebp, 1
// 00519125  83ea01               sub edx, 1
// 00519128  75dd                 jne 0x519107
// 0051912a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051912e  8a420a               mov al, byte ptr [edx + 0xa]
// 00519131  8ac8                 mov cl, al
// 00519133  02c9                 add cl, cl
// 00519135  02c9                 add cl, cl
// 00519137  0fb6c0               movzx eax, al
// 0051913a  02c9                 add cl, cl
// 0051913c  0fafc7               imul eax, edi
// 0051913f  5f                   pop edi
// 00519140  5e                   pop esi
// 00519141  5d                   pop ebp
// 00519142  c6420908             mov byte ptr [edx + 9], 8
// 00519146  884a0b               mov byte ptr [edx + 0xb], cl
// 00519149  894204               mov dword ptr [edx + 4], eax
// 0051914c  5b                   pop ebx
// 0051914d  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_unpack)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
