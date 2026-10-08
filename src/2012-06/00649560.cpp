// from server: 100% by auto
// roc 2012-06 00649560  unit: seg_00640000  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00649560
//
// 00649560  8b542404             mov edx, dword ptr [esp + 4]
// 00649564  8a4209               mov al, byte ptr [edx + 9]
// 00649567  3c08                 cmp al, 8
// 00649569  0f8324010000         jae 0x649693
// 0064956f  53                   push ebx
// 00649570  55                   push ebp
// 00649571  0fb6c0               movzx eax, al
// 00649574  83e801               sub eax, 1
// 00649577  56                   push esi
// 00649578  57                   push edi
// 00649579  8b3a                 mov edi, dword ptr [edx]
// 0064957b  0f84b0000000         je 0x649631
// 00649581  83e801               sub eax, 1
// 00649584  7462                 je 0x6495e8
// 00649586  83e802               sub eax, 2
// 00649589  0f85e5000000         jne 0x649674
// 0064958f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00649593  8d4fff               lea ecx, [edi - 1]
// 00649596  8bf1                 mov esi, ecx
// 00649598  d1ee                 shr esi, 1
// 0064959a  03f0                 add esi, eax
// 0064959c  8d6c07ff             lea ebp, [edi + eax - 1]
// 006495a0  83e101               and ecx, 1
// 006495a3  b801000000           mov eax, 1
// 006495a8  2bc1                 sub eax, ecx
// 006495aa  03c0                 add eax, eax
// 006495ac  03c0                 add eax, eax
// 006495ae  85ff                 test edi, edi
// 006495b0  0f86be000000         jbe 0x649674
// 006495b6  897c2414             mov dword ptr [esp + 0x14], edi
// 006495ba  8d9b00000000         lea ebx, [ebx]
// 006495c0  8a1e                 mov bl, byte ptr [esi]
// 006495c2  8ac8                 mov cl, al
// 006495c4  d2eb                 shr bl, cl
// 006495c6  80e30f               and bl, 0xf
// 006495c9  885d00               mov byte ptr [ebp], bl
// 006495cc  83f804               cmp eax, 4
// 006495cf  7505                 jne 0x6495d6
// 006495d1  33c0                 xor eax, eax
// 006495d3  4e                   dec esi
// 006495d4  eb05                 jmp 0x6495db
// 006495d6  b804000000           mov eax, 4
// 006495db  4d                   dec ebp
// 006495dc  836c241401           sub dword ptr [esp + 0x14], 1
// 006495e1  75dd                 jne 0x6495c0
// 006495e3  e98c000000           jmp 0x649674
// 006495e8  8b442418             mov eax, dword ptr [esp + 0x18]
// 006495ec  8d4fff               lea ecx, [edi - 1]
// 006495ef  8bf1                 mov esi, ecx
// 006495f1  c1ee02               shr esi, 2
// 006495f4  03f0                 add esi, eax
// 006495f6  8d6c07ff             lea ebp, [edi + eax - 1]
// 006495fa  83e103               and ecx, 3
// 006495fd  b803000000           mov eax, 3
// 00649602  2bc1                 sub eax, ecx
// 00649604  03c0                 add eax, eax
// 00649606  85ff                 test edi, edi
// 00649608  766a                 jbe 0x649674
// 0064960a  8bd7                 mov edx, edi
// 0064960c  8d642400             lea esp, [esp]
// 00649610  8a1e                 mov bl, byte ptr [esi]
// 00649612  8ac8                 mov cl, al
// 00649614  d2eb                 shr bl, cl
// 00649616  80e303               and bl, 3
// 00649619  885d00               mov byte ptr [ebp], bl
// 0064961c  83f806               cmp eax, 6
// 0064961f  7505                 jne 0x649626
// 00649621  33c0                 xor eax, eax
// 00649623  4e                   dec esi
// 00649624  eb03                 jmp 0x649629
// 00649626  83c002               add eax, 2
// 00649629  4d                   dec ebp
// 0064962a  83ea01               sub edx, 1
// 0064962d  75e1                 jne 0x649610
// 0064962f  eb3f                 jmp 0x649670
// 00649631  8b442418             mov eax, dword ptr [esp + 0x18]
// 00649635  8d4fff               lea ecx, [edi - 1]
// 00649638  8bf1                 mov esi, ecx
// 0064963a  c1ee03               shr esi, 3
// 0064963d  03f0                 add esi, eax
// 0064963f  8d6c07ff             lea ebp, [edi + eax - 1]
// 00649643  83e107               and ecx, 7
// 00649646  b807000000           mov eax, 7
// 0064964b  2bc1                 sub eax, ecx
// 0064964d  85ff                 test edi, edi
// 0064964f  7623                 jbe 0x649674
// 00649651  8bd7                 mov edx, edi
// 00649653  8a1e                 mov bl, byte ptr [esi]
// 00649655  8ac8                 mov cl, al
// 00649657  d2eb                 shr bl, cl
// 00649659  80e301               and bl, 1
// 0064965c  885d00               mov byte ptr [ebp], bl
// 0064965f  83f807               cmp eax, 7
// 00649662  7505                 jne 0x649669
// 00649664  33c0                 xor eax, eax
// 00649666  4e                   dec esi
// 00649667  eb01                 jmp 0x64966a
// 00649669  40                   inc eax
// 0064966a  4d                   dec ebp
// 0064966b  83ea01               sub edx, 1
// 0064966e  75e3                 jne 0x649653
// 00649670  8b542414             mov edx, dword ptr [esp + 0x14]
// 00649674  8a420a               mov al, byte ptr [edx + 0xa]
// 00649677  8ac8                 mov cl, al
// 00649679  02c9                 add cl, cl
// 0064967b  02c9                 add cl, cl
// 0064967d  0fb6c0               movzx eax, al
// 00649680  02c9                 add cl, cl
// 00649682  0fafc7               imul eax, edi
// 00649685  5f                   pop edi
// 00649686  5e                   pop esi
// 00649687  5d                   pop ebp
// 00649688  c6420908             mov byte ptr [edx + 9], 8
// 0064968c  884a0b               mov byte ptr [edx + 0xb], cl
// 0064968f  894204               mov dword ptr [edx + 4], eax
// 00649692  5b                   pop ebx
// 00649693  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
