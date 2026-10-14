// roc 2009-06 0056e770  unit: G3D::Log  size: 2810 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056e770
//
// 0056e770  64a100000000         mov eax, dword ptr fs:[0]
// 0056e776  6aff                 push -1
// 0056e778  6804028600           push 0x860204
// 0056e77d  50                   push eax
// 0056e77e  64892500000000       mov dword ptr fs:[0], esp
// 0056e785  81ece0000000         sub esp, 0xe0
// 0056e78b  53                   push ebx
// 0056e78c  8b9c24f4000000       mov ebx, dword ptr [esp + 0xf4]
// 0056e793  55                   push ebp
// 0056e794  56                   push esi
// 0056e795  8bf1                 mov esi, ecx
// 0056e797  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056e79a  8bc1                 mov eax, ecx
// 0056e79c  f7d8                 neg eax
// 0056e79e  894344               mov dword ptr [ebx + 0x44], eax
// 0056e7a1  bd00000000           mov ebp, 0
// 0056e7a6  7805                 js 0x56e7ad
// 0056e7a8  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0056e7ab  7e0b                 jle 0x56e7b8
// 0056e7ad  03c1                 add eax, ecx
// 0056e7af  55                   push ebp
// 0056e7b0  50                   push eax
// 0056e7b1  8bcb                 mov ecx, ebx
// 0056e7b3  e8985f0000           call 0x574750
// 0056e7b8  6a02                 push 2
// 0056e7ba  8d442474             lea eax, [esp + 0x74]
// 0056e7be  50                   push eax
// 0056e7bf  8bcb                 mov ecx, ebx
// 0056e7c1  e81a650000           call 0x574ce0
// 0056e7c6  8d4c2470             lea ecx, [esp + 0x70]
// 0056e7ca  6878b48c00           push 0x8cb478
// 0056e7cf  51                   push ecx
// 0056e7d0  89ac24fc000000       mov dword ptr [esp + 0xfc], ebp
// 0056e7d7  ff152ce48900         call dword ptr [0x89e42c]
// 0056e7dd  83c408               add esp, 8
// 0056e7e0  84c0                 test al, al
// 0056e7e2  744f                 je 0x56e833
// 0056e7e4  6868b48c00           push 0x8cb468
// 0056e7e9  8d4c2434             lea ecx, [esp + 0x34]
// 0056e7ed  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056e7f3  8d542454             lea edx, [esp + 0x54]
// 0056e7f7  52                   push edx
// 0056e7f8  8bcb                 mov ecx, ebx
// 0056e7fa  c68424f800000001     mov byte ptr [esp + 0xf8], 1
// 0056e802  e8a9e9ffff           call 0x56d1b0
// 0056e807  50                   push eax
// 0056e808  8d442434             lea eax, [esp + 0x34]
// 0056e80c  50                   push eax
// 0056e80d  8d8c2494000000       lea ecx, [esp + 0x94]
// 0056e814  c68424fc00000002     mov byte ptr [esp + 0xfc], 2
// 0056e81c  e87fb7f2ff           call 0x499fa0
// 0056e821  68308a9800           push 0x988a30
// 0056e826  8d8c2490000000       lea ecx, [esp + 0x90]
// 0056e82d  51                   push ecx
// 0056e82e  e817b21a00           call 0x719a4a
// 0056e833  c7461003000000       mov dword ptr [esi + 0x10], 3
// 0056e83a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056e83d  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0056e840  8d441110             lea eax, [ecx + edx + 0x10]
// 0056e844  2bc1                 sub eax, ecx
// 0056e846  894344               mov dword ptr [ebx + 0x44], eax
// 0056e849  7805                 js 0x56e850
// 0056e84b  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0056e84e  7e0b                 jle 0x56e85b
// 0056e850  03c1                 add eax, ecx
// 0056e852  55                   push ebp
// 0056e853  50                   push eax
// 0056e854  8bcb                 mov ecx, ebx
// 0056e856  e8f55e0000           call 0x574750
// 0056e85b  8bcb                 mov ecx, ebx
// 0056e85d  e8cee2ffff           call 0x56cb30
// 0056e862  8bcb                 mov ecx, ebx
// 0056e864  894608               mov dword ptr [esi + 8], eax
// 0056e867  e8c4e2ffff           call 0x56cb30
// 0056e86c  89460c               mov dword ptr [esi + 0xc], eax
// 0056e86f  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056e872  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056e875  8d440102             lea eax, [ecx + eax + 2]
// 0056e879  2bc1                 sub eax, ecx
// 0056e87b  894344               mov dword ptr [ebx + 0x44], eax
// 0056e87e  7805                 js 0x56e885
// 0056e880  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0056e883  7e0b                 jle 0x56e890
// 0056e885  03c1                 add eax, ecx
// 0056e887  55                   push ebp
// 0056e888  50                   push eax
// 0056e889  8bcb                 mov ecx, ebx
// 0056e88b  e8c05e0000           call 0x574750
// 0056e890  57                   push edi
// 0056e891  8bcb                 mov ecx, ebx
// 0056e893  e828c6f0ff           call 0x47aec0
// 0056e898  0fb7f8               movzx edi, ax
// 0056e89b  8bcb                 mov ecx, ebx
// 0056e89d  897c2420             mov dword ptr [esp + 0x20], edi
// 0056e8a1  e88ae2ffff           call 0x56cb30
// 0056e8a6  3bc5                 cmp eax, ebp
// 0056e8a8  744f                 je 0x56e8f9
// 0056e8aa  6848b48c00           push 0x8cb448
// 0056e8af  8d4c2438             lea ecx, [esp + 0x38]
// 0056e8b3  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056e8b9  8d4c2458             lea ecx, [esp + 0x58]
// 0056e8bd  51                   push ecx
// 0056e8be  8bcb                 mov ecx, ebx
// 0056e8c0  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 0056e8c8  e8e3e8ffff           call 0x56d1b0
// 0056e8cd  50                   push eax
// 0056e8ce  8d542438             lea edx, [esp + 0x38]
// 0056e8d2  52                   push edx
// 0056e8d3  8d8c2498000000       lea ecx, [esp + 0x98]
// 0056e8da  c684240001000004     mov byte ptr [esp + 0x100], 4
// 0056e8e2  e8b9b6f2ff           call 0x499fa0
// 0056e8e7  68308a9800           push 0x988a30
// 0056e8ec  8d842494000000       lea eax, [esp + 0x94]
// 0056e8f3  50                   push eax
// 0056e8f4  e851b11a00           call 0x719a4a
// 0056e8f9  6683ff08             cmp di, 8
// 0056e8fd  0f873a010000         ja 0x56ea3d
// 0056e903  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056e906  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0056e909  8d44110c             lea eax, [ecx + edx + 0xc]
// 0056e90d  2bc1                 sub eax, ecx
// 0056e90f  894344               mov dword ptr [ebx + 0x44], eax
// 0056e912  7805                 js 0x56e919
// 0056e914  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0056e917  7e0c                 jle 0x56e925
// 0056e919  03c1                 add eax, ecx
// 0056e91b  6a00                 push 0
// 0056e91d  50                   push eax
// 0056e91e  8bcb                 mov ecx, ebx
// 0056e920  e82b5e0000           call 0x574750
// 0056e925  8bcb                 mov ecx, ebx
// 0056e927  e804e2ffff           call 0x56cb30
// 0056e92c  8d3c40               lea edi, [eax + eax*2]
// 0056e92f  57                   push edi
// 0056e930  897c2428             mov dword ptr [esp + 0x28], edi
// 0056e934  e807c8ffff           call 0x56b140
// 0056e939  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056e93c  8be8                 mov ebp, eax
// 0056e93e  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056e941  8d440104             lea eax, [ecx + eax + 4]
// 0056e945  83c404               add esp, 4
// 0056e948  2bc1                 sub eax, ecx
// 0056e94a  894344               mov dword ptr [ebx + 0x44], eax
// 0056e94d  7805                 js 0x56e954
// 0056e94f  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0056e952  7e0c                 jle 0x56e960
// 0056e954  03c1                 add eax, ecx
// 0056e956  6a00                 push 0
// 0056e958  50                   push eax
// 0056e959  8bcb                 mov ecx, ebx
// 0056e95b  e8f05d0000           call 0x574750
// 0056e960  85ff                 test edi, edi
// 0056e962  0f8ed5000000         jle 0x56ea3d
// 0056e968  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0056e96c  49                   dec ecx
// 0056e96d  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0056e972  f7e1                 mul ecx
// 0056e974  d1ea                 shr edx, 1
// 0056e976  42                   inc edx
// 0056e977  8d7d01               lea edi, [ebp + 1]
// 0056e97a  89542418             mov dword ptr [esp + 0x18], edx
// 0056e97e  8bff                 mov edi, edi
// 0056e980  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056e983  8d5001               lea edx, [eax + 1]
// 0056e986  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0056e989  7e0f                 jle 0x56e99a
// 0056e98b  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056e98e  03c8                 add ecx, eax
// 0056e990  6a01                 push 1
// 0056e992  51                   push ecx
// 0056e993  8bcb                 mov ecx, ebx
// 0056e995  e8b65d0000           call 0x574750
// 0056e99a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056e99d  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0056e9a0  8a0c10               mov cl, byte ptr [eax + edx]
// 0056e9a3  40                   inc eax
// 0056e9a4  8d5001               lea edx, [eax + 1]
// 0056e9a7  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0056e9aa  884c241f             mov byte ptr [esp + 0x1f], cl
// 0056e9ae  894344               mov dword ptr [ebx + 0x44], eax
// 0056e9b1  7e0f                 jle 0x56e9c2
// 0056e9b3  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056e9b6  03c8                 add ecx, eax
// 0056e9b8  6a01                 push 1
// 0056e9ba  51                   push ecx
// 0056e9bb  8bcb                 mov ecx, ebx
// 0056e9bd  e88e5d0000           call 0x574750
// 0056e9c2  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056e9c5  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0056e9c8  8a0c10               mov cl, byte ptr [eax + edx]
// 0056e9cb  40                   inc eax
// 0056e9cc  8d5001               lea edx, [eax + 1]
// 0056e9cf  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0056e9d2  884c2413             mov byte ptr [esp + 0x13], cl
// 0056e9d6  894344               mov dword ptr [ebx + 0x44], eax
// 0056e9d9  7e0f                 jle 0x56e9ea
// 0056e9db  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056e9de  03c8                 add ecx, eax
// 0056e9e0  6a01                 push 1
// 0056e9e2  51                   push ecx
// 0056e9e3  8bcb                 mov ecx, ebx
// 0056e9e5  e8665d0000           call 0x574750
// 0056e9ea  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056e9ed  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0056e9f0  8a0c10               mov cl, byte ptr [eax + edx]
// 0056e9f3  40                   inc eax
// 0056e9f4  8d5001               lea edx, [eax + 1]
// 0056e9f7  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0056e9fa  884c242f             mov byte ptr [esp + 0x2f], cl
// 0056e9fe  894344               mov dword ptr [ebx + 0x44], eax
// 0056ea01  7e0f                 jle 0x56ea12
// 0056ea03  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056ea06  03c8                 add ecx, eax
// 0056ea08  6a01                 push 1
// 0056ea0a  51                   push ecx
// 0056ea0b  8bcb                 mov ecx, ebx
// 0056ea0d  e83e5d0000           call 0x574750
// 0056ea12  0fb654242f           movzx edx, byte ptr [esp + 0x2f]
// 0056ea17  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0056ea1b  b801000000           mov eax, 1
// 0056ea20  014344               add dword ptr [ebx + 0x44], eax
// 0056ea23  8857ff               mov byte ptr [edi - 1], dl
// 0056ea26  0fb654241f           movzx edx, byte ptr [esp + 0x1f]
// 0056ea2b  880f                 mov byte ptr [edi], cl
// 0056ea2d  885701               mov byte ptr [edi + 1], dl
// 0056ea30  83c703               add edi, 3
// 0056ea33  29442418             sub dword ptr [esp + 0x18], eax
// 0056ea37  0f8543ffffff         jne 0x56e980
// 0056ea3d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0056ea40  b9ffffffff           mov ecx, 0xffffffff
// 0056ea45  85c0                 test eax, eax
// 0056ea47  7d15                 jge 0x56ea5e
// 0056ea49  f7d8                 neg eax
// 0056ea4b  89460c               mov dword ptr [esi + 0xc], eax
// 0056ea4e  33ff                 xor edi, edi
// 0056ea50  89442428             mov dword ptr [esp + 0x28], eax
// 0056ea54  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0056ea5c  eb0b                 jmp 0x56ea69
// 0056ea5e  8d78ff               lea edi, [eax - 1]
// 0056ea61  894c2428             mov dword ptr [esp + 0x28], ecx
// 0056ea65  894c2430             mov dword ptr [esp + 0x30], ecx
// 0056ea69  8b4608               mov eax, dword ptr [esi + 8]
// 0056ea6c  0faf460c             imul eax, dword ptr [esi + 0xc]
// 0056ea70  8d0440               lea eax, [eax + eax*2]
// 0056ea73  50                   push eax
// 0056ea74  e8c7c6ffff           call 0x56b140
// 0056ea79  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0056ea7d  83c404               add esp, 4
// 0056ea80  894604               mov dword ptr [esi + 4], eax
// 0056ea83  6683f901             cmp cx, 1
// 0056ea87  0f8515030000         jne 0x56eda2
// 0056ea8d  8b4608               mov eax, dword ptr [esi + 8]
// 0056ea90  83c007               add eax, 7
// 0056ea93  c1f803               sar eax, 3
// 0056ea96  8bc8                 mov ecx, eax
// 0056ea98  83e103               and ecx, 3
// 0056ea9b  89442420             mov dword ptr [esp + 0x20], eax
// 0056ea9f  740d                 je 0x56eaae
// 0056eaa1  ba04000000           mov edx, 4
// 0056eaa6  2bd1                 sub edx, ecx
// 0056eaa8  03c2                 add eax, edx
// 0056eaaa  89442420             mov dword ptr [esp + 0x20], eax
// 0056eaae  897c2418             mov dword ptr [esp + 0x18], edi
// 0056eab2  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0056eab6  0f84ac060000         je 0x56f168
// 0056eabc  8b542420             mov edx, dword ptr [esp + 0x20]
// 0056eac0  8bcf                 mov ecx, edi
// 0056eac2  8b7e08               mov edi, dword ptr [esi + 8]
// 0056eac5  0faff9               imul edi, ecx
// 0056eac8  33c0                 xor eax, eax
// 0056eaca  89442414             mov dword ptr [esp + 0x14], eax
// 0056eace  8d3c7f               lea edi, [edi + edi*2]
// 0056ead1  85d2                 test edx, edx
// 0056ead3  0f8eb2020000         jle 0x56ed8b
// 0056ead9  89542424             mov dword ptr [esp + 0x24], edx
// 0056eadd  8d4900               lea ecx, [ecx]
// 0056eae0  8b4b44               mov ecx, dword ptr [ebx + 0x44]
// 0056eae3  8d5101               lea edx, [ecx + 1]
// 0056eae6  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0056eae9  7e13                 jle 0x56eafe
// 0056eaeb  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0056eaee  03c1                 add eax, ecx
// 0056eaf0  6a01                 push 1
// 0056eaf2  50                   push eax
// 0056eaf3  8bcb                 mov ecx, ebx
// 0056eaf5  e8565c0000           call 0x574750
// 0056eafa  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056eafe  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0056eb01  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0056eb04  8a0c0a               mov cl, byte ptr [edx + ecx]
// 0056eb07  42                   inc edx
// 0056eb08  895344               mov dword ptr [ebx + 0x44], edx
// 0056eb0b  3b4608               cmp eax, dword ptr [esi + 8]
// 0056eb0e  884c2413             mov byte ptr [esp + 0x13], cl
// 0056eb12  0f8d60020000         jge 0x56ed78
// 0056eb18  8b5604               mov edx, dword ptr [esi + 4]
// 0056eb1b  0fb6c9               movzx ecx, cl
// 0056eb1e  c1e907               shr ecx, 7
// 0056eb21  8d0c49               lea ecx, [ecx + ecx*2]
// 0056eb24  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056eb28  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0056eb2c  880c17               mov byte ptr [edi + edx], cl
// 0056eb2f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056eb33  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0056eb38  8b5604               mov edx, dword ptr [esi + 4]
// 0056eb3b  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0056eb3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056eb43  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0056eb48  8b5604               mov edx, dword ptr [esi + 4]
// 0056eb4b  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0056eb4f  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0056eb53  40                   inc eax
// 0056eb54  83c703               add edi, 3
// 0056eb57  3b4608               cmp eax, dword ptr [esi + 8]
// 0056eb5a  89442414             mov dword ptr [esp + 0x14], eax
// 0056eb5e  0f8d14020000         jge 0x56ed78
// 0056eb64  8b5604               mov edx, dword ptr [esi + 4]
// 0056eb67  0fb6c9               movzx ecx, cl
// 0056eb6a  c1e906               shr ecx, 6
// 0056eb6d  83e101               and ecx, 1
// 0056eb70  8d0c49               lea ecx, [ecx + ecx*2]
// 0056eb73  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056eb77  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0056eb7b  880c17               mov byte ptr [edi + edx], cl
// 0056eb7e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056eb82  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0056eb87  8b5604               mov edx, dword ptr [esi + 4]
// 0056eb8a  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0056eb8e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056eb92  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0056eb97  8b5604               mov edx, dword ptr [esi + 4]
// 0056eb9a  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0056eb9e  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0056eba2  40                   inc eax
// 0056eba3  83c703               add edi, 3
// 0056eba6  3b4608               cmp eax, dword ptr [esi + 8]
// 0056eba9  89442414             mov dword ptr [esp + 0x14], eax
// 0056ebad  0f8dc5010000         jge 0x56ed78
// 0056ebb3  8b5604               mov edx, dword ptr [esi + 4]
// 0056ebb6  0fb6c9               movzx ecx, cl
// 0056ebb9  c1e905               shr ecx, 5
// 0056ebbc  83e101               and ecx, 1
// 0056ebbf  8d0c49               lea ecx, [ecx + ecx*2]
// 0056ebc2  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056ebc6  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0056ebca  880c17               mov byte ptr [edi + edx], cl
// 0056ebcd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ebd1  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0056ebd6  8b5604               mov edx, dword ptr [esi + 4]
// 0056ebd9  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0056ebdd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ebe1  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0056ebe6  8b5604               mov edx, dword ptr [esi + 4]
// 0056ebe9  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0056ebed  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0056ebf1  40                   inc eax
// 0056ebf2  83c703               add edi, 3
// 0056ebf5  3b4608               cmp eax, dword ptr [esi + 8]
// 0056ebf8  89442414             mov dword ptr [esp + 0x14], eax
// 0056ebfc  0f8d76010000         jge 0x56ed78
// 0056ec02  8b5604               mov edx, dword ptr [esi + 4]
// 0056ec05  0fb6c9               movzx ecx, cl
// 0056ec08  c1e904               shr ecx, 4
// 0056ec0b  83e101               and ecx, 1
// 0056ec0e  8d0c49               lea ecx, [ecx + ecx*2]
// 0056ec11  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056ec15  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0056ec19  880c17               mov byte ptr [edi + edx], cl
// 0056ec1c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ec20  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0056ec25  8b5604               mov edx, dword ptr [esi + 4]
// 0056ec28  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0056ec2c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ec30  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0056ec35  8b5604               mov edx, dword ptr [esi + 4]
// 0056ec38  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0056ec3c  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0056ec40  40                   inc eax
// 0056ec41  83c703               add edi, 3
// 0056ec44  3b4608               cmp eax, dword ptr [esi + 8]
// 0056ec47  89442414             mov dword ptr [esp + 0x14], eax
// 0056ec4b  0f8d27010000         jge 0x56ed78
// 0056ec51  8b5604               mov edx, dword ptr [esi + 4]
// 0056ec54  0fb6c9               movzx ecx, cl
// 0056ec57  c1e903               shr ecx, 3
// 0056ec5a  83e101               and ecx, 1
// 0056ec5d  8d0c49               lea ecx, [ecx + ecx*2]
// 0056ec60  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056ec64  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0056ec68  880c17               mov byte ptr [edi + edx], cl
// 0056ec6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ec6f  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0056ec74  8b5604               mov edx, dword ptr [esi + 4]
// 0056ec77  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0056ec7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ec7f  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0056ec84  8b5604               mov edx, dword ptr [esi + 4]
// 0056ec87  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0056ec8b  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0056ec8f  40                   inc eax
// 0056ec90  83c703               add edi, 3
// 0056ec93  3b4608               cmp eax, dword ptr [esi + 8]
// 0056ec96  89442414             mov dword ptr [esp + 0x14], eax
// 0056ec9a  0f8dd8000000         jge 0x56ed78
// 0056eca0  8b5604               mov edx, dword ptr [esi + 4]
// 0056eca3  0fb6c9               movzx ecx, cl
// 0056eca6  c1e902               shr ecx, 2
// 0056eca9  83e101               and ecx, 1
// 0056ecac  8d0c49               lea ecx, [ecx + ecx*2]
// 0056ecaf  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056ecb3  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0056ecb7  880c17               mov byte ptr [edi + edx], cl
// 0056ecba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ecbe  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0056ecc3  8b5604               mov edx, dword ptr [esi + 4]
// 0056ecc6  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0056ecca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ecce  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0056ecd3  8b5604               mov edx, dword ptr [esi + 4]
// 0056ecd6  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0056ecda  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0056ecde  40                   inc eax
// 0056ecdf  83c703               add edi, 3
// 0056ece2  3b4608               cmp eax, dword ptr [esi + 8]
// 0056ece5  89442414             mov dword ptr [esp + 0x14], eax
// 0056ece9  0f8d89000000         jge 0x56ed78
// 0056ecef  8b5604               mov edx, dword ptr [esi + 4]
// 0056ecf2  0fb6c9               movzx ecx, cl
// 0056ecf5  d1e9                 shr ecx, 1
// 0056ecf7  83e101               and ecx, 1
// 0056ecfa  8d0c49               lea ecx, [ecx + ecx*2]
// 0056ecfd  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056ed01  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0056ed05  880c17               mov byte ptr [edi + edx], cl
// 0056ed08  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ed0c  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0056ed11  8b5604               mov edx, dword ptr [esi + 4]
// 0056ed14  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0056ed18  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ed1c  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0056ed21  8b5604               mov edx, dword ptr [esi + 4]
// 0056ed24  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0056ed28  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0056ed2c  40                   inc eax
// 0056ed2d  83c703               add edi, 3
// 0056ed30  3b4608               cmp eax, dword ptr [esi + 8]
// 0056ed33  89442414             mov dword ptr [esp + 0x14], eax
// 0056ed37  7d3f                 jge 0x56ed78
// 0056ed39  8b5604               mov edx, dword ptr [esi + 4]
// 0056ed3c  0fb6c9               movzx ecx, cl
// 0056ed3f  83e101               and ecx, 1
// 0056ed42  8d0c49               lea ecx, [ecx + ecx*2]
// 0056ed45  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056ed49  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0056ed4d  880c17               mov byte ptr [edi + edx], cl
// 0056ed50  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ed54  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 0056ed59  8b5604               mov edx, dword ptr [esi + 4]
// 0056ed5c  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0056ed60  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056ed64  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 0056ed69  8b5604               mov edx, dword ptr [esi + 4]
// 0056ed6c  40                   inc eax
// 0056ed6d  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0056ed71  89442414             mov dword ptr [esp + 0x14], eax
// 0056ed75  83c703               add edi, 3
// 0056ed78  836c242401           sub dword ptr [esp + 0x24], 1
// 0056ed7d  0f855dfdffff         jne 0x56eae0
// 0056ed83  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056ed87  8b542420             mov edx, dword ptr [esp + 0x20]
// 0056ed8b  034c2430             add ecx, dword ptr [esp + 0x30]
// 0056ed8f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0056ed93  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0056ed97  0f8525fdffff         jne 0x56eac2
// 0056ed9d  e9c6030000           jmp 0x56f168
// 0056eda2  6683f904             cmp cx, 4
// 0056eda6  0f8522010000         jne 0x56eece
// 0056edac  8b4608               mov eax, dword ptr [esi + 8]
// 0056edaf  40                   inc eax
// 0056edb0  d1f8                 sar eax, 1
// 0056edb2  8bc8                 mov ecx, eax
// 0056edb4  83e103               and ecx, 3
// 0056edb7  89442424             mov dword ptr [esp + 0x24], eax
// 0056edbb  740d                 je 0x56edca
// 0056edbd  ba04000000           mov edx, 4
// 0056edc2  2bd1                 sub edx, ecx
// 0056edc4  03c2                 add eax, edx
// 0056edc6  89442424             mov dword ptr [esp + 0x24], eax
// 0056edca  897c2418             mov dword ptr [esp + 0x18], edi
// 0056edce  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0056edd2  0f8490030000         je 0x56f168
// 0056edd8  eb06                 jmp 0x56ede0
// 0056edda  8d9b00000000         lea ebx, [ebx]
// 0056ede0  8b7e08               mov edi, dword ptr [esi + 8]
// 0056ede3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056ede7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0056edeb  0faff8               imul edi, eax
// 0056edee  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056edf6  8d3c7f               lea edi, [edi + edi*2]
// 0056edf9  85c9                 test ecx, ecx
// 0056edfb  0f8eb6000000         jle 0x56eeb7
// 0056ee01  894c2420             mov dword ptr [esp + 0x20], ecx
// 0056ee05  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056ee08  8d4801               lea ecx, [eax + 1]
// 0056ee0b  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0056ee0e  7e0f                 jle 0x56ee1f
// 0056ee10  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0056ee13  6a01                 push 1
// 0056ee15  03d0                 add edx, eax
// 0056ee17  52                   push edx
// 0056ee18  8bcb                 mov ecx, ebx
// 0056ee1a  e831590000           call 0x574750
// 0056ee1f  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056ee22  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0056ee25  8a0c08               mov cl, byte ptr [eax + ecx]
// 0056ee28  8b542414             mov edx, dword ptr [esp + 0x14]
// 0056ee2c  40                   inc eax
// 0056ee2d  894344               mov dword ptr [ebx + 0x44], eax
// 0056ee30  0fb6c1               movzx eax, cl
// 0056ee33  8bc8                 mov ecx, eax
// 0056ee35  83e00f               and eax, 0xf
// 0056ee38  c1e904               shr ecx, 4
// 0056ee3b  3b5608               cmp edx, dword ptr [esi + 8]
// 0056ee3e  8d0440               lea eax, [eax + eax*2]
// 0056ee41  8d0c49               lea ecx, [ecx + ecx*2]
// 0056ee44  89442454             mov dword ptr [esp + 0x54], eax
// 0056ee48  7d2c                 jge 0x56ee76
// 0056ee4a  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 0056ee4e  8b4604               mov eax, dword ptr [esi + 4]
// 0056ee51  ff442414             inc dword ptr [esp + 0x14]
// 0056ee55  881407               mov byte ptr [edi + eax], dl
// 0056ee58  0fb6542901           movzx edx, byte ptr [ecx + ebp + 1]
// 0056ee5d  8b4604               mov eax, dword ptr [esi + 4]
// 0056ee60  88543801             mov byte ptr [eax + edi + 1], dl
// 0056ee64  8b4604               mov eax, dword ptr [esi + 4]
// 0056ee67  8a4c2902             mov cl, byte ptr [ecx + ebp + 2]
// 0056ee6b  884c3802             mov byte ptr [eax + edi + 2], cl
// 0056ee6f  8b442454             mov eax, dword ptr [esp + 0x54]
// 0056ee73  83c703               add edi, 3
// 0056ee76  8b542414             mov edx, dword ptr [esp + 0x14]
// 0056ee7a  3b5608               cmp edx, dword ptr [esi + 8]
// 0056ee7d  7d29                 jge 0x56eea8
// 0056ee7f  0fb61428             movzx edx, byte ptr [eax + ebp]
// 0056ee83  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056ee86  ff442414             inc dword ptr [esp + 0x14]
// 0056ee8a  88140f               mov byte ptr [edi + ecx], dl
// 0056ee8d  0fb6542801           movzx edx, byte ptr [eax + ebp + 1]
// 0056ee92  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056ee95  88543901             mov byte ptr [ecx + edi + 1], dl
// 0056ee99  0fb6542802           movzx edx, byte ptr [eax + ebp + 2]
// 0056ee9e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056eea1  88543902             mov byte ptr [ecx + edi + 2], dl
// 0056eea5  83c703               add edi, 3
// 0056eea8  836c242001           sub dword ptr [esp + 0x20], 1
// 0056eead  0f8552ffffff         jne 0x56ee05
// 0056eeb3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056eeb7  03442430             add eax, dword ptr [esp + 0x30]
// 0056eebb  89442418             mov dword ptr [esp + 0x18], eax
// 0056eebf  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0056eec3  0f8517ffffff         jne 0x56ede0
// 0056eec9  e99a020000           jmp 0x56f168
// 0056eece  6683f908             cmp cx, 8
// 0056eed2  0f85d6000000         jne 0x56efae
// 0056eed8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0056eedb  8bc1                 mov eax, ecx
// 0056eedd  83e003               and eax, 3
// 0056eee0  894c2420             mov dword ptr [esp + 0x20], ecx
// 0056eee4  740d                 je 0x56eef3
// 0056eee6  ba04000000           mov edx, 4
// 0056eeeb  2bd0                 sub edx, eax
// 0056eeed  03ca                 add ecx, edx
// 0056eeef  894c2420             mov dword ptr [esp + 0x20], ecx
// 0056eef3  8bcf                 mov ecx, edi
// 0056eef5  897c2418             mov dword ptr [esp + 0x18], edi
// 0056eef9  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0056eefd  0f8465020000         je 0x56f168
// 0056ef03  eb0b                 jmp 0x56ef10
// 0056ef05  8da42400000000       lea esp, [esp]
// 0056ef0c  8d642400             lea esp, [esp]
// 0056ef10  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056ef14  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056ef1c  85c0                 test eax, eax
// 0056ef1e  7e77                 jle 0x56ef97
// 0056ef20  89442424             mov dword ptr [esp + 0x24], eax
// 0056ef24  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056ef27  8d4801               lea ecx, [eax + 1]
// 0056ef2a  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0056ef2d  7e0f                 jle 0x56ef3e
// 0056ef2f  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0056ef32  6a01                 push 1
// 0056ef34  03d0                 add edx, eax
// 0056ef36  52                   push edx
// 0056ef37  8bcb                 mov ecx, ebx
// 0056ef39  e812580000           call 0x574750
// 0056ef3e  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056ef41  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0056ef44  8a0c08               mov cl, byte ptr [eax + ecx]
// 0056ef47  40                   inc eax
// 0056ef48  894344               mov dword ptr [ebx + 0x44], eax
// 0056ef4b  8b4608               mov eax, dword ptr [esi + 8]
// 0056ef4e  39442414             cmp dword ptr [esp + 0x14], eax
// 0056ef52  7d38                 jge 0x56ef8c
// 0056ef54  0faf442418           imul eax, dword ptr [esp + 0x18]
// 0056ef59  03442414             add eax, dword ptr [esp + 0x14]
// 0056ef5d  8b5604               mov edx, dword ptr [esi + 4]
// 0056ef60  ff442414             inc dword ptr [esp + 0x14]
// 0056ef64  0fb6f9               movzx edi, cl
// 0056ef67  8d3c7f               lea edi, [edi + edi*2]
// 0056ef6a  0fb60c2f             movzx ecx, byte ptr [edi + ebp]
// 0056ef6e  8d0440               lea eax, [eax + eax*2]
// 0056ef71  880c10               mov byte ptr [eax + edx], cl
// 0056ef74  0fb64c2f01           movzx ecx, byte ptr [edi + ebp + 1]
// 0056ef79  8b5604               mov edx, dword ptr [esi + 4]
// 0056ef7c  884c0201             mov byte ptr [edx + eax + 1], cl
// 0056ef80  0fb64c2f02           movzx ecx, byte ptr [edi + ebp + 2]
// 0056ef85  8b5604               mov edx, dword ptr [esi + 4]
// 0056ef88  884c0202             mov byte ptr [edx + eax + 2], cl
// 0056ef8c  836c242401           sub dword ptr [esp + 0x24], 1
// 0056ef91  7591                 jne 0x56ef24
// 0056ef93  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056ef97  034c2430             add ecx, dword ptr [esp + 0x30]
// 0056ef9b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0056ef9f  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0056efa3  0f8567ffffff         jne 0x56ef10
// 0056efa9  e9ba010000           jmp 0x56f168
// 0056efae  6683f910             cmp cx, 0x10
// 0056efb2  7565                 jne 0x56f019
// 0056efb4  50                   push eax
// 0056efb5  e8a6c1ffff           call 0x56b160
// 0056efba  55                   push ebp
// 0056efbb  c7460400000000       mov dword ptr [esi + 4], 0
// 0056efc2  e899c1ffff           call 0x56b160
// 0056efc7  83c408               add esp, 8
// 0056efca  6828b48c00           push 0x8cb428
// 0056efcf  8d4c2438             lea ecx, [esp + 0x38]
// 0056efd3  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056efd9  8d542458             lea edx, [esp + 0x58]
// 0056efdd  52                   push edx
// 0056efde  8bcb                 mov ecx, ebx
// 0056efe0  c68424fc00000005     mov byte ptr [esp + 0xfc], 5
// 0056efe8  e8c3e1ffff           call 0x56d1b0
// 0056efed  50                   push eax
// 0056efee  8d442438             lea eax, [esp + 0x38]
// 0056eff2  50                   push eax
// 0056eff3  8d8c2498000000       lea ecx, [esp + 0x98]
// 0056effa  c684240001000006     mov byte ptr [esp + 0x100], 6
// 0056f002  e899aff2ff           call 0x499fa0
// 0056f007  68308a9800           push 0x988a30
// 0056f00c  8d8c2494000000       lea ecx, [esp + 0x94]
// 0056f013  51                   push ecx
// 0056f014  e831aa1a00           call 0x719a4a
// 0056f019  6683f918             cmp cx, 0x18
// 0056f01d  0f857e010000         jne 0x56f1a1
// 0056f023  6a14                 push 0x14
// 0056f025  8bcb                 mov ecx, ebx
// 0056f027  e804e2ffff           call 0x56d230
// 0056f02c  8b4608               mov eax, dword ptr [esi + 8]
// 0056f02f  8d0440               lea eax, [eax + eax*2]
// 0056f032  83e003               and eax, 3
// 0056f035  740d                 je 0x56f044
// 0056f037  b904000000           mov ecx, 4
// 0056f03c  2bc8                 sub ecx, eax
// 0056f03e  894c2420             mov dword ptr [esp + 0x20], ecx
// 0056f042  eb08                 jmp 0x56f04c
// 0056f044  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0056f04c  897c2418             mov dword ptr [esp + 0x18], edi
// 0056f050  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0056f054  0f840e010000         je 0x56f168
// 0056f05a  8d9b00000000         lea ebx, [ebx]
// 0056f060  8b4608               mov eax, dword ptr [esi + 8]
// 0056f063  8bf8                 mov edi, eax
// 0056f065  0faf7c2418           imul edi, dword ptr [esp + 0x18]
// 0056f06a  8d3c7f               lea edi, [edi + edi*2]
// 0056f06d  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0056f075  85c0                 test eax, eax
// 0056f077  0f8eac000000         jle 0x56f129
// 0056f07d  8d4900               lea ecx, [ecx]
// 0056f080  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056f083  8d5001               lea edx, [eax + 1]
// 0056f086  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0056f089  7e0f                 jle 0x56f09a
// 0056f08b  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056f08e  03c8                 add ecx, eax
// 0056f090  6a01                 push 1
// 0056f092  51                   push ecx
// 0056f093  8bcb                 mov ecx, ebx
// 0056f095  e8b6560000           call 0x574750
// 0056f09a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056f09d  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0056f0a0  8a0c10               mov cl, byte ptr [eax + edx]
// 0056f0a3  40                   inc eax
// 0056f0a4  8d5001               lea edx, [eax + 1]
// 0056f0a7  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0056f0aa  884c241f             mov byte ptr [esp + 0x1f], cl
// 0056f0ae  894344               mov dword ptr [ebx + 0x44], eax
// 0056f0b1  7e0f                 jle 0x56f0c2
// 0056f0b3  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056f0b6  03c8                 add ecx, eax
// 0056f0b8  6a01                 push 1
// 0056f0ba  51                   push ecx
// 0056f0bb  8bcb                 mov ecx, ebx
// 0056f0bd  e88e560000           call 0x574750
// 0056f0c2  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056f0c5  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0056f0c8  8a0c10               mov cl, byte ptr [eax + edx]
// 0056f0cb  40                   inc eax
// 0056f0cc  8d5001               lea edx, [eax + 1]
// 0056f0cf  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0056f0d2  884c2413             mov byte ptr [esp + 0x13], cl
// 0056f0d6  894344               mov dword ptr [ebx + 0x44], eax
// 0056f0d9  7e0f                 jle 0x56f0ea
// 0056f0db  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056f0de  03c8                 add ecx, eax
// 0056f0e0  6a01                 push 1
// 0056f0e2  51                   push ecx
// 0056f0e3  8bcb                 mov ecx, ebx
// 0056f0e5  e866560000           call 0x574750
// 0056f0ea  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0056f0ed  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0056f0f0  8a0c10               mov cl, byte ptr [eax + edx]
// 0056f0f3  8a542413             mov dl, byte ptr [esp + 0x13]
// 0056f0f7  40                   inc eax
// 0056f0f8  894344               mov dword ptr [ebx + 0x44], eax
// 0056f0fb  8b4604               mov eax, dword ptr [esi + 4]
// 0056f0fe  880c07               mov byte ptr [edi + eax], cl
// 0056f101  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056f104  88543901             mov byte ptr [ecx + edi + 1], dl
// 0056f108  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 0056f10d  8b4604               mov eax, dword ptr [esi + 4]
// 0056f110  884c3802             mov byte ptr [eax + edi + 2], cl
// 0056f114  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056f118  40                   inc eax
// 0056f119  83c703               add edi, 3
// 0056f11c  3b4608               cmp eax, dword ptr [esi + 8]
// 0056f11f  89442424             mov dword ptr [esp + 0x24], eax
// 0056f123  0f8c57ffffff         jl 0x56f080
// 0056f129  837c242000           cmp dword ptr [esp + 0x20], 0
// 0056f12e  7422                 je 0x56f152
// 0056f130  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0056f133  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0056f136  8d441102             lea eax, [ecx + edx + 2]
// 0056f13a  2bc1                 sub eax, ecx
// 0056f13c  894344               mov dword ptr [ebx + 0x44], eax
// 0056f13f  7805                 js 0x56f146
// 0056f141  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0056f144  7e0c                 jle 0x56f152
// 0056f146  03c1                 add eax, ecx
// 0056f148  6a00                 push 0
// 0056f14a  50                   push eax
// 0056f14b  8bcb                 mov ecx, ebx
// 0056f14d  e8fe550000           call 0x574750
// 0056f152  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056f156  03442430             add eax, dword ptr [esp + 0x30]
// 0056f15a  89442418             mov dword ptr [esp + 0x18], eax
// 0056f15e  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0056f162  0f85f8feffff         jne 0x56f060
// 0056f168  55                   push ebp
// 0056f169  e8f2bfffff           call 0x56b160
// 0056f16e  83c404               add esp, 4
// 0056f171  8d4c2474             lea ecx, [esp + 0x74]
// 0056f175  c78424f8000000ffffffff mov dword ptr [esp + 0xf8], 0xffffffff
// 0056f180  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056f186  8b8c24f0000000       mov ecx, dword ptr [esp + 0xf0]
// 0056f18d  5f                   pop edi
// 0056f18e  5e                   pop esi
// 0056f18f  5d                   pop ebp
// 0056f190  5b                   pop ebx
// 0056f191  64890d00000000       mov dword ptr fs:[0], ecx
// 0056f198  81c4ec000000         add esp, 0xec
// 0056f19e  c20400               ret 4
// 0056f1a1  50                   push eax
// 0056f1a2  6683f920             cmp cx, 0x20
// 0056f1a6  7564                 jne 0x56f20c
// 0056f1a8  e8b3bfffff           call 0x56b160
// 0056f1ad  55                   push ebp
// 0056f1ae  c7460400000000       mov dword ptr [esi + 4], 0
// 0056f1b5  e8a6bfffff           call 0x56b160
// 0056f1ba  83c408               add esp, 8
// 0056f1bd  6808b48c00           push 0x8cb408
// 0056f1c2  8d4c2438             lea ecx, [esp + 0x38]
// 0056f1c6  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056f1cc  8d442458             lea eax, [esp + 0x58]
// 0056f1d0  50                   push eax
// 0056f1d1  8bcb                 mov ecx, ebx
// 0056f1d3  c68424fc00000007     mov byte ptr [esp + 0xfc], 7
// 0056f1db  e8d0dfffff           call 0x56d1b0
// 0056f1e0  50                   push eax
// 0056f1e1  8d4c2438             lea ecx, [esp + 0x38]
// 0056f1e5  51                   push ecx
// 0056f1e6  8d8c2498000000       lea ecx, [esp + 0x98]
// 0056f1ed  c684240001000008     mov byte ptr [esp + 0x100], 8
// 0056f1f5  e8a6adf2ff           call 0x499fa0
// 0056f1fa  68308a9800           push 0x988a30
// 0056f1ff  8d942494000000       lea edx, [esp + 0x94]
// 0056f206  52                   push edx
// 0056f207  e83ea81a00           call 0x719a4a
// 0056f20c  e84fbfffff           call 0x56b160
// 0056f211  83c404               add esp, 4
// 0056f214  68f8b38c00           push 0x8cb3f8
// 0056f219  8d4c2438             lea ecx, [esp + 0x38]
// 0056f21d  c7460400000000       mov dword ptr [esi + 4], 0
// 0056f224  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056f22a  8d442458             lea eax, [esp + 0x58]
// 0056f22e  50                   push eax
// 0056f22f  8bcb                 mov ecx, ebx
// 0056f231  c68424fc00000009     mov byte ptr [esp + 0xfc], 9
// 0056f239  e872dfffff           call 0x56d1b0
// 0056f23e  50                   push eax
// 0056f23f  8d4c2438             lea ecx, [esp + 0x38]
// 0056f243  51                   push ecx
// 0056f244  8d8c2498000000       lea ecx, [esp + 0x98]
// 0056f24b  c68424000100000a     mov byte ptr [esp + 0x100], 0xa
// 0056f253  e848adf2ff           call 0x499fa0
// 0056f258  68308a9800           push 0x988a30
// 0056f25d  8d942494000000       lea edx, [esp + 0x94]
// 0056f264  52                   push edx
// 0056f265  e8e0a71a00           call 0x719a4a
// library g3d-6.09-rbx2008/G3Dcpp\GImage_bmp.cpp (function ?decodeBMP@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_bmp.cpp
