// roc 2009-12 00604d40  unit: seg_00600000  size: 1152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00604d40
//
// 00604d40  83ec40               sub esp, 0x40
// 00604d43  55                   push ebp
// 00604d44  56                   push esi
// 00604d45  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00604d49  bdff000000           mov ebp, 0xff
// 00604d4e  57                   push edi
// 00604d4f  bf55000000           mov edi, 0x55
// 00604d54  c644240c49           mov byte ptr [esp + 0xc], 0x49
// 00604d59  c644240d44           mov byte ptr [esp + 0xd], 0x44
// 00604d5e  c644240e41           mov byte ptr [esp + 0xe], 0x41
// 00604d63  c644240f54           mov byte ptr [esp + 0xf], 0x54
// 00604d68  896c2414             mov dword ptr [esp + 0x14], ebp
// 00604d6c  c74424180f000000     mov dword ptr [esp + 0x18], 0xf
// 00604d74  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00604d78  c744242033000000     mov dword ptr [esp + 0x20], 0x33
// 00604d80  896c2424             mov dword ptr [esp + 0x24], ebp
// 00604d84  897c2428             mov dword ptr [esp + 0x28], edi
// 00604d88  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00604d8c  c744243080000000     mov dword ptr [esp + 0x30], 0x80
// 00604d94  c744243408000000     mov dword ptr [esp + 0x34], 8
// 00604d9c  c744243888000000     mov dword ptr [esp + 0x38], 0x88
// 00604da4  c744243c22000000     mov dword ptr [esp + 0x3c], 0x22
// 00604dac  c7442440aa000000     mov dword ptr [esp + 0x40], 0xaa
// 00604db4  897c2444             mov dword ptr [esp + 0x44], edi
// 00604db8  896c2448             mov dword ptr [esp + 0x48], ebp
// 00604dbc  85f6                 test esi, esi
// 00604dbe  0f84d9030000         je 0x60519d
// 00604dc4  f6466c40             test byte ptr [esi + 0x6c], 0x40
// 00604dc8  7509                 jne 0x604dd3
// 00604dca  56                   push esi
// 00604dcb  e8701a0100           call 0x616840
// 00604dd0  83c404               add esp, 4
// 00604dd3  80be2301000000       cmp byte ptr [esi + 0x123], 0
// 00604dda  0f8417010000         je 0x604ef7
// 00604de0  f6467002             test byte ptr [esi + 0x70], 2
// 00604de4  0f840d010000         je 0x604ef7
// 00604dea  0fb68624010000       movzx eax, byte ptr [esi + 0x124]
// 00604df1  83f806               cmp eax, 6
// 00604df4  0f87fd000000         ja 0x604ef7
// 00604dfa  ff2485a4516000       jmp dword ptr [eax*4 + 0x6051a4]
// 00604e01  f686e400000007       test byte ptr [esi + 0xe4], 7
// 00604e08  0f84e9000000         je 0x604ef7
// 00604e0e  8b442458             mov eax, dword ptr [esp + 0x58]
// 00604e12  85c0                 test eax, eax
// 00604e14  740b                 je 0x604e21
// 00604e16  55                   push ebp
// 00604e17  50                   push eax
// 00604e18  56                   push esi
// 00604e19  e812110100           call 0x615f30
// 00604e1e  83c40c               add esp, 0xc
// 00604e21  56                   push esi
// 00604e22  e849430100           call 0x619170
// 00604e27  83c404               add esp, 4
// 00604e2a  5f                   pop edi
// 00604e2b  5e                   pop esi
// 00604e2c  5d                   pop ebp
// 00604e2d  83c440               add esp, 0x40
// 00604e30  c3                   ret 
// 00604e31  f686e400000007       test byte ptr [esi + 0xe4], 7
// 00604e38  750d                 jne 0x604e47
// 00604e3a  83bec800000005       cmp dword ptr [esi + 0xc8], 5
// 00604e41  0f83b0000000         jae 0x604ef7
// 00604e47  8b442458             mov eax, dword ptr [esp + 0x58]
// 00604e4b  85c0                 test eax, eax
// 00604e4d  74d2                 je 0x604e21
// 00604e4f  6a0f                 push 0xf
// 00604e51  ebc4                 jmp 0x604e17
// 00604e53  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00604e59  8bc8                 mov ecx, eax
// 00604e5b  80e107               and cl, 7
// 00604e5e  80f904               cmp cl, 4
// 00604e61  0f8490000000         je 0x604ef7
// 00604e67  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00604e6b  85c9                 test ecx, ecx
// 00604e6d  74b2                 je 0x604e21
// 00604e6f  a804                 test al, 4
// 00604e71  74ae                 je 0x604e21
// 00604e73  55                   push ebp
// 00604e74  51                   push ecx
// 00604e75  eba1                 jmp 0x604e18
// 00604e77  b803000000           mov eax, 3
// 00604e7c  8486e4000000         test byte ptr [esi + 0xe4], al
// 00604e82  7508                 jne 0x604e8c
// 00604e84  3986c8000000         cmp dword ptr [esi + 0xc8], eax
// 00604e8a  736b                 jae 0x604ef7
// 00604e8c  8b442458             mov eax, dword ptr [esp + 0x58]
// 00604e90  85c0                 test eax, eax
// 00604e92  748d                 je 0x604e21
// 00604e94  6a33                 push 0x33
// 00604e96  e97cffffff           jmp 0x604e17
// 00604e9b  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00604ea1  8bd0                 mov edx, eax
// 00604ea3  80e203               and dl, 3
// 00604ea6  80fa02               cmp dl, 2
// 00604ea9  744c                 je 0x604ef7
// 00604eab  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00604eaf  85c9                 test ecx, ecx
// 00604eb1  0f846affffff         je 0x604e21
// 00604eb7  a802                 test al, 2
// 00604eb9  0f8462ffffff         je 0x604e21
// 00604ebf  55                   push ebp
// 00604ec0  51                   push ecx
// 00604ec1  e952ffffff           jmp 0x604e18
// 00604ec6  f686e400000001       test byte ptr [esi + 0xe4], 1
// 00604ecd  7509                 jne 0x604ed8
// 00604ecf  83bec800000002       cmp dword ptr [esi + 0xc8], 2
// 00604ed6  731f                 jae 0x604ef7
// 00604ed8  8b442458             mov eax, dword ptr [esp + 0x58]
// 00604edc  85c0                 test eax, eax
// 00604ede  0f843dffffff         je 0x604e21
// 00604ee4  57                   push edi
// 00604ee5  e92dffffff           jmp 0x604e17
// 00604eea  f686e400000001       test byte ptr [esi + 0xe4], 1
// 00604ef1  0f842affffff         je 0x604e21
// 00604ef7  f6466804             test byte ptr [esi + 0x68], 4
// 00604efb  750e                 jne 0x604f0b
// 00604efd  688c4e9c00           push 0x9c4e8c
// 00604f02  56                   push esi
// 00604f03  e888b20000           call 0x610190
// 00604f08  83c408               add esp, 8
// 00604f0b  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 00604f11  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00604f17  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00604f1b  898680000000         mov dword ptr [esi + 0x80], eax
// 00604f21  898e84000000         mov dword ptr [esi + 0x84], ecx
// 00604f27  8d7e74               lea edi, [esi + 0x74]
// 00604f2a  8d9b00000000         lea ebx, [ebx]
// 00604f30  837e7800             cmp dword ptr [esi + 0x78], 0
// 00604f34  7575                 jne 0x604fab
// 00604f36  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 00604f3d  7537                 jne 0x604f76
// 00604f3f  90                   nop 
// 00604f40  6a00                 push 0
// 00604f42  56                   push esi
// 00604f43  e8a81c0100           call 0x616bf0
// 00604f48  56                   push esi
// 00604f49  e8121c0100           call 0x616b60
// 00604f4e  83c40c               add esp, 0xc
// 00604f51  89860c010000         mov dword ptr [esi + 0x10c], eax
// 00604f57  39ae1c010000         cmp dword ptr [esi + 0x11c], ebp
// 00604f5d  740e                 je 0x604f6d
// 00604f5f  68744e9c00           push 0x9c4e74
// 00604f64  56                   push esi
// 00604f65  e826b20000           call 0x610190
// 00604f6a  83c408               add esp, 8
// 00604f6d  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 00604f74  74ca                 je 0x604f40
// 00604f76  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00604f7c  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 00604f82  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 00604f88  894678               mov dword ptr [esi + 0x78], eax
// 00604f8b  8917                 mov dword ptr [edi], edx
// 00604f8d  3bc1                 cmp eax, ecx
// 00604f8f  7603                 jbe 0x604f94
// 00604f91  894e78               mov dword ptr [esi + 0x78], ecx
// 00604f94  8b4678               mov eax, dword ptr [esi + 0x78]
// 00604f97  50                   push eax
// 00604f98  52                   push edx
// 00604f99  56                   push esi
// 00604f9a  e8f10a0100           call 0x615a90
// 00604f9f  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00604fa2  83c40c               add esp, 0xc
// 00604fa5  298e0c010000         sub dword ptr [esi + 0x10c], ecx
// 00604fab  6a01                 push 1
// 00604fad  57                   push edi
// 00604fae  e83ddc0000           call 0x612bf0
// 00604fb3  83c408               add esp, 8
// 00604fb6  83f801               cmp eax, 1
// 00604fb9  742c                 je 0x604fe7
// 00604fbb  85c0                 test eax, eax
// 00604fbd  7419                 je 0x604fd8
// 00604fbf  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00604fc5  85c0                 test eax, eax
// 00604fc7  7505                 jne 0x604fce
// 00604fc9  b8604e9c00           mov eax, 0x9c4e60
// 00604fce  50                   push eax
// 00604fcf  56                   push esi
// 00604fd0  e8bbb10000           call 0x610190
// 00604fd5  83c408               add esp, 8
// 00604fd8  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 00604fdf  0f854bffffff         jne 0x604f30
// 00604fe5  eb2e                 jmp 0x605015
// 00604fe7  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 00604fee  750f                 jne 0x604fff
// 00604ff0  837e7800             cmp dword ptr [esi + 0x78], 0
// 00604ff4  7509                 jne 0x604fff
// 00604ff6  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 00604ffd  740e                 je 0x60500d
// 00604fff  68484e9c00           push 0x9c4e48
// 00605004  56                   push esi
// 00605005  e886b10000           call 0x610190
// 0060500a  83c408               add esp, 8
// 0060500d  834e6808             or dword ptr [esi + 0x68], 8
// 00605011  834e6c20             or dword ptr [esi + 0x6c], 0x20
// 00605015  0fb69626010000       movzx edx, byte ptr [esi + 0x126]
// 0060501c  0fb6862a010000       movzx eax, byte ptr [esi + 0x12a]
// 00605023  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00605029  889608010000         mov byte ptr [esi + 0x108], dl
// 0060502f  0fb69627010000       movzx edx, byte ptr [esi + 0x127]
// 00605036  88860a010000         mov byte ptr [esi + 0x10a], al
// 0060503c  8a8629010000         mov al, byte ptr [esi + 0x129]
// 00605042  8dbe00010000         lea edi, [esi + 0x100]
// 00605048  88860b010000         mov byte ptr [esi + 0x10b], al
// 0060504e  3c08                 cmp al, 8
// 00605050  890f                 mov dword ptr [edi], ecx
// 00605052  889609010000         mov byte ptr [esi + 0x109], dl
// 00605058  0fb6c0               movzx eax, al
// 0060505b  7208                 jb 0x605065
// 0060505d  c1e803               shr eax, 3
// 00605060  0fafc1               imul eax, ecx
// 00605063  eb09                 jmp 0x60506e
// 00605065  0fafc1               imul eax, ecx
// 00605068  83c007               add eax, 7
// 0060506b  c1e803               shr eax, 3
// 0060506e  898604010000         mov dword ptr [esi + 0x104], eax
// 00605074  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 0060507a  8a08                 mov cl, byte ptr [eax]
// 0060507c  84c9                 test cl, cl
// 0060507e  7418                 je 0x605098
// 00605080  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 00605086  0fb6c9               movzx ecx, cl
// 00605089  51                   push ecx
// 0060508a  42                   inc edx
// 0060508b  52                   push edx
// 0060508c  40                   inc eax
// 0060508d  50                   push eax
// 0060508e  57                   push edi
// 0060508f  56                   push esi
// 00605090  e8db150100           call 0x616670
// 00605095  83c414               add esp, 0x14
// 00605098  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0060509e  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 006050a4  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 006050aa  40                   inc eax
// 006050ab  50                   push eax
// 006050ac  51                   push ecx
// 006050ad  52                   push edx
// 006050ae  56                   push esi
// 006050af  e83cbb0000           call 0x610bf0
// 006050b4  83c410               add esp, 0x10
// 006050b7  f6863002000004       test byte ptr [esi + 0x230], 4
// 006050be  741a                 je 0x6050da
// 006050c0  80be3802000040       cmp byte ptr [esi + 0x238], 0x40
// 006050c7  7511                 jne 0x6050da
// 006050c9  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 006050cf  40                   inc eax
// 006050d0  50                   push eax
// 006050d1  57                   push edi
// 006050d2  e819450000           call 0x6095f0
// 006050d7  83c408               add esp, 8
// 006050da  837e7000             cmp dword ptr [esi + 0x70], 0
// 006050de  7509                 jne 0x6050e9
// 006050e0  f7466c00004000       test dword ptr [esi + 0x6c], 0x400000
// 006050e7  7409                 je 0x6050f2
// 006050e9  56                   push esi
// 006050ea  e821530000           call 0x60a410
// 006050ef  83c404               add esp, 4
// 006050f2  80be2301000000       cmp byte ptr [esi + 0x123], 0
// 006050f9  744c                 je 0x605147
// 006050fb  f6467002             test byte ptr [esi + 0x70], 2
// 006050ff  7446                 je 0x605147
// 00605101  80be2401000006       cmp byte ptr [esi + 0x124], 6
// 00605108  7309                 jae 0x605113
// 0060510a  56                   push esi
// 0060510b  e810110100           call 0x616220
// 00605110  83c404               add esp, 4
// 00605113  8b442458             mov eax, dword ptr [esp + 0x58]
// 00605117  85c0                 test eax, eax
// 00605119  7416                 je 0x605131
// 0060511b  0fb68e24010000       movzx ecx, byte ptr [esi + 0x124]
// 00605122  8b548c14             mov edx, dword ptr [esp + ecx*4 + 0x14]
// 00605126  52                   push edx
// 00605127  50                   push eax
// 00605128  56                   push esi
// 00605129  e8020e0100           call 0x615f30
// 0060512e  83c40c               add esp, 0xc
// 00605131  8b442454             mov eax, dword ptr [esp + 0x54]
// 00605135  85c0                 test eax, eax
// 00605137  743c                 je 0x605175
// 00605139  0fb68e24010000       movzx ecx, byte ptr [esi + 0x124]
// 00605140  8b548c30             mov edx, dword ptr [esp + ecx*4 + 0x30]
// 00605144  52                   push edx
// 00605145  eb24                 jmp 0x60516b
// 00605147  8b442454             mov eax, dword ptr [esp + 0x54]
// 0060514b  85c0                 test eax, eax
// 0060514d  740f                 je 0x60515e
// 0060514f  68ff000000           push 0xff
// 00605154  50                   push eax
// 00605155  56                   push esi
// 00605156  e8d50d0100           call 0x615f30
// 0060515b  83c40c               add esp, 0xc
// 0060515e  8b442458             mov eax, dword ptr [esp + 0x58]
// 00605162  85c0                 test eax, eax
// 00605164  740f                 je 0x605175
// 00605166  68ff000000           push 0xff
// 0060516b  50                   push eax
// 0060516c  56                   push esi
// 0060516d  e8be0d0100           call 0x615f30
// 00605172  83c40c               add esp, 0xc
// 00605175  56                   push esi
// 00605176  e8f53f0100           call 0x619170
// 0060517b  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 00605181  83c404               add esp, 4
// 00605184  85c0                 test eax, eax
// 00605186  7415                 je 0x60519d
// 00605188  0fb68e24010000       movzx ecx, byte ptr [esi + 0x124]
// 0060518f  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 00605195  51                   push ecx
// 00605196  52                   push edx
// 00605197  56                   push esi
// 00605198  ffd0                 call eax
// 0060519a  83c40c               add esp, 0xc
// 0060519d  5f                   pop edi
// 0060519e  5e                   pop esi
// 0060519f  5d                   pop ebp
// 006051a0  83c440               add esp, 0x40
// 006051a3  c3                   ret 
// 006051a4  014e60               add dword ptr [esi + 0x60], ecx
// 006051a7  0031                 add byte ptr [ecx], dh
// 006051a9  4e                   dec esi
// 006051aa  60                   pushal 
// 006051ab  00534e               add byte ptr [ebx + 0x4e], dl
// 006051ae  60                   pushal 
// 006051af  00774e               add byte ptr [edi + 0x4e], dh
// 006051b2  60                   pushal 
// 006051b3  009b4e6000c6         add byte ptr [ebx - 0x39ff9fb2], bl
// 006051b9  4e                   dec esi
// 006051ba  60                   pushal 
// 006051bb  00ea                 add dl, ch
// 006051bd  4e                   dec esi
// 006051be  60                   pushal 
// copied from an identical function in another client (function _png_read_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.32 pngread.c