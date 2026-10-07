// roc 2009-06 005a1600  unit: seg_005a0000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1600
//
// 005a1600  83ec2c               sub esp, 0x2c
// 005a1603  53                   push ebx
// 005a1604  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 005a1608  55                   push ebp
// 005a1609  56                   push esi
// 005a160a  57                   push edi
// 005a160b  8bbb48010000         mov edi, dword ptr [ebx + 0x148]
// 005a1611  33f6                 xor esi, esi
// 005a1613  39b3e4000000         cmp dword ptr [ebx + 0xe4], esi
// 005a1619  897c2420             mov dword ptr [esp + 0x20], edi
// 005a161d  7e4a                 jle 0x5a1669
// 005a161f  8d83e8000000         lea eax, [ebx + 0xe8]
// 005a1625  89442410             mov dword ptr [esp + 0x10], eax
// 005a1629  8da42400000000       lea esp, [esp]
// 005a1630  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a1634  8b01                 mov eax, dword ptr [ecx]
// 005a1636  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005a1639  8b6f08               mov ebp, dword ptr [edi + 8]
// 005a163c  8b4004               mov eax, dword ptr [eax + 4]
// 005a163f  0fafe9               imul ebp, ecx
// 005a1642  8b5304               mov edx, dword ptr [ebx + 4]
// 005a1645  8b5220               mov edx, dword ptr [edx + 0x20]
// 005a1648  6a00                 push 0
// 005a164a  51                   push ecx
// 005a164b  8b4c8740             mov ecx, dword ptr [edi + eax*4 + 0x40]
// 005a164f  55                   push ebp
// 005a1650  51                   push ecx
// 005a1651  53                   push ebx
// 005a1652  ffd2                 call edx
// 005a1654  8344242404           add dword ptr [esp + 0x24], 4
// 005a1659  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 005a165d  46                   inc esi
// 005a165e  83c414               add esp, 0x14
// 005a1661  3bb3e4000000         cmp esi, dword ptr [ebx + 0xe4]
// 005a1667  7cc7                 jl 0x5a1630
// 005a1669  8b7710               mov esi, dword ptr [edi + 0x10]
// 005a166c  3b7714               cmp esi, dword ptr [edi + 0x14]
// 005a166f  89742424             mov dword ptr [esp + 0x24], esi
// 005a1673  0f8d04010000         jge 0x5a177d
// 005a1679  8da42400000000       lea esp, [esp]
// 005a1680  8b470c               mov eax, dword ptr [edi + 0xc]
// 005a1683  89442410             mov dword ptr [esp + 0x10], eax
// 005a1687  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 005a168d  0f83d5000000         jae 0x5a1768
// 005a1693  33d2                 xor edx, edx
// 005a1695  33ed                 xor ebp, ebp
// 005a1697  3993e4000000         cmp dword ptr [ebx + 0xe4], edx
// 005a169d  8954241c             mov dword ptr [esp + 0x1c], edx
// 005a16a1  0f8e95000000         jle 0x5a173c
// 005a16a7  8d83e8000000         lea eax, [ebx + 0xe8]
// 005a16ad  89442414             mov dword ptr [esp + 0x14], eax
// 005a16b1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a16b5  8b39                 mov edi, dword ptr [ecx]
// 005a16b7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 005a16ba  8bc1                 mov eax, ecx
// 005a16bc  0faf442410           imul eax, dword ptr [esp + 0x10]
// 005a16c1  837f3800             cmp dword ptr [edi + 0x38], 0
// 005a16c5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a16cd  7e53                 jle 0x5a1722
// 005a16cf  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 005a16d3  c1e007               shl eax, 7
// 005a16d6  89442428             mov dword ptr [esp + 0x28], eax
// 005a16da  8d1cb2               lea ebx, [edx + esi*4]
// 005a16dd  8d4900               lea ecx, [ecx]
// 005a16e0  8b03                 mov eax, dword ptr [ebx]
// 005a16e2  03442428             add eax, dword ptr [esp + 0x28]
// 005a16e6  33d2                 xor edx, edx
// 005a16e8  85c9                 test ecx, ecx
// 005a16ea  7e19                 jle 0x5a1705
// 005a16ec  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a16f0  8d74a918             lea esi, [ecx + ebp*4 + 0x18]
// 005a16f4  8906                 mov dword ptr [esi], eax
// 005a16f6  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 005a16f9  42                   inc edx
// 005a16fa  45                   inc ebp
// 005a16fb  83c604               add esi, 4
// 005a16fe  83e880               sub eax, -0x80
// 005a1701  3bd1                 cmp edx, ecx
// 005a1703  7cef                 jl 0x5a16f4
// 005a1705  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a1709  40                   inc eax
// 005a170a  83c304               add ebx, 4
// 005a170d  3b4738               cmp eax, dword ptr [edi + 0x38]
// 005a1710  89442418             mov dword ptr [esp + 0x18], eax
// 005a1714  7cca                 jl 0x5a16e0
// 005a1716  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005a171a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a171e  8b742424             mov esi, dword ptr [esp + 0x24]
// 005a1722  8344241404           add dword ptr [esp + 0x14], 4
// 005a1727  42                   inc edx
// 005a1728  3b93e4000000         cmp edx, dword ptr [ebx + 0xe4]
// 005a172e  8954241c             mov dword ptr [esp + 0x1c], edx
// 005a1732  0f8c79ffffff         jl 0x5a16b1
// 005a1738  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005a173c  8b935c010000         mov edx, dword ptr [ebx + 0x15c]
// 005a1742  8d4718               lea eax, [edi + 0x18]
// 005a1745  50                   push eax
// 005a1746  8b4204               mov eax, dword ptr [edx + 4]
// 005a1749  53                   push ebx
// 005a174a  ffd0                 call eax
// 005a174c  83c408               add esp, 8
// 005a174f  84c0                 test al, al
// 005a1751  7455                 je 0x5a17a8
// 005a1753  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a1757  40                   inc eax
// 005a1758  89442410             mov dword ptr [esp + 0x10], eax
// 005a175c  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 005a1762  0f822bffffff         jb 0x5a1693
// 005a1768  46                   inc esi
// 005a1769  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 005a1770  3b7714               cmp esi, dword ptr [edi + 0x14]
// 005a1773  89742424             mov dword ptr [esp + 0x24], esi
// 005a1777  0f8c03ffffff         jl 0x5a1680
// 005a177d  b901000000           mov ecx, 1
// 005a1782  014f08               add dword ptr [edi + 8], ecx
// 005a1785  398be4000000         cmp dword ptr [ebx + 0xe4], ecx
// 005a178b  8b8348010000         mov eax, dword ptr [ebx + 0x148]
// 005a1791  7e29                 jle 0x5a17bc
// 005a1793  5f                   pop edi
// 005a1794  894814               mov dword ptr [eax + 0x14], ecx
// 005a1797  5e                   pop esi
// 005a1798  33c9                 xor ecx, ecx
// 005a179a  5d                   pop ebp
// 005a179b  89480c               mov dword ptr [eax + 0xc], ecx
// 005a179e  894810               mov dword ptr [eax + 0x10], ecx
// 005a17a1  b001                 mov al, 1
// 005a17a3  5b                   pop ebx
// 005a17a4  83c42c               add esp, 0x2c
// 005a17a7  c3                   ret 
// 005a17a8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a17ac  897710               mov dword ptr [edi + 0x10], esi
// 005a17af  894f0c               mov dword ptr [edi + 0xc], ecx
// 005a17b2  5f                   pop edi
// 005a17b3  5e                   pop esi
// 005a17b4  5d                   pop ebp
// 005a17b5  32c0                 xor al, al
// 005a17b7  5b                   pop ebx
// 005a17b8  83c42c               add esp, 0x2c
// 005a17bb  c3                   ret 
// 005a17bc  8b93e0000000         mov edx, dword ptr [ebx + 0xe0]
// 005a17c2  2bd1                 sub edx, ecx
// 005a17c4  8b8be8000000         mov ecx, dword ptr [ebx + 0xe8]
// 005a17ca  395008               cmp dword ptr [eax + 8], edx
// 005a17cd  7305                 jae 0x5a17d4
// 005a17cf  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005a17d2  eb03                 jmp 0x5a17d7
// 005a17d4  8b5148               mov edx, dword ptr [ecx + 0x48]
// 005a17d7  5f                   pop edi
// 005a17d8  5e                   pop esi
// 005a17d9  33c9                 xor ecx, ecx
// 005a17db  5d                   pop ebp
// 005a17dc  895014               mov dword ptr [eax + 0x14], edx
// 005a17df  89480c               mov dword ptr [eax + 0xc], ecx
// 005a17e2  894810               mov dword ptr [eax + 0x10], ecx
// 005a17e5  b001                 mov al, 1
// 005a17e7  5b                   pop ebx
// 005a17e8  83c42c               add esp, 0x2c
// 005a17eb  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_output)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
