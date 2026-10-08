// roc 2009-12 006095f0  unit: seg_00600000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006095f0
//
// 006095f0  8b442404             mov eax, dword ptr [esp + 4]
// 006095f4  8a4808               mov cl, byte ptr [eax + 8]
// 006095f7  f6c102               test cl, 2
// 006095fa  0f84c6000000         je 0x6096c6
// 00609600  8b10                 mov edx, dword ptr [eax]
// 00609602  8a4009               mov al, byte ptr [eax + 9]
// 00609605  56                   push esi
// 00609606  3c08                 cmp al, 8
// 00609608  753a                 jne 0x609644
// 0060960a  80f902               cmp cl, 2
// 0060960d  7507                 jne 0x609616
// 0060960f  be03000000           mov esi, 3
// 00609614  eb0e                 jmp 0x609624
// 00609616  80f906               cmp cl, 6
// 00609619  0f85a6000000         jne 0x6096c5
// 0060961f  be04000000           mov esi, 4
// 00609624  85d2                 test edx, edx
// 00609626  0f8699000000         jbe 0x6096c5
// 0060962c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00609630  83c002               add eax, 2
// 00609633  8a48ff               mov cl, byte ptr [eax - 1]
// 00609636  0048fe               add byte ptr [eax - 2], cl
// 00609639  0008                 add byte ptr [eax], cl
// 0060963b  03c6                 add eax, esi
// 0060963d  83ea01               sub edx, 1
// 00609640  75f1                 jne 0x609633
// 00609642  5e                   pop esi
// 00609643  c3                   ret 
// 00609644  3c10                 cmp al, 0x10
// 00609646  757d                 jne 0x6096c5
// 00609648  55                   push ebp
// 00609649  80f902               cmp cl, 2
// 0060964c  7507                 jne 0x609655
// 0060964e  bd06000000           mov ebp, 6
// 00609653  eb0a                 jmp 0x60965f
// 00609655  80f906               cmp cl, 6
// 00609658  756a                 jne 0x6096c4
// 0060965a  bd08000000           mov ebp, 8
// 0060965f  85d2                 test edx, edx
// 00609661  7661                 jbe 0x6096c4
// 00609663  8b442410             mov eax, dword ptr [esp + 0x10]
// 00609667  53                   push ebx
// 00609668  57                   push edi
// 00609669  40                   inc eax
// 0060966a  8bfa                 mov edi, edx
// 0060966c  8d642400             lea esp, [esp]
// 00609670  0fb67001             movzx esi, byte ptr [eax + 1]
// 00609674  0fb64802             movzx ecx, byte ptr [eax + 2]
// 00609678  0fb610               movzx edx, byte ptr [eax]
// 0060967b  0fb65804             movzx ebx, byte ptr [eax + 4]
// 0060967f  c1e608               shl esi, 8
// 00609682  0bf1                 or esi, ecx
// 00609684  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 00609688  c1e108               shl ecx, 8
// 0060968b  0bca                 or ecx, edx
// 0060968d  0fb65003             movzx edx, byte ptr [eax + 3]
// 00609691  c1e208               shl edx, 8
// 00609694  0bd3                 or edx, ebx
// 00609696  03ce                 add ecx, esi
// 00609698  81e1ffff0000         and ecx, 0xffff
// 0060969e  03d6                 add edx, esi
// 006096a0  81e2ffff0000         and edx, 0xffff
// 006096a6  8bd9                 mov ebx, ecx
// 006096a8  8808                 mov byte ptr [eax], cl
// 006096aa  8bca                 mov ecx, edx
// 006096ac  c1eb08               shr ebx, 8
// 006096af  c1e908               shr ecx, 8
// 006096b2  8858ff               mov byte ptr [eax - 1], bl
// 006096b5  884803               mov byte ptr [eax + 3], cl
// 006096b8  885004               mov byte ptr [eax + 4], dl
// 006096bb  03c5                 add eax, ebp
// 006096bd  83ef01               sub edi, 1
// 006096c0  75ae                 jne 0x609670
// 006096c2  5f                   pop edi
// 006096c3  5b                   pop ebx
// 006096c4  5d                   pop ebp
// 006096c5  5e                   pop esi
// 006096c6  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
