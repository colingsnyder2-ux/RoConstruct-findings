// roc 2007-03 0054d610  unit: seg_00540000  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054d610
//
// 0054d610  64a100000000         mov eax, dword ptr fs:[0]
// 0054d616  6aff                 push -1
// 0054d618  6818347500           push 0x753418
// 0054d61d  50                   push eax
// 0054d61e  64892500000000       mov dword ptr fs:[0], esp
// 0054d625  83ec14               sub esp, 0x14
// 0054d628  53                   push ebx
// 0054d629  55                   push ebp
// 0054d62a  8be9                 mov ebp, ecx
// 0054d62c  8b4500               mov eax, dword ptr [ebp]
// 0054d62f  bb01000000           mov ebx, 1
// 0054d634  845824               test byte ptr [eax + 0x24], bl
// 0054d637  7424                 je 0x54d65d
// 0054d639  845c2430             test byte ptr [esp + 0x30], bl
// 0054d63d  741e                 je 0x54d65d
// 0054d63f  c7402400000000       mov dword ptr [eax + 0x24], 0
// 0054d646  8b4500               mov eax, dword ptr [ebp]
// 0054d649  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054d64c  53                   push ebx
// 0054d64d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0054d650  894820               mov dword ptr [eax + 0x20], ecx
// 0054d653  8b4d00               mov ecx, dword ptr [ebp]
// 0054d656  6a00                 push 0
// 0054d658  e8d3a10700           call 0x5c7830
// 0054d65d  8b4500               mov eax, dword ptr [ebp]
// 0054d660  b102                 mov cl, 2
// 0054d662  844824               test byte ptr [eax + 0x24], cl
// 0054d665  0f84f5000000         je 0x54d760
// 0054d66b  844c2430             test byte ptr [esp + 0x30], cl
// 0054d66f  0f84eb000000         je 0x54d760
// 0054d675  56                   push esi
// 0054d676  57                   push edi
// 0054d677  896c2420             mov dword ptr [esp + 0x20], ebp
// 0054d67b  885c2438             mov byte ptr [esp + 0x38], bl
// 0054d67f  8d4c2413             lea ecx, [esp + 0x13]
// 0054d683  8d5020               lea edx, [eax + 0x20]
// 0054d686  8d581c               lea ebx, [eax + 0x1c]
// 0054d689  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0054d691  894c2414             mov dword ptr [esp + 0x14], ecx
// 0054d695  8954241c             mov dword ptr [esp + 0x1c], edx
// 0054d699  895c2418             mov dword ptr [esp + 0x18], ebx
// 0054d69d  eb05                 jmp 0x54d6a4
// 0054d69f  90                   nop 
// 0054d6a0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0054d6a4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054d6a8  8b00                 mov eax, dword ptr [eax]
// 0054d6aa  3903                 cmp dword ptr [ebx], eax
// 0054d6ac  7448                 je 0x54d6f6
// 0054d6ae  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054d6b2  8b7500               mov esi, dword ptr [ebp]
// 0054d6b5  50                   push eax
// 0054d6b6  53                   push ebx
// 0054d6b7  51                   push ecx
// 0054d6b8  8d542420             lea edx, [esp + 0x20]
// 0054d6bc  52                   push edx
// 0054d6bd  8bce                 mov ecx, esi
// 0054d6bf  e8bca00700           call 0x5c7780
// 0054d6c4  a144a67b00           mov eax, dword ptr [0x7ba644]
// 0054d6c9  50                   push eax
// 0054d6ca  8bce                 mov ecx, esi
// 0054d6cc  e84fa10700           call 0x5c7820
// 0054d6d1  6a00                 push 0
// 0054d6d3  53                   push ebx
// 0054d6d4  8d4c241c             lea ecx, [esp + 0x1c]
// 0054d6d8  51                   push ecx
// 0054d6d9  8bce                 mov ecx, esi
// 0054d6db  8bf8                 mov edi, eax
// 0054d6dd  e8cea00700           call 0x5c77b0
// 0054d6e2  57                   push edi
// 0054d6e3  e8e89f0700           call 0x5c76d0
// 0054d6e8  83c404               add esp, 4
// 0054d6eb  3b3d24a67b00         cmp edi, dword ptr [0x7ba624]
// 0054d6f1  0f95442438           setne byte ptr [esp + 0x38]
// 0054d6f6  8b4500               mov eax, dword ptr [ebp]
// 0054d6f9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054d6fc  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0054d6ff  2bf9                 sub edi, ecx
// 0054d701  33f6                 xor esi, esi
// 0054d703  85ff                 test edi, edi
// 0054d705  8bd9                 mov ebx, ecx
// 0054d707  7e22                 jle 0x54d72b
// 0054d709  8da42400000000       lea esp, [esp]
// 0054d710  8b542434             mov edx, dword ptr [esp + 0x34]
// 0054d714  8b0a                 mov ecx, dword ptr [edx]
// 0054d716  8bc7                 mov eax, edi
// 0054d718  2bc6                 sub eax, esi
// 0054d71a  50                   push eax
// 0054d71b  8d141e               lea edx, [esi + ebx]
// 0054d71e  52                   push edx
// 0054d71f  ff1550e77700         call dword ptr [0x77e750]
// 0054d725  03f0                 add esi, eax
// 0054d727  3bf7                 cmp esi, edi
// 0054d729  7ce5                 jl 0x54d710
// 0054d72b  8b4500               mov eax, dword ptr [ebp]
// 0054d72e  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054d731  8b5018               mov edx, dword ptr [eax + 0x18]
// 0054d734  8bd9                 mov ebx, ecx
// 0054d736  2bde                 sub ebx, esi
// 0054d738  03df                 add ebx, edi
// 0054d73a  03ca                 add ecx, edx
// 0054d73c  807c243800           cmp byte ptr [esp + 0x38], 0
// 0054d741  89581c               mov dword ptr [eax + 0x1c], ebx
// 0054d744  894820               mov dword ptr [eax + 0x20], ecx
// 0054d747  0f8553ffffff         jne 0x54d6a0
// 0054d74d  8d4c2420             lea ecx, [esp + 0x20]
// 0054d751  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0054d759  e8a2f3ffff           call 0x54cb00
// 0054d75e  5f                   pop edi
// 0054d75f  5e                   pop esi
// 0054d760  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054d764  5d                   pop ebp
// 0054d765  5b                   pop ebx
// 0054d766  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d76d  83c420               add esp, 0x20
// 0054d770  c20800               ret 8
// copied from an identical function in another client (function ??$close@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAEXAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp