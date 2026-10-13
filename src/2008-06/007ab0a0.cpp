// roc 2008-06 007ab0a0  unit: RBX::RenderNew::RenderScene  size: 1919 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ab0a0
//
// 007ab0a0  6aff                 push -1
// 007ab0a2  6896d77e00           push 0x7ed796
// 007ab0a7  64a100000000         mov eax, dword ptr fs:[0]
// 007ab0ad  50                   push eax
// 007ab0ae  64892500000000       mov dword ptr fs:[0], esp
// 007ab0b5  81ec10030000         sub esp, 0x310
// 007ab0bb  53                   push ebx
// 007ab0bc  55                   push ebp
// 007ab0bd  56                   push esi
// 007ab0be  57                   push edi
// 007ab0bf  8bbc2430030000       mov edi, dword ptr [esp + 0x330]
// 007ab0c6  8be9                 mov ebp, ecx
// 007ab0c8  8b8c2434030000       mov ecx, dword ptr [esp + 0x334]
// 007ab0cf  8d842460020000       lea eax, [esp + 0x260]
// 007ab0d6  33db                 xor ebx, ebx
// 007ab0d8  895c2428             mov dword ptr [esp + 0x28], ebx
// 007ab0dc  8b7708               mov esi, dword ptr [edi + 8]
// 007ab0df  50                   push eax
// 007ab0e0  896c2434             mov dword ptr [esp + 0x34], ebp
// 007ab0e4  e8c756d6ff           call 0x5107b0
// 007ab0e9  8a85f4020000         mov al, byte ptr [ebp + 0x2f4]
// 007ab0ef  8b4f04               mov ecx, dword ptr [edi + 4]
// 007ab0f2  84c0                 test al, al
// 007ab0f4  7444                 je 0x7ab13a
// 007ab0f6  8b11                 mov edx, dword ptr [ecx]
// 007ab0f8  8b8268020000         mov eax, dword ptr [edx + 0x268]
// 007ab0fe  6a12                 push 0x12
// 007ab100  ffd0                 call eax
// 007ab102  d98528030000         fld dword ptr [ebp + 0x328]
// 007ab108  d9852c030000         fld dword ptr [ebp + 0x32c]
// 007ab10e  8b4f04               mov ecx, dword ptr [edi + 4]
// 007ab111  d98530030000         fld dword ptr [ebp + 0x330]
// 007ab117  8d44245c             lea eax, [esp + 0x5c]
// 007ab11b  d9ca                 fxch st(2)
// 007ab11d  50                   push eax
// 007ab11e  d95c2460             fstp dword ptr [esp + 0x60]
// 007ab122  d95c2464             fstp dword ptr [esp + 0x64]
// 007ab126  d95c2468             fstp dword ptr [esp + 0x68]
// 007ab12a  d9e8                 fld1 
// 007ab12c  d95c246c             fstp dword ptr [esp + 0x6c]
// 007ab130  8b11                 mov edx, dword ptr [ecx]
// 007ab132  8b9278020000         mov edx, dword ptr [edx + 0x278]
// 007ab138  eb0a                 jmp 0x7ab144
// 007ab13a  8b01                 mov eax, dword ptr [ecx]
// 007ab13c  8b9068020000         mov edx, dword ptr [eax + 0x268]
// 007ab142  6a00                 push 0
// 007ab144  ffd2                 call edx
// 007ab146  d9e8                 fld1 
// 007ab148  d99c2400010000       fstp dword ptr [esp + 0x100]
// 007ab14f  8d842460020000       lea eax, [esp + 0x260]
// 007ab156  d9ee                 fldz 
// 007ab158  50                   push eax
// 007ab159  d9942408010000       fst dword ptr [esp + 0x108]
// 007ab160  8d8c2404010000       lea ecx, [esp + 0x104]
// 007ab167  d994240c010000       fst dword ptr [esp + 0x10c]
// 007ab16e  d99c2410010000       fstp dword ptr [esp + 0x110]
// 007ab175  ff15784c8000         call dword ptr [0x804c78]
// 007ab17b  8d8c2400010000       lea ecx, [esp + 0x100]
// 007ab182  51                   push ecx
// 007ab183  8bce                 mov ecx, esi
// 007ab185  ff15b4438000         call dword ptr [0x8043b4]
// 007ab18b  d984248c020000       fld dword ptr [esp + 0x28c]
// 007ab192  83ec0c               sub esp, 0xc
// 007ab195  d95c2408             fstp dword ptr [esp + 8]
// 007ab199  8bce                 mov ecx, esi
// 007ab19b  d9842494020000       fld dword ptr [esp + 0x294]
// 007ab1a2  d95c2404             fstp dword ptr [esp + 4]
// 007ab1a6  d9842490020000       fld dword ptr [esp + 0x290]
// 007ab1ad  d91c24               fstp dword ptr [esp]
// 007ab1b0  ff15a44e8000         call dword ptr [0x804ea4]
// 007ab1b6  8b4f08               mov ecx, dword ptr [edi + 8]
// 007ab1b9  8b11                 mov edx, dword ptr [ecx]
// 007ab1bb  8bb42434030000       mov esi, dword ptr [esp + 0x334]
// 007ab1c2  d9460c               fld dword ptr [esi + 0xc]
// 007ab1c5  8b821c010000         mov eax, dword ptr [edx + 0x11c]
// 007ab1cb  51                   push ecx
// 007ab1cc  d91c24               fstp dword ptr [esp]
// 007ab1cf  ffd0                 call eax
// 007ab1d1  8b4f08               mov ecx, dword ptr [edi + 8]
// 007ab1d4  d94610               fld dword ptr [esi + 0x10]
// 007ab1d7  8b11                 mov edx, dword ptr [ecx]
// 007ab1d9  8b8224010000         mov eax, dword ptr [edx + 0x124]
// 007ab1df  51                   push ecx
// 007ab1e0  d91c24               fstp dword ptr [esp]
// 007ab1e3  ffd0                 call eax
// 007ab1e5  d94604               fld dword ptr [esi + 4]
// 007ab1e8  8b4f08               mov ecx, dword ptr [edi + 8]
// 007ab1eb  d95c2428             fstp dword ptr [esp + 0x28]
// 007ab1ef  8b11                 mov edx, dword ptr [ecx]
// 007ab1f1  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 007ab1f7  8d442428             lea eax, [esp + 0x28]
// 007ab1fb  50                   push eax
// 007ab1fc  ffd2                 call edx
// 007ab1fe  8d8c2430020000       lea ecx, [esp + 0x230]
// 007ab205  ff157c4e8000         call dword ptr [0x804e7c]
// 007ab20b  8d8c2430020000       lea ecx, [esp + 0x230]
// 007ab212  c784242803000000000000 mov dword ptr [esp + 0x328], 0
// 007ab21d  ff15804e8000         call dword ptr [0x804e80]
// 007ab223  83bd6802000000       cmp dword ptr [ebp + 0x268], 0
// 007ab22a  0f859c000000         jne 0x7ab2cc
// 007ab230  6848020000           push 0x248
// 007ab235  e8e656efff           call 0x6a0920
// 007ab23a  8bf0                 mov esi, eax
// 007ab23c  83c404               add esp, 4
// 007ab23f  8974241c             mov dword ptr [esp + 0x1c], esi
// 007ab243  c684242803000001     mov byte ptr [esp + 0x328], 1
// 007ab24b  85f6                 test esi, esi
// 007ab24d  7438                 je 0x7ab287
// 007ab24f  6834f58400           push 0x84f534
// 007ab254  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 007ab25b  ff1558248000         call dword ptr [0x802458]
// 007ab261  8b4704               mov eax, dword ptr [edi + 4]
// 007ab264  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 007ab26b  51                   push ecx
// 007ab26c  bb01000000           mov ebx, 1
// 007ab271  50                   push eax
// 007ab272  8bce                 mov ecx, esi
// 007ab274  c684243003000002     mov byte ptr [esp + 0x330], 2
// 007ab27c  895c2430             mov dword ptr [esp + 0x30], ebx
// 007ab280  e8db8eecff           call 0x674160
// 007ab285  eb02                 jmp 0x7ab289
// 007ab287  33c0                 xor eax, eax
// 007ab289  898568020000         mov dword ptr [ebp + 0x268], eax
// 007ab28f  c784242803000000000000 mov dword ptr [esp + 0x328], 0
// 007ab29a  f6c301               test bl, 1
// 007ab29d  740d                 je 0x7ab2ac
// 007ab29f  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 007ab2a6  ff1568248000         call dword ptr [0x802468]
// 007ab2ac  8b4f04               mov ecx, dword ptr [edi + 4]
// 007ab2af  8b11                 mov edx, dword ptr [ecx]
// 007ab2b1  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 007ab2b7  ffd0                 call eax
// 007ab2b9  8b8d68020000         mov ecx, dword ptr [ebp + 0x268]
// 007ab2bf  8b10                 mov edx, dword ptr [eax]
// 007ab2c1  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 007ab2c7  51                   push ecx
// 007ab2c8  8bc8                 mov ecx, eax
// 007ab2ca  ffd2                 call edx
// 007ab2cc  8a85f6020000         mov al, byte ptr [ebp + 0x2f6]
// 007ab2d2  88442428             mov byte ptr [esp + 0x28], al
// 007ab2d6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ab2da  51                   push ecx
// 007ab2db  57                   push edi
// 007ab2dc  8bcd                 mov ecx, ebp
// 007ab2de  e84deaffff           call 0x7a9d30
// 007ab2e3  83bd7402000000       cmp dword ptr [ebp + 0x274], 0
// 007ab2ea  8a97f5070000         mov dl, byte ptr [edi + 0x7f5]
// 007ab2f0  88542413             mov byte ptr [esp + 0x13], dl
// 007ab2f4  bec46b8200           mov esi, 0x826bc4
// 007ab2f9  0f858c000000         jne 0x7ab38b
// 007ab2ff  68704a8700           push 0x874a70
// 007ab304  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 007ab30b  ff1558248000         call dword ptr [0x802458]
// 007ab311  c684242803000004     mov byte ptr [esp + 0x328], 4
// 007ab319  ff15604e8000         call dword ptr [0x804e60]
// 007ab31f  8b10                 mov edx, dword ptr [eax]
// 007ab321  8b524c               mov edx, dword ptr [edx + 0x4c]
// 007ab324  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 007ab32b  51                   push ecx
// 007ab32c  8d4c2470             lea ecx, [esp + 0x70]
// 007ab330  51                   push ecx
// 007ab331  8bc8                 mov ecx, eax
// 007ab333  ffd2                 call edx
// 007ab335  50                   push eax
// 007ab336  8d8d70020000         lea ecx, [ebp + 0x270]
// 007ab33c  c684242c03000005     mov byte ptr [esp + 0x32c], 5
// 007ab344  ff1568428000         call dword ptr [0x804268]
// 007ab34a  8b442474             mov eax, dword ptr [esp + 0x74]
// 007ab34e  c684242803000004     mov byte ptr [esp + 0x328], 4
// 007ab356  8974246c             mov dword ptr [esp + 0x6c], esi
// 007ab35a  85c0                 test eax, eax
// 007ab35c  7418                 je 0x7ab376
// 007ab35e  ff08                 dec dword ptr [eax]
// 007ab360  8b442474             mov eax, dword ptr [esp + 0x74]
// 007ab364  833800               cmp dword ptr [eax], 0
// 007ab367  750d                 jne 0x7ab376
// 007ab369  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 007ab36d  8b4204               mov eax, dword ptr [edx + 4]
// 007ab370  8d4c246c             lea ecx, [esp + 0x6c]
// 007ab374  ffd0                 call eax
// 007ab376  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 007ab37d  c684242803000000     mov byte ptr [esp + 0x328], 0
// 007ab385  ff1568248000         call dword ptr [0x802468]
// 007ab38b  83bd8002000000       cmp dword ptr [ebp + 0x280], 0
// 007ab392  0f85c9000000         jne 0x7ab461
// 007ab398  68c4638100           push 0x8163c4
// 007ab39d  8d8c24fc010000       lea ecx, [esp + 0x1fc]
// 007ab3a4  ff1558248000         call dword ptr [0x802458]
// 007ab3aa  68e4d48400           push 0x84d4e4
// 007ab3af  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 007ab3b6  c684242c03000006     mov byte ptr [esp + 0x32c], 6
// 007ab3be  ff1558248000         call dword ptr [0x802458]
// 007ab3c4  c684242803000007     mov byte ptr [esp + 0x328], 7
// 007ab3cc  ff15fc428000         call dword ptr [0x8042fc]
// 007ab3d2  8b10                 mov edx, dword ptr [eax]
// 007ab3d4  8b5214               mov edx, dword ptr [edx + 0x14]
// 007ab3d7  6a00                 push 0
// 007ab3d9  6a00                 push 0
// 007ab3db  6a00                 push 0
// 007ab3dd  8d8c2404020000       lea ecx, [esp + 0x204]
// 007ab3e4  51                   push ecx
// 007ab3e5  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 007ab3ec  51                   push ecx
// 007ab3ed  8d4c2470             lea ecx, [esp + 0x70]
// 007ab3f1  51                   push ecx
// 007ab3f2  8bc8                 mov ecx, eax
// 007ab3f4  ffd2                 call edx
// 007ab3f6  50                   push eax
// 007ab3f7  8d8d7c020000         lea ecx, [ebp + 0x27c]
// 007ab3fd  c684242c03000008     mov byte ptr [esp + 0x32c], 8
// 007ab405  ff15f4428000         call dword ptr [0x8042f4]
// 007ab40b  8b442464             mov eax, dword ptr [esp + 0x64]
// 007ab40f  c684242803000007     mov byte ptr [esp + 0x328], 7
// 007ab417  8974245c             mov dword ptr [esp + 0x5c], esi
// 007ab41b  85c0                 test eax, eax
// 007ab41d  7418                 je 0x7ab437
// 007ab41f  ff08                 dec dword ptr [eax]
// 007ab421  8b442464             mov eax, dword ptr [esp + 0x64]
// 007ab425  833800               cmp dword ptr [eax], 0
// 007ab428  750d                 jne 0x7ab437
// 007ab42a  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007ab42e  8b4204               mov eax, dword ptr [edx + 4]
// 007ab431  8d4c245c             lea ecx, [esp + 0x5c]
// 007ab435  ffd0                 call eax
// 007ab437  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 007ab43e  c684242803000006     mov byte ptr [esp + 0x328], 6
// 007ab446  ff1568248000         call dword ptr [0x802468]
// 007ab44c  8d8c24f8010000       lea ecx, [esp + 0x1f8]
// 007ab453  c684242803000000     mov byte ptr [esp + 0x328], 0
// 007ab45b  ff1568248000         call dword ptr [0x802468]
// 007ab461  83bd6c02000000       cmp dword ptr [ebp + 0x26c], 0
// 007ab468  756e                 jne 0x7ab4d8
// 007ab46a  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 007ab46e  7468                 je 0x7ab4d8
// 007ab470  68bc020000           push 0x2bc
// 007ab475  e8a654efff           call 0x6a0920
// 007ab47a  83c404               add esp, 4
// 007ab47d  8944241c             mov dword ptr [esp + 0x1c], eax
// 007ab481  c684242803000009     mov byte ptr [esp + 0x328], 9
// 007ab489  85c0                 test eax, eax
// 007ab48b  7409                 je 0x7ab496
// 007ab48d  8bc8                 mov ecx, eax
// 007ab48f  e85c1dedff           call 0x67d1f0
// 007ab494  eb02                 jmp 0x7ab498
// 007ab496  33c0                 xor eax, eax
// 007ab498  8b8d68020000         mov ecx, dword ptr [ebp + 0x268]
// 007ab49e  89856c020000         mov dword ptr [ebp + 0x26c], eax
// 007ab4a4  8b11                 mov edx, dword ptr [ecx]
// 007ab4a6  50                   push eax
// 007ab4a7  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 007ab4ad  c684242c03000000     mov byte ptr [esp + 0x32c], 0
// 007ab4b5  ffd0                 call eax
// 007ab4b7  83ec0c               sub esp, 0xc
// 007ab4ba  8d957c020000         lea edx, [ebp + 0x27c]
// 007ab4c0  8bcc                 mov ecx, esp
// 007ab4c2  89642428             mov dword ptr [esp + 0x28], esp
// 007ab4c6  52                   push edx
// 007ab4c7  ff15684c8000         call dword ptr [0x804c68]
// 007ab4cd  8b8d6c020000         mov ecx, dword ptr [ebp + 0x26c]
// 007ab4d3  e84810edff           call 0x67c520
// 007ab4d8  33db                 xor ebx, ebx
// 007ab4da  33ff                 xor edi, edi
// 007ab4dc  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 007ab4df  7e6c                 jle 0x7ab54d
// 007ab4e1  8b4508               mov eax, dword ptr [ebp + 8]
// 007ab4e4  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 007ab4e7  3bcb                 cmp ecx, ebx
// 007ab4e9  745c                 je 0x7ab547
// 007ab4eb  8b11                 mov edx, dword ptr [ecx]
// 007ab4ed  8b5218               mov edx, dword ptr [edx + 0x18]
// 007ab4f0  8d442420             lea eax, [esp + 0x20]
// 007ab4f4  50                   push eax
// 007ab4f5  ffd2                 call edx
// 007ab4f7  8b442420             mov eax, dword ptr [esp + 0x20]
// 007ab4fb  3bc3                 cmp eax, ebx
// 007ab4fd  7448                 je 0x7ab547
// 007ab4ff  83c004               add eax, 4
// 007ab502  50                   push eax
// 007ab503  ff15ac218000         call dword ptr [0x8021ac]
// 007ab509  85c0                 test eax, eax
// 007ab50b  7536                 jne 0x7ab543
// 007ab50d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007ab511  8b7108               mov esi, dword ptr [ecx + 8]
// 007ab514  3bf3                 cmp esi, ebx
// 007ab516  741f                 je 0x7ab537
// 007ab518  8b0e                 mov ecx, dword ptr [esi]
// 007ab51a  8b01                 mov eax, dword ptr [ecx]
// 007ab51c  8b5004               mov edx, dword ptr [eax + 4]
// 007ab51f  ffd2                 call edx
// 007ab521  8bc6                 mov eax, esi
// 007ab523  8b7604               mov esi, dword ptr [esi + 4]
// 007ab526  50                   push eax
// 007ab527  e84e51efff           call 0x6a067a
// 007ab52c  83c404               add esp, 4
// 007ab52f  3bf3                 cmp esi, ebx
// 007ab531  75e5                 jne 0x7ab518
// 007ab533  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007ab537  3bcb                 cmp ecx, ebx
// 007ab539  7408                 je 0x7ab543
// 007ab53b  8b01                 mov eax, dword ptr [ecx]
// 007ab53d  8b10                 mov edx, dword ptr [eax]
// 007ab53f  6a01                 push 1
// 007ab541  ffd2                 call edx
// 007ab543  895c2420             mov dword ptr [esp + 0x20], ebx
// 007ab547  47                   inc edi
// 007ab548  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 007ab54b  7c94                 jl 0x7ab4e1
// 007ab54d  803dbc2e940000       cmp byte ptr [0x942ebc], 0
// 007ab554  746f                 je 0x7ab5c5
// 007ab556  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 007ab559  746a                 je 0x7ab5c5
// 007ab55b  807c241300           cmp byte ptr [esp + 0x13], 0
// 007ab560  7463                 je 0x7ab5c5
// 007ab562  8b842430030000       mov eax, dword ptr [esp + 0x330]
// 007ab569  50                   push eax
// 007ab56a  e871ded9ff           call 0x5493e0
// 007ab56f  83ec08               sub esp, 8
// 007ab572  8bcc                 mov ecx, esp
// 007ab574  89642428             mov dword ptr [esp + 0x28], esp
// 007ab578  68b8389700           push 0x9738b8
// 007ab57d  ff15684c8000         call dword ptr [0x804c68]
// 007ab583  8b8d6c020000         mov ecx, dword ptr [ebp + 0x26c]
// 007ab589  e8920fedff           call 0x67c520
// 007ab58e  8b856c020000         mov eax, dword ptr [ebp + 0x26c]
// 007ab594  057c020000           add eax, 0x27c
// 007ab599  395818               cmp dword ptr [eax + 0x18], ebx
// 007ab59c  7527                 jne 0x7ab5c5
// 007ab59e  8b0dbc389700         mov ecx, dword ptr [0x9738bc]
// 007ab5a4  ff1558428000         call dword ptr [0x804258]
// 007ab5aa  83ec20               sub esp, 0x20
// 007ab5ad  8bcc                 mov ecx, esp
// 007ab5af  8964243c             mov dword ptr [esp + 0x3c], esp
// 007ab5b3  50                   push eax
// 007ab5b4  ff15c4488000         call dword ptr [0x8048c4]
// 007ab5ba  8b8d6c020000         mov ecx, dword ptr [ebp + 0x26c]
// 007ab5c0  e87be6ffff           call 0x7a9c40
// 007ab5c5  e85688d6ff           call 0x513e20
// 007ab5ca  50                   push eax
// 007ab5cb  8d8c24ac010000       lea ecx, [esp + 0x1ac]
// 007ab5d2  e8497cd6ff           call 0x513220
// 007ab5d7  f60550f0960001       test byte ptr [0x96f050], 1
// 007ab5de  751b                 jne 0x7ab5fb
// 007ab5e0  d9ee                 fldz 
// 007ab5e2  830d50f0960001       or dword ptr [0x96f050], 1
// 007ab5e9  d91544f09600         fst dword ptr [0x96f044]
// 007ab5ef  d91548f09600         fst dword ptr [0x96f048]
// 007ab5f5  d91d4cf09600         fstp dword ptr [0x96f04c]
// 007ab5fb  d90544f09600         fld dword ptr [0x96f044]
// 007ab601  8d8c24a8010000       lea ecx, [esp + 0x1a8]
// 007ab608  d99c24cc010000       fstp dword ptr [esp + 0x1cc]
// 007ab60f  51                   push ecx
// 007ab610  d90548f09600         fld dword ptr [0x96f048]
// 007ab616  8b8c2438030000       mov ecx, dword ptr [esp + 0x338]
// 007ab61d  d99c24d4010000       fstp dword ptr [esp + 0x1d4]
// 007ab624  d9054cf09600         fld dword ptr [0x96f04c]
// 007ab62a  d99c24d8010000       fstp dword ptr [esp + 0x1d8]
// 007ab631  e81a55d6ff           call 0x510b50
// 007ab636  33c0                 xor eax, eax
// 007ab638  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 007ab63b  89442428             mov dword ptr [esp + 0x28], eax
// 007ab63f  0f8e04150000         jle 0x7acb49
// 007ab645  8b5508               mov edx, dword ptr [ebp + 8]
// 007ab648  8b1c82               mov ebx, dword ptr [edx + eax*4]
// 007ab64b  33ff                 xor edi, edi
// 007ab64d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 007ab651  3bdf                 cmp ebx, edi
// 007ab653  0f84da140000         je 0x7acb33
// 007ab659  8b03                 mov eax, dword ptr [ebx]
// 007ab65b  8b5018               mov edx, dword ptr [eax + 0x18]
// 007ab65e  8d4c243c             lea ecx, [esp + 0x3c]
// 007ab662  51                   push ecx
// 007ab663  8bcb                 mov ecx, ebx
// 007ab665  ffd2                 call edx
// 007ab667  3938                 cmp dword ptr [eax], edi
// 007ab669  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007ab66d  0f95442411           setne byte ptr [esp + 0x11]
// 007ab672  3bc7                 cmp eax, edi
// 007ab674  7449                 je 0x7ab6bf
// 007ab676  83c004               add eax, 4
// 007ab679  50                   push eax
// 007ab67a  ff15ac218000         call dword ptr [0x8021ac]
// 007ab680  85c0                 test eax, eax
// 007ab682  7537                 jne 0x7ab6bb
// 007ab684  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007ab688  8b7108               mov esi, dword ptr [ecx + 8]
// 007ab68b  3bf7                 cmp esi, edi
// 007ab68d  7420                 je 0x7ab6af
// 007ab68f  90                   nop 
// 007ab690  8b0e                 mov ecx, dword ptr [esi]
// 007ab692  8b01                 mov eax, dword ptr [ecx]
// 007ab694  8b5004               mov edx, dword ptr [eax + 4]
// 007ab697  ffd2                 call edx
// 007ab699  8bc6                 mov eax, esi
// 007ab69b  8b7604               mov esi, dword ptr [esi + 4]
// 007ab69e  50                   push eax
// 007ab69f  e8d64fefff           call 0x6a067a
// 007ab6a4  83c404               add esp, 4
// 007ab6a7  3bf7                 cmp esi, edi
// 007ab6a9  75e5                 jne 0x7ab690
// 007ab6ab  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007ab6af  3bcf                 cmp ecx, edi
// 007ab6b1  7408                 je 0x7ab6bb
// 007ab6b3  8b01                 mov eax, dword ptr [ecx]
// 007ab6b5  8b10                 mov edx, dword ptr [eax]
// 007ab6b7  6a01                 push 1
// 007ab6b9  ffd2                 call edx
// 007ab6bb  897c243c             mov dword ptr [esp + 0x3c], edi
// 007ab6bf  8b03                 mov eax, dword ptr [ebx]
// 007ab6c1  8b5014               mov edx, dword ptr [eax + 0x14]
// 007ab6c4  8d4c2444             lea ecx, [esp + 0x44]
// 007ab6c8  51                   push ecx
// 007ab6c9  8bcb                 mov ecx, ebx
// 007ab6cb  ffd2                 call edx
// 007ab6cd  3938                 cmp dword ptr [eax], edi
// 007ab6cf  8b442444             mov eax, dword ptr [esp + 0x44]
// 007ab6d3  0f95442412           setne byte ptr [esp + 0x12]
// 007ab6d8  3bc7                 cmp eax, edi
// 007ab6da  7448                 je 0x7ab724
// 007ab6dc  83c004               add eax, 4
// 007ab6df  50                   push eax
// 007ab6e0  ff15ac218000         call dword ptr [0x8021ac]
// 007ab6e6  85c0                 test eax, eax
// 007ab6e8  7536                 jne 0x7ab720
// 007ab6ea  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007ab6ee  8b7108               mov esi, dword ptr [ecx + 8]
// 007ab6f1  3bf7                 cmp esi, edi
// 007ab6f3  741f                 je 0x7ab714
// 007ab6f5  8b0e                 mov ecx, dword ptr [esi]
// 007ab6f7  8b01                 mov eax, dword ptr [ecx]
// 007ab6f9  8b5004               mov edx, dword ptr [eax + 4]
// 007ab6fc  ffd2                 call edx
// 007ab6fe  8bc6                 mov eax, esi
// 007ab700  8b7604               mov esi, dword ptr [esi + 4]
// 007ab703  50                   push eax
// 007ab704  e8714fefff           call 0x6a067a
// 007ab709  83c404               add esp, 4
// 007ab70c  3bf7                 cmp esi, edi
// 007ab70e  75e5                 jne 0x7ab6f5
// 007ab710  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007ab714  3bcf                 cmp ecx, edi
// 007ab716  7408                 je 0x7ab720
// 007ab718  8b01                 mov eax, dword ptr [ecx]
// 007ab71a  8b10                 mov edx, dword ptr [eax]
// 007ab71c  6a01                 push 1
// 007ab71e  ffd2                 call edx
// 007ab720  897c2444             mov dword ptr [esp + 0x44], edi
// 007ab724  807c241100           cmp byte ptr [esp + 0x11], 0
// 007ab729  0f8404140000         je 0x7acb33
// 007ab72f  807c241200           cmp byte ptr [esp + 0x12], 0
// 007ab734  0f84f9130000         je 0x7acb33
// 007ab73a  8b03                 mov eax, dword ptr [ebx]
// 007ab73c  8b5014               mov edx, dword ptr [eax + 0x14]
// 007ab73f  8d4c244c             lea ecx, [esp + 0x4c]
// 007ab743  51                   push ecx
// 007ab744  8bcb                 mov ecx, ebx
// 007ab746  ffd2                 call edx
// 007ab748  d9ee                 fldz 
// 007ab74a  8b08                 mov ecx, dword ptr [eax]
// 007ab74c  8b01                 mov eax, dword ptr [ecx]
// 007ab74e  8b5018               mov edx, dword ptr [eax + 0x18]
// 007ab751  51                   push ecx
// 007ab752  d91c24               fstp dword ptr [esp]
// 007ab755  c684242c0300000a     mov byte ptr [esp + 0x32c], 0xa
// 007ab75d  ffd2                 call edx
// 007ab75f  85c0                 test eax, eax
// 007ab761  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007ab765  0f94442411           sete byte ptr [esp + 0x11]
// 007ab76a  c684242803000000     mov byte ptr [esp + 0x328], 0
// 007ab772  3bc7                 cmp eax, edi
// 007ab774  7449                 je 0x7ab7bf
// 007ab776  83c004               add eax, 4
// 007ab779  50                   push eax
// 007ab77a  ff15ac218000         call dword ptr [0x8021ac]
// 007ab780  85c0                 test eax, eax
// 007ab782  7537                 jne 0x7ab7bb
// 007ab784  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007ab788  8b7108               mov esi, dword ptr [ecx + 8]
// 007ab78b  3bf7                 cmp esi, edi
// 007ab78d  7420                 je 0x7ab7af
// 007ab78f  90                   nop 
// 007ab790  8b0e                 mov ecx, dword ptr [esi]
// 007ab792  8b01                 mov eax, dword ptr [ecx]
// 007ab794  8b5004               mov edx, dword ptr [eax + 4]
// 007ab797  ffd2                 call edx
// 007ab799  8bc6                 mov eax, esi
// 007ab79b  8b7604               mov esi, dword ptr [esi + 4]
// 007ab79e  50                   push eax
// 007ab79f  e8d64eefff           call 0x6a067a
// 007ab7a4  83c404               add esp, 4
// 007ab7a7  3bf7                 cmp esi, edi
// 007ab7a9  75e5                 jne 0x7ab790
// 007ab7ab  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007ab7af  3bcf                 cmp ecx, edi
// 007ab7b1  7408                 je 0x7ab7bb
// 007ab7b3  8b01                 mov eax, dword ptr [ecx]
// 007ab7b5  8b10                 mov edx, dword ptr [eax]
// 007ab7b7  6a01                 push 1
// 007ab7b9  ffd2                 call edx
// 007ab7bb  897c244c             mov dword ptr [esp + 0x4c], edi
// 007ab7bf  807c241100           cmp byte ptr [esp + 0x11], 0
// 007ab7c4  0f8569130000         jne 0x7acb33
// 007ab7ca  8b03                 mov eax, dword ptr [ebx]
// 007ab7cc  8b5018               mov edx, dword ptr [eax + 0x18]
// 007ab7cf  8d4c2418             lea ecx, [esp + 0x18]
// 007ab7d3  51                   push ecx
// 007ab7d4  8bcb                 mov ecx, ebx
// 007ab7d6  ffd2                 call edx
// 007ab7d8  80bdf402000000       cmp byte ptr [ebp + 0x2f4], 0
// 007ab7df  c68424280300000b     mov byte ptr [esp + 0x328], 0xb
// 007ab7e7  7419                 je 0x7ab802
// 007ab7e9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ab7ed  39b980000000         cmp dword ptr [ecx + 0x80], edi
// 007ab7f3  750d                 jne 0x7ab802
// 007ab7f5  8b842430030000       mov eax, dword ptr [esp + 0x330]
// 007ab7fc  50                   push eax
// 007ab7fd  e81ef1d9ff           call 0x54a920
// 007ab802  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ab806  83791002             cmp dword ptr [ecx + 0x10], 2
// 007ab80a  897c2424             mov dword ptr [esp + 0x24], edi
// 007ab80e  755f                 jne 0x7ab86f
// 007ab810  8b13                 mov edx, dword ptr [ebx]
// 007ab812  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007ab815  8bcb                 mov ecx, ebx
// 007ab817  ffd0                 call eax
// 007ab819  d94024               fld dword ptr [eax + 0x24]

void func_007ab0a0()
{
}
