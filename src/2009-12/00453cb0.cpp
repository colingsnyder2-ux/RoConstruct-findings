// roc 2009-12 00453cb0  unit: CRobloxControlMaterialSelector  size: 822 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00453cb0
//
// 00453cb0  55                   push ebp
// 00453cb1  8bec                 mov ebp, esp
// 00453cb3  6aff                 push -1
// 00453cb5  6870b59200           push 0x92b570
// 00453cba  64a100000000         mov eax, dword ptr fs:[0]
// 00453cc0  50                   push eax
// 00453cc1  64892500000000       mov dword ptr fs:[0], esp
// 00453cc8  83ec30               sub esp, 0x30
// 00453ccb  53                   push ebx
// 00453ccc  56                   push esi
// 00453ccd  8bf1                 mov esi, ecx
// 00453ccf  8b460c               mov eax, dword ptr [esi + 0xc]
// 00453cd2  57                   push edi
// 00453cd3  8965f0               mov dword ptr [ebp - 0x10], esp
// 00453cd6  8975e0               mov dword ptr [ebp - 0x20], esi
// 00453cd9  85c0                 test eax, eax
// 00453cdb  7505                 jne 0x453ce2
// 00453cdd  8945ec               mov dword ptr [ebp - 0x14], eax
// 00453ce0  eb18                 jmp 0x453cfa
// 00453ce2  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00453ce5  2bc8                 sub ecx, eax
// 00453ce7  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00453cec  f7e9                 imul ecx
// 00453cee  d1fa                 sar edx, 1
// 00453cf0  8bc2                 mov eax, edx
// 00453cf2  c1e81f               shr eax, 0x1f
// 00453cf5  03c2                 add eax, edx
// 00453cf7  8945ec               mov dword ptr [ebp - 0x14], eax
// 00453cfa  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00453cfd  85ff                 test edi, edi
// 00453cff  0f84ce020000         je 0x453fd3
// 00453d05  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00453d08  8bcb                 mov ecx, ebx
// 00453d0a  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 00453d0d  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00453d12  f7e9                 imul ecx
// 00453d14  d1fa                 sar edx, 1
// 00453d16  8bc2                 mov eax, edx
// 00453d18  c1e81f               shr eax, 0x1f
// 00453d1b  03c2                 add eax, edx
// 00453d1d  b955555515           mov ecx, 0x15555555
// 00453d22  2bc8                 sub ecx, eax
// 00453d24  3bcf                 cmp ecx, edi
// 00453d26  7305                 jae 0x453d2d
// 00453d28  e833e4feff           call 0x442160
// 00453d2d  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00453d30  03c7                 add eax, edi
// 00453d32  3bc8                 cmp ecx, eax
// 00453d34  0f837f010000         jae 0x453eb9
// 00453d3a  8bd1                 mov edx, ecx
// 00453d3c  d1ea                 shr edx, 1
// 00453d3e  bb55555515           mov ebx, 0x15555555
// 00453d43  2bda                 sub ebx, edx
// 00453d45  3bd9                 cmp ebx, ecx
// 00453d47  730c                 jae 0x453d55
// 00453d49  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 00453d50  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00453d53  eb05                 jmp 0x453d5a
// 00453d55  03ca                 add ecx, edx
// 00453d57  894dec               mov dword ptr [ebp - 0x14], ecx
// 00453d5a  3bc8                 cmp ecx, eax
// 00453d5c  7305                 jae 0x453d63
// 00453d5e  8945ec               mov dword ptr [ebp - 0x14], eax
// 00453d61  8bc8                 mov ecx, eax
// 00453d63  6a00                 push 0
// 00453d65  51                   push ecx
// 00453d66  e8e5fcffff           call 0x453a50
// 00453d6b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00453d6e  2b560c               sub edx, dword ptr [esi + 0xc]
// 00453d71  8bc8                 mov ecx, eax
// 00453d73  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00453d78  f7ea                 imul edx
// 00453d7a  d1fa                 sar edx, 1
// 00453d7c  8bda                 mov ebx, edx
// 00453d7e  33c0                 xor eax, eax
// 00453d80  83c408               add esp, 8
// 00453d83  c1eb1f               shr ebx, 0x1f
// 00453d86  03da                 add ebx, edx
// 00453d88  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00453d8b  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00453d8e  8945fc               mov dword ptr [ebp - 4], eax
// 00453d91  52                   push edx
// 00453d92  894de8               mov dword ptr [ebp - 0x18], ecx
// 00453d95  8d045b               lea eax, [ebx + ebx*2]
// 00453d98  8d0c81               lea ecx, [ecx + eax*4]
// 00453d9b  57                   push edi
// 00453d9c  51                   push ecx
// 00453d9d  8bce                 mov ecx, esi
// 00453d9f  895ddc               mov dword ptr [ebp - 0x24], ebx
// 00453da2  e8c9feffff           call 0x453c70
// 00453da7  8b460c               mov eax, dword ptr [esi + 0xc]
// 00453daa  c6451400             mov byte ptr [ebp + 0x14], 0
// 00453dae  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00453db1  52                   push edx
// 00453db2  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00453db5  52                   push edx
// 00453db6  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00453db9  8d4e08               lea ecx, [esi + 8]
// 00453dbc  51                   push ecx
// 00453dbd  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00453dc0  51                   push ecx
// 00453dc1  52                   push edx
// 00453dc2  50                   push eax
// 00453dc3  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 00453dca  e861efffff           call 0x452d30
// 00453dcf  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 00453dd2  8b4610               mov eax, dword ptr [esi + 0x10]
// 00453dd5  83c418               add esp, 0x18
// 00453dd8  03df                 add ebx, edi
// 00453dda  8d0c5b               lea ecx, [ebx + ebx*2]
// 00453ddd  8d0c8a               lea ecx, [edx + ecx*4]
// 00453de0  c6451400             mov byte ptr [ebp + 0x14], 0
// 00453de4  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00453de7  52                   push edx
// 00453de8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00453deb  52                   push edx
// 00453dec  8d5608               lea edx, [esi + 8]
// 00453def  52                   push edx
// 00453df0  51                   push ecx
// 00453df1  50                   push eax
// 00453df2  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00453df5  50                   push eax
// 00453df6  c745e402000000       mov dword ptr [ebp - 0x1c], 2
// 00453dfd  e82eefffff           call 0x452d30
// 00453e02  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00453e05  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00453e08  2bcb                 sub ecx, ebx
// 00453e0a  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00453e0f  f7e9                 imul ecx
// 00453e11  d1fa                 sar edx, 1
// 00453e13  8bca                 mov ecx, edx
// 00453e15  c1e91f               shr ecx, 0x1f
// 00453e18  03ca                 add ecx, edx
// 00453e1a  83c418               add esp, 0x18
// 00453e1d  03f9                 add edi, ecx
// 00453e1f  85db                 test ebx, ebx
// 00453e21  7418                 je 0x453e3b
// 00453e23  8b5610               mov edx, dword ptr [esi + 0x10]
// 00453e26  52                   push edx
// 00453e27  53                   push ebx
// 00453e28  8bce                 mov ecx, esi
// 00453e2a  e8d1efffff           call 0x452e00
// 00453e2f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00453e32  50                   push eax
// 00453e33  e822fa3900           call 0x7f385a
// 00453e38  83c404               add esp, 4
// 00453e3b  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00453e3e  8d0c40               lea ecx, [eax + eax*2]
// 00453e41  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00453e44  8d1488               lea edx, [eax + ecx*4]
// 00453e47  8d0c7f               lea ecx, [edi + edi*2]
// 00453e4a  895614               mov dword ptr [esi + 0x14], edx
// 00453e4d  8d1488               lea edx, [eax + ecx*4]
// 00453e50  895610               mov dword ptr [esi + 0x10], edx
// 00453e53  89460c               mov dword ptr [esi + 0xc], eax
// 00453e56  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00453e59  64890d00000000       mov dword ptr fs:[0], ecx
// 00453e60  5f                   pop edi
// 00453e61  5e                   pop esi
// 00453e62  5b                   pop ebx
// 00453e63  8be5                 mov esp, ebp
// 00453e65  5d                   pop ebp
// 00453e66  c21000               ret 0x10
// 00453e69  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 00453e6c  83fb01               cmp ebx, 1
// 00453e6f  8b75dc               mov esi, dword ptr [ebp - 0x24]
// 00453e72  8b7de8               mov edi, dword ptr [ebp - 0x18]
// 00453e75  7e10                 jle 0x453e87
// 00453e77  8d0476               lea eax, [esi + esi*2]
// 00453e7a  8d0c87               lea ecx, [edi + eax*4]
// 00453e7d  51                   push ecx
// 00453e7e  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00453e81  57                   push edi
// 00453e82  e879efffff           call 0x452e00
// 00453e87  85db                 test ebx, ebx
// 00453e89  7e1c                 jle 0x453ea7
// 00453e8b  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00453e8e  8d0416               lea eax, [esi + edx]
// 00453e91  8d0440               lea eax, [eax + eax*2]
// 00453e94  8d0c87               lea ecx, [edi + eax*4]
// 00453e97  8d1476               lea edx, [esi + esi*2]
// 00453e9a  51                   push ecx
// 00453e9b  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00453e9e  8d0497               lea eax, [edi + edx*4]
// 00453ea1  50                   push eax
// 00453ea2  e859efffff           call 0x452e00
// 00453ea7  57                   push edi
// 00453ea8  e8adf93900           call 0x7f385a
// 00453ead  83c404               add esp, 4
// 00453eb0  6a00                 push 0
// 00453eb2  6a00                 push 0
// 00453eb4  e8bf093a00           call 0x7f4878
// 00453eb9  2b5d0c               sub ebx, dword ptr [ebp + 0xc]
// 00453ebc  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00453ec1  f7eb                 imul ebx
// 00453ec3  d1fa                 sar edx, 1
// 00453ec5  8bca                 mov ecx, edx
// 00453ec7  c1e91f               shr ecx, 0x1f
// 00453eca  03ca                 add ecx, edx
// 00453ecc  3bcf                 cmp ecx, edi
// 00453ece  0f83a4000000         jae 0x453f78
// 00453ed4  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00453ed7  52                   push edx
// 00453ed8  8d4dd0               lea ecx, [ebp - 0x30]
// 00453edb  e8c0f4ffff           call 0x4533a0
// 00453ee0  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00453ee3  8b5610               mov edx, dword ptr [esi + 0x10]
// 00453ee6  8d1c7f               lea ebx, [edi + edi*2]
// 00453ee9  03db                 add ebx, ebx
// 00453eeb  03db                 add ebx, ebx
// 00453eed  8d0c03               lea ecx, [ebx + eax]
// 00453ef0  51                   push ecx
// 00453ef1  52                   push edx
// 00453ef2  50                   push eax
// 00453ef3  8bce                 mov ecx, esi
// 00453ef5  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00453efc  e87fefffff           call 0x452e80
// 00453f01  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00453f04  8bd1                 mov edx, ecx
// 00453f06  2b550c               sub edx, dword ptr [ebp + 0xc]
// 00453f09  8d45d0               lea eax, [ebp - 0x30]
// 00453f0c  50                   push eax
// 00453f0d  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00453f12  f7ea                 imul edx
// 00453f14  d1fa                 sar edx, 1
// 00453f16  8bc2                 mov eax, edx
// 00453f18  c1e81f               shr eax, 0x1f
// 00453f1b  03c2                 add eax, edx
// 00453f1d  2bf8                 sub edi, eax
// 00453f1f  57                   push edi
// 00453f20  51                   push ecx
// 00453f21  8bce                 mov ecx, esi
// 00453f23  c645fc03             mov byte ptr [ebp - 4], 3
// 00453f27  e844fdffff           call 0x453c70
// 00453f2c  015e10               add dword ptr [esi + 0x10], ebx
// 00453f2f  8b7610               mov esi, dword ptr [esi + 0x10]
// 00453f32  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00453f35  8d4dd0               lea ecx, [ebp - 0x30]
// 00453f38  51                   push ecx
// 00453f39  2bf3                 sub esi, ebx
// 00453f3b  56                   push esi
// 00453f3c  52                   push edx
// 00453f3d  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00453f44  e817ecffff           call 0x452b60
// 00453f49  83c40c               add esp, 0xc
// 00453f4c  8d4dd8               lea ecx, [ebp - 0x28]
// 00453f4f  eb7c                 jmp 0x453fcd
// 00453f51  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00453f54  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00453f57  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00453f5a  8d0440               lea eax, [eax + eax*2]
// 00453f5d  03c0                 add eax, eax
// 00453f5f  03c0                 add eax, eax
// 00453f61  03d0                 add edx, eax
// 00453f63  52                   push edx
// 00453f64  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00453f67  03c2                 add eax, edx
// 00453f69  50                   push eax
// 00453f6a  e891eeffff           call 0x452e00
// 00453f6f  6a00                 push 0
// 00453f71  6a00                 push 0
// 00453f73  e800093a00           call 0x7f4878
// 00453f78  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00453f7b  50                   push eax
// 00453f7c  8d4dc4               lea ecx, [ebp - 0x3c]
// 00453f7f  e81cf4ffff           call 0x4533a0
// 00453f84  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00453f87  8d3c7f               lea edi, [edi + edi*2]
// 00453f8a  03ff                 add edi, edi
// 00453f8c  53                   push ebx
// 00453f8d  03ff                 add edi, edi
// 00453f8f  8bc3                 mov eax, ebx
// 00453f91  2bc7                 sub eax, edi
// 00453f93  53                   push ebx
// 00453f94  50                   push eax
// 00453f95  8bce                 mov ecx, esi
// 00453f97  c745fc05000000       mov dword ptr [ebp - 4], 5
// 00453f9e  894510               mov dword ptr [ebp + 0x10], eax
// 00453fa1  e8daeeffff           call 0x452e80
// 00453fa6  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00453fa9  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00453fac  53                   push ebx
// 00453fad  51                   push ecx
// 00453fae  52                   push edx
// 00453faf  894610               mov dword ptr [esi + 0x10], eax
// 00453fb2  e819eeffff           call 0x452dd0
// 00453fb7  8d45c4               lea eax, [ebp - 0x3c]
// 00453fba  50                   push eax
// 00453fbb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00453fbe  03f8                 add edi, eax
// 00453fc0  57                   push edi
// 00453fc1  50                   push eax
// 00453fc2  e899ebffff           call 0x452b60
// 00453fc7  83c418               add esp, 0x18
// 00453fca  8d4dcc               lea ecx, [ebp - 0x34]
// 00453fcd  ff15c0de9800         call dword ptr [0x98dec0]
// 00453fd3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00453fd6  5f                   pop edi
// 00453fd7  5e                   pop esi
// 00453fd8  64890d00000000       mov dword ptr fs:[0], ecx
// 00453fdf  5b                   pop ebx
// 00453fe0  8be5                 mov esp, ebp
// 00453fe2  5d                   pop ebp
// 00453fe3  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert_n@?$vector@UColorEntry@@V?$allocator@UColorEntry@@@std@@@std@@IAEXV?$_Vector_const_iterator@UColorEntry@@V?$allocator@UColorEntry@@@std@@@2@IABUColorEntry@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp