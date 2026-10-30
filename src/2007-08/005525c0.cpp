// roc 2007-08 005525c0  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005525c0
//
// 005525c0  6aff                 push -1
// 005525c2  6879be7500           push 0x75be79
// 005525c7  64a100000000         mov eax, dword ptr fs:[0]
// 005525cd  50                   push eax
// 005525ce  64892500000000       mov dword ptr fs:[0], esp
// 005525d5  83ec5c               sub esp, 0x5c
// 005525d8  53                   push ebx
// 005525d9  55                   push ebp
// 005525da  56                   push esi
// 005525db  57                   push edi
// 005525dc  8d442450             lea eax, [esp + 0x50]
// 005525e0  50                   push eax
// 005525e1  8be9                 mov ebp, ecx
// 005525e3  e888bfffff           call 0x54e570
// 005525e8  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 005525ec  c744247400000000     mov dword ptr [esp + 0x74], 0
// 005525f4  33ff                 xor edi, edi
// 005525f6  eb08                 jmp 0x552600
// 005525f8  8da42400000000       lea esp, [esp]
// 005525ff  90                   nop 
// 00552600  8b33                 mov esi, dword ptr [ebx]
// 00552602  6a01                 push 1
// 00552604  8d8c2480000000       lea ecx, [esp + 0x80]
// 0055260b  51                   push ecx
// 0055260c  8bce                 mov ecx, esi
// 0055260e  ff150ce67700         call dword ptr [0x77e60c]
// 00552614  85c0                 test eax, eax
// 00552616  7507                 jne 0x55261f
// 00552618  8a463c               mov al, byte ptr [esi + 0x3c]
// 0055261b  f6d8                 neg al
// 0055261d  1bc0                 sbb eax, eax
// 0055261f  83f8ff               cmp eax, -1
// 00552622  7407                 je 0x55262b
// 00552624  03f8                 add edi, eax
// 00552626  83ff01               cmp edi, 1
// 00552629  7cd5                 jl 0x552600
// 0055262b  85ff                 test edi, edi
// 0055262d  7433                 je 0x552662
// 0055262f  83ff01               cmp edi, 1
// 00552632  7517                 jne 0x55264b
// 00552634  0fb644247c           movzx eax, byte ptr [esp + 0x7c]
// 00552639  83f8ff               cmp eax, -1
// 0055263c  7424                 je 0x552662
// 0055263e  50                   push eax
// 0055263f  8d4c2454             lea ecx, [esp + 0x54]
// 00552643  ff155ce57700         call dword ptr [0x77e55c]
// 00552649  eba9                 jmp 0x5525f4
// 0055264b  83ffff               cmp edi, -1
// 0055264e  7412                 je 0x552662
// 00552650  b8feffffff           mov eax, 0xfffffffe
// 00552655  50                   push eax
// 00552656  8d4c2454             lea ecx, [esp + 0x54]
// 0055265a  ff155ce57700         call dword ptr [0x77e55c]
// 00552660  eb92                 jmp 0x5525f4
// 00552662  8d542410             lea edx, [esp + 0x10]
// 00552666  52                   push edx
// 00552667  8d4c2454             lea ecx, [esp + 0x54]
// 0055266b  ff15e4e57700         call dword ptr [0x77e5e4]
// 00552671  8b30                 mov esi, dword ptr [eax]
// 00552673  8b7804               mov edi, dword ptr [eax + 4]
// 00552676  8d442418             lea eax, [esp + 0x18]
// 0055267a  50                   push eax
// 0055267b  8d4c2454             lea ecx, [esp + 0x54]
// 0055267f  ff15e0e57700         call dword ptr [0x77e5e0]
// 00552685  8b08                 mov ecx, dword ptr [eax]
// 00552687  8b5004               mov edx, dword ptr [eax + 4]
// 0055268a  8b4500               mov eax, dword ptr [ebp]
// 0055268d  89742430             mov dword ptr [esp + 0x30], esi
// 00552691  8b7008               mov esi, dword ptr [eax + 8]
// 00552694  8d442420             lea eax, [esp + 0x20]
// 00552698  6a05                 push 5
// 0055269a  50                   push eax
// 0055269b  894c2428             mov dword ptr [esp + 0x28], ecx
// 0055269f  8954242c             mov dword ptr [esp + 0x2c], edx
// 005526a3  894c2430             mov dword ptr [esp + 0x30], ecx
// 005526a7  89542434             mov dword ptr [esp + 0x34], edx
// 005526ab  897c243c             mov dword ptr [esp + 0x3c], edi
// 005526af  e83cfdffff           call 0x5523f0
// 005526b4  83c408               add esp, 8
// 005526b7  3bc6                 cmp eax, esi
// 005526b9  741a                 je 0x5526d5
// 005526bb  6a02                 push 2
// 005526bd  8d4c2424             lea ecx, [esp + 0x24]
// 005526c1  e8cab9ffff           call 0x54e090
// 005526c6  6814a48500           push 0x85a414
// 005526cb  8d4c2424             lea ecx, [esp + 0x24]
// 005526cf  51                   push ecx
// 005526d0  e8c9e40d00           call 0x630b9e
// 005526d5  8b4500               mov eax, dword ptr [ebp]
// 005526d8  8b7010               mov esi, dword ptr [eax + 0x10]
// 005526db  8d542420             lea edx, [esp + 0x20]
// 005526df  6a05                 push 5
// 005526e1  52                   push edx
// 005526e2  e809fdffff           call 0x5523f0
// 005526e7  83c408               add esp, 8
// 005526ea  3bc6                 cmp eax, esi
// 005526ec  741a                 je 0x552708
// 005526ee  6a03                 push 3
// 005526f0  8d4c2424             lea ecx, [esp + 0x24]
// 005526f4  e897b9ffff           call 0x54e090
// 005526f9  6814a48500           push 0x85a414
// 005526fe  8d442424             lea eax, [esp + 0x24]
// 00552702  50                   push eax
// 00552703  e896e40d00           call 0x630b9e
// 00552708  8d4c2450             lea ecx, [esp + 0x50]
// 0055270c  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 00552714  ff15ace67700         call dword ptr [0x77e6ac]
// 0055271a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0055271e  5f                   pop edi
// 0055271f  5e                   pop esi
// 00552720  5d                   pop ebp
// 00552721  5b                   pop ebx
// 00552722  64890d00000000       mov dword ptr fs:[0], ecx
// 00552729  83c468               add esp, 0x68
// 0055272c  c20400               ret 4
// copied from an identical function in another client (function ??$read_footer@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@AAEXAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp