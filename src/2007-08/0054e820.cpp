// roc 2007-08 0054e820  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e820
//
// 0054e820  64a100000000         mov eax, dword ptr fs:[0]
// 0054e826  6aff                 push -1
// 0054e828  68c8277500           push 0x7527c8
// 0054e82d  50                   push eax
// 0054e82e  64892500000000       mov dword ptr fs:[0], esp
// 0054e835  83ec14               sub esp, 0x14
// 0054e838  53                   push ebx
// 0054e839  55                   push ebp
// 0054e83a  8be9                 mov ebp, ecx
// 0054e83c  8b4500               mov eax, dword ptr [ebp]
// 0054e83f  bb01000000           mov ebx, 1
// 0054e844  845824               test byte ptr [eax + 0x24], bl
// 0054e847  7424                 je 0x54e86d
// 0054e849  845c2430             test byte ptr [esp + 0x30], bl
// 0054e84d  741e                 je 0x54e86d
// 0054e84f  c7402400000000       mov dword ptr [eax + 0x24], 0
// 0054e856  8b4500               mov eax, dword ptr [ebp]
// 0054e859  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054e85c  53                   push ebx
// 0054e85d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0054e860  894820               mov dword ptr [eax + 0x20], ecx
// 0054e863  8b4d00               mov ecx, dword ptr [ebp]
// 0054e866  6a00                 push 0
// 0054e868  e8d3e10700           call 0x5cca40
// 0054e86d  8b4500               mov eax, dword ptr [ebp]
// 0054e870  b102                 mov cl, 2
// 0054e872  844824               test byte ptr [eax + 0x24], cl
// 0054e875  0f84f5000000         je 0x54e970
// 0054e87b  844c2430             test byte ptr [esp + 0x30], cl
// 0054e87f  0f84eb000000         je 0x54e970
// 0054e885  56                   push esi
// 0054e886  57                   push edi
// 0054e887  896c2420             mov dword ptr [esp + 0x20], ebp
// 0054e88b  885c2438             mov byte ptr [esp + 0x38], bl
// 0054e88f  8d4c2413             lea ecx, [esp + 0x13]
// 0054e893  8d5020               lea edx, [eax + 0x20]
// 0054e896  8d581c               lea ebx, [eax + 0x1c]
// 0054e899  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0054e8a1  894c2414             mov dword ptr [esp + 0x14], ecx
// 0054e8a5  8954241c             mov dword ptr [esp + 0x1c], edx
// 0054e8a9  895c2418             mov dword ptr [esp + 0x18], ebx
// 0054e8ad  eb05                 jmp 0x54e8b4
// 0054e8af  90                   nop 
// 0054e8b0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0054e8b4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054e8b8  8b00                 mov eax, dword ptr [eax]
// 0054e8ba  3903                 cmp dword ptr [ebx], eax
// 0054e8bc  7448                 je 0x54e906
// 0054e8be  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054e8c2  8b7500               mov esi, dword ptr [ebp]
// 0054e8c5  50                   push eax
// 0054e8c6  53                   push ebx
// 0054e8c7  51                   push ecx
// 0054e8c8  8d542420             lea edx, [esp + 0x20]
// 0054e8cc  52                   push edx
// 0054e8cd  8bce                 mov ecx, esi
// 0054e8cf  e8bce00700           call 0x5cc990
// 0054e8d4  a1a4a57b00           mov eax, dword ptr [0x7ba5a4]
// 0054e8d9  50                   push eax
// 0054e8da  8bce                 mov ecx, esi
// 0054e8dc  e84fe10700           call 0x5cca30
// 0054e8e1  6a00                 push 0
// 0054e8e3  53                   push ebx
// 0054e8e4  8d4c241c             lea ecx, [esp + 0x1c]
// 0054e8e8  51                   push ecx
// 0054e8e9  8bce                 mov ecx, esi
// 0054e8eb  8bf8                 mov edi, eax
// 0054e8ed  e8cee00700           call 0x5cc9c0
// 0054e8f2  57                   push edi
// 0054e8f3  e8e8df0700           call 0x5cc8e0
// 0054e8f8  83c404               add esp, 4
// 0054e8fb  3b3d84a57b00         cmp edi, dword ptr [0x7ba584]
// 0054e901  0f95442438           setne byte ptr [esp + 0x38]
// 0054e906  8b4500               mov eax, dword ptr [ebp]
// 0054e909  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054e90c  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0054e90f  2bf9                 sub edi, ecx
// 0054e911  33f6                 xor esi, esi
// 0054e913  85ff                 test edi, edi
// 0054e915  8bd9                 mov ebx, ecx
// 0054e917  7e22                 jle 0x54e93b
// 0054e919  8da42400000000       lea esp, [esp]
// 0054e920  8b542434             mov edx, dword ptr [esp + 0x34]
// 0054e924  8b0a                 mov ecx, dword ptr [edx]
// 0054e926  8bc7                 mov eax, edi
// 0054e928  2bc6                 sub eax, esi
// 0054e92a  50                   push eax
// 0054e92b  8d141e               lea edx, [esi + ebx]
// 0054e92e  52                   push edx
// 0054e92f  ff1500e67700         call dword ptr [0x77e600]
// 0054e935  03f0                 add esi, eax
// 0054e937  3bf7                 cmp esi, edi
// 0054e939  7ce5                 jl 0x54e920
// 0054e93b  8b4500               mov eax, dword ptr [ebp]
// 0054e93e  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054e941  8b5018               mov edx, dword ptr [eax + 0x18]
// 0054e944  8bd9                 mov ebx, ecx
// 0054e946  2bde                 sub ebx, esi
// 0054e948  03df                 add ebx, edi
// 0054e94a  03ca                 add ecx, edx
// 0054e94c  807c243800           cmp byte ptr [esp + 0x38], 0
// 0054e951  89581c               mov dword ptr [eax + 0x1c], ebx
// 0054e954  894820               mov dword ptr [eax + 0x20], ecx
// 0054e957  0f8553ffffff         jne 0x54e8b0
// 0054e95d  8d4c2420             lea ecx, [esp + 0x20]
// 0054e961  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0054e969  e852f3ffff           call 0x54dcc0
// 0054e96e  5f                   pop edi
// 0054e96f  5e                   pop esi
// 0054e970  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054e974  5d                   pop ebp
// 0054e975  5b                   pop ebx
// 0054e976  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e97d  83c420               add esp, 0x20
// 0054e980  c20800               ret 8
// copied from an identical function in another client (function ??$close@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAEXAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp