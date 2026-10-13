// roc 2008-06 0050d800  unit: G3D::Log  size: 1465 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050d800
//
// 0050d800  6aff                 push -1
// 0050d802  6890c17c00           push 0x7cc190
// 0050d807  64a100000000         mov eax, dword ptr fs:[0]
// 0050d80d  50                   push eax
// 0050d80e  64892500000000       mov dword ptr fs:[0], esp
// 0050d815  81ec78040000         sub esp, 0x478
// 0050d81b  53                   push ebx
// 0050d81c  55                   push ebp
// 0050d81d  8bac2490040000       mov ebp, dword ptr [esp + 0x490]
// 0050d824  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0050d827  56                   push esi
// 0050d828  8bf1                 mov esi, ecx
// 0050d82a  8d4801               lea ecx, [eax + 1]
// 0050d82d  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0050d830  57                   push edi
// 0050d831  89742420             mov dword ptr [esp + 0x20], esi
// 0050d835  7e0f                 jle 0x50d846
// 0050d837  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0050d83a  6a01                 push 1
// 0050d83c  03d0                 add edx, eax
// 0050d83e  52                   push edx
// 0050d83f  8bcd                 mov ecx, ebp
// 0050d841  e88a7f0000           call 0x5157d0
// 0050d846  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0050d849  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 0050d84c  8a1408               mov dl, byte ptr [eax + ecx]
// 0050d84f  40                   inc eax
// 0050d850  8d4801               lea ecx, [eax + 1]
// 0050d853  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0050d856  88542417             mov byte ptr [esp + 0x17], dl
// 0050d85a  894544               mov dword ptr [ebp + 0x44], eax
// 0050d85d  7e0f                 jle 0x50d86e
// 0050d85f  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0050d862  6a01                 push 1
// 0050d864  03d0                 add edx, eax
// 0050d866  52                   push edx
// 0050d867  8bcd                 mov ecx, ebp
// 0050d869  e8627f0000           call 0x5157d0
// 0050d86e  ff4544               inc dword ptr [ebp + 0x44]
// 0050d871  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0050d874  8d4801               lea ecx, [eax + 1]
// 0050d877  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0050d87a  7e0f                 jle 0x50d88b
// 0050d87c  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0050d87f  6a01                 push 1
// 0050d881  03d0                 add edx, eax
// 0050d883  52                   push edx
// 0050d884  8bcd                 mov ecx, ebp
// 0050d886  e8457f0000           call 0x5157d0
// 0050d88b  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0050d88e  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 0050d891  8a1408               mov dl, byte ptr [eax + ecx]
// 0050d894  40                   inc eax
// 0050d895  8d4801               lea ecx, [eax + 1]
// 0050d898  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0050d89b  88542415             mov byte ptr [esp + 0x15], dl
// 0050d89f  894544               mov dword ptr [ebp + 0x44], eax
// 0050d8a2  7e0f                 jle 0x50d8b3
// 0050d8a4  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0050d8a7  6a01                 push 1
// 0050d8a9  03d0                 add edx, eax
// 0050d8ab  52                   push edx
// 0050d8ac  8bcd                 mov ecx, ebp
// 0050d8ae  e81d7f0000           call 0x5157d0
// 0050d8b3  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0050d8b6  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 0050d8b9  8a1408               mov dl, byte ptr [eax + ecx]
// 0050d8bc  40                   inc eax
// 0050d8bd  8bcd                 mov ecx, ebp
// 0050d8bf  88542416             mov byte ptr [esp + 0x16], dl
// 0050d8c3  894544               mov dword ptr [ebp + 0x44], eax
// 0050d8c6  e8e5d1ffff           call 0x50aab0
// 0050d8cb  0fb7c0               movzx eax, ax
// 0050d8ce  8bcd                 mov ecx, ebp
// 0050d8d0  89442424             mov dword ptr [esp + 0x24], eax
// 0050d8d4  e8d7d1ffff           call 0x50aab0
// 0050d8d9  0fb7c8               movzx ecx, ax
// 0050d8dc  894c2418             mov dword ptr [esp + 0x18], ecx
// 0050d8e0  8bcd                 mov ecx, ebp
// 0050d8e2  e8c9d1ffff           call 0x50aab0
// 0050d8e7  0fb7d0               movzx edx, ax
// 0050d8ea  8bcd                 mov ecx, ebp
// 0050d8ec  89542410             mov dword ptr [esp + 0x10], edx
// 0050d8f0  e8bbd1ffff           call 0x50aab0
// 0050d8f5  0fb7c0               movzx eax, ax
// 0050d8f8  8bcd                 mov ecx, ebp
// 0050d8fa  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050d8fe  e8add1ffff           call 0x50aab0
// 0050d903  8bcd                 mov ecx, ebp
// 0050d905  e8a6d1ffff           call 0x50aab0
// 0050d90a  b90f000000           mov ecx, 0xf
// 0050d90f  8d8424de000000       lea eax, [esp + 0xde]
// 0050d916  eb08                 jmp 0x50d920
// 0050d918  8da42400000000       lea esp, [esp]
// 0050d91f  90                   nop 
// 0050d920  c640fe00             mov byte ptr [eax - 2], 0
// 0050d924  c640ff00             mov byte ptr [eax - 1], 0
// 0050d928  c60000               mov byte ptr [eax], 0
// 0050d92b  83c003               add eax, 3
// 0050d92e  83e901               sub ecx, 1
// 0050d931  79ed                 jns 0x50d920
// 0050d933  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 0050d93a  51                   push ecx
// 0050d93b  6a30                 push 0x30
// 0050d93d  8bcd                 mov ecx, ebp
// 0050d93f  e8cc830000           call 0x515d10
// 0050d944  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 0050d947  8b5544               mov edx, dword ptr [ebp + 0x44]
// 0050d94a  8d441101             lea eax, [ecx + edx + 1]
// 0050d94e  2bc1                 sub eax, ecx
// 0050d950  894544               mov dword ptr [ebp + 0x44], eax
// 0050d953  7805                 js 0x50d95a
// 0050d955  3b453c               cmp eax, dword ptr [ebp + 0x3c]
// 0050d958  7e0c                 jle 0x50d966
// 0050d95a  03c1                 add eax, ecx
// 0050d95c  6a00                 push 0
// 0050d95e  50                   push eax
// 0050d95f  8bcd                 mov ecx, ebp
// 0050d961  e86a7e0000           call 0x5157d0
// 0050d966  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0050d969  8d4801               lea ecx, [eax + 1]
// 0050d96c  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0050d96f  7e0f                 jle 0x50d980
// 0050d971  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0050d974  6a01                 push 1
// 0050d976  03d0                 add edx, eax
// 0050d978  52                   push edx
// 0050d979  8bcd                 mov ecx, ebp
// 0050d97b  e8507e0000           call 0x5157d0
// 0050d980  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0050d983  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 0050d986  8a1c08               mov bl, byte ptr [eax + ecx]
// 0050d989  40                   inc eax
// 0050d98a  8bcd                 mov ecx, ebp
// 0050d98c  894544               mov dword ptr [ebp + 0x44], eax
// 0050d98f  e81cd1ffff           call 0x50aab0
// 0050d994  8bcd                 mov ecx, ebp
// 0050d996  e815d1ffff           call 0x50aab0
// 0050d99b  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 0050d99e  8b5544               mov edx, dword ptr [ebp + 0x44]
// 0050d9a1  0fb7f8               movzx edi, ax
// 0050d9a4  8d44113a             lea eax, [ecx + edx + 0x3a]
// 0050d9a8  2bc1                 sub eax, ecx
// 0050d9aa  894544               mov dword ptr [ebp + 0x44], eax
// 0050d9ad  7805                 js 0x50d9b4
// 0050d9af  3b453c               cmp eax, dword ptr [ebp + 0x3c]
// 0050d9b2  7e0c                 jle 0x50d9c0
// 0050d9b4  03c1                 add eax, ecx
// 0050d9b6  6a00                 push 0
// 0050d9b8  50                   push eax
// 0050d9b9  8bcd                 mov ecx, ebp
// 0050d9bb  e8107e0000           call 0x5157d0
// 0050d9c0  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 0050d9c5  0fb74c2410           movzx ecx, word ptr [esp + 0x10]
// 0050d9ca  0fb7542418           movzx edx, word ptr [esp + 0x18]
// 0050d9cf  2bc8                 sub ecx, eax
// 0050d9d1  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0050d9d6  2bc2                 sub eax, edx
// 0050d9d8  41                   inc ecx
// 0050d9d9  40                   inc eax
// 0050d9da  807c24170a           cmp byte ptr [esp + 0x17], 0xa
// 0050d9df  894e08               mov dword ptr [esi + 8], ecx
// 0050d9e2  89460c               mov dword ptr [esi + 0xc], eax
// 0050d9e5  c7461003000000       mov dword ptr [esi + 0x10], 3
// 0050d9ec  0f8575030000         jne 0x50dd67
// 0050d9f2  807c241501           cmp byte ptr [esp + 0x15], 1
// 0050d9f7  0f856a030000         jne 0x50dd67
// 0050d9fd  807c241608           cmp byte ptr [esp + 0x16], 8
// 0050da02  0f850d030000         jne 0x50dd15
// 0050da08  80fb01               cmp bl, 1
// 0050da0b  7409                 je 0x50da16
// 0050da0d  80fb03               cmp bl, 3
// 0050da10  0f85ff020000         jne 0x50dd15
// 0050da16  0fafc1               imul eax, ecx
// 0050da19  8d0440               lea eax, [eax + eax*2]
// 0050da1c  50                   push eax
// 0050da1d  e80eabffff           call 0x508530
// 0050da22  83c404               add esp, 4
// 0050da25  89442418             mov dword ptr [esp + 0x18], eax
// 0050da29  894604               mov dword ptr [esi + 4], eax
// 0050da2c  6683ff01             cmp di, 1
// 0050da30  0f85f5000000         jne 0x50db2b
// 0050da36  80fb03               cmp bl, 3
// 0050da39  0f85ec000000         jne 0x50db2b
// 0050da3f  33c9                 xor ecx, ecx
// 0050da41  394e0c               cmp dword ptr [esi + 0xc], ecx
// 0050da44  894c2410             mov dword ptr [esp + 0x10], ecx
// 0050da48  0f8ec2000000         jle 0x50db10
// 0050da4e  8bff                 mov edi, edi
// 0050da50  33db                 xor ebx, ebx
// 0050da52  8b4608               mov eax, dword ptr [esi + 8]
// 0050da55  8bf8                 mov edi, eax
// 0050da57  0faff9               imul edi, ecx
// 0050da5a  03c7                 add eax, edi
// 0050da5c  3bf8                 cmp edi, eax
// 0050da5e  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050da62  0f8d90000000         jge 0x50daf8
// 0050da68  eb06                 jmp 0x50da70
// 0050da6a  8d9b00000000         lea ebx, [ebx]
// 0050da70  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0050da73  8d4801               lea ecx, [eax + 1]
// 0050da76  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0050da79  7e0f                 jle 0x50da8a
// 0050da7b  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0050da7e  6a01                 push 1
// 0050da80  03d0                 add edx, eax
// 0050da82  52                   push edx
// 0050da83  8bcd                 mov ecx, ebp
// 0050da85  e8467d0000           call 0x5157d0
// 0050da8a  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0050da8d  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 0050da90  8a1408               mov dl, byte ptr [eax + ecx]
// 0050da93  40                   inc eax
// 0050da94  894544               mov dword ptr [ebp + 0x44], eax
// 0050da97  be01000000           mov esi, 1
// 0050da9c  80fac0               cmp dl, 0xc0
// 0050da9f  722a                 jb 0x50dacb
// 0050daa1  0fb6f2               movzx esi, dl
// 0050daa4  8d5001               lea edx, [eax + 1]
// 0050daa7  83e63f               and esi, 0x3f
// 0050daaa  3b553c               cmp edx, dword ptr [ebp + 0x3c]
// 0050daad  7e0f                 jle 0x50dabe
// 0050daaf  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 0050dab2  03c8                 add ecx, eax
// 0050dab4  6a01                 push 1
// 0050dab6  51                   push ecx
// 0050dab7  8bcd                 mov ecx, ebp
// 0050dab9  e8127d0000           call 0x5157d0
// 0050dabe  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0050dac1  8b5540               mov edx, dword ptr [ebp + 0x40]
// 0050dac4  8a1410               mov dl, byte ptr [eax + edx]
// 0050dac7  40                   inc eax
// 0050dac8  894544               mov dword ptr [ebp + 0x44], eax
// 0050dacb  8d4eff               lea ecx, [esi - 1]
// 0050dace  85c9                 test ecx, ecx
// 0050dad0  7c18                 jl 0x50daea
// 0050dad2  8d047b               lea eax, [ebx + edi*2]
// 0050dad5  03c7                 add eax, edi
// 0050dad7  03442418             add eax, dword ptr [esp + 0x18]
// 0050dadb  8d7c0f01             lea edi, [edi + ecx + 1]
// 0050dadf  90                   nop 
// 0050dae0  8810                 mov byte ptr [eax], dl
// 0050dae2  49                   dec ecx
// 0050dae3  83c003               add eax, 3
// 0050dae6  85c9                 test ecx, ecx
// 0050dae8  7df6                 jge 0x50dae0
// 0050daea  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0050daee  7c80                 jl 0x50da70
// 0050daf0  8b742420             mov esi, dword ptr [esp + 0x20]
// 0050daf4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050daf8  43                   inc ebx
// 0050daf9  83fb03               cmp ebx, 3
// 0050dafc  0f8c50ffffff         jl 0x50da52
// 0050db02  41                   inc ecx
// 0050db03  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 0050db06  894c2410             mov dword ptr [esp + 0x10], ecx
// 0050db0a  0f8c40ffffff         jl 0x50da50
// 0050db10  8b8c2488040000       mov ecx, dword ptr [esp + 0x488]
// 0050db17  5f                   pop edi
// 0050db18  5e                   pop esi
// 0050db19  5d                   pop ebp
// 0050db1a  5b                   pop ebx
// 0050db1b  64890d00000000       mov dword ptr fs:[0], ecx
// 0050db22  81c484040000         add esp, 0x484
// 0050db28  c20400               ret 4
// 0050db2b  80fb01               cmp bl, 1
// 0050db2e  0f858c010000         jne 0x50dcc0
// 0050db34  68d0e34200           push 0x42e3d0
// 0050db39  6800010000           push 0x100
// 0050db3e  6a03                 push 3
// 0050db40  8d842494010000       lea eax, [esp + 0x194]
// 0050db47  50                   push eax
// 0050db48  e8738befff           call 0x4066c0
// 0050db4d  8b4538               mov eax, dword ptr [ebp + 0x38]
// 0050db50  8b7d44               mov edi, dword ptr [ebp + 0x44]
// 0050db53  037d34               add edi, dword ptr [ebp + 0x34]
// 0050db56  05fffcffff           add eax, 0xfffffcff
// 0050db5b  50                   push eax
// 0050db5c  8bcd                 mov ecx, ebp
// 0050db5e  e8fdceffff           call 0x50aa60
// 0050db63  8bcd                 mov ecx, ebp
// 0050db65  e816cfffff           call 0x50aa80
// 0050db6a  3c0c                 cmp al, 0xc
// 0050db6c  0f8489000000         je 0x50dbfb
// 0050db72  689c818200           push 0x82819c
// 0050db77  8d4c242c             lea ecx, [esp + 0x2c]
// 0050db7b  ff1558248000         call dword ptr [0x802458]
// 0050db81  8d4c2428             lea ecx, [esp + 0x28]
// 0050db85  51                   push ecx
// 0050db86  c784249404000004000000 mov dword ptr [esp + 0x494], 4
// 0050db91  e81ac2ffff           call 0x509db0
// 0050db96  8bc8                 mov ecx, eax
// 0050db98  e853c3ffff           call 0x509ef0
// 0050db9d  83cbff               or ebx, 0xffffffff
// 0050dba0  8d4c2428             lea ecx, [esp + 0x28]
// 0050dba4  899c2490040000       mov dword ptr [esp + 0x490], ebx
// 0050dbab  ff1568248000         call dword ptr [0x802468]
// 0050dbb1  8d542428             lea edx, [esp + 0x28]
// 0050dbb5  52                   push edx
// 0050dbb6  8bcd                 mov ecx, ebp
// 0050dbb8  e873ceffff           call 0x50aa30
// 0050dbbd  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0050dbc1  c784249004000005000000 mov dword ptr [esp + 0x490], 5
// 0050dbcc  7205                 jb 0x50dbd3
// 0050dbce  8b4004               mov eax, dword ptr [eax + 4]
// 0050dbd1  eb03                 jmp 0x50dbd6
// 0050dbd3  83c004               add eax, 4
// 0050dbd6  50                   push eax
// 0050dbd7  6848818200           push 0x828148
// 0050dbdc  e8cfc1ffff           call 0x509db0
// 0050dbe1  50                   push eax
// 0050dbe2  e839c5ffff           call 0x50a120
// 0050dbe7  83c40c               add esp, 0xc
// 0050dbea  8d4c2428             lea ecx, [esp + 0x28]
// 0050dbee  899c2490040000       mov dword ptr [esp + 0x490], ebx
// 0050dbf5  ff1568248000         call dword ptr [0x802468]
// 0050dbfb  8d842488010000       lea eax, [esp + 0x188]
// 0050dc02  50                   push eax
// 0050dc03  6800030000           push 0x300
// 0050dc08  8bcd                 mov ecx, ebp
// 0050dc0a  e801810000           call 0x515d10
// 0050dc0f  57                   push edi
// 0050dc10  8bcd                 mov ecx, ebp
// 0050dc12  e849ceffff           call 0x50aa60
// 0050dc17  8b560c               mov edx, dword ptr [esi + 0xc]
// 0050dc1a  0faf5608             imul edx, dword ptr [esi + 8]
// 0050dc1e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050dc21  33ff                 xor edi, edi
// 0050dc23  894c2418             mov dword ptr [esp + 0x18], ecx
// 0050dc27  897c2410             mov dword ptr [esp + 0x10], edi
// 0050dc2b  85d2                 test edx, edx
// 0050dc2d  0f8eddfeffff         jle 0x50db10
// 0050dc33  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0050dc36  8d4801               lea ecx, [eax + 1]
// 0050dc39  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0050dc3c  7e0f                 jle 0x50dc4d
// 0050dc3e  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0050dc41  6a01                 push 1
// 0050dc43  03d0                 add edx, eax
// 0050dc45  52                   push edx
// 0050dc46  8bcd                 mov ecx, ebp
// 0050dc48  e8837b0000           call 0x5157d0
// 0050dc4d  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 0050dc50  8b4540               mov eax, dword ptr [ebp + 0x40]
// 0050dc53  8a0401               mov al, byte ptr [ecx + eax]
// 0050dc56  41                   inc ecx
// 0050dc57  894d44               mov dword ptr [ebp + 0x44], ecx
// 0050dc5a  b301                 mov bl, 1
// 0050dc5c  3cc0                 cmp al, 0xc0
// 0050dc5e  720c                 jb 0x50dc6c
// 0050dc60  8ad8                 mov bl, al
// 0050dc62  8bcd                 mov ecx, ebp
// 0050dc64  80e33f               and bl, 0x3f
// 0050dc67  e814ceffff           call 0x50aa80
// 0050dc6c  0fb6c0               movzx eax, al
// 0050dc6f  8d8c0488010000       lea ecx, [esp + eax + 0x188]
// 0050dc76  8d0c41               lea ecx, [ecx + eax*2]
// 0050dc79  0fb6c3               movzx eax, bl
// 0050dc7c  83e801               sub eax, 1
// 0050dc7f  782b                 js 0x50dcac
// 0050dc81  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050dc85  8d347a               lea esi, [edx + edi*2]
// 0050dc88  668b11               mov dx, word ptr [ecx]
// 0050dc8b  03f7                 add esi, edi
// 0050dc8d  668916               mov word ptr [esi], dx
// 0050dc90  8a4902               mov cl, byte ptr [ecx + 2]
// 0050dc93  40                   inc eax
// 0050dc94  01442410             add dword ptr [esp + 0x10], eax
// 0050dc98  884e02               mov byte ptr [esi + 2], cl
// 0050dc9b  8d7e03               lea edi, [esi + 3]
// 0050dc9e  8d4c40fd             lea ecx, [eax + eax*2 - 3]
// 0050dca2  f3a4                 rep movsb byte ptr es:[edi], byte ptr [esi]
// 0050dca4  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0050dca8  8b742420             mov esi, dword ptr [esp + 0x20]
// 0050dcac  8b560c               mov edx, dword ptr [esi + 0xc]
// 0050dcaf  0faf5608             imul edx, dword ptr [esi + 8]
// 0050dcb3  3bfa                 cmp edi, edx
// 0050dcb5  0f8c78ffffff         jl 0x50dc33
// 0050dcbb  e950feffff           jmp 0x50db10
// 0050dcc0  682c818200           push 0x82812c
// 0050dcc5  8d4c2464             lea ecx, [esp + 0x64]
// 0050dcc9  ff1558248000         call dword ptr [0x802458]
// 0050dccf  8d84240c010000       lea eax, [esp + 0x10c]
// 0050dcd6  50                   push eax
// 0050dcd7  8bcd                 mov ecx, ebp
// 0050dcd9  c784249404000006000000 mov dword ptr [esp + 0x494], 6
// 0050dce4  e847cdffff           call 0x50aa30
// 0050dce9  50                   push eax
// 0050dcea  8d4c2464             lea ecx, [esp + 0x64]
// 0050dcee  51                   push ecx
// 0050dcef  8d8c2430010000       lea ecx, [esp + 0x130]
// 0050dcf6  c684249804000007     mov byte ptr [esp + 0x498], 7
// 0050dcfe  e8ad4bf6ff           call 0x4728b0
// 0050dd03  6878c48d00           push 0x8dc478
// 0050dd08  8d94242c010000       lea edx, [esp + 0x12c]
// 0050dd0f  52                   push edx
// 0050dd10  e877381900           call 0x6a158c
// 0050dd15  68f8808200           push 0x8280f8
// 0050dd1a  8d4c242c             lea ecx, [esp + 0x2c]
// 0050dd1e  ff1558248000         call dword ptr [0x802458]
// 0050dd24  8d442444             lea eax, [esp + 0x44]
// 0050dd28  50                   push eax
// 0050dd29  8bcd                 mov ecx, ebp
// 0050dd2b  c784249404000002000000 mov dword ptr [esp + 0x494], 2
// 0050dd36  e8f5ccffff           call 0x50aa30
// 0050dd3b  50                   push eax
// 0050dd3c  8d4c242c             lea ecx, [esp + 0x2c]
// 0050dd40  51                   push ecx
// 0050dd41  8d8c2484000000       lea ecx, [esp + 0x84]
// 0050dd48  c684249804000003     mov byte ptr [esp + 0x498], 3
// 0050dd50  e85b4bf6ff           call 0x4728b0
// 0050dd55  6878c48d00           push 0x8dc478
// 0050dd5a  8d942480000000       lea edx, [esp + 0x80]
// 0050dd61  52                   push edx
// 0050dd62  e825381900           call 0x6a158c
// 0050dd67  68e0808200           push 0x8280e0
// 0050dd6c  8d4c242c             lea ecx, [esp + 0x2c]
// 0050dd70  ff1558248000         call dword ptr [0x802458]
// 0050dd76  8d442444             lea eax, [esp + 0x44]
// 0050dd7a  50                   push eax
// 0050dd7b  8bcd                 mov ecx, ebp
// 0050dd7d  c784249404000000000000 mov dword ptr [esp + 0x494], 0
// 0050dd88  e8a3ccffff           call 0x50aa30
// 0050dd8d  50                   push eax
// 0050dd8e  8d4c242c             lea ecx, [esp + 0x2c]
// 0050dd92  51                   push ecx
// 0050dd93  8d8c2484000000       lea ecx, [esp + 0x84]
// 0050dd9a  c684249804000001     mov byte ptr [esp + 0x498], 1
// 0050dda2  e8094bf6ff           call 0x4728b0
// 0050dda7  6878c48d00           push 0x8dc478
// 0050ddac  8d942480000000       lea edx, [esp + 0x80]
// 0050ddb3  52                   push edx
// 0050ddb4  e8d3371900           call 0x6a158c
// library g3d-6.09-rbx2008/G3Dcpp\roc_line_0dec62d7bd4d609a.cpp (function ?decodePCX@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_line_0dec62d7bd4d609a.cpp
