// roc 2009-12 008d76c0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPageFlat  size: 2700 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d76c0
//
// 008d76c0  6aff                 push -1
// 008d76c2  6808549600           push 0x965408
// 008d76c7  64a100000000         mov eax, dword ptr fs:[0]
// 008d76cd  50                   push eax
// 008d76ce  81ecf8000000         sub esp, 0xf8
// 008d76d4  53                   push ebx
// 008d76d5  55                   push ebp
// 008d76d6  56                   push esi
// 008d76d7  57                   push edi
// 008d76d8  a10052b600           mov eax, dword ptr [0xb65200]
// 008d76dd  33c4                 xor eax, esp
// 008d76df  50                   push eax
// 008d76e0  8d84240c010000       lea eax, [esp + 0x10c]
// 008d76e7  64a300000000         mov dword ptr fs:[0], eax
// 008d76ed  894c2438             mov dword ptr [esp + 0x38], ecx
// 008d76f1  8bbc2420010000       mov edi, dword ptr [esp + 0x120]
// 008d76f8  8b4744               mov eax, dword ptr [edi + 0x44]
// 008d76fb  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 008d76fe  8b574c               mov edx, dword ptr [edi + 0x4c]
// 008d7701  89442418             mov dword ptr [esp + 0x18], eax
// 008d7705  8b4750               mov eax, dword ptr [edi + 0x50]
// 008d7708  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008d770c  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008d770f  89442424             mov dword ptr [esp + 0x24], eax
// 008d7713  89542420             mov dword ptr [esp + 0x20], edx
// 008d7717  8b11                 mov edx, dword ptr [ecx]
// 008d7719  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d771c  ffd0                 call eax
// 008d771e  8be8                 mov ebp, eax
// 008d7720  55                   push ebp
// 008d7721  33c9                 xor ecx, ecx
// 008d7723  83ec10               sub esp, 0x10
// 008d7726  8bc4                 mov eax, esp
// 008d7728  8908                 mov dword ptr [eax], ecx
// 008d772a  33db                 xor ebx, ebx
// 008d772c  33d2                 xor edx, edx
// 008d772e  895004               mov dword ptr [eax + 4], edx
// 008d7731  8d7301               lea esi, [ebx + 1]
// 008d7734  897008               mov dword ptr [eax + 8], esi
// 008d7737  89480c               mov dword ptr [eax + 0xc], ecx
// 008d773a  8d4c242c             lea ecx, [esp + 0x2c]
// 008d773e  51                   push ecx
// 008d773f  e86cc7ffff           call 0x8d3eb0
// 008d7744  8b542430             mov edx, dword ptr [esp + 0x30]
// 008d7748  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d774c  8b442434             mov eax, dword ptr [esp + 0x34]
// 008d7750  8bb42434010000       mov esi, dword ptr [esp + 0x134]
// 008d7757  89542440             mov dword ptr [esp + 0x40], edx
// 008d775b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d775f  894c2448             mov dword ptr [esp + 0x48], ecx
// 008d7763  83c418               add esp, 0x18
// 008d7766  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d776a  8b06                 mov eax, dword ptr [esi]
// 008d776c  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 008d7773  89542434             mov dword ptr [esp + 0x34], edx
// 008d7777  8b5058               mov edx, dword ptr [eax + 0x58]
// 008d777a  51                   push ecx
// 008d777b  8bce                 mov ecx, esi
// 008d777d  ffd2                 call edx
// 008d777f  899c24f8000000       mov dword ptr [esp + 0xf8], ebx
// 008d7786  c78424f4000000f82a9f00 mov dword ptr [esp + 0xf4], 0x9f2af8
// 008d7791  8d8424fc000000       lea eax, [esp + 0xfc]
// 008d7798  50                   push eax
// 008d7799  899c2418010000       mov dword ptr [esp + 0x118], ebx
// 008d77a0  ff15c4b09800         call dword ptr [0x98b0c4]
// 008d77a6  50                   push eax
// 008d77a7  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 008d77ae  e877c6f1ff           call 0x7f3e2a
// 008d77b3  55                   push ebp
// 008d77b4  33c9                 xor ecx, ecx
// 008d77b6  83ec10               sub esp, 0x10
// 008d77b9  8bc4                 mov eax, esp
// 008d77bb  8908                 mov dword ptr [eax], ecx
// 008d77bd  895804               mov dword ptr [eax + 4], ebx
// 008d77c0  894808               mov dword ptr [eax + 8], ecx
// 008d77c3  b901000000           mov ecx, 1
// 008d77c8  89480c               mov dword ptr [eax + 0xc], ecx
// 008d77cb  8d4c243c             lea ecx, [esp + 0x3c]
// 008d77cf  51                   push ecx
// 008d77d0  e8dbc6ffff           call 0x8d3eb0
// 008d77d5  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d77d9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d77dd  83c408               add esp, 8
// 008d77e0  8bc4                 mov eax, esp
// 008d77e2  8910                 mov dword ptr [eax], edx
// 008d77e4  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d77e8  894804               mov dword ptr [eax + 4], ecx
// 008d77eb  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d77ef  895008               mov dword ptr [eax + 8], edx
// 008d77f2  56                   push esi
// 008d77f3  89480c               mov dword ptr [eax + 0xc], ecx
// 008d77f6  e8a55af7ff           call 0x84d2a0
// 008d77fb  8bc8                 mov ecx, eax
// 008d77fd  e8be2af7ff           call 0x84a2c0
// 008d7802  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d7806  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d780a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d780e  55                   push ebp
// 008d780f  899424e4000000       mov dword ptr [esp + 0xe4], edx
// 008d7816  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d781a  898c24ec000000       mov dword ptr [esp + 0xec], ecx
// 008d7821  83c9ff               or ecx, 0xffffffff
// 008d7824  898424e8000000       mov dword ptr [esp + 0xe8], eax
// 008d782b  83ec10               sub esp, 0x10
// 008d782e  8bc4                 mov eax, esp
// 008d7830  8908                 mov dword ptr [eax], ecx
// 008d7832  89942400010000       mov dword ptr [esp + 0x100], edx
// 008d7839  0bd1                 or edx, ecx
// 008d783b  895004               mov dword ptr [eax + 4], edx
// 008d783e  0bc9                 or ecx, ecx
// 008d7840  894808               mov dword ptr [eax + 8], ecx
// 008d7843  33c9                 xor ecx, ecx
// 008d7845  89480c               mov dword ptr [eax + 0xc], ecx
// 008d7848  8d8424f4000000       lea eax, [esp + 0xf4]
// 008d784f  50                   push eax
// 008d7850  e85bc6ffff           call 0x8d3eb0
// 008d7855  8b442450             mov eax, dword ptr [esp + 0x50]
// 008d7859  83c418               add esp, 0x18
// 008d785c  395828               cmp dword ptr [eax + 0x28], ebx
// 008d785f  0f84a9010000         je 0x8d7a0e
// 008d7865  8b5760               mov edx, dword ptr [edi + 0x60]
// 008d7868  397a04               cmp dword ptr [edx + 4], edi
// 008d786b  0f850f010000         jne 0x8d7980
// 008d7871  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 008d7874  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d787a  8b10                 mov edx, dword ptr [eax]
// 008d787c  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 008d7883  8b5218               mov edx, dword ptr [edx + 0x18]
// 008d7886  57                   push edi
// 008d7887  83ec10               sub esp, 0x10
// 008d788a  89442428             mov dword ptr [esp + 0x28], eax
// 008d788e  8bc4                 mov eax, esp
// 008d7890  8908                 mov dword ptr [eax], ecx
// 008d7892  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 008d7899  894804               mov dword ptr [eax + 4], ecx
// 008d789c  8b8c24fc000000       mov ecx, dword ptr [esp + 0xfc]
// 008d78a3  894808               mov dword ptr [eax + 8], ecx
// 008d78a6  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 008d78ad  89480c               mov dword ptr [eax + 0xc], ecx
// 008d78b0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d78b4  56                   push esi
// 008d78b5  ffd2                 call edx
// 008d78b7  8b4760               mov eax, dword ptr [edi + 0x60]
// 008d78ba  397804               cmp dword ptr [eax + 4], edi
// 008d78bd  7462                 je 0x8d7921
// 008d78bf  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d78c3  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 008d78c6  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008d78cc  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d78cf  83f9ff               cmp ecx, -1
// 008d78d2  7503                 jne 0x8d78d7
// 008d78d4  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d78d7  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d78da  83faff               cmp edx, -1
// 008d78dd  7505                 jne 0x8d78e4
// 008d78df  8b4048               mov eax, dword ptr [eax + 0x48]
// 008d78e2  eb02                 jmp 0x8d78e6
// 008d78e4  8bc2                 mov eax, edx
// 008d78e6  51                   push ecx
// 008d78e7  50                   push eax
// 008d78e8  8d4502               lea eax, [ebp + 2]
// 008d78eb  2503000080           and eax, 0x80000003
// 008d78f0  7905                 jns 0x8d78f7
// 008d78f2  48                   dec eax
// 008d78f3  83c8fc               or eax, 0xfffffffc
// 008d78f6  40                   inc eax
// 008d78f7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d78fb  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d78ff  50                   push eax
// 008d7900  83ec10               sub esp, 0x10
// 008d7903  8bc4                 mov eax, esp
// 008d7905  8908                 mov dword ptr [eax], ecx
// 008d7907  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d790b  895004               mov dword ptr [eax + 4], edx
// 008d790e  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d7912  894808               mov dword ptr [eax + 8], ecx
// 008d7915  56                   push esi
// 008d7916  89500c               mov dword ptr [eax + 0xc], edx
// 008d7919  e8a2ceffff           call 0x8d47c0
// 008d791e  83c420               add esp, 0x20
// 008d7921  55                   push ebp
// 008d7922  33c9                 xor ecx, ecx
// 008d7924  83ec10               sub esp, 0x10
// 008d7927  8bc4                 mov eax, esp
// 008d7929  8908                 mov dword ptr [eax], ecx
// 008d792b  895804               mov dword ptr [eax + 4], ebx
// 008d792e  894808               mov dword ptr [eax + 8], ecx
// 008d7931  b902000000           mov ecx, 2
// 008d7936  89480c               mov dword ptr [eax + 0xc], ecx
// 008d7939  8d44242c             lea eax, [esp + 0x2c]
// 008d793d  50                   push eax
// 008d793e  e86dc5ffff           call 0x8d3eb0
// 008d7943  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d7947  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 008d794a  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008d7950  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d7953  83c418               add esp, 0x18
// 008d7956  83f9ff               cmp ecx, -1
// 008d7959  7505                 jne 0x8d7960
// 008d795b  8b4048               mov eax, dword ptr [eax + 0x48]
// 008d795e  eb02                 jmp 0x8d7962
// 008d7960  8bc1                 mov eax, ecx
// 008d7962  8b5604               mov edx, dword ptr [esi + 4]
// 008d7965  50                   push eax
// 008d7966  52                   push edx
// 008d7967  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 008d796e  e88d3df7ff           call 0x84b700
// 008d7973  c684241401000001     mov byte ptr [esp + 0x114], 1
// 008d797b  e91b020000           jmp 0x8d7b9b
// 008d7980  8b525c               mov edx, dword ptr [edx + 0x5c]
// 008d7983  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008d7986  4a                   dec edx
// 008d7987  3bca                 cmp ecx, edx
// 008d7989  0f8d69020000         jge 0x8d7bf8
// 008d798f  83fd02               cmp ebp, 2
// 008d7992  7404                 je 0x8d7998
// 008d7994  3beb                 cmp ebp, ebx
// 008d7996  753b                 jne 0x8d79d3
// 008d7998  8b401c               mov eax, dword ptr [eax + 0x1c]
// 008d799b  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d79a1  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 008d79a4  83f8ff               cmp eax, -1
// 008d79a7  7503                 jne 0x8d79ac
// 008d79a9  8b4148               mov eax, dword ptr [ecx + 0x48]
// 008d79ac  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d79b0  50                   push eax
// 008d79b1  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d79b5  2bc1                 sub eax, ecx
// 008d79b7  83e806               sub eax, 6
// 008d79ba  50                   push eax
// 008d79bb  83c103               add ecx, 3
// 008d79be  6a01                 push 1
// 008d79c0  51                   push ecx
// 008d79c1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d79c5  49                   dec ecx
// 008d79c6  51                   push ecx
// 008d79c7  8bce                 mov ecx, esi
// 008d79c9  e8c8ea0400           call 0x926496
// 008d79ce  e925020000           jmp 0x8d7bf8
// 008d79d3  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008d79d6  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 008d79dc  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 008d79df  83f8ff               cmp eax, -1
// 008d79e2  7503                 jne 0x8d79e7
// 008d79e4  8b4148               mov eax, dword ptr [ecx + 0x48]
// 008d79e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d79eb  50                   push eax
// 008d79ec  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d79f0  2bc1                 sub eax, ecx
// 008d79f2  6a01                 push 1
// 008d79f4  83e806               sub eax, 6
// 008d79f7  50                   push eax
// 008d79f8  8b442430             mov eax, dword ptr [esp + 0x30]
// 008d79fc  48                   dec eax
// 008d79fd  83c103               add ecx, 3
// 008d7a00  50                   push eax
// 008d7a01  51                   push ecx
// 008d7a02  8bce                 mov ecx, esi
// 008d7a04  e88dea0400           call 0x926496
// 008d7a09  e9ea010000           jmp 0x8d7bf8
// 008d7a0e  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 008d7a11  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d7a17  8b10                 mov edx, dword ptr [eax]
// 008d7a19  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 008d7a20  8b5218               mov edx, dword ptr [edx + 0x18]
// 008d7a23  57                   push edi
// 008d7a24  83ec10               sub esp, 0x10
// 008d7a27  89442428             mov dword ptr [esp + 0x28], eax
// 008d7a2b  8bc4                 mov eax, esp
// 008d7a2d  8908                 mov dword ptr [eax], ecx
// 008d7a2f  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 008d7a36  894804               mov dword ptr [eax + 4], ecx
// 008d7a39  8b8c24fc000000       mov ecx, dword ptr [esp + 0xfc]
// 008d7a40  894808               mov dword ptr [eax + 8], ecx
// 008d7a43  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 008d7a4a  89480c               mov dword ptr [eax + 0xc], ecx
// 008d7a4d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d7a51  56                   push esi
// 008d7a52  ffd2                 call edx
// 008d7a54  8b442438             mov eax, dword ptr [esp + 0x38]
// 008d7a58  395824               cmp dword ptr [eax + 0x24], ebx
// 008d7a5b  7478                 je 0x8d7ad5
// 008d7a5d  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008d7a60  397904               cmp dword ptr [ecx + 4], edi
// 008d7a63  7529                 jne 0x8d7a8e
// 008d7a65  55                   push ebp
// 008d7a66  33c9                 xor ecx, ecx
// 008d7a68  83ec10               sub esp, 0x10
// 008d7a6b  8bc4                 mov eax, esp
// 008d7a6d  8908                 mov dword ptr [eax], ecx
// 008d7a6f  895804               mov dword ptr [eax + 4], ebx
// 008d7a72  894808               mov dword ptr [eax + 8], ecx
// 008d7a75  8d54242c             lea edx, [esp + 0x2c]
// 008d7a79  b901000000           mov ecx, 1
// 008d7a7e  52                   push edx
// 008d7a7f  89480c               mov dword ptr [eax + 0xc], ecx
// 008d7a82  e829c4ffff           call 0x8d3eb0
// 008d7a87  8b442450             mov eax, dword ptr [esp + 0x50]
// 008d7a8b  83c418               add esp, 0x18
// 008d7a8e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 008d7a91  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d7a97  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d7a9a  83f9ff               cmp ecx, -1
// 008d7a9d  7503                 jne 0x8d7aa2
// 008d7a9f  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d7aa2  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d7aa5  83faff               cmp edx, -1
// 008d7aa8  7516                 jne 0x8d7ac0
// 008d7aaa  8b4048               mov eax, dword ptr [eax + 0x48]
// 008d7aad  51                   push ecx
// 008d7aae  50                   push eax
// 008d7aaf  8d4c2420             lea ecx, [esp + 0x20]
// 008d7ab3  51                   push ecx
// 008d7ab4  8bce                 mov ecx, esi
// 008d7ab6  e83dcbf1ff           call 0x7f45f8
// 008d7abb  e938010000           jmp 0x8d7bf8
// 008d7ac0  51                   push ecx
// 008d7ac1  8bc2                 mov eax, edx
// 008d7ac3  50                   push eax
// 008d7ac4  8d4c2420             lea ecx, [esp + 0x20]
// 008d7ac8  51                   push ecx
// 008d7ac9  8bce                 mov ecx, esi
// 008d7acb  e828cbf1ff           call 0x7f45f8
// 008d7ad0  e923010000           jmp 0x8d7bf8
// 008d7ad5  8b401c               mov eax, dword ptr [eax + 0x1c]
// 008d7ad8  83783802             cmp dword ptr [eax + 0x38], 2
// 008d7adc  7463                 je 0x8d7b41
// 008d7ade  8b5760               mov edx, dword ptr [edi + 0x60]
// 008d7ae1  397a04               cmp dword ptr [edx + 4], edi
// 008d7ae4  745b                 je 0x8d7b41
// 008d7ae6  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d7aec  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d7aef  83f9ff               cmp ecx, -1
// 008d7af2  7503                 jne 0x8d7af7
// 008d7af4  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d7af7  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d7afa  83faff               cmp edx, -1
// 008d7afd  7505                 jne 0x8d7b04
// 008d7aff  8b4048               mov eax, dword ptr [eax + 0x48]
// 008d7b02  eb02                 jmp 0x8d7b06
// 008d7b04  8bc2                 mov eax, edx
// 008d7b06  51                   push ecx
// 008d7b07  50                   push eax
// 008d7b08  8d4502               lea eax, [ebp + 2]
// 008d7b0b  2503000080           and eax, 0x80000003
// 008d7b10  7905                 jns 0x8d7b17
// 008d7b12  48                   dec eax
// 008d7b13  83c8fc               or eax, 0xfffffffc
// 008d7b16  40                   inc eax
// 008d7b17  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d7b1b  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d7b1f  50                   push eax
// 008d7b20  83ec10               sub esp, 0x10
// 008d7b23  8bc4                 mov eax, esp
// 008d7b25  8908                 mov dword ptr [eax], ecx
// 008d7b27  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d7b2b  895004               mov dword ptr [eax + 4], edx
// 008d7b2e  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d7b32  894808               mov dword ptr [eax + 8], ecx
// 008d7b35  56                   push esi
// 008d7b36  89500c               mov dword ptr [eax + 0xc], edx
// 008d7b39  e882ccffff           call 0x8d47c0
// 008d7b3e  83c420               add esp, 0x20
// 008d7b41  55                   push ebp
// 008d7b42  33c9                 xor ecx, ecx
// 008d7b44  83ec10               sub esp, 0x10
// 008d7b47  8bc4                 mov eax, esp
// 008d7b49  8908                 mov dword ptr [eax], ecx
// 008d7b4b  895804               mov dword ptr [eax + 4], ebx
// 008d7b4e  894808               mov dword ptr [eax + 8], ecx
// 008d7b51  b902000000           mov ecx, 2
// 008d7b56  89480c               mov dword ptr [eax + 0xc], ecx
// 008d7b59  8d44242c             lea eax, [esp + 0x2c]
// 008d7b5d  50                   push eax
// 008d7b5e  e84dc3ffff           call 0x8d3eb0
// 008d7b63  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d7b67  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 008d7b6a  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008d7b70  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d7b73  83c418               add esp, 0x18
// 008d7b76  83f9ff               cmp ecx, -1
// 008d7b79  7505                 jne 0x8d7b80
// 008d7b7b  8b4048               mov eax, dword ptr [eax + 0x48]
// 008d7b7e  eb02                 jmp 0x8d7b82
// 008d7b80  8bc1                 mov eax, ecx
// 008d7b82  8b5604               mov edx, dword ptr [esi + 4]
// 008d7b85  50                   push eax
// 008d7b86  52                   push edx
// 008d7b87  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 008d7b8e  e86d3bf7ff           call 0x84b700
// 008d7b93  c684241401000002     mov byte ptr [esp + 0x114], 2
// 008d7b9b  8b06                 mov eax, dword ptr [esi]
// 008d7b9d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d7ba0  6a05                 push 5
// 008d7ba2  8bce                 mov ecx, esi
// 008d7ba4  ffd2                 call edx
// 008d7ba6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d7baa  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d7bae  6a06                 push 6
// 008d7bb0  6a06                 push 6
// 008d7bb2  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d7bb6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d7bba  50                   push eax
// 008d7bbb  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d7bbf  51                   push ecx
// 008d7bc0  8b4e04               mov ecx, dword ptr [esi + 4]
// 008d7bc3  52                   push edx
// 008d7bc4  50                   push eax
// 008d7bc5  51                   push ecx
// 008d7bc6  ff1530b19800         call dword ptr [0x98b130]
// 008d7bcc  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d7bd0  3bc3                 cmp eax, ebx
// 008d7bd2  7504                 jne 0x8d7bd8
// 008d7bd4  33c0                 xor eax, eax
// 008d7bd6  eb03                 jmp 0x8d7bdb
// 008d7bd8  8b4004               mov eax, dword ptr [eax + 4]
// 008d7bdb  8b5604               mov edx, dword ptr [esi + 4]
// 008d7bde  50                   push eax
// 008d7bdf  52                   push edx
// 008d7be0  e813ea0400           call 0x9265f8
// 008d7be5  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 008d7bec  889c2414010000       mov byte ptr [esp + 0x114], bl
// 008d7bf3  e8983bf7ff           call 0x84b790
// 008d7bf8  8d8424f4000000       lea eax, [esp + 0xf4]
// 008d7bff  50                   push eax
// 008d7c00  8bce                 mov ecx, esi
// 008d7c02  e85dea0400           call 0x926664
// 008d7c07  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d7c0b  395924               cmp dword ptr [ecx + 0x24], ebx
// 008d7c0e  0f84bb040000         je 0x8d80cf
// 008d7c14  83fd03               cmp ebp, 3
// 008d7c17  0f87b2040000         ja 0x8d80cf
// 008d7c1d  ff24ad3c818d00       jmp dword ptr [ebp*4 + 0x8d813c]
// 008d7c24  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d7c28  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d7c2c  89542440             mov dword ptr [esp + 0x40], edx
// 008d7c30  42                   inc edx
// 008d7c31  89542414             mov dword ptr [esp + 0x14], edx
// 008d7c35  89542450             mov dword ptr [esp + 0x50], edx
// 008d7c39  8b542430             mov edx, dword ptr [esp + 0x30]
// 008d7c3d  83c2fe               add edx, -2
// 008d7c40  8954243c             mov dword ptr [esp + 0x3c], edx
// 008d7c44  89542460             mov dword ptr [esp + 0x60], edx
// 008d7c48  8b542430             mov edx, dword ptr [esp + 0x30]
// 008d7c4c  4a                   dec edx
// 008d7c4d  89542470             mov dword ptr [esp + 0x70], edx
// 008d7c51  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d7c55  89942480000000       mov dword ptr [esp + 0x80], edx
// 008d7c5c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d7c60  8d4101               lea eax, [ecx + 1]
// 008d7c63  89942490000000       mov dword ptr [esp + 0x90], edx
// 008d7c6a  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d7c6e  83c202               add edx, 2
// 008d7c71  894c2454             mov dword ptr [esp + 0x54], ecx
// 008d7c75  894c2464             mov dword ptr [esp + 0x64], ecx
// 008d7c79  899424a0000000       mov dword ptr [esp + 0xa0], edx
// 008d7c80  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d7c84  83c102               add ecx, 2
// 008d7c87  83cdff               or ebp, 0xffffffff
// 008d7c8a  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 008d7c91  8b542430             mov edx, dword ptr [esp + 0x30]
// 008d7c95  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 008d7c9c  898c24d4000000       mov dword ptr [esp + 0xd4], ecx
// 008d7ca3  6a14                 push 0x14
// 008d7ca5  8d4c2444             lea ecx, [esp + 0x44]
// 008d7ca9  89442448             mov dword ptr [esp + 0x48], eax
// 008d7cad  89442478             mov dword ptr [esp + 0x78], eax
// 008d7cb1  89842488000000       mov dword ptr [esp + 0x88], eax
// 008d7cb8  89842498000000       mov dword ptr [esp + 0x98], eax
// 008d7cbf  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 008d7cc6  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 008d7ccd  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d7cd1  51                   push ecx
// 008d7cd2  83c2fd               add edx, -3
// 008d7cd5  56                   push esi
// 008d7cd6  895c2454             mov dword ptr [esp + 0x54], ebx
// 008d7cda  896c2458             mov dword ptr [esp + 0x58], ebp
// 008d7cde  896c2464             mov dword ptr [esp + 0x64], ebp
// 008d7ce2  895c2468             mov dword ptr [esp + 0x68], ebx
// 008d7ce6  c744247401000000     mov dword ptr [esp + 0x74], 1
// 008d7cee  895c2478             mov dword ptr [esp + 0x78], ebx
// 008d7cf2  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 008d7cf9  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 008d7d00  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 008d7d07  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 008d7d0e  c78424a400000001000000 mov dword ptr [esp + 0xa4], 1
// 008d7d19  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 008d7d20  89ac24b4000000       mov dword ptr [esp + 0xb4], ebp
// 008d7d27  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 008d7d2e  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 008d7d35  89ac24c8000000       mov dword ptr [esp + 0xc8], ebp
// 008d7d3c  899424cc000000       mov dword ptr [esp + 0xcc], edx
// 008d7d43  c78424d400000001000000 mov dword ptr [esp + 0xd4], 1
// 008d7d4e  899c24d8000000       mov dword ptr [esp + 0xd8], ebx
// 008d7d55  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 008d7d5c  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 008d7d63  89ac24e8000000       mov dword ptr [esp + 0xe8], ebp
// 008d7d6a  e83155f7ff           call 0x84d2a0
// 008d7d6f  8bc8                 mov ecx, eax
// 008d7d71  e8ba42f7ff           call 0x84c030
// 008d7d76  e957030000           jmp 0x8d80d2
// 008d7d7b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008d7d7f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d7d83  8d4501               lea eax, [ebp + 1]
// 008d7d86  896c2454             mov dword ptr [esp + 0x54], ebp
// 008d7d8a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008d7d8e  83c5fe               add ebp, -2
// 008d7d91  894c2440             mov dword ptr [esp + 0x40], ecx
// 008d7d95  894c2460             mov dword ptr [esp + 0x60], ecx
// 008d7d99  896c2464             mov dword ptr [esp + 0x64], ebp
// 008d7d9d  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008d7da1  89442444             mov dword ptr [esp + 0x44], eax
// 008d7da5  8d4101               lea eax, [ecx + 1]
// 008d7da8  83c102               add ecx, 2
// 008d7dab  894c2414             mov dword ptr [esp + 0x14], ecx
// 008d7daf  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 008d7db6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d7dba  83caff               or edx, 0xffffffff
// 008d7dbd  896c2474             mov dword ptr [esp + 0x74], ebp
// 008d7dc1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008d7dc5  41                   inc ecx
// 008d7dc6  45                   inc ebp
// 008d7dc7  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 008d7dce  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d7dd2  89ac2484000000       mov dword ptr [esp + 0x84], ebp
// 008d7dd9  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008d7ddd  83c102               add ecx, 2
// 008d7de0  8954244c             mov dword ptr [esp + 0x4c], edx
// 008d7de4  89542458             mov dword ptr [esp + 0x58], edx
// 008d7de8  89542478             mov dword ptr [esp + 0x78], edx
// 008d7dec  89942488000000       mov dword ptr [esp + 0x88], edx
// 008d7df3  89942498000000       mov dword ptr [esp + 0x98], edx
// 008d7dfa  899424a8000000       mov dword ptr [esp + 0xa8], edx
// 008d7e01  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 008d7e08  899424c8000000       mov dword ptr [esp + 0xc8], edx
// 008d7e0f  8b542434             mov edx, dword ptr [esp + 0x34]
// 008d7e13  83c5fe               add ebp, -2
// 008d7e16  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 008d7e1d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d7e21  83c2fd               add edx, -3
// 008d7e24  895c2448             mov dword ptr [esp + 0x48], ebx
// 008d7e28  89442450             mov dword ptr [esp + 0x50], eax
// 008d7e2c  895c245c             mov dword ptr [esp + 0x5c], ebx
// 008d7e30  895c2468             mov dword ptr [esp + 0x68], ebx
// 008d7e34  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 008d7e3c  89442470             mov dword ptr [esp + 0x70], eax
// 008d7e40  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 008d7e47  898c24c0000000       mov dword ptr [esp + 0xc0], ecx
// 008d7e4e  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 008d7e55  899424d4000000       mov dword ptr [esp + 0xd4], edx
// 008d7e5c  c78424dc00000001000000 mov dword ptr [esp + 0xdc], 1
// 008d7e67  e902020000           jmp 0x8d806e
// 008d7e6c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008d7e70  8d45fe               lea eax, [ebp - 2]
// 008d7e73  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d7e77  4d                   dec ebp
// 008d7e78  896c2454             mov dword ptr [esp + 0x54], ebp
// 008d7e7c  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008d7e80  4d                   dec ebp
// 008d7e81  896c2460             mov dword ptr [esp + 0x60], ebp
// 008d7e85  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008d7e89  83c5fe               add ebp, -2
// 008d7e8c  896c243c             mov dword ptr [esp + 0x3c], ebp
// 008d7e90  896c2470             mov dword ptr [esp + 0x70], ebp
// 008d7e94  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008d7e98  4d                   dec ebp
// 008d7e99  896c2474             mov dword ptr [esp + 0x74], ebp
// 008d7e9d  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 008d7ea1  b901000000           mov ecx, 1
// 008d7ea6  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 008d7ead  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008d7eb1  89542440             mov dword ptr [esp + 0x40], edx
// 008d7eb5  42                   inc edx
// 008d7eb6  83c502               add ebp, 2
// 008d7eb9  89542450             mov dword ptr [esp + 0x50], edx
// 008d7ebd  89942480000000       mov dword ptr [esp + 0x80], edx
// 008d7ec4  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 008d7ecb  8b542434             mov edx, dword ptr [esp + 0x34]
// 008d7ecf  89ac24a0000000       mov dword ptr [esp + 0xa0], ebp
// 008d7ed6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008d7eda  83c2fd               add edx, -3
// 008d7edd  89442444             mov dword ptr [esp + 0x44], eax
// 008d7ee1  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008d7ee5  89442464             mov dword ptr [esp + 0x64], eax
// 008d7ee9  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008d7eed  894c2478             mov dword ptr [esp + 0x78], ecx
// 008d7ef1  89842484000000       mov dword ptr [esp + 0x84], eax
// 008d7ef8  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 008d7eff  89842494000000       mov dword ptr [esp + 0x94], eax
// 008d7f06  898c2498000000       mov dword ptr [esp + 0x98], ecx
// 008d7f0d  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 008d7f14  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 008d7f1b  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 008d7f22  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d7f26  898c24c8000000       mov dword ptr [esp + 0xc8], ecx
// 008d7f2d  898c24dc000000       mov dword ptr [esp + 0xdc], ecx
// 008d7f34  83c5fd               add ebp, -3
// 008d7f37  6a14                 push 0x14
// 008d7f39  8d4c2444             lea ecx, [esp + 0x44]
// 008d7f3d  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008d7f41  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 008d7f49  895c2460             mov dword ptr [esp + 0x60], ebx
// 008d7f4d  895c246c             mov dword ptr [esp + 0x6c], ebx
// 008d7f51  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 008d7f58  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 008d7f5f  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 008d7f6a  899424b8000000       mov dword ptr [esp + 0xb8], edx
// 008d7f71  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 008d7f78  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 008d7f7f  899424d8000000       mov dword ptr [esp + 0xd8], edx
// 008d7f86  51                   push ecx
// 008d7f87  e913010000           jmp 0x8d809f
// 008d7f8c  8b442430             mov eax, dword ptr [esp + 0x30]
// 008d7f90  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d7f94  8d68ff               lea ebp, [eax - 1]
// 008d7f97  896c2440             mov dword ptr [esp + 0x40], ebp
// 008d7f9b  896c2460             mov dword ptr [esp + 0x60], ebp
// 008d7f9f  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008d7fa3  83c5fe               add ebp, -2
// 008d7fa6  896c2464             mov dword ptr [esp + 0x64], ebp
// 008d7faa  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008d7fae  896c2474             mov dword ptr [esp + 0x74], ebp
// 008d7fb2  83c5fe               add ebp, -2
// 008d7fb5  8d5101               lea edx, [ecx + 1]
// 008d7fb8  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 008d7fbf  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008d7fc3  89542444             mov dword ptr [esp + 0x44], edx
// 008d7fc7  89942484000000       mov dword ptr [esp + 0x84], edx
// 008d7fce  83c5fd               add ebp, -3
// 008d7fd1  899424a4000000       mov dword ptr [esp + 0xa4], edx
// 008d7fd8  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008d7fdc  83c202               add edx, 2
// 008d7fdf  89ac24a0000000       mov dword ptr [esp + 0xa0], ebp
// 008d7fe6  89ac24c0000000       mov dword ptr [esp + 0xc0], ebp
// 008d7fed  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008d7ff1  83c0fe               add eax, -2
// 008d7ff4  899424b4000000       mov dword ptr [esp + 0xb4], edx
// 008d7ffb  8d55fe               lea edx, [ebp - 2]
// 008d7ffe  894c2454             mov dword ptr [esp + 0x54], ecx
// 008d8002  b901000000           mov ecx, 1
// 008d8007  83c5fd               add ebp, -3
// 008d800a  895c2448             mov dword ptr [esp + 0x48], ebx
// 008d800e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008d8016  89442450             mov dword ptr [esp + 0x50], eax
// 008d801a  894c2458             mov dword ptr [esp + 0x58], ecx
// 008d801e  895c245c             mov dword ptr [esp + 0x5c], ebx
// 008d8022  895c2468             mov dword ptr [esp + 0x68], ebx
// 008d8026  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008d802a  89442470             mov dword ptr [esp + 0x70], eax
// 008d802e  894c2478             mov dword ptr [esp + 0x78], ecx
// 008d8032  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 008d8039  898c2498000000       mov dword ptr [esp + 0x98], ecx
// 008d8040  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 008d8047  c78424bc000000ffffffff mov dword ptr [esp + 0xbc], 0xffffffff
// 008d8052  899424c4000000       mov dword ptr [esp + 0xc4], edx
// 008d8059  898c24c8000000       mov dword ptr [esp + 0xc8], ecx
// 008d8060  89ac24d4000000       mov dword ptr [esp + 0xd4], ebp
// 008d8067  898c24dc000000       mov dword ptr [esp + 0xdc], ecx
// 008d806e  89842480000000       mov dword ptr [esp + 0x80], eax
// 008d8075  89842490000000       mov dword ptr [esp + 0x90], eax
// 008d807c  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 008d8083  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 008d808a  6a14                 push 0x14
// 008d808c  8d442444             lea eax, [esp + 0x44]
// 008d8090  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 008d8097  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 008d809e  50                   push eax
// 008d809f  56                   push esi
// 008d80a0  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 008d80a7  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 008d80ae  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 008d80b5  899c24d8000000       mov dword ptr [esp + 0xd8], ebx
// 008d80bc  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 008d80c3  e8d851f7ff           call 0x84d2a0
// 008d80c8  8bc8                 mov ecx, eax
// 008d80ca  e8613ff7ff           call 0x84c030
// 008d80cf  83cdff               or ebp, 0xffffffff
// 008d80d2  8b5f44               mov ebx, dword ptr [edi + 0x44]
// 008d80d5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d80d9  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 008d80dc  8b11                 mov edx, dword ptr [ecx]
// 008d80de  6a01                 push 1
// 008d80e0  83ec10               sub esp, 0x10
// 008d80e3  8bc4                 mov eax, esp
// 008d80e5  8918                 mov dword ptr [eax], ebx
// 008d80e7  8b5f48               mov ebx, dword ptr [edi + 0x48]
// 008d80ea  895804               mov dword ptr [eax + 4], ebx
// 008d80ed  8b5f4c               mov ebx, dword ptr [edi + 0x4c]
// 008d80f0  895808               mov dword ptr [eax + 8], ebx
// 008d80f3  8b5f50               mov ebx, dword ptr [edi + 0x50]
// 008d80f6  57                   push edi
// 008d80f7  89580c               mov dword ptr [eax + 0xc], ebx
// 008d80fa  8b4268               mov eax, dword ptr [edx + 0x68]
// 008d80fd  56                   push esi
// 008d80fe  ffd0                 call eax
// 008d8100  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 008d8107  89ac2414010000       mov dword ptr [esp + 0x114], ebp
// 008d810e  c78424f4000000f82a9f00 mov dword ptr [esp + 0xf4], 0x9f2af8
// 008d8119  e81271b3ff           call 0x40f230
// 008d811e  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 008d8125  64890d00000000       mov dword ptr fs:[0], ecx
// 008d812c  59                   pop ecx
// 008d812d  5f                   pop edi
// 008d812e  5e                   pop esi
// 008d812f  5d                   pop ebp
// 008d8130  5b                   pop ebx
// 008d8131  81c404010000         add esp, 0x104
// 008d8137  c20800               ret 8
// 008d813a  8bff                 mov edi, edi
// 008d813c  247c                 and al, 0x7c
// 008d813e  8d00                 lea eax, [eax]
// 008d8140  7b7d                 jnp 0x8d81bf
// 008d8142  8d00                 lea eax, [eax]
// 008d8144  6c                   insb byte ptr es:[edi], dx
// 008d8145  7e8d                 jle 0x8d80d4
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPageFlat@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp