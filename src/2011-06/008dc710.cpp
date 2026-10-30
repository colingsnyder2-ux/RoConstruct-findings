// roc 2011-06 008dc710  unit: CXTPTabPaintManager::CAppearanceSetPropertyPageFlat  size: 2700 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dc710
//
// 008dc710  6aff                 push -1
// 008dc712  68a8d6a000           push 0xa0d6a8
// 008dc717  64a100000000         mov eax, dword ptr fs:[0]
// 008dc71d  50                   push eax
// 008dc71e  81ecf8000000         sub esp, 0xf8
// 008dc724  53                   push ebx
// 008dc725  55                   push ebp
// 008dc726  56                   push esi
// 008dc727  57                   push edi
// 008dc728  a12058c900           mov eax, dword ptr [0xc95820]
// 008dc72d  33c4                 xor eax, esp
// 008dc72f  50                   push eax
// 008dc730  8d84240c010000       lea eax, [esp + 0x10c]
// 008dc737  64a300000000         mov dword ptr fs:[0], eax
// 008dc73d  894c2438             mov dword ptr [esp + 0x38], ecx
// 008dc741  8bbc2420010000       mov edi, dword ptr [esp + 0x120]
// 008dc748  8b4744               mov eax, dword ptr [edi + 0x44]
// 008dc74b  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 008dc74e  8b574c               mov edx, dword ptr [edi + 0x4c]
// 008dc751  89442418             mov dword ptr [esp + 0x18], eax
// 008dc755  8b4750               mov eax, dword ptr [edi + 0x50]
// 008dc758  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008dc75c  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008dc75f  89442424             mov dword ptr [esp + 0x24], eax
// 008dc763  89542420             mov dword ptr [esp + 0x20], edx
// 008dc767  8b11                 mov edx, dword ptr [ecx]
// 008dc769  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dc76c  ffd0                 call eax
// 008dc76e  8be8                 mov ebp, eax
// 008dc770  55                   push ebp
// 008dc771  33c9                 xor ecx, ecx
// 008dc773  83ec10               sub esp, 0x10
// 008dc776  8bc4                 mov eax, esp
// 008dc778  8908                 mov dword ptr [eax], ecx
// 008dc77a  33db                 xor ebx, ebx
// 008dc77c  33d2                 xor edx, edx
// 008dc77e  895004               mov dword ptr [eax + 4], edx
// 008dc781  8d7301               lea esi, [ebx + 1]
// 008dc784  897008               mov dword ptr [eax + 8], esi
// 008dc787  89480c               mov dword ptr [eax + 0xc], ecx
// 008dc78a  8d4c242c             lea ecx, [esp + 0x2c]
// 008dc78e  51                   push ecx
// 008dc78f  e80cc8ffff           call 0x8d8fa0
// 008dc794  8b542430             mov edx, dword ptr [esp + 0x30]
// 008dc798  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008dc79c  8b442434             mov eax, dword ptr [esp + 0x34]
// 008dc7a0  8bb42434010000       mov esi, dword ptr [esp + 0x134]
// 008dc7a7  89542440             mov dword ptr [esp + 0x40], edx
// 008dc7ab  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008dc7af  894c2448             mov dword ptr [esp + 0x48], ecx
// 008dc7b3  83c418               add esp, 0x18
// 008dc7b6  8944242c             mov dword ptr [esp + 0x2c], eax
// 008dc7ba  8b06                 mov eax, dword ptr [esi]
// 008dc7bc  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 008dc7c3  89542434             mov dword ptr [esp + 0x34], edx
// 008dc7c7  8b5058               mov edx, dword ptr [eax + 0x58]
// 008dc7ca  51                   push ecx
// 008dc7cb  8bce                 mov ecx, esi
// 008dc7cd  ffd2                 call edx
// 008dc7cf  899c24f8000000       mov dword ptr [esp + 0xf8], ebx
// 008dc7d6  c78424f4000000402aac00 mov dword ptr [esp + 0xf4], 0xac2a40
// 008dc7e1  8d8424fc000000       lea eax, [esp + 0xfc]
// 008dc7e8  50                   push eax
// 008dc7e9  899c2418010000       mov dword ptr [esp + 0x118], ebx
// 008dc7f0  ff154c01a400         call dword ptr [0xa4014c]
// 008dc7f6  50                   push eax
// 008dc7f7  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 008dc7fe  e825def2ff           call 0x80a628
// 008dc803  55                   push ebp
// 008dc804  33c9                 xor ecx, ecx
// 008dc806  83ec10               sub esp, 0x10
// 008dc809  8bc4                 mov eax, esp
// 008dc80b  8908                 mov dword ptr [eax], ecx
// 008dc80d  895804               mov dword ptr [eax + 4], ebx
// 008dc810  894808               mov dword ptr [eax + 8], ecx
// 008dc813  b901000000           mov ecx, 1
// 008dc818  89480c               mov dword ptr [eax + 0xc], ecx
// 008dc81b  8d4c243c             lea ecx, [esp + 0x3c]
// 008dc81f  51                   push ecx
// 008dc820  e87bc7ffff           call 0x8d8fa0
// 008dc825  8b542440             mov edx, dword ptr [esp + 0x40]
// 008dc829  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008dc82d  83c408               add esp, 8
// 008dc830  8bc4                 mov eax, esp
// 008dc832  8910                 mov dword ptr [eax], edx
// 008dc834  8b542440             mov edx, dword ptr [esp + 0x40]
// 008dc838  894804               mov dword ptr [eax + 4], ecx
// 008dc83b  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008dc83f  895008               mov dword ptr [eax + 8], edx
// 008dc842  56                   push esi
// 008dc843  89480c               mov dword ptr [eax + 0xc], ecx
// 008dc846  e83525f8ff           call 0x85ed80
// 008dc84b  8bc8                 mov ecx, eax
// 008dc84d  e81ef5f7ff           call 0x85bd70
// 008dc852  8b542418             mov edx, dword ptr [esp + 0x18]
// 008dc856  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dc85a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dc85e  55                   push ebp
// 008dc85f  899424e4000000       mov dword ptr [esp + 0xe4], edx
// 008dc866  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dc86a  898c24ec000000       mov dword ptr [esp + 0xec], ecx
// 008dc871  83c9ff               or ecx, 0xffffffff
// 008dc874  898424e8000000       mov dword ptr [esp + 0xe8], eax
// 008dc87b  83ec10               sub esp, 0x10
// 008dc87e  8bc4                 mov eax, esp
// 008dc880  8908                 mov dword ptr [eax], ecx
// 008dc882  89942400010000       mov dword ptr [esp + 0x100], edx
// 008dc889  0bd1                 or edx, ecx
// 008dc88b  895004               mov dword ptr [eax + 4], edx
// 008dc88e  0bc9                 or ecx, ecx
// 008dc890  894808               mov dword ptr [eax + 8], ecx
// 008dc893  33c9                 xor ecx, ecx
// 008dc895  89480c               mov dword ptr [eax + 0xc], ecx
// 008dc898  8d8424f4000000       lea eax, [esp + 0xf4]
// 008dc89f  50                   push eax
// 008dc8a0  e8fbc6ffff           call 0x8d8fa0
// 008dc8a5  8b442450             mov eax, dword ptr [esp + 0x50]
// 008dc8a9  83c418               add esp, 0x18
// 008dc8ac  395828               cmp dword ptr [eax + 0x28], ebx
// 008dc8af  0f84a9010000         je 0x8dca5e
// 008dc8b5  8b5760               mov edx, dword ptr [edi + 0x60]
// 008dc8b8  397a04               cmp dword ptr [edx + 4], edi
// 008dc8bb  0f850f010000         jne 0x8dc9d0
// 008dc8c1  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 008dc8c4  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008dc8ca  8b10                 mov edx, dword ptr [eax]
// 008dc8cc  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 008dc8d3  8b5218               mov edx, dword ptr [edx + 0x18]
// 008dc8d6  57                   push edi
// 008dc8d7  83ec10               sub esp, 0x10
// 008dc8da  89442428             mov dword ptr [esp + 0x28], eax
// 008dc8de  8bc4                 mov eax, esp
// 008dc8e0  8908                 mov dword ptr [eax], ecx
// 008dc8e2  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 008dc8e9  894804               mov dword ptr [eax + 4], ecx
// 008dc8ec  8b8c24fc000000       mov ecx, dword ptr [esp + 0xfc]
// 008dc8f3  894808               mov dword ptr [eax + 8], ecx
// 008dc8f6  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 008dc8fd  89480c               mov dword ptr [eax + 0xc], ecx
// 008dc900  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dc904  56                   push esi
// 008dc905  ffd2                 call edx
// 008dc907  8b4760               mov eax, dword ptr [edi + 0x60]
// 008dc90a  397804               cmp dword ptr [eax + 4], edi
// 008dc90d  7462                 je 0x8dc971
// 008dc90f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008dc913  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 008dc916  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008dc91c  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008dc91f  83f9ff               cmp ecx, -1
// 008dc922  7503                 jne 0x8dc927
// 008dc924  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008dc927  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008dc92a  83faff               cmp edx, -1
// 008dc92d  7505                 jne 0x8dc934
// 008dc92f  8b4048               mov eax, dword ptr [eax + 0x48]
// 008dc932  eb02                 jmp 0x8dc936
// 008dc934  8bc2                 mov eax, edx
// 008dc936  51                   push ecx
// 008dc937  50                   push eax
// 008dc938  8d4502               lea eax, [ebp + 2]
// 008dc93b  2503000080           and eax, 0x80000003
// 008dc940  7905                 jns 0x8dc947
// 008dc942  48                   dec eax
// 008dc943  83c8fc               or eax, 0xfffffffc
// 008dc946  40                   inc eax
// 008dc947  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dc94b  8b542424             mov edx, dword ptr [esp + 0x24]
// 008dc94f  50                   push eax
// 008dc950  83ec10               sub esp, 0x10
// 008dc953  8bc4                 mov eax, esp
// 008dc955  8908                 mov dword ptr [eax], ecx
// 008dc957  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008dc95b  895004               mov dword ptr [eax + 4], edx
// 008dc95e  8b542440             mov edx, dword ptr [esp + 0x40]
// 008dc962  894808               mov dword ptr [eax + 8], ecx
// 008dc965  56                   push esi
// 008dc966  89500c               mov dword ptr [eax + 0xc], edx
// 008dc969  e882cfffff           call 0x8d98f0
// 008dc96e  83c420               add esp, 0x20
// 008dc971  55                   push ebp
// 008dc972  33c9                 xor ecx, ecx
// 008dc974  83ec10               sub esp, 0x10
// 008dc977  8bc4                 mov eax, esp
// 008dc979  8908                 mov dword ptr [eax], ecx
// 008dc97b  895804               mov dword ptr [eax + 4], ebx
// 008dc97e  894808               mov dword ptr [eax + 8], ecx
// 008dc981  b902000000           mov ecx, 2
// 008dc986  89480c               mov dword ptr [eax + 0xc], ecx
// 008dc989  8d44242c             lea eax, [esp + 0x2c]
// 008dc98d  50                   push eax
// 008dc98e  e80dc6ffff           call 0x8d8fa0
// 008dc993  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008dc997  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 008dc99a  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008dc9a0  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008dc9a3  83c418               add esp, 0x18
// 008dc9a6  83f9ff               cmp ecx, -1
// 008dc9a9  7505                 jne 0x8dc9b0
// 008dc9ab  8b4048               mov eax, dword ptr [eax + 0x48]
// 008dc9ae  eb02                 jmp 0x8dc9b2
// 008dc9b0  8bc1                 mov eax, ecx
// 008dc9b2  8b5604               mov edx, dword ptr [esi + 4]
// 008dc9b5  50                   push eax
// 008dc9b6  52                   push edx
// 008dc9b7  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 008dc9be  e8fd07f8ff           call 0x85d1c0
// 008dc9c3  c684241401000001     mov byte ptr [esp + 0x114], 1
// 008dc9cb  e91b020000           jmp 0x8dcbeb
// 008dc9d0  8b525c               mov edx, dword ptr [edx + 0x5c]
// 008dc9d3  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008dc9d6  4a                   dec edx
// 008dc9d7  3bca                 cmp ecx, edx
// 008dc9d9  0f8d69020000         jge 0x8dcc48
// 008dc9df  83fd02               cmp ebp, 2
// 008dc9e2  7404                 je 0x8dc9e8
// 008dc9e4  3beb                 cmp ebp, ebx
// 008dc9e6  753b                 jne 0x8dca23
// 008dc9e8  8b401c               mov eax, dword ptr [eax + 0x1c]
// 008dc9eb  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008dc9f1  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 008dc9f4  83f8ff               cmp eax, -1
// 008dc9f7  7503                 jne 0x8dc9fc
// 008dc9f9  8b4148               mov eax, dword ptr [ecx + 0x48]
// 008dc9fc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008dca00  50                   push eax
// 008dca01  8b442428             mov eax, dword ptr [esp + 0x28]
// 008dca05  2bc1                 sub eax, ecx
// 008dca07  83e806               sub eax, 6
// 008dca0a  50                   push eax
// 008dca0b  83c103               add ecx, 3
// 008dca0e  6a01                 push 1
// 008dca10  51                   push ecx
// 008dca11  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008dca15  49                   dec ecx
// 008dca16  51                   push ecx
// 008dca17  8bce                 mov ecx, esi
// 008dca19  e8b8fb0e00           call 0x9cc5d6
// 008dca1e  e925020000           jmp 0x8dcc48
// 008dca23  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008dca26  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 008dca2c  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 008dca2f  83f8ff               cmp eax, -1
// 008dca32  7503                 jne 0x8dca37
// 008dca34  8b4148               mov eax, dword ptr [ecx + 0x48]
// 008dca37  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dca3b  50                   push eax
// 008dca3c  8b442424             mov eax, dword ptr [esp + 0x24]
// 008dca40  2bc1                 sub eax, ecx
// 008dca42  6a01                 push 1
// 008dca44  83e806               sub eax, 6
// 008dca47  50                   push eax
// 008dca48  8b442430             mov eax, dword ptr [esp + 0x30]
// 008dca4c  48                   dec eax
// 008dca4d  83c103               add ecx, 3
// 008dca50  50                   push eax
// 008dca51  51                   push ecx
// 008dca52  8bce                 mov ecx, esi
// 008dca54  e87dfb0e00           call 0x9cc5d6
// 008dca59  e9ea010000           jmp 0x8dcc48
// 008dca5e  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 008dca61  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008dca67  8b10                 mov edx, dword ptr [eax]
// 008dca69  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 008dca70  8b5218               mov edx, dword ptr [edx + 0x18]
// 008dca73  57                   push edi
// 008dca74  83ec10               sub esp, 0x10
// 008dca77  89442428             mov dword ptr [esp + 0x28], eax
// 008dca7b  8bc4                 mov eax, esp
// 008dca7d  8908                 mov dword ptr [eax], ecx
// 008dca7f  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 008dca86  894804               mov dword ptr [eax + 4], ecx
// 008dca89  8b8c24fc000000       mov ecx, dword ptr [esp + 0xfc]
// 008dca90  894808               mov dword ptr [eax + 8], ecx
// 008dca93  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 008dca9a  89480c               mov dword ptr [eax + 0xc], ecx
// 008dca9d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dcaa1  56                   push esi
// 008dcaa2  ffd2                 call edx
// 008dcaa4  8b442438             mov eax, dword ptr [esp + 0x38]
// 008dcaa8  395824               cmp dword ptr [eax + 0x24], ebx
// 008dcaab  7478                 je 0x8dcb25
// 008dcaad  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008dcab0  397904               cmp dword ptr [ecx + 4], edi
// 008dcab3  7529                 jne 0x8dcade
// 008dcab5  55                   push ebp
// 008dcab6  33c9                 xor ecx, ecx
// 008dcab8  83ec10               sub esp, 0x10
// 008dcabb  8bc4                 mov eax, esp
// 008dcabd  8908                 mov dword ptr [eax], ecx
// 008dcabf  895804               mov dword ptr [eax + 4], ebx
// 008dcac2  894808               mov dword ptr [eax + 8], ecx
// 008dcac5  8d54242c             lea edx, [esp + 0x2c]
// 008dcac9  b901000000           mov ecx, 1
// 008dcace  52                   push edx
// 008dcacf  89480c               mov dword ptr [eax + 0xc], ecx
// 008dcad2  e8c9c4ffff           call 0x8d8fa0
// 008dcad7  8b442450             mov eax, dword ptr [esp + 0x50]
// 008dcadb  83c418               add esp, 0x18
// 008dcade  8b401c               mov eax, dword ptr [eax + 0x1c]
// 008dcae1  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008dcae7  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008dcaea  83f9ff               cmp ecx, -1
// 008dcaed  7503                 jne 0x8dcaf2
// 008dcaef  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008dcaf2  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008dcaf5  83faff               cmp edx, -1
// 008dcaf8  7516                 jne 0x8dcb10
// 008dcafa  8b4048               mov eax, dword ptr [eax + 0x48]
// 008dcafd  51                   push ecx
// 008dcafe  50                   push eax
// 008dcaff  8d4c2420             lea ecx, [esp + 0x20]
// 008dcb03  51                   push ecx
// 008dcb04  8bce                 mov ecx, esi
// 008dcb06  e80fe3f2ff           call 0x80ae1a
// 008dcb0b  e938010000           jmp 0x8dcc48
// 008dcb10  51                   push ecx
// 008dcb11  8bc2                 mov eax, edx
// 008dcb13  50                   push eax
// 008dcb14  8d4c2420             lea ecx, [esp + 0x20]
// 008dcb18  51                   push ecx
// 008dcb19  8bce                 mov ecx, esi
// 008dcb1b  e8fae2f2ff           call 0x80ae1a
// 008dcb20  e923010000           jmp 0x8dcc48
// 008dcb25  8b401c               mov eax, dword ptr [eax + 0x1c]
// 008dcb28  83783802             cmp dword ptr [eax + 0x38], 2
// 008dcb2c  7463                 je 0x8dcb91
// 008dcb2e  8b5760               mov edx, dword ptr [edi + 0x60]
// 008dcb31  397a04               cmp dword ptr [edx + 4], edi
// 008dcb34  745b                 je 0x8dcb91
// 008dcb36  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008dcb3c  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008dcb3f  83f9ff               cmp ecx, -1
// 008dcb42  7503                 jne 0x8dcb47
// 008dcb44  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008dcb47  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008dcb4a  83faff               cmp edx, -1
// 008dcb4d  7505                 jne 0x8dcb54
// 008dcb4f  8b4048               mov eax, dword ptr [eax + 0x48]
// 008dcb52  eb02                 jmp 0x8dcb56
// 008dcb54  8bc2                 mov eax, edx
// 008dcb56  51                   push ecx
// 008dcb57  50                   push eax
// 008dcb58  8d4502               lea eax, [ebp + 2]
// 008dcb5b  2503000080           and eax, 0x80000003
// 008dcb60  7905                 jns 0x8dcb67
// 008dcb62  48                   dec eax
// 008dcb63  83c8fc               or eax, 0xfffffffc
// 008dcb66  40                   inc eax
// 008dcb67  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dcb6b  8b542424             mov edx, dword ptr [esp + 0x24]
// 008dcb6f  50                   push eax
// 008dcb70  83ec10               sub esp, 0x10
// 008dcb73  8bc4                 mov eax, esp
// 008dcb75  8908                 mov dword ptr [eax], ecx
// 008dcb77  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008dcb7b  895004               mov dword ptr [eax + 4], edx
// 008dcb7e  8b542440             mov edx, dword ptr [esp + 0x40]
// 008dcb82  894808               mov dword ptr [eax + 8], ecx
// 008dcb85  56                   push esi
// 008dcb86  89500c               mov dword ptr [eax + 0xc], edx
// 008dcb89  e862cdffff           call 0x8d98f0
// 008dcb8e  83c420               add esp, 0x20
// 008dcb91  55                   push ebp
// 008dcb92  33c9                 xor ecx, ecx
// 008dcb94  83ec10               sub esp, 0x10
// 008dcb97  8bc4                 mov eax, esp
// 008dcb99  8908                 mov dword ptr [eax], ecx
// 008dcb9b  895804               mov dword ptr [eax + 4], ebx
// 008dcb9e  894808               mov dword ptr [eax + 8], ecx
// 008dcba1  b902000000           mov ecx, 2
// 008dcba6  89480c               mov dword ptr [eax + 0xc], ecx
// 008dcba9  8d44242c             lea eax, [esp + 0x2c]
// 008dcbad  50                   push eax
// 008dcbae  e8edc3ffff           call 0x8d8fa0
// 008dcbb3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008dcbb7  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 008dcbba  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008dcbc0  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008dcbc3  83c418               add esp, 0x18
// 008dcbc6  83f9ff               cmp ecx, -1
// 008dcbc9  7505                 jne 0x8dcbd0
// 008dcbcb  8b4048               mov eax, dword ptr [eax + 0x48]
// 008dcbce  eb02                 jmp 0x8dcbd2
// 008dcbd0  8bc1                 mov eax, ecx
// 008dcbd2  8b5604               mov edx, dword ptr [esi + 4]
// 008dcbd5  50                   push eax
// 008dcbd6  52                   push edx
// 008dcbd7  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 008dcbde  e8dd05f8ff           call 0x85d1c0
// 008dcbe3  c684241401000002     mov byte ptr [esp + 0x114], 2
// 008dcbeb  8b06                 mov eax, dword ptr [esi]
// 008dcbed  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008dcbf0  6a05                 push 5
// 008dcbf2  8bce                 mov ecx, esi
// 008dcbf4  ffd2                 call edx
// 008dcbf6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dcbfa  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008dcbfe  6a06                 push 6
// 008dcc00  6a06                 push 6
// 008dcc02  8944241c             mov dword ptr [esp + 0x1c], eax
// 008dcc06  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008dcc0a  50                   push eax
// 008dcc0b  8b442424             mov eax, dword ptr [esp + 0x24]
// 008dcc0f  51                   push ecx
// 008dcc10  8b4e04               mov ecx, dword ptr [esi + 4]
// 008dcc13  52                   push edx
// 008dcc14  50                   push eax
// 008dcc15  51                   push ecx
// 008dcc16  ff15e000a400         call dword ptr [0xa400e0]
// 008dcc1c  8b442414             mov eax, dword ptr [esp + 0x14]
// 008dcc20  3bc3                 cmp eax, ebx
// 008dcc22  7504                 jne 0x8dcc28
// 008dcc24  33c0                 xor eax, eax
// 008dcc26  eb03                 jmp 0x8dcc2b
// 008dcc28  8b4004               mov eax, dword ptr [eax + 4]
// 008dcc2b  8b5604               mov edx, dword ptr [esi + 4]
// 008dcc2e  50                   push eax
// 008dcc2f  52                   push edx
// 008dcc30  e8c7e1f2ff           call 0x80adfc
// 008dcc35  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 008dcc3c  889c2414010000       mov byte ptr [esp + 0x114], bl
// 008dcc43  e80806f8ff           call 0x85d250
// 008dcc48  8d8424f4000000       lea eax, [esp + 0xf4]
// 008dcc4f  50                   push eax
// 008dcc50  8bce                 mov ecx, esi
// 008dcc52  e8ddfb0e00           call 0x9cc834
// 008dcc57  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008dcc5b  395924               cmp dword ptr [ecx + 0x24], ebx
// 008dcc5e  0f84bb040000         je 0x8dd11f
// 008dcc64  83fd03               cmp ebp, 3
// 008dcc67  0f87b2040000         ja 0x8dd11f
// 008dcc6d  ff24ad8cd18d00       jmp dword ptr [ebp*4 + 0x8dd18c]
// 008dcc74  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dcc78  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008dcc7c  89542440             mov dword ptr [esp + 0x40], edx
// 008dcc80  42                   inc edx
// 008dcc81  89542414             mov dword ptr [esp + 0x14], edx
// 008dcc85  89542450             mov dword ptr [esp + 0x50], edx
// 008dcc89  8b542430             mov edx, dword ptr [esp + 0x30]
// 008dcc8d  83c2fe               add edx, -2
// 008dcc90  8954243c             mov dword ptr [esp + 0x3c], edx
// 008dcc94  89542460             mov dword ptr [esp + 0x60], edx
// 008dcc98  8b542430             mov edx, dword ptr [esp + 0x30]
// 008dcc9c  4a                   dec edx
// 008dcc9d  89542470             mov dword ptr [esp + 0x70], edx
// 008dcca1  8b542414             mov edx, dword ptr [esp + 0x14]
// 008dcca5  89942480000000       mov dword ptr [esp + 0x80], edx
// 008dccac  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008dccb0  8d4101               lea eax, [ecx + 1]
// 008dccb3  89942490000000       mov dword ptr [esp + 0x90], edx
// 008dccba  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dccbe  83c202               add edx, 2
// 008dccc1  894c2454             mov dword ptr [esp + 0x54], ecx
// 008dccc5  894c2464             mov dword ptr [esp + 0x64], ecx
// 008dccc9  899424a0000000       mov dword ptr [esp + 0xa0], edx
// 008dccd0  8b542414             mov edx, dword ptr [esp + 0x14]
// 008dccd4  83c102               add ecx, 2
// 008dccd7  83cdff               or ebp, 0xffffffff
// 008dccda  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 008dcce1  8b542430             mov edx, dword ptr [esp + 0x30]
// 008dcce5  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 008dccec  898c24d4000000       mov dword ptr [esp + 0xd4], ecx
// 008dccf3  6a14                 push 0x14
// 008dccf5  8d4c2444             lea ecx, [esp + 0x44]
// 008dccf9  89442448             mov dword ptr [esp + 0x48], eax
// 008dccfd  89442478             mov dword ptr [esp + 0x78], eax
// 008dcd01  89842488000000       mov dword ptr [esp + 0x88], eax
// 008dcd08  89842498000000       mov dword ptr [esp + 0x98], eax
// 008dcd0f  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 008dcd16  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 008dcd1d  8b442440             mov eax, dword ptr [esp + 0x40]
// 008dcd21  51                   push ecx
// 008dcd22  83c2fd               add edx, -3
// 008dcd25  56                   push esi
// 008dcd26  895c2454             mov dword ptr [esp + 0x54], ebx
// 008dcd2a  896c2458             mov dword ptr [esp + 0x58], ebp
// 008dcd2e  896c2464             mov dword ptr [esp + 0x64], ebp
// 008dcd32  895c2468             mov dword ptr [esp + 0x68], ebx
// 008dcd36  c744247401000000     mov dword ptr [esp + 0x74], 1
// 008dcd3e  895c2478             mov dword ptr [esp + 0x78], ebx
// 008dcd42  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 008dcd49  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 008dcd50  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 008dcd57  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 008dcd5e  c78424a400000001000000 mov dword ptr [esp + 0xa4], 1
// 008dcd69  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 008dcd70  89ac24b4000000       mov dword ptr [esp + 0xb4], ebp
// 008dcd77  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 008dcd7e  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 008dcd85  89ac24c8000000       mov dword ptr [esp + 0xc8], ebp
// 008dcd8c  899424cc000000       mov dword ptr [esp + 0xcc], edx
// 008dcd93  c78424d400000001000000 mov dword ptr [esp + 0xd4], 1
// 008dcd9e  899c24d8000000       mov dword ptr [esp + 0xd8], ebx
// 008dcda5  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 008dcdac  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 008dcdb3  89ac24e8000000       mov dword ptr [esp + 0xe8], ebp
// 008dcdba  e8c11ff8ff           call 0x85ed80
// 008dcdbf  8bc8                 mov ecx, eax
// 008dcdc1  e82a0df8ff           call 0x85daf0
// 008dcdc6  e957030000           jmp 0x8dd122
// 008dcdcb  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008dcdcf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dcdd3  8d4501               lea eax, [ebp + 1]
// 008dcdd6  896c2454             mov dword ptr [esp + 0x54], ebp
// 008dcdda  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008dcdde  83c5fe               add ebp, -2
// 008dcde1  894c2440             mov dword ptr [esp + 0x40], ecx
// 008dcde5  894c2460             mov dword ptr [esp + 0x60], ecx
// 008dcde9  896c2464             mov dword ptr [esp + 0x64], ebp
// 008dcded  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008dcdf1  89442444             mov dword ptr [esp + 0x44], eax
// 008dcdf5  8d4101               lea eax, [ecx + 1]
// 008dcdf8  83c102               add ecx, 2
// 008dcdfb  894c2414             mov dword ptr [esp + 0x14], ecx
// 008dcdff  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 008dce06  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008dce0a  83caff               or edx, 0xffffffff
// 008dce0d  896c2474             mov dword ptr [esp + 0x74], ebp
// 008dce11  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008dce15  41                   inc ecx
// 008dce16  45                   inc ebp
// 008dce17  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 008dce1e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008dce22  89ac2484000000       mov dword ptr [esp + 0x84], ebp
// 008dce29  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008dce2d  83c102               add ecx, 2
// 008dce30  8954244c             mov dword ptr [esp + 0x4c], edx
// 008dce34  89542458             mov dword ptr [esp + 0x58], edx
// 008dce38  89542478             mov dword ptr [esp + 0x78], edx
// 008dce3c  89942488000000       mov dword ptr [esp + 0x88], edx
// 008dce43  89942498000000       mov dword ptr [esp + 0x98], edx
// 008dce4a  899424a8000000       mov dword ptr [esp + 0xa8], edx
// 008dce51  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 008dce58  899424c8000000       mov dword ptr [esp + 0xc8], edx
// 008dce5f  8b542434             mov edx, dword ptr [esp + 0x34]
// 008dce63  83c5fe               add ebp, -2
// 008dce66  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 008dce6d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008dce71  83c2fd               add edx, -3
// 008dce74  895c2448             mov dword ptr [esp + 0x48], ebx
// 008dce78  89442450             mov dword ptr [esp + 0x50], eax
// 008dce7c  895c245c             mov dword ptr [esp + 0x5c], ebx
// 008dce80  895c2468             mov dword ptr [esp + 0x68], ebx
// 008dce84  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 008dce8c  89442470             mov dword ptr [esp + 0x70], eax
// 008dce90  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 008dce97  898c24c0000000       mov dword ptr [esp + 0xc0], ecx
// 008dce9e  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 008dcea5  899424d4000000       mov dword ptr [esp + 0xd4], edx
// 008dceac  c78424dc00000001000000 mov dword ptr [esp + 0xdc], 1
// 008dceb7  e902020000           jmp 0x8dd0be
// 008dcebc  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008dcec0  8d45fe               lea eax, [ebp - 2]
// 008dcec3  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dcec7  4d                   dec ebp
// 008dcec8  896c2454             mov dword ptr [esp + 0x54], ebp
// 008dcecc  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008dced0  4d                   dec ebp
// 008dced1  896c2460             mov dword ptr [esp + 0x60], ebp
// 008dced5  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008dced9  83c5fe               add ebp, -2
// 008dcedc  896c243c             mov dword ptr [esp + 0x3c], ebp
// 008dcee0  896c2470             mov dword ptr [esp + 0x70], ebp
// 008dcee4  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008dcee8  4d                   dec ebp
// 008dcee9  896c2474             mov dword ptr [esp + 0x74], ebp
// 008dceed  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 008dcef1  b901000000           mov ecx, 1
// 008dcef6  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 008dcefd  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008dcf01  89542440             mov dword ptr [esp + 0x40], edx
// 008dcf05  42                   inc edx
// 008dcf06  83c502               add ebp, 2
// 008dcf09  89542450             mov dword ptr [esp + 0x50], edx
// 008dcf0d  89942480000000       mov dword ptr [esp + 0x80], edx
// 008dcf14  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 008dcf1b  8b542434             mov edx, dword ptr [esp + 0x34]
// 008dcf1f  89ac24a0000000       mov dword ptr [esp + 0xa0], ebp
// 008dcf26  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008dcf2a  83c2fd               add edx, -3
// 008dcf2d  89442444             mov dword ptr [esp + 0x44], eax
// 008dcf31  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008dcf35  89442464             mov dword ptr [esp + 0x64], eax
// 008dcf39  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008dcf3d  894c2478             mov dword ptr [esp + 0x78], ecx
// 008dcf41  89842484000000       mov dword ptr [esp + 0x84], eax
// 008dcf48  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 008dcf4f  89842494000000       mov dword ptr [esp + 0x94], eax
// 008dcf56  898c2498000000       mov dword ptr [esp + 0x98], ecx
// 008dcf5d  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 008dcf64  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 008dcf6b  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 008dcf72  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008dcf76  898c24c8000000       mov dword ptr [esp + 0xc8], ecx
// 008dcf7d  898c24dc000000       mov dword ptr [esp + 0xdc], ecx
// 008dcf84  83c5fd               add ebp, -3
// 008dcf87  6a14                 push 0x14
// 008dcf89  8d4c2444             lea ecx, [esp + 0x44]
// 008dcf8d  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008dcf91  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 008dcf99  895c2460             mov dword ptr [esp + 0x60], ebx
// 008dcf9d  895c246c             mov dword ptr [esp + 0x6c], ebx
// 008dcfa1  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 008dcfa8  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 008dcfaf  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 008dcfba  899424b8000000       mov dword ptr [esp + 0xb8], edx
// 008dcfc1  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 008dcfc8  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 008dcfcf  899424d8000000       mov dword ptr [esp + 0xd8], edx
// 008dcfd6  51                   push ecx
// 008dcfd7  e913010000           jmp 0x8dd0ef
// 008dcfdc  8b442430             mov eax, dword ptr [esp + 0x30]
// 008dcfe0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008dcfe4  8d68ff               lea ebp, [eax - 1]
// 008dcfe7  896c2440             mov dword ptr [esp + 0x40], ebp
// 008dcfeb  896c2460             mov dword ptr [esp + 0x60], ebp
// 008dcfef  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008dcff3  83c5fe               add ebp, -2
// 008dcff6  896c2464             mov dword ptr [esp + 0x64], ebp
// 008dcffa  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008dcffe  896c2474             mov dword ptr [esp + 0x74], ebp
// 008dd002  83c5fe               add ebp, -2
// 008dd005  8d5101               lea edx, [ecx + 1]
// 008dd008  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 008dd00f  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008dd013  89542444             mov dword ptr [esp + 0x44], edx
// 008dd017  89942484000000       mov dword ptr [esp + 0x84], edx
// 008dd01e  83c5fd               add ebp, -3
// 008dd021  899424a4000000       mov dword ptr [esp + 0xa4], edx
// 008dd028  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008dd02c  83c202               add edx, 2
// 008dd02f  89ac24a0000000       mov dword ptr [esp + 0xa0], ebp
// 008dd036  89ac24c0000000       mov dword ptr [esp + 0xc0], ebp
// 008dd03d  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008dd041  83c0fe               add eax, -2
// 008dd044  899424b4000000       mov dword ptr [esp + 0xb4], edx
// 008dd04b  8d55fe               lea edx, [ebp - 2]
// 008dd04e  894c2454             mov dword ptr [esp + 0x54], ecx
// 008dd052  b901000000           mov ecx, 1
// 008dd057  83c5fd               add ebp, -3
// 008dd05a  895c2448             mov dword ptr [esp + 0x48], ebx
// 008dd05e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008dd066  89442450             mov dword ptr [esp + 0x50], eax
// 008dd06a  894c2458             mov dword ptr [esp + 0x58], ecx
// 008dd06e  895c245c             mov dword ptr [esp + 0x5c], ebx
// 008dd072  895c2468             mov dword ptr [esp + 0x68], ebx
// 008dd076  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008dd07a  89442470             mov dword ptr [esp + 0x70], eax
// 008dd07e  894c2478             mov dword ptr [esp + 0x78], ecx
// 008dd082  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 008dd089  898c2498000000       mov dword ptr [esp + 0x98], ecx
// 008dd090  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 008dd097  c78424bc000000ffffffff mov dword ptr [esp + 0xbc], 0xffffffff
// 008dd0a2  899424c4000000       mov dword ptr [esp + 0xc4], edx
// 008dd0a9  898c24c8000000       mov dword ptr [esp + 0xc8], ecx
// 008dd0b0  89ac24d4000000       mov dword ptr [esp + 0xd4], ebp
// 008dd0b7  898c24dc000000       mov dword ptr [esp + 0xdc], ecx
// 008dd0be  89842480000000       mov dword ptr [esp + 0x80], eax
// 008dd0c5  89842490000000       mov dword ptr [esp + 0x90], eax
// 008dd0cc  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 008dd0d3  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 008dd0da  6a14                 push 0x14
// 008dd0dc  8d442444             lea eax, [esp + 0x44]
// 008dd0e0  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 008dd0e7  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 008dd0ee  50                   push eax
// 008dd0ef  56                   push esi
// 008dd0f0  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 008dd0f7  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 008dd0fe  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 008dd105  899c24d8000000       mov dword ptr [esp + 0xd8], ebx
// 008dd10c  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 008dd113  e8681cf8ff           call 0x85ed80
// 008dd118  8bc8                 mov ecx, eax
// 008dd11a  e8d109f8ff           call 0x85daf0
// 008dd11f  83cdff               or ebp, 0xffffffff
// 008dd122  8b5f44               mov ebx, dword ptr [edi + 0x44]
// 008dd125  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008dd129  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 008dd12c  8b11                 mov edx, dword ptr [ecx]
// 008dd12e  6a01                 push 1
// 008dd130  83ec10               sub esp, 0x10
// 008dd133  8bc4                 mov eax, esp
// 008dd135  8918                 mov dword ptr [eax], ebx
// 008dd137  8b5f48               mov ebx, dword ptr [edi + 0x48]
// 008dd13a  895804               mov dword ptr [eax + 4], ebx
// 008dd13d  8b5f4c               mov ebx, dword ptr [edi + 0x4c]
// 008dd140  895808               mov dword ptr [eax + 8], ebx
// 008dd143  8b5f50               mov ebx, dword ptr [edi + 0x50]
// 008dd146  57                   push edi
// 008dd147  89580c               mov dword ptr [eax + 0xc], ebx
// 008dd14a  8b4268               mov eax, dword ptr [edx + 0x68]
// 008dd14d  56                   push esi
// 008dd14e  ffd0                 call eax
// 008dd150  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 008dd157  89ac2414010000       mov dword ptr [esp + 0x114], ebp
// 008dd15e  c78424f4000000402aac00 mov dword ptr [esp + 0xf4], 0xac2a40
// 008dd169  e8c267b3ff           call 0x413930
// 008dd16e  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 008dd175  64890d00000000       mov dword ptr fs:[0], ecx
// 008dd17c  59                   pop ecx
// 008dd17d  5f                   pop edi
// 008dd17e  5e                   pop esi
// 008dd17f  5d                   pop ebp
// 008dd180  5b                   pop ebx
// 008dd181  81c404010000         add esp, 0x104
// 008dd187  c20800               ret 8
// 008dd18a  8bff                 mov edi, edi
// 008dd18c  74cc                 je 0x8dd15a
// 008dd18e  8d00                 lea eax, [eax]
// 008dd190  cb                   retf 
// 008dd191  cd8d                 int 0x8d
// 008dd193  00bcce8d00dccf       add byte ptr [esi + ecx*8 - 0x3023ff73], bh
// 008dd19a  8d00                 lea eax, [eax]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPageFlat@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp