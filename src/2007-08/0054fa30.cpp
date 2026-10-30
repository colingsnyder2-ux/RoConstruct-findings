// roc 2007-08 0054fa30  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054fa30
//
// 0054fa30  64a100000000         mov eax, dword ptr fs:[0]
// 0054fa36  6aff                 push -1
// 0054fa38  68a8287500           push 0x7528a8
// 0054fa3d  50                   push eax
// 0054fa3e  64892500000000       mov dword ptr fs:[0], esp
// 0054fa45  83ec14               sub esp, 0x14
// 0054fa48  53                   push ebx
// 0054fa49  8a5c242c             mov bl, byte ptr [esp + 0x2c]
// 0054fa4d  55                   push ebp
// 0054fa4e  8be9                 mov ebp, ecx
// 0054fa50  8b4500               mov eax, dword ptr [ebp]
// 0054fa53  f6402401             test byte ptr [eax + 0x24], 1
// 0054fa57  7424                 je 0x54fa7d
// 0054fa59  f6c301               test bl, 1
// 0054fa5c  741f                 je 0x54fa7d
// 0054fa5e  c7402400000000       mov dword ptr [eax + 0x24], 0
// 0054fa65  8b4500               mov eax, dword ptr [ebp]
// 0054fa68  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054fa6b  6a01                 push 1
// 0054fa6d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0054fa70  894820               mov dword ptr [eax + 0x20], ecx
// 0054fa73  8b4d00               mov ecx, dword ptr [ebp]
// 0054fa76  6a01                 push 1
// 0054fa78  e8c3cf0700           call 0x5cca40
// 0054fa7d  8b4500               mov eax, dword ptr [ebp]
// 0054fa80  f6402402             test byte ptr [eax + 0x24], 2
// 0054fa84  0f84f6000000         je 0x54fb80
// 0054fa8a  f6c302               test bl, 2
// 0054fa8d  0f84ed000000         je 0x54fb80
// 0054fa93  56                   push esi
// 0054fa94  57                   push edi
// 0054fa95  896c2420             mov dword ptr [esp + 0x20], ebp
// 0054fa99  8d4c2413             lea ecx, [esp + 0x13]
// 0054fa9d  8d5020               lea edx, [eax + 0x20]
// 0054faa0  8d581c               lea ebx, [eax + 0x1c]
// 0054faa3  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0054faab  894c2414             mov dword ptr [esp + 0x14], ecx
// 0054faaf  c644243801           mov byte ptr [esp + 0x38], 1
// 0054fab4  8954241c             mov dword ptr [esp + 0x1c], edx
// 0054fab8  895c2418             mov dword ptr [esp + 0x18], ebx
// 0054fabc  eb06                 jmp 0x54fac4
// 0054fabe  8bff                 mov edi, edi
// 0054fac0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0054fac4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054fac8  8b00                 mov eax, dword ptr [eax]
// 0054faca  3903                 cmp dword ptr [ebx], eax
// 0054facc  7448                 je 0x54fb16
// 0054face  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054fad2  8b7500               mov esi, dword ptr [ebp]
// 0054fad5  50                   push eax
// 0054fad6  53                   push ebx
// 0054fad7  51                   push ecx
// 0054fad8  8d542420             lea edx, [esp + 0x20]
// 0054fadc  52                   push edx
// 0054fadd  8bce                 mov ecx, esi
// 0054fadf  e8acce0700           call 0x5cc990
// 0054fae4  a19ca57b00           mov eax, dword ptr [0x7ba59c]
// 0054fae9  50                   push eax
// 0054faea  8bce                 mov ecx, esi
// 0054faec  e82fcf0700           call 0x5cca20
// 0054faf1  6a01                 push 1
// 0054faf3  53                   push ebx
// 0054faf4  8d4c241c             lea ecx, [esp + 0x1c]
// 0054faf8  51                   push ecx
// 0054faf9  8bce                 mov ecx, esi
// 0054fafb  8bf8                 mov edi, eax
// 0054fafd  e8bece0700           call 0x5cc9c0
// 0054fb02  57                   push edi
// 0054fb03  e8d8cd0700           call 0x5cc8e0
// 0054fb08  83c404               add esp, 4
// 0054fb0b  3b3d84a57b00         cmp edi, dword ptr [0x7ba584]
// 0054fb11  0f95442438           setne byte ptr [esp + 0x38]
// 0054fb16  8b4500               mov eax, dword ptr [ebp]
// 0054fb19  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054fb1c  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0054fb1f  2bf9                 sub edi, ecx
// 0054fb21  33f6                 xor esi, esi
// 0054fb23  85ff                 test edi, edi
// 0054fb25  8bd9                 mov ebx, ecx
// 0054fb27  7e22                 jle 0x54fb4b
// 0054fb29  8da42400000000       lea esp, [esp]
// 0054fb30  8b542434             mov edx, dword ptr [esp + 0x34]
// 0054fb34  8b0a                 mov ecx, dword ptr [edx]
// 0054fb36  8bc7                 mov eax, edi
// 0054fb38  2bc6                 sub eax, esi
// 0054fb3a  50                   push eax
// 0054fb3b  8d141e               lea edx, [esi + ebx]
// 0054fb3e  52                   push edx
// 0054fb3f  ff1500e67700         call dword ptr [0x77e600]
// 0054fb45  03f0                 add esi, eax
// 0054fb47  3bf7                 cmp esi, edi
// 0054fb49  7ce5                 jl 0x54fb30
// 0054fb4b  8b4500               mov eax, dword ptr [ebp]
// 0054fb4e  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054fb51  8b5018               mov edx, dword ptr [eax + 0x18]
// 0054fb54  8bd9                 mov ebx, ecx
// 0054fb56  2bde                 sub ebx, esi
// 0054fb58  03df                 add ebx, edi
// 0054fb5a  03ca                 add ecx, edx
// 0054fb5c  807c243800           cmp byte ptr [esp + 0x38], 0
// 0054fb61  89581c               mov dword ptr [eax + 0x1c], ebx
// 0054fb64  894820               mov dword ptr [eax + 0x20], ecx
// 0054fb67  0f8553ffffff         jne 0x54fac0
// 0054fb6d  8d4c2420             lea ecx, [esp + 0x20]
// 0054fb71  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0054fb79  e8b2f9ffff           call 0x54f530
// 0054fb7e  5f                   pop edi
// 0054fb7f  5e                   pop esi
// 0054fb80  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054fb84  5d                   pop ebp
// 0054fb85  5b                   pop ebx
// 0054fb86  64890d00000000       mov dword ptr fs:[0], ecx
// 0054fb8d  83c420               add esp, 0x20
// 0054fb90  c20800               ret 8
// copied from an identical function in another client (function ??$close@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$symmetric_filter@V?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAEXAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_916365a4f87a380b.cpp