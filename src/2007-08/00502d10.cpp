// roc 2007-08 00502d10  unit: G3D::Log  size: 1349 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00502d10
//
// 00502d10  6aff                 push -1
// 00502d12  68d8f37400           push 0x74f3d8
// 00502d17  64a100000000         mov eax, dword ptr fs:[0]
// 00502d1d  50                   push eax
// 00502d1e  81ec9c000000         sub esp, 0x9c
// 00502d24  a188518b00           mov eax, dword ptr [0x8b5188]
// 00502d29  33c4                 xor eax, esp
// 00502d2b  89842498000000       mov dword ptr [esp + 0x98], eax
// 00502d32  53                   push ebx
// 00502d33  55                   push ebp
// 00502d34  56                   push esi
// 00502d35  57                   push edi
// 00502d36  a188518b00           mov eax, dword ptr [0x8b5188]
// 00502d3b  33c4                 xor eax, esp
// 00502d3d  50                   push eax
// 00502d3e  8d8424b0000000       lea eax, [esp + 0xb0]
// 00502d45  64a300000000         mov dword ptr fs:[0], eax
// 00502d4b  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 00502d52  8b4638               mov eax, dword ptr [esi + 0x38]
// 00502d55  8bf9                 mov edi, ecx
// 00502d57  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00502d5a  2bc1                 sub eax, ecx
// 00502d5c  83c0ee               add eax, -0x12
// 00502d5f  894644               mov dword ptr [esi + 0x44], eax
// 00502d62  7805                 js 0x502d69
// 00502d64  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00502d67  7e0c                 jle 0x502d75
// 00502d69  03c1                 add eax, ecx
// 00502d6b  6a00                 push 0
// 00502d6d  50                   push eax
// 00502d6e  8bce                 mov ecx, esi
// 00502d70  e84b8f0000           call 0x50bcc0
// 00502d75  6a10                 push 0x10
// 00502d77  8d842494000000       lea eax, [esp + 0x94]
// 00502d7e  50                   push eax
// 00502d7f  8bce                 mov ecx, esi
// 00502d81  e89a920000           call 0x50c020
// 00502d86  8d8c2490000000       lea ecx, [esp + 0x90]
// 00502d8d  6808037a00           push 0x7a0308
// 00502d92  51                   push ecx
// 00502d93  c78424c000000000000000 mov dword ptr [esp + 0xc0], 0
// 00502d9e  ff151ce67700         call dword ptr [0x77e61c]
// 00502da4  83c408               add esp, 8
// 00502da7  84c0                 test al, al
// 00502da9  7449                 je 0x502df4
// 00502dab  68f8027a00           push 0x7a02f8
// 00502db0  8d4c2424             lea ecx, [esp + 0x24]
// 00502db4  ff1598e67700         call dword ptr [0x77e698]
// 00502dba  8d542474             lea edx, [esp + 0x74]
// 00502dbe  52                   push edx
// 00502dbf  8bce                 mov ecx, esi
// 00502dc1  c68424bc00000001     mov byte ptr [esp + 0xbc], 1
// 00502dc9  e8a2fbffff           call 0x502970
// 00502dce  50                   push eax
// 00502dcf  8d442424             lea eax, [esp + 0x24]
// 00502dd3  50                   push eax
// 00502dd4  8d4c2444             lea ecx, [esp + 0x44]
// 00502dd8  c68424c000000002     mov byte ptr [esp + 0xc0], 2
// 00502de0  e88bc7f6ff           call 0x46f570
// 00502de5  68a4b48400           push 0x84b4a4
// 00502dea  8d4c2440             lea ecx, [esp + 0x40]
// 00502dee  51                   push ecx
// 00502def  e8aadd1200           call 0x630b9e
// 00502df4  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00502df7  8bc1                 mov eax, ecx
// 00502df9  f7d8                 neg eax
// 00502dfb  894644               mov dword ptr [esi + 0x44], eax
// 00502dfe  7805                 js 0x502e05
// 00502e00  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00502e03  7e0c                 jle 0x502e11
// 00502e05  03c1                 add eax, ecx
// 00502e07  6a00                 push 0
// 00502e09  50                   push eax
// 00502e0a  8bce                 mov ecx, esi
// 00502e0c  e8af8e0000           call 0x50bcc0
// 00502e11  8b4644               mov eax, dword ptr [esi + 0x44]
// 00502e14  8d5001               lea edx, [eax + 1]
// 00502e17  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 00502e1a  7e0f                 jle 0x502e2b
// 00502e1c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00502e1f  03c8                 add ecx, eax
// 00502e21  6a01                 push 1
// 00502e23  51                   push ecx
// 00502e24  8bce                 mov ecx, esi
// 00502e26  e8958e0000           call 0x50bcc0
// 00502e2b  8b4644               mov eax, dword ptr [esi + 0x44]
// 00502e2e  8b5640               mov edx, dword ptr [esi + 0x40]
// 00502e31  8a0c10               mov cl, byte ptr [eax + edx]
// 00502e34  83c001               add eax, 1
// 00502e37  0fb6e9               movzx ebp, cl
// 00502e3a  8d4801               lea ecx, [eax + 1]
// 00502e3d  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00502e40  894644               mov dword ptr [esi + 0x44], eax
// 00502e43  7e0f                 jle 0x502e54
// 00502e45  8b5634               mov edx, dword ptr [esi + 0x34]
// 00502e48  6a01                 push 1
// 00502e4a  03d0                 add edx, eax
// 00502e4c  52                   push edx
// 00502e4d  8bce                 mov ecx, esi
// 00502e4f  e86c8e0000           call 0x50bcc0
// 00502e54  83464401             add dword ptr [esi + 0x44], 1
// 00502e58  8b4644               mov eax, dword ptr [esi + 0x44]
// 00502e5b  8d4801               lea ecx, [eax + 1]
// 00502e5e  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00502e61  7e0f                 jle 0x502e72
// 00502e63  8b5634               mov edx, dword ptr [esi + 0x34]
// 00502e66  6a01                 push 1
// 00502e68  03d0                 add edx, eax
// 00502e6a  52                   push edx
// 00502e6b  8bce                 mov ecx, esi
// 00502e6d  e84e8e0000           call 0x50bcc0
// 00502e72  8b4644               mov eax, dword ptr [esi + 0x44]
// 00502e75  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00502e78  8a0c08               mov cl, byte ptr [eax + ecx]
// 00502e7b  0fb6c9               movzx ecx, cl
// 00502e7e  83c001               add eax, 1
// 00502e81  83f902               cmp ecx, 2
// 00502e84  894644               mov dword ptr [esi + 0x44], eax
// 00502e87  7449                 je 0x502ed2
// 00502e89  68c4027a00           push 0x7a02c4
// 00502e8e  8d4c2424             lea ecx, [esp + 0x24]
// 00502e92  ff1598e67700         call dword ptr [0x77e698]
// 00502e98  8d542474             lea edx, [esp + 0x74]
// 00502e9c  52                   push edx
// 00502e9d  8bce                 mov ecx, esi
// 00502e9f  c68424bc00000003     mov byte ptr [esp + 0xbc], 3
// 00502ea7  e8c4faffff           call 0x502970
// 00502eac  50                   push eax
// 00502ead  8d442424             lea eax, [esp + 0x24]
// 00502eb1  50                   push eax
// 00502eb2  8d4c2444             lea ecx, [esp + 0x44]
// 00502eb6  c68424c000000004     mov byte ptr [esp + 0xc0], 4
// 00502ebe  e8adc6f6ff           call 0x46f570
// 00502ec3  68a4b48400           push 0x84b4a4
// 00502ec8  8d4c2440             lea ecx, [esp + 0x40]
// 00502ecc  51                   push ecx
// 00502ecd  e8ccdc1200           call 0x630b9e
// 00502ed2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00502ed5  8d440805             lea eax, [eax + ecx + 5]
// 00502ed9  2bc1                 sub eax, ecx
// 00502edb  894644               mov dword ptr [esi + 0x44], eax
// 00502ede  7805                 js 0x502ee5
// 00502ee0  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00502ee3  7e0c                 jle 0x502ef1
// 00502ee5  03c1                 add eax, ecx
// 00502ee7  6a00                 push 0
// 00502ee9  50                   push eax
// 00502eea  8bce                 mov ecx, esi
// 00502eec  e8cf8d0000           call 0x50bcc0
// 00502ef1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00502ef4  8b5644               mov edx, dword ptr [esi + 0x44]
// 00502ef7  8d441104             lea eax, [ecx + edx + 4]
// 00502efb  2bc1                 sub eax, ecx
// 00502efd  894644               mov dword ptr [esi + 0x44], eax
// 00502f00  7805                 js 0x502f07
// 00502f02  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00502f05  7e0c                 jle 0x502f13
// 00502f07  03c1                 add eax, ecx
// 00502f09  6a00                 push 0
// 00502f0b  50                   push eax
// 00502f0c  8bce                 mov ecx, esi
// 00502f0e  e8ad8d0000           call 0x50bcc0
// 00502f13  8bce                 mov ecx, esi
// 00502f15  e8d6faffff           call 0x5029f0
// 00502f1a  0fb7c0               movzx eax, ax
// 00502f1d  0fbfc0               movsx eax, ax
// 00502f20  8bce                 mov ecx, esi
// 00502f22  894708               mov dword ptr [edi + 8], eax
// 00502f25  e8c6faffff           call 0x5029f0
// 00502f2a  0fb7c0               movzx eax, ax
// 00502f2d  0fbfc8               movsx ecx, ax
// 00502f30  894f0c               mov dword ptr [edi + 0xc], ecx
// 00502f33  8b4644               mov eax, dword ptr [esi + 0x44]
// 00502f36  8d5001               lea edx, [eax + 1]
// 00502f39  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 00502f3c  7e0f                 jle 0x502f4d
// 00502f3e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00502f41  03c8                 add ecx, eax
// 00502f43  6a01                 push 1
// 00502f45  51                   push ecx
// 00502f46  8bce                 mov ecx, esi
// 00502f48  e8738d0000           call 0x50bcc0
// 00502f4d  8b4644               mov eax, dword ptr [esi + 0x44]
// 00502f50  8b5640               mov edx, dword ptr [esi + 0x40]
// 00502f53  8a0c10               mov cl, byte ptr [eax + edx]
// 00502f56  83c001               add eax, 1
// 00502f59  894644               mov dword ptr [esi + 0x44], eax
// 00502f5c  0fb6c1               movzx eax, cl
// 00502f5f  83f818               cmp eax, 0x18
// 00502f62  bb03000000           mov ebx, 3
// 00502f67  7457                 je 0x502fc0
// 00502f69  83f820               cmp eax, 0x20
// 00502f6c  7449                 je 0x502fb7
// 00502f6e  68a4027a00           push 0x7a02a4
// 00502f73  8d4c2424             lea ecx, [esp + 0x24]
// 00502f77  ff1598e67700         call dword ptr [0x77e698]
// 00502f7d  8d442474             lea eax, [esp + 0x74]
// 00502f81  50                   push eax
// 00502f82  8bce                 mov ecx, esi
// 00502f84  c68424bc00000005     mov byte ptr [esp + 0xbc], 5
// 00502f8c  e8dff9ffff           call 0x502970
// 00502f91  50                   push eax
// 00502f92  8d4c2424             lea ecx, [esp + 0x24]
// 00502f96  51                   push ecx
// 00502f97  8d4c2444             lea ecx, [esp + 0x44]
// 00502f9b  c68424c000000006     mov byte ptr [esp + 0xc0], 6
// 00502fa3  e8c8c5f6ff           call 0x46f570
// 00502fa8  68a4b48400           push 0x84b4a4
// 00502fad  8d542440             lea edx, [esp + 0x40]
// 00502fb1  52                   push edx
// 00502fb2  e8e7db1200           call 0x630b9e
// 00502fb7  c7471004000000       mov dword ptr [edi + 0x10], 4
// 00502fbe  eb03                 jmp 0x502fc3
// 00502fc0  895f10               mov dword ptr [edi + 0x10], ebx
// 00502fc3  8b4644               mov eax, dword ptr [esi + 0x44]
// 00502fc6  8d4801               lea ecx, [eax + 1]
// 00502fc9  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00502fcc  7e0f                 jle 0x502fdd
// 00502fce  8b5634               mov edx, dword ptr [esi + 0x34]
// 00502fd1  6a01                 push 1
// 00502fd3  03d0                 add edx, eax
// 00502fd5  52                   push edx
// 00502fd6  8bce                 mov ecx, esi
// 00502fd8  e8e38c0000           call 0x50bcc0
// 00502fdd  83464401             add dword ptr [esi + 0x44], 1
// 00502fe1  8b4644               mov eax, dword ptr [esi + 0x44]
// 00502fe4  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00502fe7  03c1                 add eax, ecx
// 00502fe9  03c5                 add eax, ebp
// 00502feb  2bc1                 sub eax, ecx
// 00502fed  894644               mov dword ptr [esi + 0x44], eax
// 00502ff0  7805                 js 0x502ff7
// 00502ff2  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00502ff5  7e0c                 jle 0x503003
// 00502ff7  03c1                 add eax, ecx
// 00502ff9  6a00                 push 0
// 00502ffb  50                   push eax
// 00502ffc  8bce                 mov ecx, esi
// 00502ffe  e8bd8c0000           call 0x50bcc0
// 00503003  8b4708               mov eax, dword ptr [edi + 8]
// 00503006  0faf470c             imul eax, dword ptr [edi + 0xc]
// 0050300a  0faf4710             imul eax, dword ptr [edi + 0x10]
// 0050300e  50                   push eax
// 0050300f  e8fccfffff           call 0x500010
// 00503014  83c404               add esp, 4
// 00503017  395f10               cmp dword ptr [edi + 0x10], ebx
// 0050301a  894704               mov dword ptr [edi + 4], eax
// 0050301d  8b470c               mov eax, dword ptr [edi + 0xc]
// 00503020  0f85dc000000         jne 0x503102
// 00503026  83e801               sub eax, 1
// 00503029  89442414             mov dword ptr [esp + 0x14], eax
// 0050302d  0f88e0010000         js 0x503213
// 00503033  33ed                 xor ebp, ebp
// 00503035  396f08               cmp dword ptr [edi + 8], ebp
// 00503038  0f8eb4000000         jle 0x5030f2
// 0050303e  8b4644               mov eax, dword ptr [esi + 0x44]
// 00503041  8d4801               lea ecx, [eax + 1]
// 00503044  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00503047  7e0f                 jle 0x503058
// 00503049  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050304c  6a01                 push 1
// 0050304e  03d0                 add edx, eax
// 00503050  52                   push edx
// 00503051  8bce                 mov ecx, esi
// 00503053  e8688c0000           call 0x50bcc0
// 00503058  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050305b  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050305e  8a0c08               mov cl, byte ptr [eax + ecx]
// 00503061  83c001               add eax, 1
// 00503064  0fb6d1               movzx edx, cl
// 00503067  8d4801               lea ecx, [eax + 1]
// 0050306a  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050306d  894644               mov dword ptr [esi + 0x44], eax
// 00503070  89542418             mov dword ptr [esp + 0x18], edx
// 00503074  7e0f                 jle 0x503085
// 00503076  8b5634               mov edx, dword ptr [esi + 0x34]
// 00503079  6a01                 push 1
// 0050307b  03d0                 add edx, eax
// 0050307d  52                   push edx
// 0050307e  8bce                 mov ecx, esi
// 00503080  e83b8c0000           call 0x50bcc0
// 00503085  8b4644               mov eax, dword ptr [esi + 0x44]
// 00503088  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050308b  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050308e  83c001               add eax, 1
// 00503091  8d5001               lea edx, [eax + 1]
// 00503094  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 00503097  894644               mov dword ptr [esi + 0x44], eax
// 0050309a  0fb6d9               movzx ebx, cl
// 0050309d  7e0f                 jle 0x5030ae
// 0050309f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005030a2  03c8                 add ecx, eax
// 005030a4  6a01                 push 1
// 005030a6  51                   push ecx
// 005030a7  8bce                 mov ecx, esi
// 005030a9  e8128c0000           call 0x50bcc0
// 005030ae  8b4644               mov eax, dword ptr [esi + 0x44]
// 005030b1  8b5640               mov edx, dword ptr [esi + 0x40]
// 005030b4  8a0c10               mov cl, byte ptr [eax + edx]
// 005030b7  83c001               add eax, 1
// 005030ba  894644               mov dword ptr [esi + 0x44], eax
// 005030bd  8b4708               mov eax, dword ptr [edi + 8]
// 005030c0  0faf442414           imul eax, dword ptr [esp + 0x14]
// 005030c5  8b5704               mov edx, dword ptr [edi + 4]
// 005030c8  0fb6c9               movzx ecx, cl
// 005030cb  03c5                 add eax, ebp
// 005030cd  8d0440               lea eax, [eax + eax*2]
// 005030d0  880c10               mov byte ptr [eax + edx], cl
// 005030d3  8b4f04               mov ecx, dword ptr [edi + 4]
// 005030d6  885c0101             mov byte ptr [ecx + eax + 1], bl
// 005030da  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 005030df  8b5704               mov edx, dword ptr [edi + 4]
// 005030e2  83c501               add ebp, 1
// 005030e5  884c0202             mov byte ptr [edx + eax + 2], cl
// 005030e9  3b6f08               cmp ebp, dword ptr [edi + 8]
// 005030ec  0f8c4cffffff         jl 0x50303e
// 005030f2  836c241401           sub dword ptr [esp + 0x14], 1
// 005030f7  0f8936ffffff         jns 0x503033
// 005030fd  e911010000           jmp 0x503213
// 00503102  83e801               sub eax, 1
// 00503105  89442414             mov dword ptr [esp + 0x14], eax
// 00503109  0f8804010000         js 0x503213
// 0050310f  33ed                 xor ebp, ebp
// 00503111  396f08               cmp dword ptr [edi + 8], ebp
// 00503114  0f8eee000000         jle 0x503208
// 0050311a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050311d  8d5001               lea edx, [eax + 1]
// 00503120  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 00503123  7e0f                 jle 0x503134
// 00503125  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00503128  03c8                 add ecx, eax
// 0050312a  6a01                 push 1
// 0050312c  51                   push ecx
// 0050312d  8bce                 mov ecx, esi
// 0050312f  e88c8b0000           call 0x50bcc0
// 00503134  8b4644               mov eax, dword ptr [esi + 0x44]
// 00503137  8b5640               mov edx, dword ptr [esi + 0x40]
// 0050313a  8a0c10               mov cl, byte ptr [eax + edx]
// 0050313d  83c001               add eax, 1
// 00503140  0fb6c9               movzx ecx, cl
// 00503143  8d5001               lea edx, [eax + 1]
// 00503146  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 00503149  894644               mov dword ptr [esi + 0x44], eax
// 0050314c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00503150  7e0f                 jle 0x503161
// 00503152  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00503155  03c8                 add ecx, eax
// 00503157  6a01                 push 1
// 00503159  51                   push ecx
// 0050315a  8bce                 mov ecx, esi
// 0050315c  e85f8b0000           call 0x50bcc0
// 00503161  8b4644               mov eax, dword ptr [esi + 0x44]
// 00503164  8b5640               mov edx, dword ptr [esi + 0x40]
// 00503167  8a0c10               mov cl, byte ptr [eax + edx]
// 0050316a  83c001               add eax, 1
// 0050316d  0fb6c9               movzx ecx, cl
// 00503170  8d5001               lea edx, [eax + 1]
// 00503173  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 00503176  894644               mov dword ptr [esi + 0x44], eax
// 00503179  894c2418             mov dword ptr [esp + 0x18], ecx
// 0050317d  7e0f                 jle 0x50318e
// 0050317f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00503182  03c8                 add ecx, eax
// 00503184  6a01                 push 1
// 00503186  51                   push ecx
// 00503187  8bce                 mov ecx, esi
// 00503189  e8328b0000           call 0x50bcc0
// 0050318e  8b4644               mov eax, dword ptr [esi + 0x44]
// 00503191  8b5640               mov edx, dword ptr [esi + 0x40]
// 00503194  8a0c10               mov cl, byte ptr [eax + edx]
// 00503197  83c001               add eax, 1
// 0050319a  0fb6d9               movzx ebx, cl
// 0050319d  8d4801               lea ecx, [eax + 1]
// 005031a0  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005031a3  894644               mov dword ptr [esi + 0x44], eax
// 005031a6  7e0f                 jle 0x5031b7
// 005031a8  8b5634               mov edx, dword ptr [esi + 0x34]
// 005031ab  6a01                 push 1
// 005031ad  03d0                 add edx, eax
// 005031af  52                   push edx
// 005031b0  8bce                 mov ecx, esi
// 005031b2  e8098b0000           call 0x50bcc0
// 005031b7  8b4644               mov eax, dword ptr [esi + 0x44]
// 005031ba  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005031bd  8a0c08               mov cl, byte ptr [eax + ecx]
// 005031c0  83c001               add eax, 1
// 005031c3  894644               mov dword ptr [esi + 0x44], eax
// 005031c6  8b4708               mov eax, dword ptr [edi + 8]
// 005031c9  0faf442414           imul eax, dword ptr [esp + 0x14]
// 005031ce  8b5704               mov edx, dword ptr [edi + 4]
// 005031d1  03c5                 add eax, ebp
// 005031d3  03c0                 add eax, eax
// 005031d5  03c0                 add eax, eax
// 005031d7  881c10               mov byte ptr [eax + edx], bl
// 005031da  8b5704               mov edx, dword ptr [edi + 4]
// 005031dd  0fb65c2418           movzx ebx, byte ptr [esp + 0x18]
// 005031e2  885c0201             mov byte ptr [edx + eax + 1], bl
// 005031e6  8b5704               mov edx, dword ptr [edi + 4]
// 005031e9  0fb65c241c           movzx ebx, byte ptr [esp + 0x1c]
// 005031ee  885c0202             mov byte ptr [edx + eax + 2], bl
// 005031f2  8b5704               mov edx, dword ptr [edi + 4]
// 005031f5  0fb6c9               movzx ecx, cl
// 005031f8  83c501               add ebp, 1
// 005031fb  884c0203             mov byte ptr [edx + eax + 3], cl
// 005031ff  3b6f08               cmp ebp, dword ptr [edi + 8]
// 00503202  0f8c12ffffff         jl 0x50311a
// 00503208  836c241401           sub dword ptr [esp + 0x14], 1
// 0050320d  0f89fcfeffff         jns 0x50310f
// 00503213  8d8c2490000000       lea ecx, [esp + 0x90]
// 0050321a  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 00503225  ff15ace67700         call dword ptr [0x77e6ac]
// 0050322b  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00503232  64890d00000000       mov dword ptr fs:[0], ecx
// 00503239  59                   pop ecx
// 0050323a  5f                   pop edi
// 0050323b  5e                   pop esi
// 0050323c  5d                   pop ebp
// 0050323d  5b                   pop ebx
// 0050323e  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00503245  33cc                 xor ecx, esp
// 00503247  e8d2d71200           call 0x630a1e
// 0050324c  81c4a8000000         add esp, 0xa8
// 00503252  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_tga.cpp (function ?decodeTGA@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_tga.cpp
