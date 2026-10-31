// roc 2009-06 0044c840  unit: CRobloxControlColorSelector  size: 822 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044c840
//
// 0044c840  55                   push ebp
// 0044c841  8bec                 mov ebp, esp
// 0044c843  6aff                 push -1
// 0044c845  68b00d8500           push 0x850db0
// 0044c84a  64a100000000         mov eax, dword ptr fs:[0]
// 0044c850  50                   push eax
// 0044c851  64892500000000       mov dword ptr fs:[0], esp
// 0044c858  83ec30               sub esp, 0x30
// 0044c85b  53                   push ebx
// 0044c85c  56                   push esi
// 0044c85d  8bf1                 mov esi, ecx
// 0044c85f  8b460c               mov eax, dword ptr [esi + 0xc]
// 0044c862  57                   push edi
// 0044c863  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044c866  8975e0               mov dword ptr [ebp - 0x20], esi
// 0044c869  85c0                 test eax, eax
// 0044c86b  7505                 jne 0x44c872
// 0044c86d  8945ec               mov dword ptr [ebp - 0x14], eax
// 0044c870  eb18                 jmp 0x44c88a
// 0044c872  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0044c875  2bc8                 sub ecx, eax
// 0044c877  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0044c87c  f7e9                 imul ecx
// 0044c87e  d1fa                 sar edx, 1
// 0044c880  8bc2                 mov eax, edx
// 0044c882  c1e81f               shr eax, 0x1f
// 0044c885  03c2                 add eax, edx
// 0044c887  8945ec               mov dword ptr [ebp - 0x14], eax
// 0044c88a  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0044c88d  85ff                 test edi, edi
// 0044c88f  0f84ce020000         je 0x44cb63
// 0044c895  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0044c898  8bcb                 mov ecx, ebx
// 0044c89a  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 0044c89d  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0044c8a2  f7e9                 imul ecx
// 0044c8a4  d1fa                 sar edx, 1
// 0044c8a6  8bc2                 mov eax, edx
// 0044c8a8  c1e81f               shr eax, 0x1f
// 0044c8ab  03c2                 add eax, edx
// 0044c8ad  b955555515           mov ecx, 0x15555555
// 0044c8b2  2bc8                 sub ecx, eax
// 0044c8b4  3bcf                 cmp ecx, edi
// 0044c8b6  7305                 jae 0x44c8bd
// 0044c8b8  e8a33a0400           call 0x490360
// 0044c8bd  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0044c8c0  03c7                 add eax, edi
// 0044c8c2  3bc8                 cmp ecx, eax
// 0044c8c4  0f837f010000         jae 0x44ca49
// 0044c8ca  8bd1                 mov edx, ecx
// 0044c8cc  d1ea                 shr edx, 1
// 0044c8ce  bb55555515           mov ebx, 0x15555555
// 0044c8d3  2bda                 sub ebx, edx
// 0044c8d5  3bd9                 cmp ebx, ecx
// 0044c8d7  730c                 jae 0x44c8e5
// 0044c8d9  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0044c8e0  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0044c8e3  eb05                 jmp 0x44c8ea
// 0044c8e5  03ca                 add ecx, edx
// 0044c8e7  894dec               mov dword ptr [ebp - 0x14], ecx
// 0044c8ea  3bc8                 cmp ecx, eax
// 0044c8ec  7305                 jae 0x44c8f3
// 0044c8ee  8945ec               mov dword ptr [ebp - 0x14], eax
// 0044c8f1  8bc8                 mov ecx, eax
// 0044c8f3  6a00                 push 0
// 0044c8f5  51                   push ecx
// 0044c8f6  e855e60200           call 0x47af50
// 0044c8fb  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0044c8fe  2b560c               sub edx, dword ptr [esi + 0xc]
// 0044c901  8bc8                 mov ecx, eax
// 0044c903  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0044c908  f7ea                 imul edx
// 0044c90a  d1fa                 sar edx, 1
// 0044c90c  8bda                 mov ebx, edx
// 0044c90e  33c0                 xor eax, eax
// 0044c910  83c408               add esp, 8
// 0044c913  c1eb1f               shr ebx, 0x1f
// 0044c916  03da                 add ebx, edx
// 0044c918  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0044c91b  8945e4               mov dword ptr [ebp - 0x1c], eax
// 0044c91e  8945fc               mov dword ptr [ebp - 4], eax
// 0044c921  52                   push edx
// 0044c922  894de8               mov dword ptr [ebp - 0x18], ecx
// 0044c925  8d045b               lea eax, [ebx + ebx*2]
// 0044c928  8d0c81               lea ecx, [ecx + eax*4]
// 0044c92b  57                   push edi
// 0044c92c  51                   push ecx
// 0044c92d  8bce                 mov ecx, esi
// 0044c92f  895ddc               mov dword ptr [ebp - 0x24], ebx
// 0044c932  e819feffff           call 0x44c750
// 0044c937  8b460c               mov eax, dword ptr [esi + 0xc]
// 0044c93a  c6451400             mov byte ptr [ebp + 0x14], 0
// 0044c93e  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0044c941  52                   push edx
// 0044c942  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0044c945  52                   push edx
// 0044c946  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0044c949  8d4e08               lea ecx, [esi + 8]
// 0044c94c  51                   push ecx
// 0044c94d  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0044c950  51                   push ecx
// 0044c951  52                   push edx
// 0044c952  50                   push eax
// 0044c953  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 0044c95a  e881fcffff           call 0x44c5e0
// 0044c95f  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 0044c962  8b4610               mov eax, dword ptr [esi + 0x10]
// 0044c965  83c418               add esp, 0x18
// 0044c968  03df                 add ebx, edi
// 0044c96a  8d0c5b               lea ecx, [ebx + ebx*2]
// 0044c96d  8d0c8a               lea ecx, [edx + ecx*4]
// 0044c970  c6451400             mov byte ptr [ebp + 0x14], 0
// 0044c974  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0044c977  52                   push edx
// 0044c978  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0044c97b  52                   push edx
// 0044c97c  8d5608               lea edx, [esi + 8]
// 0044c97f  52                   push edx
// 0044c980  51                   push ecx
// 0044c981  50                   push eax
// 0044c982  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0044c985  50                   push eax
// 0044c986  c745e402000000       mov dword ptr [ebp - 0x1c], 2
// 0044c98d  e84efcffff           call 0x44c5e0
// 0044c992  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0044c995  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0044c998  2bcb                 sub ecx, ebx
// 0044c99a  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0044c99f  f7e9                 imul ecx
// 0044c9a1  d1fa                 sar edx, 1
// 0044c9a3  8bca                 mov ecx, edx
// 0044c9a5  c1e91f               shr ecx, 0x1f
// 0044c9a8  03ca                 add ecx, edx
// 0044c9aa  83c418               add esp, 0x18
// 0044c9ad  03f9                 add edi, ecx
// 0044c9af  85db                 test ebx, ebx
// 0044c9b1  7418                 je 0x44c9cb
// 0044c9b3  8b5610               mov edx, dword ptr [esi + 0x10]
// 0044c9b6  52                   push edx
// 0044c9b7  53                   push ebx
// 0044c9b8  8bce                 mov ecx, esi
// 0044c9ba  e8d1fdffff           call 0x44c790
// 0044c9bf  8b460c               mov eax, dword ptr [esi + 0xc]
// 0044c9c2  50                   push eax
// 0044c9c3  e86ac02c00           call 0x718a32
// 0044c9c8  83c404               add esp, 4
// 0044c9cb  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0044c9ce  8d0c40               lea ecx, [eax + eax*2]
// 0044c9d1  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0044c9d4  8d1488               lea edx, [eax + ecx*4]
// 0044c9d7  8d0c7f               lea ecx, [edi + edi*2]
// 0044c9da  895614               mov dword ptr [esi + 0x14], edx
// 0044c9dd  8d1488               lea edx, [eax + ecx*4]
// 0044c9e0  895610               mov dword ptr [esi + 0x10], edx
// 0044c9e3  89460c               mov dword ptr [esi + 0xc], eax
// 0044c9e6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044c9e9  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c9f0  5f                   pop edi
// 0044c9f1  5e                   pop esi
// 0044c9f2  5b                   pop ebx
// 0044c9f3  8be5                 mov esp, ebp
// 0044c9f5  5d                   pop ebp
// 0044c9f6  c21000               ret 0x10
// 0044c9f9  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 0044c9fc  83fb01               cmp ebx, 1
// 0044c9ff  8b75dc               mov esi, dword ptr [ebp - 0x24]
// 0044ca02  8b7de8               mov edi, dword ptr [ebp - 0x18]
// 0044ca05  7e10                 jle 0x44ca17
// 0044ca07  8d0476               lea eax, [esi + esi*2]
// 0044ca0a  8d0c87               lea ecx, [edi + eax*4]
// 0044ca0d  51                   push ecx
// 0044ca0e  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0044ca11  57                   push edi
// 0044ca12  e879fdffff           call 0x44c790
// 0044ca17  85db                 test ebx, ebx
// 0044ca19  7e1c                 jle 0x44ca37
// 0044ca1b  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0044ca1e  8d0416               lea eax, [esi + edx]
// 0044ca21  8d0440               lea eax, [eax + eax*2]
// 0044ca24  8d0c87               lea ecx, [edi + eax*4]
// 0044ca27  8d1476               lea edx, [esi + esi*2]
// 0044ca2a  51                   push ecx
// 0044ca2b  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0044ca2e  8d0497               lea eax, [edi + edx*4]
// 0044ca31  50                   push eax
// 0044ca32  e859fdffff           call 0x44c790
// 0044ca37  57                   push edi
// 0044ca38  e8f5bf2c00           call 0x718a32
// 0044ca3d  83c404               add esp, 4
// 0044ca40  6a00                 push 0
// 0044ca42  6a00                 push 0
// 0044ca44  e801d02c00           call 0x719a4a
// 0044ca49  2b5d0c               sub ebx, dword ptr [ebp + 0xc]
// 0044ca4c  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0044ca51  f7eb                 imul ebx
// 0044ca53  d1fa                 sar edx, 1
// 0044ca55  8bca                 mov ecx, edx
// 0044ca57  c1e91f               shr ecx, 0x1f
// 0044ca5a  03ca                 add ecx, edx
// 0044ca5c  3bcf                 cmp ecx, edi
// 0044ca5e  0f83a4000000         jae 0x44cb08
// 0044ca64  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0044ca67  52                   push edx
// 0044ca68  8d4dd0               lea ecx, [ebp - 0x30]
// 0044ca6b  e870f5ffff           call 0x44bfe0
// 0044ca70  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0044ca73  8b5610               mov edx, dword ptr [esi + 0x10]
// 0044ca76  8d1c7f               lea ebx, [edi + edi*2]
// 0044ca79  03db                 add ebx, ebx
// 0044ca7b  03db                 add ebx, ebx
// 0044ca7d  8d0c03               lea ecx, [ebx + eax]
// 0044ca80  51                   push ecx
// 0044ca81  52                   push edx
// 0044ca82  50                   push eax
// 0044ca83  8bce                 mov ecx, esi
// 0044ca85  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0044ca8c  e87ffdffff           call 0x44c810
// 0044ca91  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0044ca94  8bd1                 mov edx, ecx
// 0044ca96  2b550c               sub edx, dword ptr [ebp + 0xc]
// 0044ca99  8d45d0               lea eax, [ebp - 0x30]
// 0044ca9c  50                   push eax
// 0044ca9d  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0044caa2  f7ea                 imul edx
// 0044caa4  d1fa                 sar edx, 1
// 0044caa6  8bc2                 mov eax, edx
// 0044caa8  c1e81f               shr eax, 0x1f
// 0044caab  03c2                 add eax, edx
// 0044caad  2bf8                 sub edi, eax
// 0044caaf  57                   push edi
// 0044cab0  51                   push ecx
// 0044cab1  8bce                 mov ecx, esi
// 0044cab3  c645fc03             mov byte ptr [ebp - 4], 3
// 0044cab7  e894fcffff           call 0x44c750
// 0044cabc  015e10               add dword ptr [esi + 0x10], ebx
// 0044cabf  8b7610               mov esi, dword ptr [esi + 0x10]
// 0044cac2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0044cac5  8d4dd0               lea ecx, [ebp - 0x30]
// 0044cac8  51                   push ecx
// 0044cac9  2bf3                 sub esi, ebx
// 0044cacb  56                   push esi
// 0044cacc  52                   push edx
// 0044cacd  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0044cad4  e867faffff           call 0x44c540
// 0044cad9  83c40c               add esp, 0xc
// 0044cadc  8d4dd8               lea ecx, [ebp - 0x28]
// 0044cadf  eb7c                 jmp 0x44cb5d
// 0044cae1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0044cae4  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0044cae7  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0044caea  8d0440               lea eax, [eax + eax*2]
// 0044caed  03c0                 add eax, eax
// 0044caef  03c0                 add eax, eax
// 0044caf1  03d0                 add edx, eax
// 0044caf3  52                   push edx
// 0044caf4  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0044caf7  03c2                 add eax, edx
// 0044caf9  50                   push eax
// 0044cafa  e891fcffff           call 0x44c790
// 0044caff  6a00                 push 0
// 0044cb01  6a00                 push 0
// 0044cb03  e842cf2c00           call 0x719a4a
// 0044cb08  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0044cb0b  50                   push eax
// 0044cb0c  8d4dc4               lea ecx, [ebp - 0x3c]
// 0044cb0f  e8ccf4ffff           call 0x44bfe0
// 0044cb14  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0044cb17  8d3c7f               lea edi, [edi + edi*2]
// 0044cb1a  03ff                 add edi, edi
// 0044cb1c  53                   push ebx
// 0044cb1d  03ff                 add edi, edi
// 0044cb1f  8bc3                 mov eax, ebx
// 0044cb21  2bc7                 sub eax, edi
// 0044cb23  53                   push ebx
// 0044cb24  50                   push eax
// 0044cb25  8bce                 mov ecx, esi
// 0044cb27  c745fc05000000       mov dword ptr [ebp - 4], 5
// 0044cb2e  894510               mov dword ptr [ebp + 0x10], eax
// 0044cb31  e8dafcffff           call 0x44c810
// 0044cb36  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0044cb39  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0044cb3c  53                   push ebx
// 0044cb3d  51                   push ecx
// 0044cb3e  52                   push edx
// 0044cb3f  894610               mov dword ptr [esi + 0x10], eax
// 0044cb42  e839fbffff           call 0x44c680
// 0044cb47  8d45c4               lea eax, [ebp - 0x3c]
// 0044cb4a  50                   push eax
// 0044cb4b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0044cb4e  03f8                 add edi, eax
// 0044cb50  57                   push edi
// 0044cb51  50                   push eax
// 0044cb52  e8e9f9ffff           call 0x44c540
// 0044cb57  83c418               add esp, 0x18
// 0044cb5a  8d4dcc               lea ecx, [ebp - 0x34]
// 0044cb5d  ff1510fd8900         call dword ptr [0x89fd10]
// 0044cb63  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044cb66  5f                   pop edi
// 0044cb67  5e                   pop esi
// 0044cb68  64890d00000000       mov dword ptr fs:[0], ecx
// 0044cb6f  5b                   pop ebx
// 0044cb70  8be5                 mov esp, ebp
// 0044cb72  5d                   pop ebp
// 0044cb73  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert_n@?$vector@UColorEntry@@V?$allocator@UColorEntry@@@std@@@std@@IAEXV?$_Vector_const_iterator@UColorEntry@@V?$allocator@UColorEntry@@@std@@@2@IABUColorEntry@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp