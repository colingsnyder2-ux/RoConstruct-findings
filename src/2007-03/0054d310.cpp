// roc 2007-03 0054d310  unit: seg_00540000  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054d310
//
// 0054d310  64a100000000         mov eax, dword ptr fs:[0]
// 0054d316  6aff                 push -1
// 0054d318  68f8337500           push 0x7533f8
// 0054d31d  50                   push eax
// 0054d31e  64892500000000       mov dword ptr fs:[0], esp
// 0054d325  83ec14               sub esp, 0x14
// 0054d328  53                   push ebx
// 0054d329  8a5c242c             mov bl, byte ptr [esp + 0x2c]
// 0054d32d  55                   push ebp
// 0054d32e  8be9                 mov ebp, ecx
// 0054d330  8b4500               mov eax, dword ptr [ebp]
// 0054d333  f6402401             test byte ptr [eax + 0x24], 1
// 0054d337  7424                 je 0x54d35d
// 0054d339  f6c301               test bl, 1
// 0054d33c  741f                 je 0x54d35d
// 0054d33e  c7402400000000       mov dword ptr [eax + 0x24], 0
// 0054d345  8b4500               mov eax, dword ptr [ebp]
// 0054d348  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054d34b  6a01                 push 1
// 0054d34d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0054d350  894820               mov dword ptr [eax + 0x20], ecx
// 0054d353  8b4d00               mov ecx, dword ptr [ebp]
// 0054d356  6a01                 push 1
// 0054d358  e8d3a40700           call 0x5c7830
// 0054d35d  8b4500               mov eax, dword ptr [ebp]
// 0054d360  f6402402             test byte ptr [eax + 0x24], 2
// 0054d364  0f84f6000000         je 0x54d460
// 0054d36a  f6c302               test bl, 2
// 0054d36d  0f84ed000000         je 0x54d460
// 0054d373  56                   push esi
// 0054d374  57                   push edi
// 0054d375  896c2420             mov dword ptr [esp + 0x20], ebp
// 0054d379  8d4c2413             lea ecx, [esp + 0x13]
// 0054d37d  8d5020               lea edx, [eax + 0x20]
// 0054d380  8d581c               lea ebx, [eax + 0x1c]
// 0054d383  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0054d38b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0054d38f  c644243801           mov byte ptr [esp + 0x38], 1
// 0054d394  8954241c             mov dword ptr [esp + 0x1c], edx
// 0054d398  895c2418             mov dword ptr [esp + 0x18], ebx
// 0054d39c  eb06                 jmp 0x54d3a4
// 0054d39e  8bff                 mov edi, edi
// 0054d3a0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0054d3a4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054d3a8  8b00                 mov eax, dword ptr [eax]
// 0054d3aa  3903                 cmp dword ptr [ebx], eax
// 0054d3ac  7448                 je 0x54d3f6
// 0054d3ae  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054d3b2  8b7500               mov esi, dword ptr [ebp]
// 0054d3b5  50                   push eax
// 0054d3b6  53                   push ebx
// 0054d3b7  51                   push ecx
// 0054d3b8  8d542420             lea edx, [esp + 0x20]
// 0054d3bc  52                   push edx
// 0054d3bd  8bce                 mov ecx, esi
// 0054d3bf  e8bca30700           call 0x5c7780
// 0054d3c4  a13ca67b00           mov eax, dword ptr [0x7ba63c]
// 0054d3c9  50                   push eax
// 0054d3ca  8bce                 mov ecx, esi
// 0054d3cc  e83fa40700           call 0x5c7810
// 0054d3d1  6a01                 push 1
// 0054d3d3  53                   push ebx
// 0054d3d4  8d4c241c             lea ecx, [esp + 0x1c]
// 0054d3d8  51                   push ecx
// 0054d3d9  8bce                 mov ecx, esi
// 0054d3db  8bf8                 mov edi, eax
// 0054d3dd  e8cea30700           call 0x5c77b0
// 0054d3e2  57                   push edi
// 0054d3e3  e8e8a20700           call 0x5c76d0
// 0054d3e8  83c404               add esp, 4
// 0054d3eb  3b3d24a67b00         cmp edi, dword ptr [0x7ba624]
// 0054d3f1  0f95442438           setne byte ptr [esp + 0x38]
// 0054d3f6  8b4500               mov eax, dword ptr [ebp]
// 0054d3f9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054d3fc  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0054d3ff  2bf9                 sub edi, ecx
// 0054d401  33f6                 xor esi, esi
// 0054d403  85ff                 test edi, edi
// 0054d405  8bd9                 mov ebx, ecx
// 0054d407  7e22                 jle 0x54d42b
// 0054d409  8da42400000000       lea esp, [esp]
// 0054d410  8b542434             mov edx, dword ptr [esp + 0x34]
// 0054d414  8b0a                 mov ecx, dword ptr [edx]
// 0054d416  8bc7                 mov eax, edi
// 0054d418  2bc6                 sub eax, esi
// 0054d41a  50                   push eax
// 0054d41b  8d141e               lea edx, [esi + ebx]
// 0054d41e  52                   push edx
// 0054d41f  ff1550e77700         call dword ptr [0x77e750]
// 0054d425  03f0                 add esi, eax
// 0054d427  3bf7                 cmp esi, edi
// 0054d429  7ce5                 jl 0x54d410
// 0054d42b  8b4500               mov eax, dword ptr [ebp]
// 0054d42e  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054d431  8b5018               mov edx, dword ptr [eax + 0x18]
// 0054d434  8bd9                 mov ebx, ecx
// 0054d436  2bde                 sub ebx, esi
// 0054d438  03df                 add ebx, edi
// 0054d43a  03ca                 add ecx, edx
// 0054d43c  807c243800           cmp byte ptr [esp + 0x38], 0
// 0054d441  89581c               mov dword ptr [eax + 0x1c], ebx
// 0054d444  894820               mov dword ptr [eax + 0x20], ecx
// 0054d447  0f8553ffffff         jne 0x54d3a0
// 0054d44d  8d4c2420             lea ecx, [esp + 0x20]
// 0054d451  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0054d459  e822f4ffff           call 0x54c880
// 0054d45e  5f                   pop edi
// 0054d45f  5e                   pop esi
// 0054d460  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054d464  5d                   pop ebp
// 0054d465  5b                   pop ebx
// 0054d466  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d46d  83c420               add esp, 0x20
// 0054d470  c20800               ret 8
// copied from an identical function in another client (function ??$close@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$symmetric_filter@V?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAEXAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_916365a4f87a380b.cpp