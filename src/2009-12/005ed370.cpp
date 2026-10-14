// roc 2009-12 005ed370  unit: G3D::Log  size: 1295 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ed370
//
// 005ed370  64a100000000         mov eax, dword ptr fs:[0]
// 005ed376  6aff                 push -1
// 005ed378  68b4f09300           push 0x93f0b4
// 005ed37d  50                   push eax
// 005ed37e  64892500000000       mov dword ptr fs:[0], esp
// 005ed385  81ecc0000000         sub esp, 0xc0
// 005ed38b  56                   push esi
// 005ed38c  8bb424d4000000       mov esi, dword ptr [esp + 0xd4]
// 005ed393  8b4638               mov eax, dword ptr [esi + 0x38]
// 005ed396  57                   push edi
// 005ed397  8bf9                 mov edi, ecx
// 005ed399  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed39c  2bc1                 sub eax, ecx
// 005ed39e  83c0ee               add eax, -0x12
// 005ed3a1  894644               mov dword ptr [esi + 0x44], eax
// 005ed3a4  7805                 js 0x5ed3ab
// 005ed3a6  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005ed3a9  7e0c                 jle 0x5ed3b7
// 005ed3ab  03c1                 add eax, ecx
// 005ed3ad  6a00                 push 0
// 005ed3af  50                   push eax
// 005ed3b0  8bce                 mov ecx, esi
// 005ed3b2  e8097e0000           call 0x5f51c0
// 005ed3b7  6a10                 push 0x10
// 005ed3b9  8d442434             lea eax, [esp + 0x34]
// 005ed3bd  50                   push eax
// 005ed3be  8bce                 mov ecx, esi
// 005ed3c0  e83b830000           call 0x5f5700
// 005ed3c5  8d4c2430             lea ecx, [esp + 0x30]
// 005ed3c9  686c229c00           push 0x9c226c
// 005ed3ce  51                   push ecx
// 005ed3cf  c78424d800000000000000 mov dword ptr [esp + 0xd8], 0
// 005ed3da  ff156cb69800         call dword ptr [0x98b66c]
// 005ed3e0  83c408               add esp, 8
// 005ed3e3  84c0                 test al, al
// 005ed3e5  7449                 je 0x5ed430
// 005ed3e7  685c229c00           push 0x9c225c
// 005ed3ec  8d4c2418             lea ecx, [esp + 0x18]
// 005ed3f0  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ed3f6  8d54244c             lea edx, [esp + 0x4c]
// 005ed3fa  52                   push edx
// 005ed3fb  8bce                 mov ecx, esi
// 005ed3fd  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 005ed405  e8b6eeffff           call 0x5ec2c0
// 005ed40a  50                   push eax
// 005ed40b  8d442418             lea eax, [esp + 0x18]
// 005ed40f  50                   push eax
// 005ed410  8d4c2470             lea ecx, [esp + 0x70]
// 005ed414  c68424d800000002     mov byte ptr [esp + 0xd8], 2
// 005ed41c  e81f94edff           call 0x4c6840
// 005ed421  689014aa00           push 0xaa1490
// 005ed426  8d4c246c             lea ecx, [esp + 0x6c]
// 005ed42a  51                   push ecx
// 005ed42b  e848742000           call 0x7f4878
// 005ed430  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed433  8bc1                 mov eax, ecx
// 005ed435  f7d8                 neg eax
// 005ed437  894644               mov dword ptr [esi + 0x44], eax
// 005ed43a  7805                 js 0x5ed441
// 005ed43c  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005ed43f  7e0c                 jle 0x5ed44d
// 005ed441  03c1                 add eax, ecx
// 005ed443  6a00                 push 0
// 005ed445  50                   push eax
// 005ed446  8bce                 mov ecx, esi
// 005ed448  e8737d0000           call 0x5f51c0
// 005ed44d  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed450  8d5001               lea edx, [eax + 1]
// 005ed453  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 005ed456  7e0f                 jle 0x5ed467
// 005ed458  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed45b  03c8                 add ecx, eax
// 005ed45d  6a01                 push 1
// 005ed45f  51                   push ecx
// 005ed460  8bce                 mov ecx, esi
// 005ed462  e8597d0000           call 0x5f51c0
// 005ed467  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed46a  8b5640               mov edx, dword ptr [esi + 0x40]
// 005ed46d  8a0c10               mov cl, byte ptr [eax + edx]
// 005ed470  40                   inc eax
// 005ed471  55                   push ebp
// 005ed472  0fb6e9               movzx ebp, cl
// 005ed475  8d4801               lea ecx, [eax + 1]
// 005ed478  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005ed47b  894644               mov dword ptr [esi + 0x44], eax
// 005ed47e  7e0f                 jle 0x5ed48f
// 005ed480  8b5634               mov edx, dword ptr [esi + 0x34]
// 005ed483  6a01                 push 1
// 005ed485  03d0                 add edx, eax
// 005ed487  52                   push edx
// 005ed488  8bce                 mov ecx, esi
// 005ed48a  e8317d0000           call 0x5f51c0
// 005ed48f  ff4644               inc dword ptr [esi + 0x44]
// 005ed492  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed495  8d4801               lea ecx, [eax + 1]
// 005ed498  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005ed49b  7e0f                 jle 0x5ed4ac
// 005ed49d  8b5634               mov edx, dword ptr [esi + 0x34]
// 005ed4a0  6a01                 push 1
// 005ed4a2  03d0                 add edx, eax
// 005ed4a4  52                   push edx
// 005ed4a5  8bce                 mov ecx, esi
// 005ed4a7  e8147d0000           call 0x5f51c0
// 005ed4ac  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed4af  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005ed4b2  8a0c08               mov cl, byte ptr [eax + ecx]
// 005ed4b5  0fb6c9               movzx ecx, cl
// 005ed4b8  40                   inc eax
// 005ed4b9  894644               mov dword ptr [esi + 0x44], eax
// 005ed4bc  83f902               cmp ecx, 2
// 005ed4bf  7449                 je 0x5ed50a
// 005ed4c1  6828229c00           push 0x9c2228
// 005ed4c6  8d4c241c             lea ecx, [esp + 0x1c]
// 005ed4ca  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ed4d0  8d542450             lea edx, [esp + 0x50]
// 005ed4d4  52                   push edx
// 005ed4d5  8bce                 mov ecx, esi
// 005ed4d7  c68424d800000003     mov byte ptr [esp + 0xd8], 3
// 005ed4df  e8dcedffff           call 0x5ec2c0
// 005ed4e4  50                   push eax
// 005ed4e5  8d44241c             lea eax, [esp + 0x1c]
// 005ed4e9  50                   push eax
// 005ed4ea  8d4c2474             lea ecx, [esp + 0x74]
// 005ed4ee  c68424dc00000004     mov byte ptr [esp + 0xdc], 4
// 005ed4f6  e84593edff           call 0x4c6840
// 005ed4fb  689014aa00           push 0xaa1490
// 005ed500  8d4c2470             lea ecx, [esp + 0x70]
// 005ed504  51                   push ecx
// 005ed505  e86e732000           call 0x7f4878
// 005ed50a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed50d  8d440805             lea eax, [eax + ecx + 5]
// 005ed511  2bc1                 sub eax, ecx
// 005ed513  894644               mov dword ptr [esi + 0x44], eax
// 005ed516  7805                 js 0x5ed51d
// 005ed518  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005ed51b  7e0c                 jle 0x5ed529
// 005ed51d  03c1                 add eax, ecx
// 005ed51f  6a00                 push 0
// 005ed521  50                   push eax
// 005ed522  8bce                 mov ecx, esi
// 005ed524  e8977c0000           call 0x5f51c0
// 005ed529  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed52c  8b5644               mov edx, dword ptr [esi + 0x44]
// 005ed52f  8d441104             lea eax, [ecx + edx + 4]
// 005ed533  2bc1                 sub eax, ecx
// 005ed535  894644               mov dword ptr [esi + 0x44], eax
// 005ed538  7805                 js 0x5ed53f
// 005ed53a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005ed53d  7e0c                 jle 0x5ed54b
// 005ed53f  03c1                 add eax, ecx
// 005ed541  6a00                 push 0
// 005ed543  50                   push eax
// 005ed544  8bce                 mov ecx, esi
// 005ed546  e8757c0000           call 0x5f51c0
// 005ed54b  8bce                 mov ecx, esi
// 005ed54d  e87eb9eaff           call 0x498ed0
// 005ed552  0fb7c0               movzx eax, ax
// 005ed555  98                   cwde 
// 005ed556  8bce                 mov ecx, esi
// 005ed558  894708               mov dword ptr [edi + 8], eax
// 005ed55b  e870b9eaff           call 0x498ed0
// 005ed560  0fb7c0               movzx eax, ax
// 005ed563  0fbfc8               movsx ecx, ax
// 005ed566  894f0c               mov dword ptr [edi + 0xc], ecx
// 005ed569  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed56c  8d5001               lea edx, [eax + 1]
// 005ed56f  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 005ed572  7e0f                 jle 0x5ed583
// 005ed574  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed577  03c8                 add ecx, eax
// 005ed579  6a01                 push 1
// 005ed57b  51                   push ecx
// 005ed57c  8bce                 mov ecx, esi
// 005ed57e  e83d7c0000           call 0x5f51c0
// 005ed583  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed586  8b5640               mov edx, dword ptr [esi + 0x40]
// 005ed589  8a0c10               mov cl, byte ptr [eax + edx]
// 005ed58c  40                   inc eax
// 005ed58d  894644               mov dword ptr [esi + 0x44], eax
// 005ed590  0fb6c1               movzx eax, cl
// 005ed593  53                   push ebx
// 005ed594  bb03000000           mov ebx, 3
// 005ed599  83f818               cmp eax, 0x18
// 005ed59c  7457                 je 0x5ed5f5
// 005ed59e  83f820               cmp eax, 0x20
// 005ed5a1  7449                 je 0x5ed5ec
// 005ed5a3  6808229c00           push 0x9c2208
// 005ed5a8  8d4c2420             lea ecx, [esp + 0x20]
// 005ed5ac  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ed5b2  8d442454             lea eax, [esp + 0x54]
// 005ed5b6  50                   push eax
// 005ed5b7  8bce                 mov ecx, esi
// 005ed5b9  c68424dc00000005     mov byte ptr [esp + 0xdc], 5
// 005ed5c1  e8faecffff           call 0x5ec2c0
// 005ed5c6  50                   push eax
// 005ed5c7  8d4c2420             lea ecx, [esp + 0x20]
// 005ed5cb  51                   push ecx
// 005ed5cc  8d4c2478             lea ecx, [esp + 0x78]
// 005ed5d0  c68424e000000006     mov byte ptr [esp + 0xe0], 6
// 005ed5d8  e86392edff           call 0x4c6840
// 005ed5dd  689014aa00           push 0xaa1490
// 005ed5e2  8d542474             lea edx, [esp + 0x74]
// 005ed5e6  52                   push edx
// 005ed5e7  e88c722000           call 0x7f4878
// 005ed5ec  c7471004000000       mov dword ptr [edi + 0x10], 4
// 005ed5f3  eb03                 jmp 0x5ed5f8
// 005ed5f5  895f10               mov dword ptr [edi + 0x10], ebx
// 005ed5f8  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed5fb  8d4801               lea ecx, [eax + 1]
// 005ed5fe  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005ed601  7e0f                 jle 0x5ed612
// 005ed603  8b5634               mov edx, dword ptr [esi + 0x34]
// 005ed606  6a01                 push 1
// 005ed608  03d0                 add edx, eax
// 005ed60a  52                   push edx
// 005ed60b  8bce                 mov ecx, esi
// 005ed60d  e8ae7b0000           call 0x5f51c0
// 005ed612  ff4644               inc dword ptr [esi + 0x44]
// 005ed615  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed618  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed61b  03c1                 add eax, ecx
// 005ed61d  03c5                 add eax, ebp
// 005ed61f  2bc1                 sub eax, ecx
// 005ed621  894644               mov dword ptr [esi + 0x44], eax
// 005ed624  7805                 js 0x5ed62b
// 005ed626  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005ed629  7e0c                 jle 0x5ed637
// 005ed62b  03c1                 add eax, ecx
// 005ed62d  6a00                 push 0
// 005ed62f  50                   push eax
// 005ed630  8bce                 mov ecx, esi
// 005ed632  e8897b0000           call 0x5f51c0
// 005ed637  8b4708               mov eax, dword ptr [edi + 8]
// 005ed63a  0faf470c             imul eax, dword ptr [edi + 0xc]
// 005ed63e  0faf4710             imul eax, dword ptr [edi + 0x10]
// 005ed642  50                   push eax
// 005ed643  e858ccffff           call 0x5ea2a0
// 005ed648  83c404               add esp, 4
// 005ed64b  894704               mov dword ptr [edi + 4], eax
// 005ed64e  8b470c               mov eax, dword ptr [edi + 0xc]
// 005ed651  395f10               cmp dword ptr [edi + 0x10], ebx
// 005ed654  0f85e2000000         jne 0x5ed73c
// 005ed65a  83e801               sub eax, 1
// 005ed65d  89442410             mov dword ptr [esp + 0x10], eax
// 005ed661  0f88e8010000         js 0x5ed84f
// 005ed667  eb07                 jmp 0x5ed670
// 005ed669  8da42400000000       lea esp, [esp]
// 005ed670  33ed                 xor ebp, ebp
// 005ed672  396f08               cmp dword ptr [edi + 8], ebp
// 005ed675  0f8eb1000000         jle 0x5ed72c
// 005ed67b  eb03                 jmp 0x5ed680
// 005ed67d  8d4900               lea ecx, [ecx]
// 005ed680  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed683  8d4801               lea ecx, [eax + 1]
// 005ed686  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005ed689  7e0f                 jle 0x5ed69a
// 005ed68b  8b5634               mov edx, dword ptr [esi + 0x34]
// 005ed68e  6a01                 push 1
// 005ed690  03d0                 add edx, eax
// 005ed692  52                   push edx
// 005ed693  8bce                 mov ecx, esi
// 005ed695  e8267b0000           call 0x5f51c0
// 005ed69a  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed69d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005ed6a0  8a0c08               mov cl, byte ptr [eax + ecx]
// 005ed6a3  40                   inc eax
// 005ed6a4  0fb6d1               movzx edx, cl
// 005ed6a7  8d4801               lea ecx, [eax + 1]
// 005ed6aa  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005ed6ad  894644               mov dword ptr [esi + 0x44], eax
// 005ed6b0  89542414             mov dword ptr [esp + 0x14], edx
// 005ed6b4  7e0f                 jle 0x5ed6c5
// 005ed6b6  8b5634               mov edx, dword ptr [esi + 0x34]
// 005ed6b9  6a01                 push 1
// 005ed6bb  03d0                 add edx, eax
// 005ed6bd  52                   push edx
// 005ed6be  8bce                 mov ecx, esi
// 005ed6c0  e8fb7a0000           call 0x5f51c0
// 005ed6c5  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed6c8  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005ed6cb  8a0c08               mov cl, byte ptr [eax + ecx]
// 005ed6ce  40                   inc eax
// 005ed6cf  8d5001               lea edx, [eax + 1]
// 005ed6d2  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 005ed6d5  894644               mov dword ptr [esi + 0x44], eax
// 005ed6d8  0fb6d9               movzx ebx, cl
// 005ed6db  7e0f                 jle 0x5ed6ec
// 005ed6dd  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed6e0  03c8                 add ecx, eax
// 005ed6e2  6a01                 push 1
// 005ed6e4  51                   push ecx
// 005ed6e5  8bce                 mov ecx, esi
// 005ed6e7  e8d47a0000           call 0x5f51c0
// 005ed6ec  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed6ef  8b5640               mov edx, dword ptr [esi + 0x40]
// 005ed6f2  8a0c10               mov cl, byte ptr [eax + edx]
// 005ed6f5  40                   inc eax
// 005ed6f6  894644               mov dword ptr [esi + 0x44], eax
// 005ed6f9  8b4708               mov eax, dword ptr [edi + 8]
// 005ed6fc  0faf442410           imul eax, dword ptr [esp + 0x10]
// 005ed701  8b5704               mov edx, dword ptr [edi + 4]
// 005ed704  0fb6c9               movzx ecx, cl
// 005ed707  03c5                 add eax, ebp
// 005ed709  8d0440               lea eax, [eax + eax*2]
// 005ed70c  880c10               mov byte ptr [eax + edx], cl
// 005ed70f  8b4f04               mov ecx, dword ptr [edi + 4]
// 005ed712  885c0101             mov byte ptr [ecx + eax + 1], bl
// 005ed716  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 005ed71b  8b5704               mov edx, dword ptr [edi + 4]
// 005ed71e  45                   inc ebp
// 005ed71f  884c0202             mov byte ptr [edx + eax + 2], cl
// 005ed723  3b6f08               cmp ebp, dword ptr [edi + 8]
// 005ed726  0f8c54ffffff         jl 0x5ed680
// 005ed72c  836c241001           sub dword ptr [esp + 0x10], 1
// 005ed731  0f8939ffffff         jns 0x5ed670
// 005ed737  e913010000           jmp 0x5ed84f
// 005ed73c  83e801               sub eax, 1
// 005ed73f  89442410             mov dword ptr [esp + 0x10], eax
// 005ed743  0f8806010000         js 0x5ed84f
// 005ed749  8da42400000000       lea esp, [esp]
// 005ed750  33ed                 xor ebp, ebp
// 005ed752  396f08               cmp dword ptr [edi + 8], ebp
// 005ed755  0f8ee9000000         jle 0x5ed844
// 005ed75b  eb03                 jmp 0x5ed760
// 005ed75d  8d4900               lea ecx, [ecx]
// 005ed760  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed763  8d5001               lea edx, [eax + 1]
// 005ed766  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 005ed769  7e0f                 jle 0x5ed77a
// 005ed76b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed76e  03c8                 add ecx, eax
// 005ed770  6a01                 push 1
// 005ed772  51                   push ecx
// 005ed773  8bce                 mov ecx, esi
// 005ed775  e8467a0000           call 0x5f51c0
// 005ed77a  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed77d  8b5640               mov edx, dword ptr [esi + 0x40]
// 005ed780  8a0c10               mov cl, byte ptr [eax + edx]
// 005ed783  40                   inc eax
// 005ed784  0fb6c9               movzx ecx, cl
// 005ed787  8d5001               lea edx, [eax + 1]
// 005ed78a  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 005ed78d  894644               mov dword ptr [esi + 0x44], eax
// 005ed790  894c2418             mov dword ptr [esp + 0x18], ecx
// 005ed794  7e0f                 jle 0x5ed7a5
// 005ed796  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed799  03c8                 add ecx, eax
// 005ed79b  6a01                 push 1
// 005ed79d  51                   push ecx
// 005ed79e  8bce                 mov ecx, esi
// 005ed7a0  e81b7a0000           call 0x5f51c0
// 005ed7a5  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed7a8  8b5640               mov edx, dword ptr [esi + 0x40]
// 005ed7ab  8a0c10               mov cl, byte ptr [eax + edx]
// 005ed7ae  40                   inc eax
// 005ed7af  0fb6c9               movzx ecx, cl
// 005ed7b2  8d5001               lea edx, [eax + 1]
// 005ed7b5  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 005ed7b8  894644               mov dword ptr [esi + 0x44], eax
// 005ed7bb  894c2414             mov dword ptr [esp + 0x14], ecx
// 005ed7bf  7e0f                 jle 0x5ed7d0
// 005ed7c1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed7c4  03c8                 add ecx, eax
// 005ed7c6  6a01                 push 1
// 005ed7c8  51                   push ecx
// 005ed7c9  8bce                 mov ecx, esi
// 005ed7cb  e8f0790000           call 0x5f51c0
// 005ed7d0  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed7d3  8b5640               mov edx, dword ptr [esi + 0x40]
// 005ed7d6  8a0c10               mov cl, byte ptr [eax + edx]
// 005ed7d9  40                   inc eax
// 005ed7da  0fb6d9               movzx ebx, cl
// 005ed7dd  8d4801               lea ecx, [eax + 1]
// 005ed7e0  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005ed7e3  894644               mov dword ptr [esi + 0x44], eax
// 005ed7e6  7e0f                 jle 0x5ed7f7
// 005ed7e8  8b5634               mov edx, dword ptr [esi + 0x34]
// 005ed7eb  6a01                 push 1
// 005ed7ed  03d0                 add edx, eax
// 005ed7ef  52                   push edx
// 005ed7f0  8bce                 mov ecx, esi
// 005ed7f2  e8c9790000           call 0x5f51c0
// 005ed7f7  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ed7fa  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005ed7fd  8a0c08               mov cl, byte ptr [eax + ecx]
// 005ed800  40                   inc eax
// 005ed801  894644               mov dword ptr [esi + 0x44], eax
// 005ed804  8b4708               mov eax, dword ptr [edi + 8]
// 005ed807  0faf442410           imul eax, dword ptr [esp + 0x10]
// 005ed80c  8b5704               mov edx, dword ptr [edi + 4]
// 005ed80f  03c5                 add eax, ebp
// 005ed811  03c0                 add eax, eax
// 005ed813  03c0                 add eax, eax
// 005ed815  881c10               mov byte ptr [eax + edx], bl
// 005ed818  8b5704               mov edx, dword ptr [edi + 4]
// 005ed81b  0fb65c2414           movzx ebx, byte ptr [esp + 0x14]
// 005ed820  885c0201             mov byte ptr [edx + eax + 1], bl
// 005ed824  8b5704               mov edx, dword ptr [edi + 4]
// 005ed827  0fb65c2418           movzx ebx, byte ptr [esp + 0x18]
// 005ed82c  885c0202             mov byte ptr [edx + eax + 2], bl
// 005ed830  8b5704               mov edx, dword ptr [edi + 4]
// 005ed833  0fb6c9               movzx ecx, cl
// 005ed836  45                   inc ebp
// 005ed837  884c0203             mov byte ptr [edx + eax + 3], cl
// 005ed83b  3b6f08               cmp ebp, dword ptr [edi + 8]
// 005ed83e  0f8c1cffffff         jl 0x5ed760
// 005ed844  836c241001           sub dword ptr [esp + 0x10], 1
// 005ed849  0f8901ffffff         jns 0x5ed750
// 005ed84f  8d4c2438             lea ecx, [esp + 0x38]
// 005ed853  c78424d8000000ffffffff mov dword ptr [esp + 0xd8], 0xffffffff
// 005ed85e  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ed864  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 005ed86b  5b                   pop ebx
// 005ed86c  5d                   pop ebp
// 005ed86d  5f                   pop edi
// 005ed86e  5e                   pop esi
// 005ed86f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed876  81c4cc000000         add esp, 0xcc
// 005ed87c  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage_tga.cpp (function ?decodeTGA@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_tga.cpp
