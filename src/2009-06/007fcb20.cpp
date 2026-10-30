// roc 2009-06 007fcb20  unit: CXTPTabPaintManager::CAppearanceSetPropertyPageFlat  size: 2700 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fcb20
//
// 007fcb20  6aff                 push -1
// 007fcb22  68a8128800           push 0x8812a8
// 007fcb27  64a100000000         mov eax, dword ptr fs:[0]
// 007fcb2d  50                   push eax
// 007fcb2e  81ecf8000000         sub esp, 0xf8
// 007fcb34  53                   push ebx
// 007fcb35  55                   push ebp
// 007fcb36  56                   push esi
// 007fcb37  57                   push edi
// 007fcb38  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007fcb3d  33c4                 xor eax, esp
// 007fcb3f  50                   push eax
// 007fcb40  8d84240c010000       lea eax, [esp + 0x10c]
// 007fcb47  64a300000000         mov dword ptr fs:[0], eax
// 007fcb4d  894c2438             mov dword ptr [esp + 0x38], ecx
// 007fcb51  8bbc2420010000       mov edi, dword ptr [esp + 0x120]
// 007fcb58  8b4744               mov eax, dword ptr [edi + 0x44]
// 007fcb5b  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 007fcb5e  8b574c               mov edx, dword ptr [edi + 0x4c]
// 007fcb61  89442418             mov dword ptr [esp + 0x18], eax
// 007fcb65  8b4750               mov eax, dword ptr [edi + 0x50]
// 007fcb68  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007fcb6c  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 007fcb6f  89442424             mov dword ptr [esp + 0x24], eax
// 007fcb73  89542420             mov dword ptr [esp + 0x20], edx
// 007fcb77  8b11                 mov edx, dword ptr [ecx]
// 007fcb79  8b4248               mov eax, dword ptr [edx + 0x48]
// 007fcb7c  ffd0                 call eax
// 007fcb7e  8be8                 mov ebp, eax
// 007fcb80  55                   push ebp
// 007fcb81  33c9                 xor ecx, ecx
// 007fcb83  83ec10               sub esp, 0x10
// 007fcb86  8bc4                 mov eax, esp
// 007fcb88  8908                 mov dword ptr [eax], ecx
// 007fcb8a  33db                 xor ebx, ebx
// 007fcb8c  33d2                 xor edx, edx
// 007fcb8e  895004               mov dword ptr [eax + 4], edx
// 007fcb91  8d7301               lea esi, [ebx + 1]
// 007fcb94  897008               mov dword ptr [eax + 8], esi
// 007fcb97  89480c               mov dword ptr [eax + 0xc], ecx
// 007fcb9a  8d4c242c             lea ecx, [esp + 0x2c]
// 007fcb9e  51                   push ecx
// 007fcb9f  e86cc7ffff           call 0x7f9310
// 007fcba4  8b542430             mov edx, dword ptr [esp + 0x30]
// 007fcba8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007fcbac  8b442434             mov eax, dword ptr [esp + 0x34]
// 007fcbb0  8bb42434010000       mov esi, dword ptr [esp + 0x134]
// 007fcbb7  89542440             mov dword ptr [esp + 0x40], edx
// 007fcbbb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007fcbbf  894c2448             mov dword ptr [esp + 0x48], ecx
// 007fcbc3  83c418               add esp, 0x18
// 007fcbc6  8944242c             mov dword ptr [esp + 0x2c], eax
// 007fcbca  8b06                 mov eax, dword ptr [esi]
// 007fcbcc  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 007fcbd3  89542434             mov dword ptr [esp + 0x34], edx
// 007fcbd7  8b5058               mov edx, dword ptr [eax + 0x58]
// 007fcbda  51                   push ecx
// 007fcbdb  8bce                 mov ecx, esi
// 007fcbdd  ffd2                 call edx
// 007fcbdf  899c24f8000000       mov dword ptr [esp + 0xf8], ebx
// 007fcbe6  c78424f40000008c2b8f00 mov dword ptr [esp + 0xf4], 0x8f2b8c
// 007fcbf1  8d8424fc000000       lea eax, [esp + 0xfc]
// 007fcbf8  50                   push eax
// 007fcbf9  899c2418010000       mov dword ptr [esp + 0x118], ebx
// 007fcc00  ff1580e08900         call dword ptr [0x89e080]
// 007fcc06  50                   push eax
// 007fcc07  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 007fcc0e  e8efc3f1ff           call 0x719002
// 007fcc13  55                   push ebp
// 007fcc14  33c9                 xor ecx, ecx
// 007fcc16  83ec10               sub esp, 0x10
// 007fcc19  8bc4                 mov eax, esp
// 007fcc1b  8908                 mov dword ptr [eax], ecx
// 007fcc1d  895804               mov dword ptr [eax + 4], ebx
// 007fcc20  894808               mov dword ptr [eax + 8], ecx
// 007fcc23  b901000000           mov ecx, 1
// 007fcc28  89480c               mov dword ptr [eax + 0xc], ecx
// 007fcc2b  8d4c243c             lea ecx, [esp + 0x3c]
// 007fcc2f  51                   push ecx
// 007fcc30  e8dbc6ffff           call 0x7f9310
// 007fcc35  8b542440             mov edx, dword ptr [esp + 0x40]
// 007fcc39  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007fcc3d  83c408               add esp, 8
// 007fcc40  8bc4                 mov eax, esp
// 007fcc42  8910                 mov dword ptr [eax], edx
// 007fcc44  8b542440             mov edx, dword ptr [esp + 0x40]
// 007fcc48  894804               mov dword ptr [eax + 4], ecx
// 007fcc4b  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007fcc4f  895008               mov dword ptr [eax + 8], edx
// 007fcc52  56                   push esi
// 007fcc53  89480c               mov dword ptr [eax + 0xc], ecx
// 007fcc56  e81559f7ff           call 0x772570
// 007fcc5b  8bc8                 mov ecx, eax
// 007fcc5d  e8aeb7faff           call 0x7a8410
// 007fcc62  8b542418             mov edx, dword ptr [esp + 0x18]
// 007fcc66  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007fcc6a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007fcc6e  55                   push ebp
// 007fcc6f  899424e4000000       mov dword ptr [esp + 0xe4], edx
// 007fcc76  8b542428             mov edx, dword ptr [esp + 0x28]
// 007fcc7a  898c24ec000000       mov dword ptr [esp + 0xec], ecx
// 007fcc81  83c9ff               or ecx, 0xffffffff
// 007fcc84  898424e8000000       mov dword ptr [esp + 0xe8], eax
// 007fcc8b  83ec10               sub esp, 0x10
// 007fcc8e  8bc4                 mov eax, esp
// 007fcc90  8908                 mov dword ptr [eax], ecx
// 007fcc92  89942400010000       mov dword ptr [esp + 0x100], edx
// 007fcc99  0bd1                 or edx, ecx
// 007fcc9b  895004               mov dword ptr [eax + 4], edx
// 007fcc9e  0bc9                 or ecx, ecx
// 007fcca0  894808               mov dword ptr [eax + 8], ecx
// 007fcca3  33c9                 xor ecx, ecx
// 007fcca5  89480c               mov dword ptr [eax + 0xc], ecx
// 007fcca8  8d8424f4000000       lea eax, [esp + 0xf4]
// 007fccaf  50                   push eax
// 007fccb0  e85bc6ffff           call 0x7f9310
// 007fccb5  8b442450             mov eax, dword ptr [esp + 0x50]
// 007fccb9  83c418               add esp, 0x18
// 007fccbc  395828               cmp dword ptr [eax + 0x28], ebx
// 007fccbf  0f84a9010000         je 0x7fce6e
// 007fccc5  8b5760               mov edx, dword ptr [edi + 0x60]
// 007fccc8  397a04               cmp dword ptr [edx + 4], edi
// 007fcccb  0f850f010000         jne 0x7fcde0
// 007fccd1  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 007fccd4  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007fccda  8b10                 mov edx, dword ptr [eax]
// 007fccdc  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 007fcce3  8b5218               mov edx, dword ptr [edx + 0x18]
// 007fcce6  57                   push edi
// 007fcce7  83ec10               sub esp, 0x10
// 007fccea  89442428             mov dword ptr [esp + 0x28], eax
// 007fccee  8bc4                 mov eax, esp
// 007fccf0  8908                 mov dword ptr [eax], ecx
// 007fccf2  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 007fccf9  894804               mov dword ptr [eax + 4], ecx
// 007fccfc  8b8c24fc000000       mov ecx, dword ptr [esp + 0xfc]
// 007fcd03  894808               mov dword ptr [eax + 8], ecx
// 007fcd06  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 007fcd0d  89480c               mov dword ptr [eax + 0xc], ecx
// 007fcd10  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fcd14  56                   push esi
// 007fcd15  ffd2                 call edx
// 007fcd17  8b4760               mov eax, dword ptr [edi + 0x60]
// 007fcd1a  397804               cmp dword ptr [eax + 4], edi
// 007fcd1d  7462                 je 0x7fcd81
// 007fcd1f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007fcd23  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 007fcd26  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 007fcd2c  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007fcd2f  83f9ff               cmp ecx, -1
// 007fcd32  7503                 jne 0x7fcd37
// 007fcd34  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007fcd37  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007fcd3a  83faff               cmp edx, -1
// 007fcd3d  7505                 jne 0x7fcd44
// 007fcd3f  8b4048               mov eax, dword ptr [eax + 0x48]
// 007fcd42  eb02                 jmp 0x7fcd46
// 007fcd44  8bc2                 mov eax, edx
// 007fcd46  51                   push ecx
// 007fcd47  50                   push eax
// 007fcd48  8d4502               lea eax, [ebp + 2]
// 007fcd4b  2503000080           and eax, 0x80000003
// 007fcd50  7905                 jns 0x7fcd57
// 007fcd52  48                   dec eax
// 007fcd53  83c8fc               or eax, 0xfffffffc
// 007fcd56  40                   inc eax
// 007fcd57  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007fcd5b  8b542424             mov edx, dword ptr [esp + 0x24]
// 007fcd5f  50                   push eax
// 007fcd60  83ec10               sub esp, 0x10
// 007fcd63  8bc4                 mov eax, esp
// 007fcd65  8908                 mov dword ptr [eax], ecx
// 007fcd67  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007fcd6b  895004               mov dword ptr [eax + 4], edx
// 007fcd6e  8b542440             mov edx, dword ptr [esp + 0x40]
// 007fcd72  894808               mov dword ptr [eax + 8], ecx
// 007fcd75  56                   push esi
// 007fcd76  89500c               mov dword ptr [eax + 0xc], edx
// 007fcd79  e8a2ceffff           call 0x7f9c20
// 007fcd7e  83c420               add esp, 0x20
// 007fcd81  55                   push ebp
// 007fcd82  33c9                 xor ecx, ecx
// 007fcd84  83ec10               sub esp, 0x10
// 007fcd87  8bc4                 mov eax, esp
// 007fcd89  8908                 mov dword ptr [eax], ecx
// 007fcd8b  895804               mov dword ptr [eax + 4], ebx
// 007fcd8e  894808               mov dword ptr [eax + 8], ecx
// 007fcd91  b902000000           mov ecx, 2
// 007fcd96  89480c               mov dword ptr [eax + 0xc], ecx
// 007fcd99  8d44242c             lea eax, [esp + 0x2c]
// 007fcd9d  50                   push eax
// 007fcd9e  e86dc5ffff           call 0x7f9310
// 007fcda3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007fcda7  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 007fcdaa  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 007fcdb0  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007fcdb3  83c418               add esp, 0x18
// 007fcdb6  83f9ff               cmp ecx, -1
// 007fcdb9  7505                 jne 0x7fcdc0
// 007fcdbb  8b4048               mov eax, dword ptr [eax + 0x48]
// 007fcdbe  eb02                 jmp 0x7fcdc2
// 007fcdc0  8bc1                 mov eax, ecx
// 007fcdc2  8b5604               mov edx, dword ptr [esi + 4]
// 007fcdc5  50                   push eax
// 007fcdc6  52                   push edx
// 007fcdc7  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 007fcdce  e82d3bf7ff           call 0x770900
// 007fcdd3  c684241401000001     mov byte ptr [esp + 0x114], 1
// 007fcddb  e91b020000           jmp 0x7fcffb
// 007fcde0  8b525c               mov edx, dword ptr [edx + 0x5c]
// 007fcde3  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 007fcde6  4a                   dec edx
// 007fcde7  3bca                 cmp ecx, edx
// 007fcde9  0f8d69020000         jge 0x7fd058
// 007fcdef  83fd02               cmp ebp, 2
// 007fcdf2  7404                 je 0x7fcdf8
// 007fcdf4  3beb                 cmp ebp, ebx
// 007fcdf6  753b                 jne 0x7fce33
// 007fcdf8  8b401c               mov eax, dword ptr [eax + 0x1c]
// 007fcdfb  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007fce01  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 007fce04  83f8ff               cmp eax, -1
// 007fce07  7503                 jne 0x7fce0c
// 007fce09  8b4148               mov eax, dword ptr [ecx + 0x48]
// 007fce0c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007fce10  50                   push eax
// 007fce11  8b442428             mov eax, dword ptr [esp + 0x28]
// 007fce15  2bc1                 sub eax, ecx
// 007fce17  83e806               sub eax, 6
// 007fce1a  50                   push eax
// 007fce1b  83c103               add ecx, 3
// 007fce1e  6a01                 push 1
// 007fce20  51                   push ecx
// 007fce21  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fce25  49                   dec ecx
// 007fce26  51                   push ecx
// 007fce27  8bce                 mov ecx, esi
// 007fce29  e802f10400           call 0x84bf30
// 007fce2e  e925020000           jmp 0x7fd058
// 007fce33  8b501c               mov edx, dword ptr [eax + 0x1c]
// 007fce36  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 007fce3c  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 007fce3f  83f8ff               cmp eax, -1
// 007fce42  7503                 jne 0x7fce47
// 007fce44  8b4148               mov eax, dword ptr [ecx + 0x48]
// 007fce47  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fce4b  50                   push eax
// 007fce4c  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fce50  2bc1                 sub eax, ecx
// 007fce52  6a01                 push 1
// 007fce54  83e806               sub eax, 6
// 007fce57  50                   push eax
// 007fce58  8b442430             mov eax, dword ptr [esp + 0x30]
// 007fce5c  48                   dec eax
// 007fce5d  83c103               add ecx, 3
// 007fce60  50                   push eax
// 007fce61  51                   push ecx
// 007fce62  8bce                 mov ecx, esi
// 007fce64  e8c7f00400           call 0x84bf30
// 007fce69  e9ea010000           jmp 0x7fd058
// 007fce6e  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 007fce71  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007fce77  8b10                 mov edx, dword ptr [eax]
// 007fce79  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 007fce80  8b5218               mov edx, dword ptr [edx + 0x18]
// 007fce83  57                   push edi
// 007fce84  83ec10               sub esp, 0x10
// 007fce87  89442428             mov dword ptr [esp + 0x28], eax
// 007fce8b  8bc4                 mov eax, esp
// 007fce8d  8908                 mov dword ptr [eax], ecx
// 007fce8f  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 007fce96  894804               mov dword ptr [eax + 4], ecx
// 007fce99  8b8c24fc000000       mov ecx, dword ptr [esp + 0xfc]
// 007fcea0  894808               mov dword ptr [eax + 8], ecx
// 007fcea3  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 007fceaa  89480c               mov dword ptr [eax + 0xc], ecx
// 007fcead  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fceb1  56                   push esi
// 007fceb2  ffd2                 call edx
// 007fceb4  8b442438             mov eax, dword ptr [esp + 0x38]
// 007fceb8  395824               cmp dword ptr [eax + 0x24], ebx
// 007fcebb  7478                 je 0x7fcf35
// 007fcebd  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 007fcec0  397904               cmp dword ptr [ecx + 4], edi
// 007fcec3  7529                 jne 0x7fceee
// 007fcec5  55                   push ebp
// 007fcec6  33c9                 xor ecx, ecx
// 007fcec8  83ec10               sub esp, 0x10
// 007fcecb  8bc4                 mov eax, esp
// 007fcecd  8908                 mov dword ptr [eax], ecx
// 007fcecf  895804               mov dword ptr [eax + 4], ebx
// 007fced2  894808               mov dword ptr [eax + 8], ecx
// 007fced5  8d54242c             lea edx, [esp + 0x2c]
// 007fced9  b901000000           mov ecx, 1
// 007fcede  52                   push edx
// 007fcedf  89480c               mov dword ptr [eax + 0xc], ecx
// 007fcee2  e829c4ffff           call 0x7f9310
// 007fcee7  8b442450             mov eax, dword ptr [esp + 0x50]
// 007fceeb  83c418               add esp, 0x18
// 007fceee  8b401c               mov eax, dword ptr [eax + 0x1c]
// 007fcef1  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007fcef7  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007fcefa  83f9ff               cmp ecx, -1
// 007fcefd  7503                 jne 0x7fcf02
// 007fceff  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007fcf02  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007fcf05  83faff               cmp edx, -1
// 007fcf08  7516                 jne 0x7fcf20
// 007fcf0a  8b4048               mov eax, dword ptr [eax + 0x48]
// 007fcf0d  51                   push ecx
// 007fcf0e  50                   push eax
// 007fcf0f  8d4c2420             lea ecx, [esp + 0x20]
// 007fcf13  51                   push ecx
// 007fcf14  8bce                 mov ecx, esi
// 007fcf16  e8afc8f1ff           call 0x7197ca
// 007fcf1b  e938010000           jmp 0x7fd058
// 007fcf20  51                   push ecx
// 007fcf21  8bc2                 mov eax, edx
// 007fcf23  50                   push eax
// 007fcf24  8d4c2420             lea ecx, [esp + 0x20]
// 007fcf28  51                   push ecx
// 007fcf29  8bce                 mov ecx, esi
// 007fcf2b  e89ac8f1ff           call 0x7197ca
// 007fcf30  e923010000           jmp 0x7fd058
// 007fcf35  8b401c               mov eax, dword ptr [eax + 0x1c]
// 007fcf38  83783802             cmp dword ptr [eax + 0x38], 2
// 007fcf3c  7463                 je 0x7fcfa1
// 007fcf3e  8b5760               mov edx, dword ptr [edi + 0x60]
// 007fcf41  397a04               cmp dword ptr [edx + 4], edi
// 007fcf44  745b                 je 0x7fcfa1
// 007fcf46  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007fcf4c  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007fcf4f  83f9ff               cmp ecx, -1
// 007fcf52  7503                 jne 0x7fcf57
// 007fcf54  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007fcf57  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007fcf5a  83faff               cmp edx, -1
// 007fcf5d  7505                 jne 0x7fcf64
// 007fcf5f  8b4048               mov eax, dword ptr [eax + 0x48]
// 007fcf62  eb02                 jmp 0x7fcf66
// 007fcf64  8bc2                 mov eax, edx
// 007fcf66  51                   push ecx
// 007fcf67  50                   push eax
// 007fcf68  8d4502               lea eax, [ebp + 2]
// 007fcf6b  2503000080           and eax, 0x80000003
// 007fcf70  7905                 jns 0x7fcf77
// 007fcf72  48                   dec eax
// 007fcf73  83c8fc               or eax, 0xfffffffc
// 007fcf76  40                   inc eax
// 007fcf77  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007fcf7b  8b542424             mov edx, dword ptr [esp + 0x24]
// 007fcf7f  50                   push eax
// 007fcf80  83ec10               sub esp, 0x10
// 007fcf83  8bc4                 mov eax, esp
// 007fcf85  8908                 mov dword ptr [eax], ecx
// 007fcf87  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007fcf8b  895004               mov dword ptr [eax + 4], edx
// 007fcf8e  8b542440             mov edx, dword ptr [esp + 0x40]
// 007fcf92  894808               mov dword ptr [eax + 8], ecx
// 007fcf95  56                   push esi
// 007fcf96  89500c               mov dword ptr [eax + 0xc], edx
// 007fcf99  e882ccffff           call 0x7f9c20
// 007fcf9e  83c420               add esp, 0x20
// 007fcfa1  55                   push ebp
// 007fcfa2  33c9                 xor ecx, ecx
// 007fcfa4  83ec10               sub esp, 0x10
// 007fcfa7  8bc4                 mov eax, esp
// 007fcfa9  8908                 mov dword ptr [eax], ecx
// 007fcfab  895804               mov dword ptr [eax + 4], ebx
// 007fcfae  894808               mov dword ptr [eax + 8], ecx
// 007fcfb1  b902000000           mov ecx, 2
// 007fcfb6  89480c               mov dword ptr [eax + 0xc], ecx
// 007fcfb9  8d44242c             lea eax, [esp + 0x2c]
// 007fcfbd  50                   push eax
// 007fcfbe  e84dc3ffff           call 0x7f9310
// 007fcfc3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007fcfc7  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 007fcfca  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 007fcfd0  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007fcfd3  83c418               add esp, 0x18
// 007fcfd6  83f9ff               cmp ecx, -1
// 007fcfd9  7505                 jne 0x7fcfe0
// 007fcfdb  8b4048               mov eax, dword ptr [eax + 0x48]
// 007fcfde  eb02                 jmp 0x7fcfe2
// 007fcfe0  8bc1                 mov eax, ecx
// 007fcfe2  8b5604               mov edx, dword ptr [esi + 4]
// 007fcfe5  50                   push eax
// 007fcfe6  52                   push edx
// 007fcfe7  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 007fcfee  e80d39f7ff           call 0x770900
// 007fcff3  c684241401000002     mov byte ptr [esp + 0x114], 2
// 007fcffb  8b06                 mov eax, dword ptr [esi]
// 007fcffd  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007fd000  6a05                 push 5
// 007fd002  8bce                 mov ecx, esi
// 007fd004  ffd2                 call edx
// 007fd006  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007fd00a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007fd00e  6a06                 push 6
// 007fd010  6a06                 push 6
// 007fd012  8944241c             mov dword ptr [esp + 0x1c], eax
// 007fd016  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007fd01a  50                   push eax
// 007fd01b  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fd01f  51                   push ecx
// 007fd020  8b4e04               mov ecx, dword ptr [esi + 4]
// 007fd023  52                   push edx
// 007fd024  50                   push eax
// 007fd025  51                   push ecx
// 007fd026  ff15f8e08900         call dword ptr [0x89e0f8]
// 007fd02c  8b442414             mov eax, dword ptr [esp + 0x14]
// 007fd030  3bc3                 cmp eax, ebx
// 007fd032  7504                 jne 0x7fd038
// 007fd034  33c0                 xor eax, eax
// 007fd036  eb03                 jmp 0x7fd03b
// 007fd038  8b4004               mov eax, dword ptr [eax + 4]
// 007fd03b  8b5604               mov edx, dword ptr [esi + 4]
// 007fd03e  50                   push eax
// 007fd03f  52                   push edx
// 007fd040  e847f00400           call 0x84c08c
// 007fd045  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 007fd04c  889c2414010000       mov byte ptr [esp + 0x114], bl
// 007fd053  e83839f7ff           call 0x770990
// 007fd058  8d8424f4000000       lea eax, [esp + 0xf4]
// 007fd05f  50                   push eax
// 007fd060  8bce                 mov ecx, esi
// 007fd062  e891f00400           call 0x84c0f8
// 007fd067  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007fd06b  395924               cmp dword ptr [ecx + 0x24], ebx
// 007fd06e  0f84bb040000         je 0x7fd52f
// 007fd074  83fd03               cmp ebp, 3
// 007fd077  0f87b2040000         ja 0x7fd52f
// 007fd07d  ff24ad9cd57f00       jmp dword ptr [ebp*4 + 0x7fd59c]
// 007fd084  8b542428             mov edx, dword ptr [esp + 0x28]
// 007fd088  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fd08c  89542440             mov dword ptr [esp + 0x40], edx
// 007fd090  42                   inc edx
// 007fd091  89542414             mov dword ptr [esp + 0x14], edx
// 007fd095  89542450             mov dword ptr [esp + 0x50], edx
// 007fd099  8b542430             mov edx, dword ptr [esp + 0x30]
// 007fd09d  83c2fe               add edx, -2
// 007fd0a0  8954243c             mov dword ptr [esp + 0x3c], edx
// 007fd0a4  89542460             mov dword ptr [esp + 0x60], edx
// 007fd0a8  8b542430             mov edx, dword ptr [esp + 0x30]
// 007fd0ac  4a                   dec edx
// 007fd0ad  89542470             mov dword ptr [esp + 0x70], edx
// 007fd0b1  8b542414             mov edx, dword ptr [esp + 0x14]
// 007fd0b5  89942480000000       mov dword ptr [esp + 0x80], edx
// 007fd0bc  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007fd0c0  8d4101               lea eax, [ecx + 1]
// 007fd0c3  89942490000000       mov dword ptr [esp + 0x90], edx
// 007fd0ca  8b542428             mov edx, dword ptr [esp + 0x28]
// 007fd0ce  83c202               add edx, 2
// 007fd0d1  894c2454             mov dword ptr [esp + 0x54], ecx
// 007fd0d5  894c2464             mov dword ptr [esp + 0x64], ecx
// 007fd0d9  899424a0000000       mov dword ptr [esp + 0xa0], edx
// 007fd0e0  8b542414             mov edx, dword ptr [esp + 0x14]
// 007fd0e4  83c102               add ecx, 2
// 007fd0e7  83cdff               or ebp, 0xffffffff
// 007fd0ea  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 007fd0f1  8b542430             mov edx, dword ptr [esp + 0x30]
// 007fd0f5  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 007fd0fc  898c24d4000000       mov dword ptr [esp + 0xd4], ecx
// 007fd103  6a14                 push 0x14
// 007fd105  8d4c2444             lea ecx, [esp + 0x44]
// 007fd109  89442448             mov dword ptr [esp + 0x48], eax
// 007fd10d  89442478             mov dword ptr [esp + 0x78], eax
// 007fd111  89842488000000       mov dword ptr [esp + 0x88], eax
// 007fd118  89842498000000       mov dword ptr [esp + 0x98], eax
// 007fd11f  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 007fd126  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 007fd12d  8b442440             mov eax, dword ptr [esp + 0x40]
// 007fd131  51                   push ecx
// 007fd132  83c2fd               add edx, -3
// 007fd135  56                   push esi
// 007fd136  895c2454             mov dword ptr [esp + 0x54], ebx
// 007fd13a  896c2458             mov dword ptr [esp + 0x58], ebp
// 007fd13e  896c2464             mov dword ptr [esp + 0x64], ebp
// 007fd142  895c2468             mov dword ptr [esp + 0x68], ebx
// 007fd146  c744247401000000     mov dword ptr [esp + 0x74], 1
// 007fd14e  895c2478             mov dword ptr [esp + 0x78], ebx
// 007fd152  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 007fd159  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 007fd160  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 007fd167  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 007fd16e  c78424a400000001000000 mov dword ptr [esp + 0xa4], 1
// 007fd179  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 007fd180  89ac24b4000000       mov dword ptr [esp + 0xb4], ebp
// 007fd187  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 007fd18e  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 007fd195  89ac24c8000000       mov dword ptr [esp + 0xc8], ebp
// 007fd19c  899424cc000000       mov dword ptr [esp + 0xcc], edx
// 007fd1a3  c78424d400000001000000 mov dword ptr [esp + 0xd4], 1
// 007fd1ae  899c24d8000000       mov dword ptr [esp + 0xd8], ebx
// 007fd1b5  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 007fd1bc  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 007fd1c3  89ac24e8000000       mov dword ptr [esp + 0xe8], ebp
// 007fd1ca  e8a153f7ff           call 0x772570
// 007fd1cf  8bc8                 mov ecx, eax
// 007fd1d1  e85a40f7ff           call 0x771230
// 007fd1d6  e957030000           jmp 0x7fd532
// 007fd1db  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007fd1df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fd1e3  8d4501               lea eax, [ebp + 1]
// 007fd1e6  896c2454             mov dword ptr [esp + 0x54], ebp
// 007fd1ea  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007fd1ee  83c5fe               add ebp, -2
// 007fd1f1  894c2440             mov dword ptr [esp + 0x40], ecx
// 007fd1f5  894c2460             mov dword ptr [esp + 0x60], ecx
// 007fd1f9  896c2464             mov dword ptr [esp + 0x64], ebp
// 007fd1fd  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007fd201  89442444             mov dword ptr [esp + 0x44], eax
// 007fd205  8d4101               lea eax, [ecx + 1]
// 007fd208  83c102               add ecx, 2
// 007fd20b  894c2414             mov dword ptr [esp + 0x14], ecx
// 007fd20f  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 007fd216  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fd21a  83caff               or edx, 0xffffffff
// 007fd21d  896c2474             mov dword ptr [esp + 0x74], ebp
// 007fd221  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007fd225  41                   inc ecx
// 007fd226  45                   inc ebp
// 007fd227  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 007fd22e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fd232  89ac2484000000       mov dword ptr [esp + 0x84], ebp
// 007fd239  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007fd23d  83c102               add ecx, 2
// 007fd240  8954244c             mov dword ptr [esp + 0x4c], edx
// 007fd244  89542458             mov dword ptr [esp + 0x58], edx
// 007fd248  89542478             mov dword ptr [esp + 0x78], edx
// 007fd24c  89942488000000       mov dword ptr [esp + 0x88], edx
// 007fd253  89942498000000       mov dword ptr [esp + 0x98], edx
// 007fd25a  899424a8000000       mov dword ptr [esp + 0xa8], edx
// 007fd261  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 007fd268  899424c8000000       mov dword ptr [esp + 0xc8], edx
// 007fd26f  8b542434             mov edx, dword ptr [esp + 0x34]
// 007fd273  83c5fe               add ebp, -2
// 007fd276  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 007fd27d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fd281  83c2fd               add edx, -3
// 007fd284  895c2448             mov dword ptr [esp + 0x48], ebx
// 007fd288  89442450             mov dword ptr [esp + 0x50], eax
// 007fd28c  895c245c             mov dword ptr [esp + 0x5c], ebx
// 007fd290  895c2468             mov dword ptr [esp + 0x68], ebx
// 007fd294  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 007fd29c  89442470             mov dword ptr [esp + 0x70], eax
// 007fd2a0  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 007fd2a7  898c24c0000000       mov dword ptr [esp + 0xc0], ecx
// 007fd2ae  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 007fd2b5  899424d4000000       mov dword ptr [esp + 0xd4], edx
// 007fd2bc  c78424dc00000001000000 mov dword ptr [esp + 0xdc], 1
// 007fd2c7  e902020000           jmp 0x7fd4ce
// 007fd2cc  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007fd2d0  8d45fe               lea eax, [ebp - 2]
// 007fd2d3  8b542428             mov edx, dword ptr [esp + 0x28]
// 007fd2d7  4d                   dec ebp
// 007fd2d8  896c2454             mov dword ptr [esp + 0x54], ebp
// 007fd2dc  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007fd2e0  4d                   dec ebp
// 007fd2e1  896c2460             mov dword ptr [esp + 0x60], ebp
// 007fd2e5  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007fd2e9  83c5fe               add ebp, -2
// 007fd2ec  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007fd2f0  896c2470             mov dword ptr [esp + 0x70], ebp
// 007fd2f4  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007fd2f8  4d                   dec ebp
// 007fd2f9  896c2474             mov dword ptr [esp + 0x74], ebp
// 007fd2fd  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 007fd301  b901000000           mov ecx, 1
// 007fd306  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 007fd30d  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007fd311  89542440             mov dword ptr [esp + 0x40], edx
// 007fd315  42                   inc edx
// 007fd316  83c502               add ebp, 2
// 007fd319  89542450             mov dword ptr [esp + 0x50], edx
// 007fd31d  89942480000000       mov dword ptr [esp + 0x80], edx
// 007fd324  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 007fd32b  8b542434             mov edx, dword ptr [esp + 0x34]
// 007fd32f  89ac24a0000000       mov dword ptr [esp + 0xa0], ebp
// 007fd336  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007fd33a  83c2fd               add edx, -3
// 007fd33d  89442444             mov dword ptr [esp + 0x44], eax
// 007fd341  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007fd345  89442464             mov dword ptr [esp + 0x64], eax
// 007fd349  894c246c             mov dword ptr [esp + 0x6c], ecx
// 007fd34d  894c2478             mov dword ptr [esp + 0x78], ecx
// 007fd351  89842484000000       mov dword ptr [esp + 0x84], eax
// 007fd358  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 007fd35f  89842494000000       mov dword ptr [esp + 0x94], eax
// 007fd366  898c2498000000       mov dword ptr [esp + 0x98], ecx
// 007fd36d  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 007fd374  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 007fd37b  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 007fd382  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007fd386  898c24c8000000       mov dword ptr [esp + 0xc8], ecx
// 007fd38d  898c24dc000000       mov dword ptr [esp + 0xdc], ecx
// 007fd394  83c5fd               add ebp, -3
// 007fd397  6a14                 push 0x14
// 007fd399  8d4c2444             lea ecx, [esp + 0x44]
// 007fd39d  895c244c             mov dword ptr [esp + 0x4c], ebx
// 007fd3a1  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 007fd3a9  895c2460             mov dword ptr [esp + 0x60], ebx
// 007fd3ad  895c246c             mov dword ptr [esp + 0x6c], ebx
// 007fd3b1  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 007fd3b8  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 007fd3bf  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 007fd3ca  899424b8000000       mov dword ptr [esp + 0xb8], edx
// 007fd3d1  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 007fd3d8  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 007fd3df  899424d8000000       mov dword ptr [esp + 0xd8], edx
// 007fd3e6  51                   push ecx
// 007fd3e7  e913010000           jmp 0x7fd4ff
// 007fd3ec  8b442430             mov eax, dword ptr [esp + 0x30]
// 007fd3f0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fd3f4  8d68ff               lea ebp, [eax - 1]
// 007fd3f7  896c2440             mov dword ptr [esp + 0x40], ebp
// 007fd3fb  896c2460             mov dword ptr [esp + 0x60], ebp
// 007fd3ff  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007fd403  83c5fe               add ebp, -2
// 007fd406  896c2464             mov dword ptr [esp + 0x64], ebp
// 007fd40a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007fd40e  896c2474             mov dword ptr [esp + 0x74], ebp
// 007fd412  83c5fe               add ebp, -2
// 007fd415  8d5101               lea edx, [ecx + 1]
// 007fd418  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 007fd41f  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007fd423  89542444             mov dword ptr [esp + 0x44], edx
// 007fd427  89942484000000       mov dword ptr [esp + 0x84], edx
// 007fd42e  83c5fd               add ebp, -3
// 007fd431  899424a4000000       mov dword ptr [esp + 0xa4], edx
// 007fd438  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007fd43c  83c202               add edx, 2
// 007fd43f  89ac24a0000000       mov dword ptr [esp + 0xa0], ebp
// 007fd446  89ac24c0000000       mov dword ptr [esp + 0xc0], ebp
// 007fd44d  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007fd451  83c0fe               add eax, -2
// 007fd454  899424b4000000       mov dword ptr [esp + 0xb4], edx
// 007fd45b  8d55fe               lea edx, [ebp - 2]
// 007fd45e  894c2454             mov dword ptr [esp + 0x54], ecx
// 007fd462  b901000000           mov ecx, 1
// 007fd467  83c5fd               add ebp, -3
// 007fd46a  895c2448             mov dword ptr [esp + 0x48], ebx
// 007fd46e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 007fd476  89442450             mov dword ptr [esp + 0x50], eax
// 007fd47a  894c2458             mov dword ptr [esp + 0x58], ecx
// 007fd47e  895c245c             mov dword ptr [esp + 0x5c], ebx
// 007fd482  895c2468             mov dword ptr [esp + 0x68], ebx
// 007fd486  894c246c             mov dword ptr [esp + 0x6c], ecx
// 007fd48a  89442470             mov dword ptr [esp + 0x70], eax
// 007fd48e  894c2478             mov dword ptr [esp + 0x78], ecx
// 007fd492  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 007fd499  898c2498000000       mov dword ptr [esp + 0x98], ecx
// 007fd4a0  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 007fd4a7  c78424bc000000ffffffff mov dword ptr [esp + 0xbc], 0xffffffff
// 007fd4b2  899424c4000000       mov dword ptr [esp + 0xc4], edx
// 007fd4b9  898c24c8000000       mov dword ptr [esp + 0xc8], ecx
// 007fd4c0  89ac24d4000000       mov dword ptr [esp + 0xd4], ebp
// 007fd4c7  898c24dc000000       mov dword ptr [esp + 0xdc], ecx
// 007fd4ce  89842480000000       mov dword ptr [esp + 0x80], eax
// 007fd4d5  89842490000000       mov dword ptr [esp + 0x90], eax
// 007fd4dc  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 007fd4e3  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 007fd4ea  6a14                 push 0x14
// 007fd4ec  8d442444             lea eax, [esp + 0x44]
// 007fd4f0  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 007fd4f7  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 007fd4fe  50                   push eax
// 007fd4ff  56                   push esi
// 007fd500  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 007fd507  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 007fd50e  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 007fd515  899c24d8000000       mov dword ptr [esp + 0xd8], ebx
// 007fd51c  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 007fd523  e84850f7ff           call 0x772570
// 007fd528  8bc8                 mov ecx, eax
// 007fd52a  e8013df7ff           call 0x771230
// 007fd52f  83cdff               or ebp, 0xffffffff
// 007fd532  8b5f44               mov ebx, dword ptr [edi + 0x44]
// 007fd535  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007fd539  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 007fd53c  8b11                 mov edx, dword ptr [ecx]
// 007fd53e  6a01                 push 1
// 007fd540  83ec10               sub esp, 0x10
// 007fd543  8bc4                 mov eax, esp
// 007fd545  8918                 mov dword ptr [eax], ebx
// 007fd547  8b5f48               mov ebx, dword ptr [edi + 0x48]
// 007fd54a  895804               mov dword ptr [eax + 4], ebx
// 007fd54d  8b5f4c               mov ebx, dword ptr [edi + 0x4c]
// 007fd550  895808               mov dword ptr [eax + 8], ebx
// 007fd553  8b5f50               mov ebx, dword ptr [edi + 0x50]
// 007fd556  57                   push edi
// 007fd557  89580c               mov dword ptr [eax + 0xc], ebx
// 007fd55a  8b4268               mov eax, dword ptr [edx + 0x68]
// 007fd55d  56                   push esi
// 007fd55e  ffd0                 call eax
// 007fd560  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 007fd567  89ac2414010000       mov dword ptr [esp + 0x114], ebp
// 007fd56e  c78424f40000008c2b8f00 mov dword ptr [esp + 0xf4], 0x8f2b8c
// 007fd579  e8521fc1ff           call 0x40f4d0
// 007fd57e  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 007fd585  64890d00000000       mov dword ptr fs:[0], ecx
// 007fd58c  59                   pop ecx
// 007fd58d  5f                   pop edi
// 007fd58e  5e                   pop esi
// 007fd58f  5d                   pop ebp
// 007fd590  5b                   pop ebx
// 007fd591  81c404010000         add esp, 0x104
// 007fd597  c20800               ret 8
// 007fd59a  8bff                 mov edi, edi
// 007fd59c  84d0                 test al, dl
// 007fd59e  7f00                 jg 0x7fd5a0
// 007fd5a0  dbd1                 fcmovnbe st(0), st(1)
// 007fd5a2  7f00                 jg 0x7fd5a4
// 007fd5a4  cc                   int3 
// 007fd5a5  d27f00               sar byte ptr [edi], cl
// 007fd5a8  ec                   in al, dx
// 007fd5a9  d37f00               sar dword ptr [edi], cl
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPageFlat@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp