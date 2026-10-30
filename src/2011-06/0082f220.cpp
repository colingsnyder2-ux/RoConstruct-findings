// roc 2011-06 0082f220  unit: CRobloxReportView  size: 785 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082f220
//
// 0082f220  6aff                 push -1
// 0082f222  685c3fa000           push 0xa03f5c
// 0082f227  64a100000000         mov eax, dword ptr fs:[0]
// 0082f22d  50                   push eax
// 0082f22e  81ec9c000000         sub esp, 0x9c
// 0082f234  53                   push ebx
// 0082f235  55                   push ebp
// 0082f236  56                   push esi
// 0082f237  57                   push edi
// 0082f238  a12058c900           mov eax, dword ptr [0xc95820]
// 0082f23d  33c4                 xor eax, esp
// 0082f23f  50                   push eax
// 0082f240  8d8424b0000000       lea eax, [esp + 0xb0]
// 0082f247  64a300000000         mov dword ptr fs:[0], eax
// 0082f24d  8bd9                 mov ebx, ecx
// 0082f24f  33ff                 xor edi, edi
// 0082f251  53                   push ebx
// 0082f252  8d4c2440             lea ecx, [esp + 0x40]
// 0082f256  897c241c             mov dword ptr [esp + 0x1c], edi
// 0082f25a  e801010300           call 0x85f360
// 0082f25f  8d4c241c             lea ecx, [esp + 0x1c]
// 0082f263  89bc24b8000000       mov dword ptr [esp + 0xb8], edi
// 0082f26a  ff15b42da400         call dword ptr [0xa42db4]
// 0082f270  8bcb                 mov ecx, ebx
// 0082f272  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0082f27a  e8cdb0fdff           call 0x80a34c
// 0082f27f  85c0                 test eax, eax
// 0082f281  7413                 je 0x82f296
// 0082f283  8d44241c             lea eax, [esp + 0x1c]
// 0082f287  50                   push eax
// 0082f288  8bcb                 mov ecx, ebx
// 0082f28a  e8bdb0fdff           call 0x80a34c
// 0082f28f  8bc8                 mov ecx, eax
// 0082f291  e8b0b3fdff           call 0x80a646
// 0082f296  689845ac00           push 0xac4598
// 0082f29b  8d4c2440             lea ecx, [esp + 0x40]
// 0082f29f  e86eb1fdff           call 0x80a412
// 0082f2a4  8d4c241c             lea ecx, [esp + 0x1c]
// 0082f2a8  ff15c82da400         call dword ptr [0xa42dc8]
// 0082f2ae  50                   push eax
// 0082f2af  68c9000000           push 0xc9
// 0082f2b4  8d4c2444             lea ecx, [esp + 0x44]
// 0082f2b8  e8edd41900           call 0x9cc7aa
// 0082f2bd  8bb424c4000000       mov esi, dword ptr [esp + 0xc4]
// 0082f2c4  8d4c2414             lea ecx, [esp + 0x14]
// 0082f2c8  51                   push ecx
// 0082f2c9  8b0e                 mov ecx, dword ptr [esi]
// 0082f2cb  e8d4d41900           call 0x9cc7a4
// 0082f2d0  8bc8                 mov ecx, eax
// 0082f2d2  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 0082f2da  ff15c82da400         call dword ptr [0xa42dc8]
// 0082f2e0  50                   push eax
// 0082f2e1  68ca000000           push 0xca
// 0082f2e6  8d4c2444             lea ecx, [esp + 0x44]
// 0082f2ea  e8bbd41900           call 0x9cc7aa
// 0082f2ef  8d4c2414             lea ecx, [esp + 0x14]
// 0082f2f3  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0082f2fb  ff15082ea400         call dword ptr [0xa42e08]
// 0082f301  8b0e                 mov ecx, dword ptr [esi]
// 0082f303  8d542420             lea edx, [esp + 0x20]
// 0082f307  52                   push edx
// 0082f308  e891d41900           call 0x9cc79e
// 0082f30d  8bc8                 mov ecx, eax
// 0082f30f  c68424b800000003     mov byte ptr [esp + 0xb8], 3
// 0082f317  ff15c82da400         call dword ptr [0xa42dc8]
// 0082f31d  50                   push eax
// 0082f31e  68cb000000           push 0xcb
// 0082f323  8d4c2444             lea ecx, [esp + 0x44]
// 0082f327  e87ed41900           call 0x9cc7aa
// 0082f32c  8d4c2420             lea ecx, [esp + 0x20]
// 0082f330  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0082f338  ff15082ea400         call dword ptr [0xa42e08]
// 0082f33e  6a05                 push 5
// 0082f340  8d4c2440             lea ecx, [esp + 0x40]
// 0082f344  e8fdaffdff           call 0x80a346
// 0082f349  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0082f34d  50                   push eax
// 0082f34e  ff152c1ba400         call dword ptr [0xa41b2c]
// 0082f354  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082f357  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0082f35a  8b5628               mov edx, dword ptr [esi + 0x28]
// 0082f35d  8d6e24               lea ebp, [esi + 0x24]
// 0082f360  894c2428             mov dword ptr [esp + 0x28], ecx
// 0082f364  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0082f367  89442430             mov dword ptr [esp + 0x30], eax
// 0082f36b  8b8360030000         mov eax, dword ptr [ebx + 0x360]
// 0082f371  8954242c             mov dword ptr [esp + 0x2c], edx
// 0082f375  8b5614               mov edx, dword ptr [esi + 0x14]
// 0082f378  894c2434             mov dword ptr [esp + 0x34], ecx
// 0082f37c  8b4830               mov ecx, dword ptr [eax + 0x30]
// 0082f37f  897830               mov dword ptr [eax + 0x30], edi
// 0082f382  8bbc24c0000000       mov edi, dword ptr [esp + 0xc0]
// 0082f389  89542414             mov dword ptr [esp + 0x14], edx
// 0082f38d  8b17                 mov edx, dword ptr [edi]
// 0082f38f  8b4224               mov eax, dword ptr [edx + 0x24]
// 0082f392  894c2424             mov dword ptr [esp + 0x24], ecx
// 0082f396  8bcf                 mov ecx, edi
// 0082f398  ffd0                 call eax
// 0082f39a  6a00                 push 0
// 0082f39c  6a00                 push 0
// 0082f39e  6a00                 push 0
// 0082f3a0  6a00                 push 0
// 0082f3a2  8bcf                 mov ecx, edi
// 0082f3a4  e8bbbbfdff           call 0x80af64
// 0082f3a9  8b4368               mov eax, dword ptr [ebx + 0x68]
// 0082f3ac  894614               mov dword ptr [esi + 0x14], eax
// 0082f3af  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0082f3b3  0f83be000000         jae 0x82f477
// 0082f3b9  8da42400000000       lea esp, [esp]
// 0082f3c0  8b13                 mov edx, dword ptr [ebx]
// 0082f3c2  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 0082f3c8  56                   push esi
// 0082f3c9  57                   push edi
// 0082f3ca  8bcb                 mov ecx, ebx
// 0082f3cc  ffd0                 call eax
// 0082f3ce  837e1000             cmp dword ptr [esi + 0x10], 0
// 0082f3d2  0f849f000000         je 0x82f477
// 0082f3d8  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0082f3db  51                   push ecx
// 0082f3dc  8d542420             lea edx, [esp + 0x20]
// 0082f3e0  681c91a600           push 0xa6911c
// 0082f3e5  52                   push edx
// 0082f3e6  ff15bc2da400         call dword ptr [0xa42dbc]
// 0082f3ec  83c40c               add esp, 0xc
// 0082f3ef  8d4c241c             lea ecx, [esp + 0x1c]
// 0082f3f3  ff15c82da400         call dword ptr [0xa42dc8]
// 0082f3f9  50                   push eax
// 0082f3fa  68cc000000           push 0xcc
// 0082f3ff  8d4c2444             lea ecx, [esp + 0x44]
// 0082f403  e8a2d31900           call 0x9cc7aa
// 0082f408  8b4708               mov eax, dword ptr [edi + 8]
// 0082f40b  6a0a                 push 0xa
// 0082f40d  50                   push eax
// 0082f40e  ff157401a400         call dword ptr [0xa40174]
// 0082f414  8b4f08               mov ecx, dword ptr [edi + 8]
// 0082f417  6a08                 push 8
// 0082f419  51                   push ecx
// 0082f41a  89442440             mov dword ptr [esp + 0x40], eax
// 0082f41e  ff157401a400         call dword ptr [0xa40174]
// 0082f424  8b542438             mov edx, dword ptr [esp + 0x38]
// 0082f428  52                   push edx
// 0082f429  50                   push eax
// 0082f42a  6a00                 push 0
// 0082f42c  6a00                 push 0
// 0082f42e  55                   push ebp
// 0082f42f  ff15c81ba400         call dword ptr [0xa41bc8]
// 0082f435  8b4708               mov eax, dword ptr [edi + 8]
// 0082f438  6a02                 push 2
// 0082f43a  55                   push ebp
// 0082f43b  50                   push eax
// 0082f43c  ff15d000a400         call dword ptr [0xa400d0]
// 0082f442  8b13                 mov edx, dword ptr [ebx]
// 0082f444  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0082f44a  56                   push esi
// 0082f44b  57                   push edi
// 0082f44c  8bcb                 mov ecx, ebx
// 0082f44e  ffd0                 call eax
// 0082f450  ff4614               inc dword ptr [esi + 0x14]
// 0082f453  6a00                 push 0
// 0082f455  6a00                 push 0
// 0082f457  e884fe0200           call 0x85f2e0
// 0082f45c  85c0                 test eax, eax
// 0082f45e  740f                 je 0x82f46f
// 0082f460  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082f464  394e14               cmp dword ptr [esi + 0x14], ecx
// 0082f467  0f8253ffffff         jb 0x82f3c0
// 0082f46d  eb08                 jmp 0x82f477
// 0082f46f  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0082f477  8d4c243c             lea ecx, [esp + 0x3c]
// 0082f47b  e85cacfdff           call 0x80a0dc
// 0082f480  837c241800           cmp dword ptr [esp + 0x18], 0
// 0082f485  751a                 jne 0x82f4a1
// 0082f487  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082f48b  394614               cmp dword ptr [esi + 0x14], eax
// 0082f48e  7407                 je 0x82f497
// 0082f490  3dffff0000           cmp eax, 0xffff
// 0082f495  750a                 jne 0x82f4a1
// 0082f497  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0082f49f  eb08                 jmp 0x82f4a9
// 0082f4a1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0082f4a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0082f4ad  895610               mov dword ptr [esi + 0x10], edx
// 0082f4b0  8b07                 mov eax, dword ptr [edi]
// 0082f4b2  8b5028               mov edx, dword ptr [eax + 0x28]
// 0082f4b5  6aff                 push -1
// 0082f4b7  8bcf                 mov ecx, edi
// 0082f4b9  ffd2                 call edx
// 0082f4bb  8b8360030000         mov eax, dword ptr [ebx + 0x360]
// 0082f4c1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0082f4c5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082f4c9  894830               mov dword ptr [eax + 0x30], ecx
// 0082f4cc  8b442428             mov eax, dword ptr [esp + 0x28]
// 0082f4d0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0082f4d4  894500               mov dword ptr [ebp], eax
// 0082f4d7  8b442434             mov eax, dword ptr [esp + 0x34]
// 0082f4db  895614               mov dword ptr [esi + 0x14], edx
// 0082f4de  8b542430             mov edx, dword ptr [esp + 0x30]
// 0082f4e2  894d04               mov dword ptr [ebp + 4], ecx
// 0082f4e5  895508               mov dword ptr [ebp + 8], edx
// 0082f4e8  8d4c241c             lea ecx, [esp + 0x1c]
// 0082f4ec  89450c               mov dword ptr [ebp + 0xc], eax
// 0082f4ef  ff15082ea400         call dword ptr [0xa42e08]
// 0082f4f5  8d4c243c             lea ecx, [esp + 0x3c]
// 0082f4f9  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 0082f504  c744243ca440ac00     mov dword ptr [esp + 0x3c], 0xac40a4
// 0082f50c  e87db4fdff           call 0x80a98e
// 0082f511  8b442418             mov eax, dword ptr [esp + 0x18]
// 0082f515  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0082f51c  64890d00000000       mov dword ptr fs:[0], ecx
// 0082f523  59                   pop ecx
// 0082f524  5f                   pop edi
// 0082f525  5e                   pop esi
// 0082f526  5d                   pop ebp
// 0082f527  5b                   pop ebx
// 0082f528  81c4a8000000         add esp, 0xa8
// 0082f52e  c20800               ret 8
// copied from an identical function in another client (function ?PaginateTo@CXTPReportView@@MAEHPAVCDC@@PAUCPrintInfo@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportView.cpp