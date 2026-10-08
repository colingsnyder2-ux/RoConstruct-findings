// from server: 100% by auto
// roc 2009-06 00584460  unit: seg_00580000  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00584460
//
// 00584460  8b542404             mov edx, dword ptr [esp + 4]
// 00584464  8a4209               mov al, byte ptr [edx + 9]
// 00584467  3c08                 cmp al, 8
// 00584469  0f8324010000         jae 0x584593
// 0058446f  53                   push ebx
// 00584470  55                   push ebp
// 00584471  0fb6c0               movzx eax, al
// 00584474  83e801               sub eax, 1
// 00584477  56                   push esi
// 00584478  57                   push edi
// 00584479  8b3a                 mov edi, dword ptr [edx]
// 0058447b  0f84b0000000         je 0x584531
// 00584481  83e801               sub eax, 1
// 00584484  7462                 je 0x5844e8
// 00584486  83e802               sub eax, 2
// 00584489  0f85e5000000         jne 0x584574
// 0058448f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00584493  8d4fff               lea ecx, [edi - 1]
// 00584496  8bf1                 mov esi, ecx
// 00584498  d1ee                 shr esi, 1
// 0058449a  03f0                 add esi, eax
// 0058449c  8d6c07ff             lea ebp, [edi + eax - 1]
// 005844a0  83e101               and ecx, 1
// 005844a3  b801000000           mov eax, 1
// 005844a8  2bc1                 sub eax, ecx
// 005844aa  03c0                 add eax, eax
// 005844ac  03c0                 add eax, eax
// 005844ae  85ff                 test edi, edi
// 005844b0  0f86be000000         jbe 0x584574
// 005844b6  897c2414             mov dword ptr [esp + 0x14], edi
// 005844ba  8d9b00000000         lea ebx, [ebx]
// 005844c0  8a1e                 mov bl, byte ptr [esi]
// 005844c2  8ac8                 mov cl, al
// 005844c4  d2eb                 shr bl, cl
// 005844c6  80e30f               and bl, 0xf
// 005844c9  885d00               mov byte ptr [ebp], bl
// 005844cc  83f804               cmp eax, 4
// 005844cf  7505                 jne 0x5844d6
// 005844d1  33c0                 xor eax, eax
// 005844d3  4e                   dec esi
// 005844d4  eb05                 jmp 0x5844db
// 005844d6  b804000000           mov eax, 4
// 005844db  4d                   dec ebp
// 005844dc  836c241401           sub dword ptr [esp + 0x14], 1
// 005844e1  75dd                 jne 0x5844c0
// 005844e3  e98c000000           jmp 0x584574
// 005844e8  8b442418             mov eax, dword ptr [esp + 0x18]
// 005844ec  8d4fff               lea ecx, [edi - 1]
// 005844ef  8bf1                 mov esi, ecx
// 005844f1  c1ee02               shr esi, 2
// 005844f4  03f0                 add esi, eax
// 005844f6  8d6c07ff             lea ebp, [edi + eax - 1]
// 005844fa  83e103               and ecx, 3
// 005844fd  b803000000           mov eax, 3
// 00584502  2bc1                 sub eax, ecx
// 00584504  03c0                 add eax, eax
// 00584506  85ff                 test edi, edi
// 00584508  766a                 jbe 0x584574
// 0058450a  8bd7                 mov edx, edi
// 0058450c  8d642400             lea esp, [esp]
// 00584510  8a1e                 mov bl, byte ptr [esi]
// 00584512  8ac8                 mov cl, al
// 00584514  d2eb                 shr bl, cl
// 00584516  80e303               and bl, 3
// 00584519  885d00               mov byte ptr [ebp], bl
// 0058451c  83f806               cmp eax, 6
// 0058451f  7505                 jne 0x584526
// 00584521  33c0                 xor eax, eax
// 00584523  4e                   dec esi
// 00584524  eb03                 jmp 0x584529
// 00584526  83c002               add eax, 2
// 00584529  4d                   dec ebp
// 0058452a  83ea01               sub edx, 1
// 0058452d  75e1                 jne 0x584510
// 0058452f  eb3f                 jmp 0x584570
// 00584531  8b442418             mov eax, dword ptr [esp + 0x18]
// 00584535  8d4fff               lea ecx, [edi - 1]
// 00584538  8bf1                 mov esi, ecx
// 0058453a  c1ee03               shr esi, 3
// 0058453d  03f0                 add esi, eax
// 0058453f  8d6c07ff             lea ebp, [edi + eax - 1]
// 00584543  83e107               and ecx, 7
// 00584546  b807000000           mov eax, 7
// 0058454b  2bc1                 sub eax, ecx
// 0058454d  85ff                 test edi, edi
// 0058454f  7623                 jbe 0x584574
// 00584551  8bd7                 mov edx, edi
// 00584553  8a1e                 mov bl, byte ptr [esi]
// 00584555  8ac8                 mov cl, al
// 00584557  d2eb                 shr bl, cl
// 00584559  80e301               and bl, 1
// 0058455c  885d00               mov byte ptr [ebp], bl
// 0058455f  83f807               cmp eax, 7
// 00584562  7505                 jne 0x584569
// 00584564  33c0                 xor eax, eax
// 00584566  4e                   dec esi
// 00584567  eb01                 jmp 0x58456a
// 00584569  40                   inc eax
// 0058456a  4d                   dec ebp
// 0058456b  83ea01               sub edx, 1
// 0058456e  75e3                 jne 0x584553
// 00584570  8b542414             mov edx, dword ptr [esp + 0x14]
// 00584574  8a420a               mov al, byte ptr [edx + 0xa]
// 00584577  8ac8                 mov cl, al
// 00584579  02c9                 add cl, cl
// 0058457b  02c9                 add cl, cl
// 0058457d  0fb6c0               movzx eax, al
// 00584580  02c9                 add cl, cl
// 00584582  0fafc7               imul eax, edi
// 00584585  5f                   pop edi
// 00584586  5e                   pop esi
// 00584587  5d                   pop ebp
// 00584588  c6420908             mov byte ptr [edx + 9], 8
// 0058458c  884a0b               mov byte ptr [edx + 0xb], cl
// 0058458f  894204               mov dword ptr [edx + 4], eax
// 00584592  5b                   pop ebx
// 00584593  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
