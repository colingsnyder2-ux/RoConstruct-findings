// roc 2010-06 005666c0  unit: seg_00560000  size: 1152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005666c0
//
// 005666c0  83ec40               sub esp, 0x40
// 005666c3  55                   push ebp
// 005666c4  56                   push esi
// 005666c5  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 005666c9  bdff000000           mov ebp, 0xff
// 005666ce  57                   push edi
// 005666cf  bf55000000           mov edi, 0x55
// 005666d4  c644240c49           mov byte ptr [esp + 0xc], 0x49
// 005666d9  c644240d44           mov byte ptr [esp + 0xd], 0x44
// 005666de  c644240e41           mov byte ptr [esp + 0xe], 0x41
// 005666e3  c644240f54           mov byte ptr [esp + 0xf], 0x54
// 005666e8  896c2414             mov dword ptr [esp + 0x14], ebp
// 005666ec  c74424180f000000     mov dword ptr [esp + 0x18], 0xf
// 005666f4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005666f8  c744242033000000     mov dword ptr [esp + 0x20], 0x33
// 00566700  896c2424             mov dword ptr [esp + 0x24], ebp
// 00566704  897c2428             mov dword ptr [esp + 0x28], edi
// 00566708  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0056670c  c744243080000000     mov dword ptr [esp + 0x30], 0x80
// 00566714  c744243408000000     mov dword ptr [esp + 0x34], 8
// 0056671c  c744243888000000     mov dword ptr [esp + 0x38], 0x88
// 00566724  c744243c22000000     mov dword ptr [esp + 0x3c], 0x22
// 0056672c  c7442440aa000000     mov dword ptr [esp + 0x40], 0xaa
// 00566734  897c2444             mov dword ptr [esp + 0x44], edi
// 00566738  896c2448             mov dword ptr [esp + 0x48], ebp
// 0056673c  85f6                 test esi, esi
// 0056673e  0f84d9030000         je 0x566b1d
// 00566744  f6466c40             test byte ptr [esi + 0x6c], 0x40
// 00566748  7509                 jne 0x566753
// 0056674a  56                   push esi
// 0056674b  e8101a0100           call 0x578160
// 00566750  83c404               add esp, 4
// 00566753  80be2301000000       cmp byte ptr [esi + 0x123], 0
// 0056675a  0f8417010000         je 0x566877
// 00566760  f6467002             test byte ptr [esi + 0x70], 2
// 00566764  0f840d010000         je 0x566877
// 0056676a  0fb68624010000       movzx eax, byte ptr [esi + 0x124]
// 00566771  83f806               cmp eax, 6
// 00566774  0f87fd000000         ja 0x566877
// 0056677a  ff2485246b5600       jmp dword ptr [eax*4 + 0x566b24]
// 00566781  f686e400000007       test byte ptr [esi + 0xe4], 7
// 00566788  0f84e9000000         je 0x566877
// 0056678e  8b442458             mov eax, dword ptr [esp + 0x58]
// 00566792  85c0                 test eax, eax
// 00566794  740b                 je 0x5667a1
// 00566796  55                   push ebp
// 00566797  50                   push eax
// 00566798  56                   push esi
// 00566799  e8b2100100           call 0x577850
// 0056679e  83c40c               add esp, 0xc
// 005667a1  56                   push esi
// 005667a2  e8e9420100           call 0x57aa90
// 005667a7  83c404               add esp, 4
// 005667aa  5f                   pop edi
// 005667ab  5e                   pop esi
// 005667ac  5d                   pop ebp
// 005667ad  83c440               add esp, 0x40
// 005667b0  c3                   ret 
// 005667b1  f686e400000007       test byte ptr [esi + 0xe4], 7
// 005667b8  750d                 jne 0x5667c7
// 005667ba  83bec800000005       cmp dword ptr [esi + 0xc8], 5
// 005667c1  0f83b0000000         jae 0x566877
// 005667c7  8b442458             mov eax, dword ptr [esp + 0x58]
// 005667cb  85c0                 test eax, eax
// 005667cd  74d2                 je 0x5667a1
// 005667cf  6a0f                 push 0xf
// 005667d1  ebc4                 jmp 0x566797
// 005667d3  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 005667d9  8bc8                 mov ecx, eax
// 005667db  80e107               and cl, 7
// 005667de  80f904               cmp cl, 4
// 005667e1  0f8490000000         je 0x566877
// 005667e7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005667eb  85c9                 test ecx, ecx
// 005667ed  74b2                 je 0x5667a1
// 005667ef  a804                 test al, 4
// 005667f1  74ae                 je 0x5667a1
// 005667f3  55                   push ebp
// 005667f4  51                   push ecx
// 005667f5  eba1                 jmp 0x566798
// 005667f7  b803000000           mov eax, 3
// 005667fc  8486e4000000         test byte ptr [esi + 0xe4], al
// 00566802  7508                 jne 0x56680c
// 00566804  3986c8000000         cmp dword ptr [esi + 0xc8], eax
// 0056680a  736b                 jae 0x566877
// 0056680c  8b442458             mov eax, dword ptr [esp + 0x58]
// 00566810  85c0                 test eax, eax
// 00566812  748d                 je 0x5667a1
// 00566814  6a33                 push 0x33
// 00566816  e97cffffff           jmp 0x566797
// 0056681b  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00566821  8bd0                 mov edx, eax
// 00566823  80e203               and dl, 3
// 00566826  80fa02               cmp dl, 2
// 00566829  744c                 je 0x566877
// 0056682b  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0056682f  85c9                 test ecx, ecx
// 00566831  0f846affffff         je 0x5667a1
// 00566837  a802                 test al, 2
// 00566839  0f8462ffffff         je 0x5667a1
// 0056683f  55                   push ebp
// 00566840  51                   push ecx
// 00566841  e952ffffff           jmp 0x566798
// 00566846  f686e400000001       test byte ptr [esi + 0xe4], 1
// 0056684d  7509                 jne 0x566858
// 0056684f  83bec800000002       cmp dword ptr [esi + 0xc8], 2
// 00566856  731f                 jae 0x566877
// 00566858  8b442458             mov eax, dword ptr [esp + 0x58]
// 0056685c  85c0                 test eax, eax
// 0056685e  0f843dffffff         je 0x5667a1
// 00566864  57                   push edi
// 00566865  e92dffffff           jmp 0x566797
// 0056686a  f686e400000001       test byte ptr [esi + 0xe4], 1
// 00566871  0f842affffff         je 0x5667a1
// 00566877  f6466804             test byte ptr [esi + 0x68], 4
// 0056687b  750e                 jne 0x56688b
// 0056687d  68ec2ba200           push 0xa22bec
// 00566882  56                   push esi
// 00566883  e828b20000           call 0x571ab0
// 00566888  83c408               add esp, 8
// 0056688b  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 00566891  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00566897  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0056689b  898680000000         mov dword ptr [esi + 0x80], eax
// 005668a1  898e84000000         mov dword ptr [esi + 0x84], ecx
// 005668a7  8d7e74               lea edi, [esi + 0x74]
// 005668aa  8d9b00000000         lea ebx, [ebx]
// 005668b0  837e7800             cmp dword ptr [esi + 0x78], 0
// 005668b4  7575                 jne 0x56692b
// 005668b6  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 005668bd  7537                 jne 0x5668f6
// 005668bf  90                   nop 
// 005668c0  6a00                 push 0
// 005668c2  56                   push esi
// 005668c3  e8481c0100           call 0x578510
// 005668c8  56                   push esi
// 005668c9  e8b21b0100           call 0x578480
// 005668ce  83c40c               add esp, 0xc
// 005668d1  89860c010000         mov dword ptr [esi + 0x10c], eax
// 005668d7  39ae1c010000         cmp dword ptr [esi + 0x11c], ebp
// 005668dd  740e                 je 0x5668ed
// 005668df  68d42ba200           push 0xa22bd4
// 005668e4  56                   push esi
// 005668e5  e8c6b10000           call 0x571ab0
// 005668ea  83c408               add esp, 8
// 005668ed  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 005668f4  74ca                 je 0x5668c0
// 005668f6  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005668fc  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 00566902  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 00566908  894678               mov dword ptr [esi + 0x78], eax
// 0056690b  8917                 mov dword ptr [edi], edx
// 0056690d  3bc1                 cmp eax, ecx
// 0056690f  7603                 jbe 0x566914
// 00566911  894e78               mov dword ptr [esi + 0x78], ecx
// 00566914  8b4678               mov eax, dword ptr [esi + 0x78]
// 00566917  50                   push eax
// 00566918  52                   push edx
// 00566919  56                   push esi
// 0056691a  e8910a0100           call 0x5773b0
// 0056691f  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00566922  83c40c               add esp, 0xc
// 00566925  298e0c010000         sub dword ptr [esi + 0x10c], ecx
// 0056692b  6a01                 push 1
// 0056692d  57                   push edi
// 0056692e  e8dddb0000           call 0x574510
// 00566933  83c408               add esp, 8
// 00566936  83f801               cmp eax, 1
// 00566939  742c                 je 0x566967
// 0056693b  85c0                 test eax, eax
// 0056693d  7419                 je 0x566958
// 0056693f  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00566945  85c0                 test eax, eax
// 00566947  7505                 jne 0x56694e
// 00566949  b8c02ba200           mov eax, 0xa22bc0
// 0056694e  50                   push eax
// 0056694f  56                   push esi
// 00566950  e85bb10000           call 0x571ab0
// 00566955  83c408               add esp, 8
// 00566958  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0056695f  0f854bffffff         jne 0x5668b0
// 00566965  eb2e                 jmp 0x566995
// 00566967  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0056696e  750f                 jne 0x56697f
// 00566970  837e7800             cmp dword ptr [esi + 0x78], 0
// 00566974  7509                 jne 0x56697f
// 00566976  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 0056697d  740e                 je 0x56698d
// 0056697f  68a82ba200           push 0xa22ba8
// 00566984  56                   push esi
// 00566985  e826b10000           call 0x571ab0
// 0056698a  83c408               add esp, 8
// 0056698d  834e6808             or dword ptr [esi + 0x68], 8
// 00566991  834e6c20             or dword ptr [esi + 0x6c], 0x20
// 00566995  0fb69626010000       movzx edx, byte ptr [esi + 0x126]
// 0056699c  0fb6862a010000       movzx eax, byte ptr [esi + 0x12a]
// 005669a3  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 005669a9  889608010000         mov byte ptr [esi + 0x108], dl
// 005669af  0fb69627010000       movzx edx, byte ptr [esi + 0x127]
// 005669b6  88860a010000         mov byte ptr [esi + 0x10a], al
// 005669bc  8a8629010000         mov al, byte ptr [esi + 0x129]
// 005669c2  8dbe00010000         lea edi, [esi + 0x100]
// 005669c8  88860b010000         mov byte ptr [esi + 0x10b], al
// 005669ce  3c08                 cmp al, 8
// 005669d0  890f                 mov dword ptr [edi], ecx
// 005669d2  889609010000         mov byte ptr [esi + 0x109], dl
// 005669d8  0fb6c0               movzx eax, al
// 005669db  7208                 jb 0x5669e5
// 005669dd  c1e803               shr eax, 3
// 005669e0  0fafc1               imul eax, ecx
// 005669e3  eb09                 jmp 0x5669ee
// 005669e5  0fafc1               imul eax, ecx
// 005669e8  83c007               add eax, 7
// 005669eb  c1e803               shr eax, 3
// 005669ee  898604010000         mov dword ptr [esi + 0x104], eax
// 005669f4  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 005669fa  8a08                 mov cl, byte ptr [eax]
// 005669fc  84c9                 test cl, cl
// 005669fe  7418                 je 0x566a18
// 00566a00  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 00566a06  0fb6c9               movzx ecx, cl
// 00566a09  51                   push ecx
// 00566a0a  42                   inc edx
// 00566a0b  52                   push edx
// 00566a0c  40                   inc eax
// 00566a0d  50                   push eax
// 00566a0e  57                   push edi
// 00566a0f  56                   push esi
// 00566a10  e87b150100           call 0x577f90
// 00566a15  83c414               add esp, 0x14
// 00566a18  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00566a1e  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00566a24  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 00566a2a  40                   inc eax
// 00566a2b  50                   push eax
// 00566a2c  51                   push ecx
// 00566a2d  52                   push edx
// 00566a2e  56                   push esi
// 00566a2f  e8dcba0000           call 0x572510
// 00566a34  83c410               add esp, 0x10
// 00566a37  f6863002000004       test byte ptr [esi + 0x230], 4
// 00566a3e  741a                 je 0x566a5a
// 00566a40  80be3802000040       cmp byte ptr [esi + 0x238], 0x40
// 00566a47  7511                 jne 0x566a5a
// 00566a49  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 00566a4f  40                   inc eax
// 00566a50  50                   push eax
// 00566a51  57                   push edi
// 00566a52  e819450000           call 0x56af70
// 00566a57  83c408               add esp, 8
// 00566a5a  837e7000             cmp dword ptr [esi + 0x70], 0
// 00566a5e  7509                 jne 0x566a69
// 00566a60  f7466c00004000       test dword ptr [esi + 0x6c], 0x400000
// 00566a67  7409                 je 0x566a72
// 00566a69  56                   push esi
// 00566a6a  e821530000           call 0x56bd90
// 00566a6f  83c404               add esp, 4
// 00566a72  80be2301000000       cmp byte ptr [esi + 0x123], 0
// 00566a79  744c                 je 0x566ac7
// 00566a7b  f6467002             test byte ptr [esi + 0x70], 2
// 00566a7f  7446                 je 0x566ac7
// 00566a81  80be2401000006       cmp byte ptr [esi + 0x124], 6
// 00566a88  7309                 jae 0x566a93
// 00566a8a  56                   push esi
// 00566a8b  e8b0100100           call 0x577b40
// 00566a90  83c404               add esp, 4
// 00566a93  8b442458             mov eax, dword ptr [esp + 0x58]
// 00566a97  85c0                 test eax, eax
// 00566a99  7416                 je 0x566ab1
// 00566a9b  0fb68e24010000       movzx ecx, byte ptr [esi + 0x124]
// 00566aa2  8b548c14             mov edx, dword ptr [esp + ecx*4 + 0x14]
// 00566aa6  52                   push edx
// 00566aa7  50                   push eax
// 00566aa8  56                   push esi
// 00566aa9  e8a20d0100           call 0x577850
// 00566aae  83c40c               add esp, 0xc
// 00566ab1  8b442454             mov eax, dword ptr [esp + 0x54]
// 00566ab5  85c0                 test eax, eax
// 00566ab7  743c                 je 0x566af5
// 00566ab9  0fb68e24010000       movzx ecx, byte ptr [esi + 0x124]
// 00566ac0  8b548c30             mov edx, dword ptr [esp + ecx*4 + 0x30]
// 00566ac4  52                   push edx
// 00566ac5  eb24                 jmp 0x566aeb
// 00566ac7  8b442454             mov eax, dword ptr [esp + 0x54]
// 00566acb  85c0                 test eax, eax
// 00566acd  740f                 je 0x566ade
// 00566acf  68ff000000           push 0xff
// 00566ad4  50                   push eax
// 00566ad5  56                   push esi
// 00566ad6  e8750d0100           call 0x577850
// 00566adb  83c40c               add esp, 0xc
// 00566ade  8b442458             mov eax, dword ptr [esp + 0x58]
// 00566ae2  85c0                 test eax, eax
// 00566ae4  740f                 je 0x566af5
// 00566ae6  68ff000000           push 0xff
// 00566aeb  50                   push eax
// 00566aec  56                   push esi
// 00566aed  e85e0d0100           call 0x577850
// 00566af2  83c40c               add esp, 0xc
// 00566af5  56                   push esi
// 00566af6  e8953f0100           call 0x57aa90
// 00566afb  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 00566b01  83c404               add esp, 4
// 00566b04  85c0                 test eax, eax
// 00566b06  7415                 je 0x566b1d
// 00566b08  0fb68e24010000       movzx ecx, byte ptr [esi + 0x124]
// 00566b0f  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 00566b15  51                   push ecx
// 00566b16  52                   push edx
// 00566b17  56                   push esi
// 00566b18  ffd0                 call eax
// 00566b1a  83c40c               add esp, 0xc
// 00566b1d  5f                   pop edi
// 00566b1e  5e                   pop esi
// 00566b1f  5d                   pop ebp
// 00566b20  83c440               add esp, 0x40
// 00566b23  c3                   ret 
// 00566b24  81675600b16756       and dword ptr [edi + 0x56], 0x5667b100
// 00566b2b  00d3                 add bl, dl
// 00566b2d  6756                 push esi
// 00566b2f  00f7                 add bh, dh
// 00566b31  6756                 push esi
// 00566b33  001b                 add byte ptr [ebx], bl
// 00566b35  6856004668           push 0x68460056
// 00566b3a  56                   push esi
// 00566b3b  006a68               add byte ptr [edx + 0x68], ch
// 00566b3e  56                   push esi
// copied from an identical function in another client (function _png_read_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.32 pngread.c