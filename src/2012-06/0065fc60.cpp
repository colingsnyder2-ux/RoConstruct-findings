// roc 2012-06 0065fc60  unit: seg_00650000  size: 516 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065fc60
//
// 0065fc60  51                   push ecx
// 0065fc61  53                   push ebx
// 0065fc62  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0065fc66  56                   push esi
// 0065fc67  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065fc6b  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0065fc72  57                   push edi
// 0065fc73  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0065fc7b  7e57                 jle 0x65fcd4
// 0065fc7d  85db                 test ebx, ebx
// 0065fc7f  760f                 jbe 0x65fc90
// 0065fc81  8b06                 mov eax, dword ptr [esi]
// 0065fc83  83782c02             cmp dword ptr [eax + 0x2c], 2
// 0065fc87  7507                 jne 0x65fc90
// 0065fc89  8bd6                 mov edx, esi
// 0065fc8b  e840f7ffff           call 0x65f3d0
// 0065fc90  8d8e180b0000         lea ecx, [esi + 0xb18]
// 0065fc96  51                   push ecx
// 0065fc97  e864faffff           call 0x65f700
// 0065fc9c  8d96240b0000         lea edx, [esi + 0xb24]
// 0065fca2  52                   push edx
// 0065fca3  e858faffff           call 0x65f700
// 0065fca8  83c408               add esp, 8
// 0065fcab  8bc6                 mov eax, esi
// 0065fcad  e84efcffff           call 0x65f900
// 0065fcb2  8b96a8160000         mov edx, dword ptr [esi + 0x16a8]
// 0065fcb8  8b8eac160000         mov ecx, dword ptr [esi + 0x16ac]
// 0065fcbe  83c20a               add edx, 0xa
// 0065fcc1  83c10a               add ecx, 0xa
// 0065fcc4  c1ea03               shr edx, 3
// 0065fcc7  c1e903               shr ecx, 3
// 0065fcca  8944240c             mov dword ptr [esp + 0xc], eax
// 0065fcce  3bca                 cmp ecx, edx
// 0065fcd0  7707                 ja 0x65fcd9
// 0065fcd2  eb03                 jmp 0x65fcd7
// 0065fcd4  8d4b05               lea ecx, [ebx + 5]
// 0065fcd7  8bd1                 mov edx, ecx
// 0065fcd9  8d4304               lea eax, [ebx + 4]
// 0065fcdc  3bc2                 cmp eax, edx
// 0065fcde  771d                 ja 0x65fcfd
// 0065fce0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0065fce4  85c0                 test eax, eax
// 0065fce6  7415                 je 0x65fcfd
// 0065fce8  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0065fcec  57                   push edi
// 0065fced  53                   push ebx
// 0065fcee  50                   push eax
// 0065fcef  56                   push esi
// 0065fcf0  e8dbfcffff           call 0x65f9d0
// 0065fcf5  83c410               add esp, 0x10
// 0065fcf8  e94b010000           jmp 0x65fe48
// 0065fcfd  83be8800000004       cmp dword ptr [esi + 0x88], 4
// 0065fd04  0f84b6000000         je 0x65fdc0
// 0065fd0a  3bca                 cmp ecx, edx
// 0065fd0c  0f84ae000000         je 0x65fdc0
// 0065fd12  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 0065fd18  83f90d               cmp ecx, 0xd
// 0065fd1b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0065fd1f  8d5704               lea edx, [edi + 4]
// 0065fd22  7e50                 jle 0x65fd74
// 0065fd24  8bc2                 mov eax, edx
// 0065fd26  d3e0                 shl eax, cl
// 0065fd28  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065fd2b  660986b8160000       or word ptr [esi + 0x16b8], ax
// 0065fd32  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 0065fd39  8b4614               mov eax, dword ptr [esi + 0x14]
// 0065fd3c  881c01               mov byte ptr [ecx + eax], bl
// 0065fd3f  ff4614               inc dword ptr [esi + 0x14]
// 0065fd42  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 0065fd49  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0065fd4c  8b4608               mov eax, dword ptr [esi + 8]
// 0065fd4f  881c01               mov byte ptr [ecx + eax], bl
// 0065fd52  8b9ebc160000         mov ebx, dword ptr [esi + 0x16bc]
// 0065fd58  ff4614               inc dword ptr [esi + 0x14]
// 0065fd5b  b110                 mov cl, 0x10
// 0065fd5d  2acb                 sub cl, bl
// 0065fd5f  66d3ea               shr dx, cl
// 0065fd62  83c3f3               add ebx, -0xd
// 0065fd65  899ebc160000         mov dword ptr [esi + 0x16bc], ebx
// 0065fd6b  668996b8160000       mov word ptr [esi + 0x16b8], dx
// 0065fd72  eb12                 jmp 0x65fd86
// 0065fd74  d3e2                 shl edx, cl
// 0065fd76  660996b8160000       or word ptr [esi + 0x16b8], dx
// 0065fd7d  83c103               add ecx, 3
// 0065fd80  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 0065fd86  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065fd8a  8b8e280b0000         mov ecx, dword ptr [esi + 0xb28]
// 0065fd90  8b961c0b0000         mov edx, dword ptr [esi + 0xb1c]
// 0065fd96  40                   inc eax
// 0065fd97  50                   push eax
// 0065fd98  41                   inc ecx
// 0065fd99  51                   push ecx
// 0065fd9a  42                   inc edx
// 0065fd9b  52                   push edx
// 0065fd9c  8bc6                 mov eax, esi
// 0065fd9e  e8cdefffff           call 0x65ed70
// 0065fda3  8d8688090000         lea eax, [esi + 0x988]
// 0065fda9  50                   push eax
// 0065fdaa  8d8e94000000         lea ecx, [esi + 0x94]
// 0065fdb0  51                   push ecx
// 0065fdb1  8bc6                 mov eax, esi
// 0065fdb3  e818f2ffff           call 0x65efd0
// 0065fdb8  83c414               add esp, 0x14
// 0065fdbb  e988000000           jmp 0x65fe48
// 0065fdc0  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 0065fdc6  83f90d               cmp ecx, 0xd
// 0065fdc9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0065fdcd  8d4702               lea eax, [edi + 2]
// 0065fdd0  7e50                 jle 0x65fe22
// 0065fdd2  8bd0                 mov edx, eax
// 0065fdd4  d3e2                 shl edx, cl
// 0065fdd6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065fdd9  660996b8160000       or word ptr [esi + 0x16b8], dx
// 0065fde0  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 0065fde7  8b5614               mov edx, dword ptr [esi + 0x14]
// 0065fdea  881c11               mov byte ptr [ecx + edx], bl
// 0065fded  ff4614               inc dword ptr [esi + 0x14]
// 0065fdf0  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 0065fdf7  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0065fdfa  8b5608               mov edx, dword ptr [esi + 8]
// 0065fdfd  881c11               mov byte ptr [ecx + edx], bl
// 0065fe00  8b96bc160000         mov edx, dword ptr [esi + 0x16bc]
// 0065fe06  ff4614               inc dword ptr [esi + 0x14]
// 0065fe09  b110                 mov cl, 0x10
// 0065fe0b  2aca                 sub cl, dl
// 0065fe0d  66d3e8               shr ax, cl
// 0065fe10  83c2f3               add edx, -0xd
// 0065fe13  8996bc160000         mov dword ptr [esi + 0x16bc], edx
// 0065fe19  668986b8160000       mov word ptr [esi + 0x16b8], ax
// 0065fe20  eb12                 jmp 0x65fe34
// 0065fe22  d3e0                 shl eax, cl
// 0065fe24  660986b8160000       or word ptr [esi + 0x16b8], ax
// 0065fe2b  83c103               add ecx, 3
// 0065fe2e  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 0065fe34  68b0b6b800           push 0xb8b6b0
// 0065fe39  6830b2b800           push 0xb8b230
// 0065fe3e  8bc6                 mov eax, esi
// 0065fe40  e88bf1ffff           call 0x65efd0
// 0065fe45  83c408               add esp, 8
// 0065fe48  8bd6                 mov edx, esi
// 0065fe4a  e8c1e5ffff           call 0x65e410
// 0065fe4f  85ff                 test edi, edi
// 0065fe51  5f                   pop edi
// 0065fe52  740c                 je 0x65fe60
// 0065fe54  8bc6                 mov eax, esi
// 0065fe56  5e                   pop esi
// 0065fe57  5b                   pop ebx
// 0065fe58  83c404               add esp, 4
// 0065fe5b  e9c0f6ffff           jmp 0x65f520
// 0065fe60  5e                   pop esi
// 0065fe61  5b                   pop ebx
// 0065fe62  59                   pop ecx
// 0065fe63  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_flush_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
