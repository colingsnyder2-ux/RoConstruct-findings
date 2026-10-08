// roc 2007-03 004f7700  unit: seg_004f0000  size: 1349 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f7700
//
// 004f7700  6aff                 push -1
// 004f7702  6818037500           push 0x750318
// 004f7707  64a100000000         mov eax, dword ptr fs:[0]
// 004f770d  50                   push eax
// 004f770e  81ec9c000000         sub esp, 0x9c
// 004f7714  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f7719  33c4                 xor eax, esp
// 004f771b  89842498000000       mov dword ptr [esp + 0x98], eax
// 004f7722  53                   push ebx
// 004f7723  55                   push ebp
// 004f7724  56                   push esi
// 004f7725  57                   push edi
// 004f7726  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f772b  33c4                 xor eax, esp
// 004f772d  50                   push eax
// 004f772e  8d8424b0000000       lea eax, [esp + 0xb0]
// 004f7735  64a300000000         mov dword ptr fs:[0], eax
// 004f773b  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 004f7742  8b4638               mov eax, dword ptr [esi + 0x38]
// 004f7745  8bf9                 mov edi, ecx
// 004f7747  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f774a  2bc1                 sub eax, ecx
// 004f774c  83c0ee               add eax, -0x12
// 004f774f  894644               mov dword ptr [esi + 0x44], eax
// 004f7752  7805                 js 0x4f7759
// 004f7754  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 004f7757  7e0c                 jle 0x4f7765
// 004f7759  03c1                 add eax, ecx
// 004f775b  6a00                 push 0
// 004f775d  50                   push eax
// 004f775e  8bce                 mov ecx, esi
// 004f7760  e80b9c0000           call 0x501370
// 004f7765  6a10                 push 0x10
// 004f7767  8d842494000000       lea eax, [esp + 0x94]
// 004f776e  50                   push eax
// 004f776f  8bce                 mov ecx, esi
// 004f7771  e8fa9e0000           call 0x501670
// 004f7776  8d8c2490000000       lea ecx, [esp + 0x90]
// 004f777d  68fcf97900           push 0x79f9fc
// 004f7782  51                   push ecx
// 004f7783  c78424c000000000000000 mov dword ptr [esp + 0xc0], 0
// 004f778e  ff15dce67700         call dword ptr [0x77e6dc]
// 004f7794  83c408               add esp, 8
// 004f7797  84c0                 test al, al
// 004f7799  7449                 je 0x4f77e4
// 004f779b  68ecf97900           push 0x79f9ec
// 004f77a0  8d4c2424             lea ecx, [esp + 0x24]
// 004f77a4  ff1578e77700         call dword ptr [0x77e778]
// 004f77aa  8d542474             lea edx, [esp + 0x74]
// 004f77ae  52                   push edx
// 004f77af  8bce                 mov ecx, esi
// 004f77b1  c68424bc00000001     mov byte ptr [esp + 0xbc], 1
// 004f77b9  e822edffff           call 0x4f64e0
// 004f77be  50                   push eax
// 004f77bf  8d442424             lea eax, [esp + 0x24]
// 004f77c3  50                   push eax
// 004f77c4  8d4c2444             lea ecx, [esp + 0x44]
// 004f77c8  c68424c000000002     mov byte ptr [esp + 0xc0], 2
// 004f77d0  e81b7df7ff           call 0x46f4f0
// 004f77d5  6824b18400           push 0x84b124
// 004f77da  8d4c2440             lea ecx, [esp + 0x40]
// 004f77de  51                   push ecx
// 004f77df  e84a781200           call 0x61f02e
// 004f77e4  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f77e7  8bc1                 mov eax, ecx
// 004f77e9  f7d8                 neg eax
// 004f77eb  894644               mov dword ptr [esi + 0x44], eax
// 004f77ee  7805                 js 0x4f77f5
// 004f77f0  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 004f77f3  7e0c                 jle 0x4f7801
// 004f77f5  03c1                 add eax, ecx
// 004f77f7  6a00                 push 0
// 004f77f9  50                   push eax
// 004f77fa  8bce                 mov ecx, esi
// 004f77fc  e86f9b0000           call 0x501370
// 004f7801  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7804  8d5001               lea edx, [eax + 1]
// 004f7807  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 004f780a  7e0f                 jle 0x4f781b
// 004f780c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f780f  03c8                 add ecx, eax
// 004f7811  6a01                 push 1
// 004f7813  51                   push ecx
// 004f7814  8bce                 mov ecx, esi
// 004f7816  e8559b0000           call 0x501370
// 004f781b  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f781e  8b5640               mov edx, dword ptr [esi + 0x40]
// 004f7821  8a0c10               mov cl, byte ptr [eax + edx]
// 004f7824  83c001               add eax, 1
// 004f7827  0fb6e9               movzx ebp, cl
// 004f782a  8d4801               lea ecx, [eax + 1]
// 004f782d  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f7830  894644               mov dword ptr [esi + 0x44], eax
// 004f7833  7e0f                 jle 0x4f7844
// 004f7835  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f7838  6a01                 push 1
// 004f783a  03d0                 add edx, eax
// 004f783c  52                   push edx
// 004f783d  8bce                 mov ecx, esi
// 004f783f  e82c9b0000           call 0x501370
// 004f7844  83464401             add dword ptr [esi + 0x44], 1
// 004f7848  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f784b  8d4801               lea ecx, [eax + 1]
// 004f784e  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f7851  7e0f                 jle 0x4f7862
// 004f7853  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f7856  6a01                 push 1
// 004f7858  03d0                 add edx, eax
// 004f785a  52                   push edx
// 004f785b  8bce                 mov ecx, esi
// 004f785d  e80e9b0000           call 0x501370
// 004f7862  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7865  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004f7868  8a0c08               mov cl, byte ptr [eax + ecx]
// 004f786b  0fb6c9               movzx ecx, cl
// 004f786e  83c001               add eax, 1
// 004f7871  83f902               cmp ecx, 2
// 004f7874  894644               mov dword ptr [esi + 0x44], eax
// 004f7877  7449                 je 0x4f78c2
// 004f7879  68b8f97900           push 0x79f9b8
// 004f787e  8d4c2424             lea ecx, [esp + 0x24]
// 004f7882  ff1578e77700         call dword ptr [0x77e778]
// 004f7888  8d542474             lea edx, [esp + 0x74]
// 004f788c  52                   push edx
// 004f788d  8bce                 mov ecx, esi
// 004f788f  c68424bc00000003     mov byte ptr [esp + 0xbc], 3
// 004f7897  e844ecffff           call 0x4f64e0
// 004f789c  50                   push eax
// 004f789d  8d442424             lea eax, [esp + 0x24]
// 004f78a1  50                   push eax
// 004f78a2  8d4c2444             lea ecx, [esp + 0x44]
// 004f78a6  c68424c000000004     mov byte ptr [esp + 0xc0], 4
// 004f78ae  e83d7cf7ff           call 0x46f4f0
// 004f78b3  6824b18400           push 0x84b124
// 004f78b8  8d4c2440             lea ecx, [esp + 0x40]
// 004f78bc  51                   push ecx
// 004f78bd  e86c771200           call 0x61f02e
// 004f78c2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f78c5  8d440805             lea eax, [eax + ecx + 5]
// 004f78c9  2bc1                 sub eax, ecx
// 004f78cb  894644               mov dword ptr [esi + 0x44], eax
// 004f78ce  7805                 js 0x4f78d5
// 004f78d0  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 004f78d3  7e0c                 jle 0x4f78e1
// 004f78d5  03c1                 add eax, ecx
// 004f78d7  6a00                 push 0
// 004f78d9  50                   push eax
// 004f78da  8bce                 mov ecx, esi
// 004f78dc  e88f9a0000           call 0x501370
// 004f78e1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f78e4  8b5644               mov edx, dword ptr [esi + 0x44]
// 004f78e7  8d441104             lea eax, [ecx + edx + 4]
// 004f78eb  2bc1                 sub eax, ecx
// 004f78ed  894644               mov dword ptr [esi + 0x44], eax
// 004f78f0  7805                 js 0x4f78f7
// 004f78f2  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 004f78f5  7e0c                 jle 0x4f7903
// 004f78f7  03c1                 add eax, ecx
// 004f78f9  6a00                 push 0
// 004f78fb  50                   push eax
// 004f78fc  8bce                 mov ecx, esi
// 004f78fe  e86d9a0000           call 0x501370
// 004f7903  8bce                 mov ecx, esi
// 004f7905  e856ecffff           call 0x4f6560
// 004f790a  0fb7c0               movzx eax, ax
// 004f790d  0fbfc0               movsx eax, ax
// 004f7910  8bce                 mov ecx, esi
// 004f7912  894708               mov dword ptr [edi + 8], eax
// 004f7915  e846ecffff           call 0x4f6560
// 004f791a  0fb7c0               movzx eax, ax
// 004f791d  0fbfc8               movsx ecx, ax
// 004f7920  894f0c               mov dword ptr [edi + 0xc], ecx
// 004f7923  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7926  8d5001               lea edx, [eax + 1]
// 004f7929  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 004f792c  7e0f                 jle 0x4f793d
// 004f792e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f7931  03c8                 add ecx, eax
// 004f7933  6a01                 push 1
// 004f7935  51                   push ecx
// 004f7936  8bce                 mov ecx, esi
// 004f7938  e8339a0000           call 0x501370
// 004f793d  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7940  8b5640               mov edx, dword ptr [esi + 0x40]
// 004f7943  8a0c10               mov cl, byte ptr [eax + edx]
// 004f7946  83c001               add eax, 1
// 004f7949  894644               mov dword ptr [esi + 0x44], eax
// 004f794c  0fb6c1               movzx eax, cl
// 004f794f  83f818               cmp eax, 0x18
// 004f7952  bb03000000           mov ebx, 3
// 004f7957  7457                 je 0x4f79b0
// 004f7959  83f820               cmp eax, 0x20
// 004f795c  7449                 je 0x4f79a7
// 004f795e  6898f97900           push 0x79f998
// 004f7963  8d4c2424             lea ecx, [esp + 0x24]
// 004f7967  ff1578e77700         call dword ptr [0x77e778]
// 004f796d  8d442474             lea eax, [esp + 0x74]
// 004f7971  50                   push eax
// 004f7972  8bce                 mov ecx, esi
// 004f7974  c68424bc00000005     mov byte ptr [esp + 0xbc], 5
// 004f797c  e85febffff           call 0x4f64e0
// 004f7981  50                   push eax
// 004f7982  8d4c2424             lea ecx, [esp + 0x24]
// 004f7986  51                   push ecx
// 004f7987  8d4c2444             lea ecx, [esp + 0x44]
// 004f798b  c68424c000000006     mov byte ptr [esp + 0xc0], 6
// 004f7993  e8587bf7ff           call 0x46f4f0
// 004f7998  6824b18400           push 0x84b124
// 004f799d  8d542440             lea edx, [esp + 0x40]
// 004f79a1  52                   push edx
// 004f79a2  e887761200           call 0x61f02e
// 004f79a7  c7471004000000       mov dword ptr [edi + 0x10], 4
// 004f79ae  eb03                 jmp 0x4f79b3
// 004f79b0  895f10               mov dword ptr [edi + 0x10], ebx
// 004f79b3  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f79b6  8d4801               lea ecx, [eax + 1]
// 004f79b9  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f79bc  7e0f                 jle 0x4f79cd
// 004f79be  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f79c1  6a01                 push 1
// 004f79c3  03d0                 add edx, eax
// 004f79c5  52                   push edx
// 004f79c6  8bce                 mov ecx, esi
// 004f79c8  e8a3990000           call 0x501370
// 004f79cd  83464401             add dword ptr [esi + 0x44], 1
// 004f79d1  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f79d4  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f79d7  03c1                 add eax, ecx
// 004f79d9  03c5                 add eax, ebp
// 004f79db  2bc1                 sub eax, ecx
// 004f79dd  894644               mov dword ptr [esi + 0x44], eax
// 004f79e0  7805                 js 0x4f79e7
// 004f79e2  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 004f79e5  7e0c                 jle 0x4f79f3
// 004f79e7  03c1                 add eax, ecx
// 004f79e9  6a00                 push 0
// 004f79eb  50                   push eax
// 004f79ec  8bce                 mov ecx, esi
// 004f79ee  e87d990000           call 0x501370
// 004f79f3  8b4708               mov eax, dword ptr [edi + 8]
// 004f79f6  0faf470c             imul eax, dword ptr [edi + 0xc]
// 004f79fa  0faf4710             imul eax, dword ptr [edi + 0x10]
// 004f79fe  50                   push eax
// 004f79ff  e87cc1ffff           call 0x4f3b80
// 004f7a04  83c404               add esp, 4
// 004f7a07  395f10               cmp dword ptr [edi + 0x10], ebx
// 004f7a0a  894704               mov dword ptr [edi + 4], eax
// 004f7a0d  8b470c               mov eax, dword ptr [edi + 0xc]
// 004f7a10  0f85dc000000         jne 0x4f7af2
// 004f7a16  83e801               sub eax, 1
// 004f7a19  89442414             mov dword ptr [esp + 0x14], eax
// 004f7a1d  0f88e0010000         js 0x4f7c03
// 004f7a23  33ed                 xor ebp, ebp
// 004f7a25  396f08               cmp dword ptr [edi + 8], ebp
// 004f7a28  0f8eb4000000         jle 0x4f7ae2
// 004f7a2e  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7a31  8d4801               lea ecx, [eax + 1]
// 004f7a34  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f7a37  7e0f                 jle 0x4f7a48
// 004f7a39  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f7a3c  6a01                 push 1
// 004f7a3e  03d0                 add edx, eax
// 004f7a40  52                   push edx
// 004f7a41  8bce                 mov ecx, esi
// 004f7a43  e828990000           call 0x501370
// 004f7a48  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7a4b  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004f7a4e  8a0c08               mov cl, byte ptr [eax + ecx]
// 004f7a51  83c001               add eax, 1
// 004f7a54  0fb6d1               movzx edx, cl
// 004f7a57  8d4801               lea ecx, [eax + 1]
// 004f7a5a  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f7a5d  894644               mov dword ptr [esi + 0x44], eax
// 004f7a60  89542418             mov dword ptr [esp + 0x18], edx
// 004f7a64  7e0f                 jle 0x4f7a75
// 004f7a66  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f7a69  6a01                 push 1
// 004f7a6b  03d0                 add edx, eax
// 004f7a6d  52                   push edx
// 004f7a6e  8bce                 mov ecx, esi
// 004f7a70  e8fb980000           call 0x501370
// 004f7a75  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7a78  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004f7a7b  8a0c08               mov cl, byte ptr [eax + ecx]
// 004f7a7e  83c001               add eax, 1
// 004f7a81  8d5001               lea edx, [eax + 1]
// 004f7a84  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 004f7a87  894644               mov dword ptr [esi + 0x44], eax
// 004f7a8a  0fb6d9               movzx ebx, cl
// 004f7a8d  7e0f                 jle 0x4f7a9e
// 004f7a8f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f7a92  03c8                 add ecx, eax
// 004f7a94  6a01                 push 1
// 004f7a96  51                   push ecx
// 004f7a97  8bce                 mov ecx, esi
// 004f7a99  e8d2980000           call 0x501370
// 004f7a9e  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7aa1  8b5640               mov edx, dword ptr [esi + 0x40]
// 004f7aa4  8a0c10               mov cl, byte ptr [eax + edx]
// 004f7aa7  83c001               add eax, 1
// 004f7aaa  894644               mov dword ptr [esi + 0x44], eax
// 004f7aad  8b4708               mov eax, dword ptr [edi + 8]
// 004f7ab0  0faf442414           imul eax, dword ptr [esp + 0x14]
// 004f7ab5  8b5704               mov edx, dword ptr [edi + 4]
// 004f7ab8  0fb6c9               movzx ecx, cl
// 004f7abb  03c5                 add eax, ebp
// 004f7abd  8d0440               lea eax, [eax + eax*2]
// 004f7ac0  880c10               mov byte ptr [eax + edx], cl
// 004f7ac3  8b4f04               mov ecx, dword ptr [edi + 4]
// 004f7ac6  885c0101             mov byte ptr [ecx + eax + 1], bl
// 004f7aca  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 004f7acf  8b5704               mov edx, dword ptr [edi + 4]
// 004f7ad2  83c501               add ebp, 1
// 004f7ad5  884c0202             mov byte ptr [edx + eax + 2], cl
// 004f7ad9  3b6f08               cmp ebp, dword ptr [edi + 8]
// 004f7adc  0f8c4cffffff         jl 0x4f7a2e
// 004f7ae2  836c241401           sub dword ptr [esp + 0x14], 1
// 004f7ae7  0f8936ffffff         jns 0x4f7a23
// 004f7aed  e911010000           jmp 0x4f7c03
// 004f7af2  83e801               sub eax, 1
// 004f7af5  89442414             mov dword ptr [esp + 0x14], eax
// 004f7af9  0f8804010000         js 0x4f7c03
// 004f7aff  33ed                 xor ebp, ebp
// 004f7b01  396f08               cmp dword ptr [edi + 8], ebp
// 004f7b04  0f8eee000000         jle 0x4f7bf8
// 004f7b0a  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7b0d  8d5001               lea edx, [eax + 1]
// 004f7b10  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 004f7b13  7e0f                 jle 0x4f7b24
// 004f7b15  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f7b18  03c8                 add ecx, eax
// 004f7b1a  6a01                 push 1
// 004f7b1c  51                   push ecx
// 004f7b1d  8bce                 mov ecx, esi
// 004f7b1f  e84c980000           call 0x501370
// 004f7b24  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7b27  8b5640               mov edx, dword ptr [esi + 0x40]
// 004f7b2a  8a0c10               mov cl, byte ptr [eax + edx]
// 004f7b2d  83c001               add eax, 1
// 004f7b30  0fb6c9               movzx ecx, cl
// 004f7b33  8d5001               lea edx, [eax + 1]
// 004f7b36  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 004f7b39  894644               mov dword ptr [esi + 0x44], eax
// 004f7b3c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004f7b40  7e0f                 jle 0x4f7b51
// 004f7b42  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f7b45  03c8                 add ecx, eax
// 004f7b47  6a01                 push 1
// 004f7b49  51                   push ecx
// 004f7b4a  8bce                 mov ecx, esi
// 004f7b4c  e81f980000           call 0x501370
// 004f7b51  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7b54  8b5640               mov edx, dword ptr [esi + 0x40]
// 004f7b57  8a0c10               mov cl, byte ptr [eax + edx]
// 004f7b5a  83c001               add eax, 1
// 004f7b5d  0fb6c9               movzx ecx, cl
// 004f7b60  8d5001               lea edx, [eax + 1]
// 004f7b63  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 004f7b66  894644               mov dword ptr [esi + 0x44], eax
// 004f7b69  894c2418             mov dword ptr [esp + 0x18], ecx
// 004f7b6d  7e0f                 jle 0x4f7b7e
// 004f7b6f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f7b72  03c8                 add ecx, eax
// 004f7b74  6a01                 push 1
// 004f7b76  51                   push ecx
// 004f7b77  8bce                 mov ecx, esi
// 004f7b79  e8f2970000           call 0x501370
// 004f7b7e  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7b81  8b5640               mov edx, dword ptr [esi + 0x40]
// 004f7b84  8a0c10               mov cl, byte ptr [eax + edx]
// 004f7b87  83c001               add eax, 1
// 004f7b8a  0fb6d9               movzx ebx, cl
// 004f7b8d  8d4801               lea ecx, [eax + 1]
// 004f7b90  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f7b93  894644               mov dword ptr [esi + 0x44], eax
// 004f7b96  7e0f                 jle 0x4f7ba7
// 004f7b98  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f7b9b  6a01                 push 1
// 004f7b9d  03d0                 add edx, eax
// 004f7b9f  52                   push edx
// 004f7ba0  8bce                 mov ecx, esi
// 004f7ba2  e8c9970000           call 0x501370
// 004f7ba7  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f7baa  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004f7bad  8a0c08               mov cl, byte ptr [eax + ecx]
// 004f7bb0  83c001               add eax, 1
// 004f7bb3  894644               mov dword ptr [esi + 0x44], eax
// 004f7bb6  8b4708               mov eax, dword ptr [edi + 8]
// 004f7bb9  0faf442414           imul eax, dword ptr [esp + 0x14]
// 004f7bbe  8b5704               mov edx, dword ptr [edi + 4]
// 004f7bc1  03c5                 add eax, ebp
// 004f7bc3  03c0                 add eax, eax
// 004f7bc5  03c0                 add eax, eax
// 004f7bc7  881c10               mov byte ptr [eax + edx], bl
// 004f7bca  8b5704               mov edx, dword ptr [edi + 4]
// 004f7bcd  0fb65c2418           movzx ebx, byte ptr [esp + 0x18]
// 004f7bd2  885c0201             mov byte ptr [edx + eax + 1], bl
// 004f7bd6  8b5704               mov edx, dword ptr [edi + 4]
// 004f7bd9  0fb65c241c           movzx ebx, byte ptr [esp + 0x1c]
// 004f7bde  885c0202             mov byte ptr [edx + eax + 2], bl
// 004f7be2  8b5704               mov edx, dword ptr [edi + 4]
// 004f7be5  0fb6c9               movzx ecx, cl
// 004f7be8  83c501               add ebp, 1
// 004f7beb  884c0203             mov byte ptr [edx + eax + 3], cl
// 004f7bef  3b6f08               cmp ebp, dword ptr [edi + 8]
// 004f7bf2  0f8c12ffffff         jl 0x4f7b0a
// 004f7bf8  836c241401           sub dword ptr [esp + 0x14], 1
// 004f7bfd  0f89fcfeffff         jns 0x4f7aff
// 004f7c03  8d8c2490000000       lea ecx, [esp + 0x90]
// 004f7c0a  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 004f7c15  ff158ce77700         call dword ptr [0x77e78c]
// 004f7c1b  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 004f7c22  64890d00000000       mov dword ptr fs:[0], ecx
// 004f7c29  59                   pop ecx
// 004f7c2a  5f                   pop edi
// 004f7c2b  5e                   pop esi
// 004f7c2c  5d                   pop ebp
// 004f7c2d  5b                   pop ebx
// 004f7c2e  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 004f7c35  33cc                 xor ecx, esp
// 004f7c37  e86a721200           call 0x61eea6
// 004f7c3c  81c4a8000000         add esp, 0xa8
// 004f7c42  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_tga.cpp (function ?decodeTGA@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_tga.cpp
