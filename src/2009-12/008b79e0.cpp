// roc 2009-12 008b79e0  unit: CXTPDockingPanePaintManager  size: 538 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b79e0
//
// 008b79e0  6aff                 push -1
// 008b79e2  6848349600           push 0x963448
// 008b79e7  64a100000000         mov eax, dword ptr fs:[0]
// 008b79ed  50                   push eax
// 008b79ee  83ec50               sub esp, 0x50
// 008b79f1  56                   push esi
// 008b79f2  57                   push edi
// 008b79f3  a10052b600           mov eax, dword ptr [0xb65200]
// 008b79f8  33c4                 xor eax, esp
// 008b79fa  50                   push eax
// 008b79fb  8d44245c             lea eax, [esp + 0x5c]
// 008b79ff  64a300000000         mov dword ptr fs:[0], eax
// 008b7a05  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008b7a09  85f6                 test esi, esi
// 008b7a0b  7504                 jne 0x8b7a11
// 008b7a0d  33c0                 xor eax, eax
// 008b7a0f  eb03                 jmp 0x8b7a14
// 008b7a11  8b4604               mov eax, dword ptr [esi + 4]
// 008b7a14  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 008b7a18  57                   push edi
// 008b7a19  50                   push eax
// 008b7a1a  8d4c2430             lea ecx, [esp + 0x30]
// 008b7a1e  e8dd3cf9ff           call 0x84b700
// 008b7a23  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008b7a27  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008b7a2a  c744246400000000     mov dword ptr [esp + 0x64], 0
// 008b7a32  3df1240000           cmp eax, 0x24f1
// 008b7a37  0f85d1000000         jne 0x8b7b0e
// 008b7a3d  8b442478             mov eax, dword ptr [esp + 0x78]
// 008b7a41  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008b7a45  83c0fc               add eax, -4
// 008b7a48  50                   push eax
// 008b7a49  83c1fc               add ecx, -4
// 008b7a4c  51                   push ecx
// 008b7a4d  8d542414             lea edx, [esp + 0x14]
// 008b7a51  52                   push edx
// 008b7a52  8bce                 mov ecx, esi
// 008b7a54  e8e9ccf3ff           call 0x7f4742
// 008b7a59  8b442478             mov eax, dword ptr [esp + 0x78]
// 008b7a5d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008b7a61  83c003               add eax, 3
// 008b7a64  83c103               add ecx, 3
// 008b7a67  50                   push eax
// 008b7a68  51                   push ecx
// 008b7a69  8bce                 mov ecx, esi
// 008b7a6b  e8ccccf3ff           call 0x7f473c
// 008b7a70  8b542478             mov edx, dword ptr [esp + 0x78]
// 008b7a74  8b442474             mov eax, dword ptr [esp + 0x74]
// 008b7a78  83c202               add edx, 2
// 008b7a7b  52                   push edx
// 008b7a7c  83c0fc               add eax, -4
// 008b7a7f  50                   push eax
// 008b7a80  8d4c2414             lea ecx, [esp + 0x14]
// 008b7a84  51                   push ecx
// 008b7a85  8bce                 mov ecx, esi
// 008b7a87  e8b6ccf3ff           call 0x7f4742
// 008b7a8c  8b542478             mov edx, dword ptr [esp + 0x78]
// 008b7a90  8b442474             mov eax, dword ptr [esp + 0x74]
// 008b7a94  83c2fb               add edx, -5
// 008b7a97  52                   push edx
// 008b7a98  83c003               add eax, 3
// 008b7a9b  50                   push eax
// 008b7a9c  8bce                 mov ecx, esi
// 008b7a9e  e899ccf3ff           call 0x7f473c
// 008b7aa3  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008b7aa7  8b542474             mov edx, dword ptr [esp + 0x74]
// 008b7aab  83c1fc               add ecx, -4
// 008b7aae  51                   push ecx
// 008b7aaf  83c2fd               add edx, -3
// 008b7ab2  52                   push edx
// 008b7ab3  8d442414             lea eax, [esp + 0x14]
// 008b7ab7  50                   push eax
// 008b7ab8  8bce                 mov ecx, esi
// 008b7aba  e883ccf3ff           call 0x7f4742
// 008b7abf  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008b7ac3  8b542474             mov edx, dword ptr [esp + 0x74]
// 008b7ac7  83c103               add ecx, 3
// 008b7aca  51                   push ecx
// 008b7acb  83c204               add edx, 4
// 008b7ace  52                   push edx
// 008b7acf  8bce                 mov ecx, esi
// 008b7ad1  e866ccf3ff           call 0x7f473c
// 008b7ad6  8b442478             mov eax, dword ptr [esp + 0x78]
// 008b7ada  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008b7ade  83c002               add eax, 2
// 008b7ae1  50                   push eax
// 008b7ae2  83c1fd               add ecx, -3
// 008b7ae5  51                   push ecx
// 008b7ae6  8d542414             lea edx, [esp + 0x14]
// 008b7aea  52                   push edx
// 008b7aeb  8bce                 mov ecx, esi
// 008b7aed  e850ccf3ff           call 0x7f4742
// 008b7af2  8b442478             mov eax, dword ptr [esp + 0x78]
// 008b7af6  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008b7afa  83c0fb               add eax, -5
// 008b7afd  83c104               add ecx, 4
// 008b7b00  50                   push eax
// 008b7b01  51                   push ecx
// 008b7b02  8bce                 mov ecx, esi
// 008b7b04  e833ccf3ff           call 0x7f473c
// 008b7b09  e9c7000000           jmp 0x8b7bd5
// 008b7b0e  3df0240000           cmp eax, 0x24f0
// 008b7b13  751f                 jne 0x8b7b34
// 008b7b15  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008b7b18  8b542478             mov edx, dword ptr [esp + 0x78]
// 008b7b1c  83e002               and eax, 2
// 008b7b1f  50                   push eax
// 008b7b20  8b442478             mov eax, dword ptr [esp + 0x78]
// 008b7b24  52                   push edx
// 008b7b25  50                   push eax
// 008b7b26  56                   push esi
// 008b7b27  e894dbffff           call 0x8b56c0
// 008b7b2c  83c410               add esp, 0x10
// 008b7b2f  e9a1000000           jmp 0x8b7bd5
// 008b7b34  3df2240000           cmp eax, 0x24f2
// 008b7b39  747b                 je 0x8b7bb6
// 008b7b3b  3df3240000           cmp eax, 0x24f3
// 008b7b40  7474                 je 0x8b7bb6
// 008b7b42  3df4240000           cmp eax, 0x24f4
// 008b7b47  0f8588000000         jne 0x8b7bd5
// 008b7b4d  85f6                 test esi, esi
// 008b7b4f  7504                 jne 0x8b7b55
// 008b7b51  33c0                 xor eax, eax
// 008b7b53  eb03                 jmp 0x8b7b58
// 008b7b55  8b4604               mov eax, dword ptr [esi + 4]
// 008b7b58  57                   push edi
// 008b7b59  50                   push eax
// 008b7b5a  8d4c241c             lea ecx, [esp + 0x1c]
// 008b7b5e  e85d3cf9ff           call 0x84b7c0
// 008b7b63  8b442474             mov eax, dword ptr [esp + 0x74]
// 008b7b67  8b542478             mov edx, dword ptr [esp + 0x78]
// 008b7b6b  8d48fc               lea ecx, [eax - 4]
// 008b7b6e  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008b7b72  8d4aff               lea ecx, [edx - 1]
// 008b7b75  83c202               add edx, 2
// 008b7b78  8d78ff               lea edi, [eax - 1]
// 008b7b7b  8944244c             mov dword ptr [esp + 0x4c], eax
// 008b7b7f  83c003               add eax, 3
// 008b7b82  89542448             mov dword ptr [esp + 0x48], edx
// 008b7b86  89542450             mov dword ptr [esp + 0x50], edx
// 008b7b8a  6a04                 push 4
// 008b7b8c  8d542440             lea edx, [esp + 0x40]
// 008b7b90  89442458             mov dword ptr [esp + 0x58], eax
// 008b7b94  8b4604               mov eax, dword ptr [esi + 4]
// 008b7b97  52                   push edx
// 008b7b98  50                   push eax
// 008b7b99  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008b7b9d  897c2450             mov dword ptr [esp + 0x50], edi
// 008b7ba1  894c2464             mov dword ptr [esp + 0x64], ecx
// 008b7ba5  ff1520b19800         call dword ptr [0x98b120]
// 008b7bab  8d4c2414             lea ecx, [esp + 0x14]
// 008b7baf  e89c3cf9ff           call 0x84b850
// 008b7bb4  eb1f                 jmp 0x8b7bd5
// 008b7bb6  8b542478             mov edx, dword ptr [esp + 0x78]
// 008b7bba  33c9                 xor ecx, ecx
// 008b7bbc  3df2240000           cmp eax, 0x24f2
// 008b7bc1  8b442474             mov eax, dword ptr [esp + 0x74]
// 008b7bc5  0f94c1               sete cl
// 008b7bc8  57                   push edi
// 008b7bc9  51                   push ecx
// 008b7bca  52                   push edx
// 008b7bcb  50                   push eax
// 008b7bcc  56                   push esi
// 008b7bcd  e84ee1ffff           call 0x8b5d20
// 008b7bd2  83c414               add esp, 0x14
// 008b7bd5  8d4c2428             lea ecx, [esp + 0x28]
// 008b7bd9  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008b7be1  e8aa3bf9ff           call 0x84b790
// 008b7be6  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008b7bea  64890d00000000       mov dword ptr fs:[0], ecx
// 008b7bf1  59                   pop ecx
// 008b7bf2  5f                   pop edi
// 008b7bf3  5e                   pop esi
// 008b7bf4  83c45c               add esp, 0x5c
// 008b7bf7  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCaptionButtonEntry@CXTPDockingPanePaintManager@@MAEXPAVCDC@@PAVCXTPDockingPaneCaptionButton@@VCPoint@@K@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPanePaintManager.cpp