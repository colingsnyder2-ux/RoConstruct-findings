// roc 2010-06 00453ed0  unit: CRobloxControlColorSelector  size: 822 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00453ed0
//
// 00453ed0  55                   push ebp
// 00453ed1  8bec                 mov ebp, esp
// 00453ed3  6aff                 push -1
// 00453ed5  6800209800           push 0x982000
// 00453eda  64a100000000         mov eax, dword ptr fs:[0]
// 00453ee0  50                   push eax
// 00453ee1  64892500000000       mov dword ptr fs:[0], esp
// 00453ee8  83ec30               sub esp, 0x30
// 00453eeb  53                   push ebx
// 00453eec  56                   push esi
// 00453eed  8bf1                 mov esi, ecx
// 00453eef  8b460c               mov eax, dword ptr [esi + 0xc]
// 00453ef2  57                   push edi
// 00453ef3  8965f0               mov dword ptr [ebp - 0x10], esp
// 00453ef6  8975e0               mov dword ptr [ebp - 0x20], esi
// 00453ef9  85c0                 test eax, eax
// 00453efb  7505                 jne 0x453f02
// 00453efd  8945ec               mov dword ptr [ebp - 0x14], eax
// 00453f00  eb18                 jmp 0x453f1a
// 00453f02  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00453f05  2bc8                 sub ecx, eax
// 00453f07  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00453f0c  f7e9                 imul ecx
// 00453f0e  d1fa                 sar edx, 1
// 00453f10  8bc2                 mov eax, edx
// 00453f12  c1e81f               shr eax, 0x1f
// 00453f15  03c2                 add eax, edx
// 00453f17  8945ec               mov dword ptr [ebp - 0x14], eax
// 00453f1a  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00453f1d  85ff                 test edi, edi
// 00453f1f  0f84ce020000         je 0x4541f3
// 00453f25  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00453f28  8bcb                 mov ecx, ebx
// 00453f2a  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 00453f2d  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00453f32  f7e9                 imul ecx
// 00453f34  d1fa                 sar edx, 1
// 00453f36  8bc2                 mov eax, edx
// 00453f38  c1e81f               shr eax, 0x1f
// 00453f3b  03c2                 add eax, edx
// 00453f3d  b955555515           mov ecx, 0x15555555
// 00453f42  2bc8                 sub ecx, eax
// 00453f44  3bcf                 cmp ecx, edi
// 00453f46  7305                 jae 0x453f4d
// 00453f48  e8a3fefcff           call 0x423df0
// 00453f4d  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00453f50  03c7                 add eax, edi
// 00453f52  3bc8                 cmp ecx, eax
// 00453f54  0f837f010000         jae 0x4540d9
// 00453f5a  8bd1                 mov edx, ecx
// 00453f5c  d1ea                 shr edx, 1
// 00453f5e  bb55555515           mov ebx, 0x15555555
// 00453f63  2bda                 sub ebx, edx
// 00453f65  3bd9                 cmp ebx, ecx
// 00453f67  730c                 jae 0x453f75
// 00453f69  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 00453f70  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00453f73  eb05                 jmp 0x453f7a
// 00453f75  03ca                 add ecx, edx
// 00453f77  894dec               mov dword ptr [ebp - 0x14], ecx
// 00453f7a  3bc8                 cmp ecx, eax
// 00453f7c  7305                 jae 0x453f83
// 00453f7e  8945ec               mov dword ptr [ebp - 0x14], eax
// 00453f81  8bc8                 mov ecx, eax
// 00453f83  6a00                 push 0
// 00453f85  51                   push ecx
// 00453f86  e805ab4900           call 0x8eea90
// 00453f8b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00453f8e  2b560c               sub edx, dword ptr [esi + 0xc]
// 00453f91  8bc8                 mov ecx, eax
// 00453f93  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00453f98  f7ea                 imul edx
// 00453f9a  d1fa                 sar edx, 1
// 00453f9c  8bda                 mov ebx, edx
// 00453f9e  33c0                 xor eax, eax
// 00453fa0  83c408               add esp, 8
// 00453fa3  c1eb1f               shr ebx, 0x1f
// 00453fa6  03da                 add ebx, edx
// 00453fa8  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00453fab  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00453fae  8945fc               mov dword ptr [ebp - 4], eax
// 00453fb1  52                   push edx
// 00453fb2  894de8               mov dword ptr [ebp - 0x18], ecx
// 00453fb5  8d045b               lea eax, [ebx + ebx*2]
// 00453fb8  8d0c81               lea ecx, [ecx + eax*4]
// 00453fbb  57                   push edi
// 00453fbc  51                   push ecx
// 00453fbd  8bce                 mov ecx, esi
// 00453fbf  895ddc               mov dword ptr [ebp - 0x24], ebx
// 00453fc2  e849feffff           call 0x453e10
// 00453fc7  8b460c               mov eax, dword ptr [esi + 0xc]
// 00453fca  c6451400             mov byte ptr [ebp + 0x14], 0
// 00453fce  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00453fd1  52                   push edx
// 00453fd2  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00453fd5  52                   push edx
// 00453fd6  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00453fd9  8d4e08               lea ecx, [esi + 8]
// 00453fdc  51                   push ecx
// 00453fdd  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00453fe0  51                   push ecx
// 00453fe1  52                   push edx
// 00453fe2  50                   push eax
// 00453fe3  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 00453fea  e8e1fcffff           call 0x453cd0
// 00453fef  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 00453ff2  8b4610               mov eax, dword ptr [esi + 0x10]
// 00453ff5  83c418               add esp, 0x18
// 00453ff8  03df                 add ebx, edi
// 00453ffa  8d0c5b               lea ecx, [ebx + ebx*2]
// 00453ffd  8d0c8a               lea ecx, [edx + ecx*4]
// 00454000  c6451400             mov byte ptr [ebp + 0x14], 0
// 00454004  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00454007  52                   push edx
// 00454008  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0045400b  52                   push edx
// 0045400c  8d5608               lea edx, [esi + 8]
// 0045400f  52                   push edx
// 00454010  51                   push ecx
// 00454011  50                   push eax
// 00454012  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00454015  50                   push eax
// 00454016  c745e402000000       mov dword ptr [ebp - 0x1c], 2
// 0045401d  e8aefcffff           call 0x453cd0
// 00454022  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00454025  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00454028  2bcb                 sub ecx, ebx
// 0045402a  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0045402f  f7e9                 imul ecx
// 00454031  d1fa                 sar edx, 1
// 00454033  8bca                 mov ecx, edx
// 00454035  c1e91f               shr ecx, 0x1f
// 00454038  03ca                 add ecx, edx
// 0045403a  83c418               add esp, 0x18
// 0045403d  03f9                 add edi, ecx
// 0045403f  85db                 test ebx, ebx
// 00454041  7418                 je 0x45405b
// 00454043  8b5610               mov edx, dword ptr [esi + 0x10]
// 00454046  52                   push edx
// 00454047  53                   push ebx
// 00454048  8bce                 mov ecx, esi
// 0045404a  e831110000           call 0x455180
// 0045404f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00454052  50                   push eax
// 00454053  e842393500           call 0x7a799a
// 00454058  83c404               add esp, 4
// 0045405b  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0045405e  8d0c40               lea ecx, [eax + eax*2]
// 00454061  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00454064  8d1488               lea edx, [eax + ecx*4]
// 00454067  8d0c7f               lea ecx, [edi + edi*2]
// 0045406a  895614               mov dword ptr [esi + 0x14], edx
// 0045406d  8d1488               lea edx, [eax + ecx*4]
// 00454070  895610               mov dword ptr [esi + 0x10], edx
// 00454073  89460c               mov dword ptr [esi + 0xc], eax
// 00454076  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00454079  64890d00000000       mov dword ptr fs:[0], ecx
// 00454080  5f                   pop edi
// 00454081  5e                   pop esi
// 00454082  5b                   pop ebx
// 00454083  8be5                 mov esp, ebp
// 00454085  5d                   pop ebp
// 00454086  c21000               ret 0x10
// 00454089  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 0045408c  83fb01               cmp ebx, 1
// 0045408f  8b75dc               mov esi, dword ptr [ebp - 0x24]
// 00454092  8b7de8               mov edi, dword ptr [ebp - 0x18]
// 00454095  7e10                 jle 0x4540a7
// 00454097  8d0476               lea eax, [esi + esi*2]
// 0045409a  8d0c87               lea ecx, [edi + eax*4]
// 0045409d  51                   push ecx
// 0045409e  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 004540a1  57                   push edi
// 004540a2  e8d9100000           call 0x455180
// 004540a7  85db                 test ebx, ebx
// 004540a9  7e1c                 jle 0x4540c7
// 004540ab  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004540ae  8d0416               lea eax, [esi + edx]
// 004540b1  8d0440               lea eax, [eax + eax*2]
// 004540b4  8d0c87               lea ecx, [edi + eax*4]
// 004540b7  8d1476               lea edx, [esi + esi*2]
// 004540ba  51                   push ecx
// 004540bb  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 004540be  8d0497               lea eax, [edi + edx*4]
// 004540c1  50                   push eax
// 004540c2  e8b9100000           call 0x455180
// 004540c7  57                   push edi
// 004540c8  e8cd383500           call 0x7a799a
// 004540cd  83c404               add esp, 4
// 004540d0  6a00                 push 0
// 004540d2  6a00                 push 0
// 004540d4  e8d9483500           call 0x7a89b2
// 004540d9  2b5d0c               sub ebx, dword ptr [ebp + 0xc]
// 004540dc  b8abaaaa2a           mov eax, 0x2aaaaaab
// 004540e1  f7eb                 imul ebx
// 004540e3  d1fa                 sar edx, 1
// 004540e5  8bca                 mov ecx, edx
// 004540e7  c1e91f               shr ecx, 0x1f
// 004540ea  03ca                 add ecx, edx
// 004540ec  3bcf                 cmp ecx, edi
// 004540ee  0f83a4000000         jae 0x454198
// 004540f4  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004540f7  52                   push edx
// 004540f8  8d4dd0               lea ecx, [ebp - 0x30]
// 004540fb  e850f5ffff           call 0x453650
// 00454100  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00454103  8b5610               mov edx, dword ptr [esi + 0x10]
// 00454106  8d1c7f               lea ebx, [edi + edi*2]
// 00454109  03db                 add ebx, ebx
// 0045410b  03db                 add ebx, ebx
// 0045410d  8d0c03               lea ecx, [ebx + eax]
// 00454110  51                   push ecx
// 00454111  52                   push edx
// 00454112  50                   push eax
// 00454113  8bce                 mov ecx, esi
// 00454115  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0045411c  e87ffdffff           call 0x453ea0
// 00454121  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00454124  8bd1                 mov edx, ecx
// 00454126  2b550c               sub edx, dword ptr [ebp + 0xc]
// 00454129  8d45d0               lea eax, [ebp - 0x30]
// 0045412c  50                   push eax
// 0045412d  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00454132  f7ea                 imul edx
// 00454134  d1fa                 sar edx, 1
// 00454136  8bc2                 mov eax, edx
// 00454138  c1e81f               shr eax, 0x1f
// 0045413b  03c2                 add eax, edx
// 0045413d  2bf8                 sub edi, eax
// 0045413f  57                   push edi
// 00454140  51                   push ecx
// 00454141  8bce                 mov ecx, esi
// 00454143  c645fc03             mov byte ptr [ebp - 4], 3
// 00454147  e8c4fcffff           call 0x453e10
// 0045414c  015e10               add dword ptr [esi + 0x10], ebx
// 0045414f  8b7610               mov esi, dword ptr [esi + 0x10]
// 00454152  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00454155  8d4dd0               lea ecx, [ebp - 0x30]
// 00454158  51                   push ecx
// 00454159  2bf3                 sub esi, ebx
// 0045415b  56                   push esi
// 0045415c  52                   push edx
// 0045415d  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00454164  e8f7f9ffff           call 0x453b60
// 00454169  83c40c               add esp, 0xc
// 0045416c  8d4dd8               lea ecx, [ebp - 0x28]
// 0045416f  eb7c                 jmp 0x4541ed
// 00454171  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00454174  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00454177  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0045417a  8d0440               lea eax, [eax + eax*2]
// 0045417d  03c0                 add eax, eax
// 0045417f  03c0                 add eax, eax
// 00454181  03d0                 add edx, eax
// 00454183  52                   push edx
// 00454184  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00454187  03c2                 add eax, edx
// 00454189  50                   push eax
// 0045418a  e8f10f0000           call 0x455180
// 0045418f  6a00                 push 0
// 00454191  6a00                 push 0
// 00454193  e81a483500           call 0x7a89b2
// 00454198  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0045419b  50                   push eax
// 0045419c  8d4dc4               lea ecx, [ebp - 0x3c]
// 0045419f  e8acf4ffff           call 0x453650
// 004541a4  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 004541a7  8d3c7f               lea edi, [edi + edi*2]
// 004541aa  03ff                 add edi, edi
// 004541ac  53                   push ebx
// 004541ad  03ff                 add edi, edi
// 004541af  8bc3                 mov eax, ebx
// 004541b1  2bc7                 sub eax, edi
// 004541b3  53                   push ebx
// 004541b4  50                   push eax
// 004541b5  8bce                 mov ecx, esi
// 004541b7  c745fc05000000       mov dword ptr [ebp - 4], 5
// 004541be  894510               mov dword ptr [ebp + 0x10], eax
// 004541c1  e8dafcffff           call 0x453ea0
// 004541c6  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004541c9  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004541cc  53                   push ebx
// 004541cd  51                   push ecx
// 004541ce  52                   push edx
// 004541cf  894610               mov dword ptr [esi + 0x10], eax
// 004541d2  e8790f0000           call 0x455150
// 004541d7  8d45c4               lea eax, [ebp - 0x3c]
// 004541da  50                   push eax
// 004541db  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004541de  03f8                 add edi, eax
// 004541e0  57                   push edi
// 004541e1  50                   push eax
// 004541e2  e879f9ffff           call 0x453b60
// 004541e7  83c418               add esp, 0x18
// 004541ea  8d4dcc               lea ecx, [ebp - 0x34]
// 004541ed  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 004541f3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004541f6  5f                   pop edi
// 004541f7  5e                   pop esi
// 004541f8  64890d00000000       mov dword ptr fs:[0], ecx
// 004541ff  5b                   pop ebx
// 00454200  8be5                 mov esp, ebp
// 00454202  5d                   pop ebp
// 00454203  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert_n@?$vector@UColorEntry@@V?$allocator@UColorEntry@@@std@@@std@@IAEXV?$_Vector_const_iterator@UColorEntry@@V?$allocator@UColorEntry@@@std@@@2@IABUColorEntry@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp