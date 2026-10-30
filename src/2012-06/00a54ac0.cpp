// roc 2012-06 00a54ac0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPageFlat  size: 2700 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a54ac0
//
// 00a54ac0  6aff                 push -1
// 00a54ac2  68e872ae00           push 0xae72e8
// 00a54ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00a54acd  50                   push eax
// 00a54ace  81ecf8000000         sub esp, 0xf8
// 00a54ad4  53                   push ebx
// 00a54ad5  55                   push ebp
// 00a54ad6  56                   push esi
// 00a54ad7  57                   push edi
// 00a54ad8  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a54add  33c4                 xor eax, esp
// 00a54adf  50                   push eax
// 00a54ae0  8d84240c010000       lea eax, [esp + 0x10c]
// 00a54ae7  64a300000000         mov dword ptr fs:[0], eax
// 00a54aed  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a54af1  8bbc2420010000       mov edi, dword ptr [esp + 0x120]
// 00a54af8  8b4744               mov eax, dword ptr [edi + 0x44]
// 00a54afb  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00a54afe  8b574c               mov edx, dword ptr [edi + 0x4c]
// 00a54b01  89442418             mov dword ptr [esp + 0x18], eax
// 00a54b05  8b4750               mov eax, dword ptr [edi + 0x50]
// 00a54b08  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a54b0c  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00a54b0f  89442424             mov dword ptr [esp + 0x24], eax
// 00a54b13  89542420             mov dword ptr [esp + 0x20], edx
// 00a54b17  8b11                 mov edx, dword ptr [ecx]
// 00a54b19  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a54b1c  ffd0                 call eax
// 00a54b1e  8be8                 mov ebp, eax
// 00a54b20  55                   push ebp
// 00a54b21  33c9                 xor ecx, ecx
// 00a54b23  83ec10               sub esp, 0x10
// 00a54b26  8bc4                 mov eax, esp
// 00a54b28  8908                 mov dword ptr [eax], ecx
// 00a54b2a  33db                 xor ebx, ebx
// 00a54b2c  33d2                 xor edx, edx
// 00a54b2e  895004               mov dword ptr [eax + 4], edx
// 00a54b31  8d7301               lea esi, [ebx + 1]
// 00a54b34  897008               mov dword ptr [eax + 8], esi
// 00a54b37  89480c               mov dword ptr [eax + 0xc], ecx
// 00a54b3a  8d4c242c             lea ecx, [esp + 0x2c]
// 00a54b3e  51                   push ecx
// 00a54b3f  e86cc7ffff           call 0xa512b0
// 00a54b44  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a54b48  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a54b4c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a54b50  8bb42434010000       mov esi, dword ptr [esp + 0x134]
// 00a54b57  89542440             mov dword ptr [esp + 0x40], edx
// 00a54b5b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a54b5f  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a54b63  83c418               add esp, 0x18
// 00a54b66  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a54b6a  8b06                 mov eax, dword ptr [esi]
// 00a54b6c  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00a54b73  89542434             mov dword ptr [esp + 0x34], edx
// 00a54b77  8b5058               mov edx, dword ptr [eax + 0x58]
// 00a54b7a  51                   push ecx
// 00a54b7b  8bce                 mov ecx, esi
// 00a54b7d  ffd2                 call edx
// 00a54b7f  899c24f8000000       mov dword ptr [esp + 0xf8], ebx
// 00a54b86  c78424f400000028e1c000 mov dword ptr [esp + 0xf4], 0xc0e128
// 00a54b91  8d8424fc000000       lea eax, [esp + 0xfc]
// 00a54b98  50                   push eax
// 00a54b99  899c2418010000       mov dword ptr [esp + 0x118], ebx
// 00a54ba0  ff152c21b200         call dword ptr [0xb2212c]
// 00a54ba6  50                   push eax
// 00a54ba7  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 00a54bae  e825dbf2ff           call 0x9826d8
// 00a54bb3  55                   push ebp
// 00a54bb4  33c9                 xor ecx, ecx
// 00a54bb6  83ec10               sub esp, 0x10
// 00a54bb9  8bc4                 mov eax, esp
// 00a54bbb  8908                 mov dword ptr [eax], ecx
// 00a54bbd  895804               mov dword ptr [eax + 4], ebx
// 00a54bc0  894808               mov dword ptr [eax + 8], ecx
// 00a54bc3  b901000000           mov ecx, 1
// 00a54bc8  89480c               mov dword ptr [eax + 0xc], ecx
// 00a54bcb  8d4c243c             lea ecx, [esp + 0x3c]
// 00a54bcf  51                   push ecx
// 00a54bd0  e8dbc6ffff           call 0xa512b0
// 00a54bd5  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a54bd9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a54bdd  83c408               add esp, 8
// 00a54be0  8bc4                 mov eax, esp
// 00a54be2  8910                 mov dword ptr [eax], edx
// 00a54be4  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a54be8  894804               mov dword ptr [eax + 4], ecx
// 00a54beb  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a54bef  895008               mov dword ptr [eax + 8], edx
// 00a54bf2  56                   push esi
// 00a54bf3  89480c               mov dword ptr [eax + 0xc], ecx
// 00a54bf6  e89525f8ff           call 0x9d7190
// 00a54bfb  8bc8                 mov ecx, eax
// 00a54bfd  e84ef5f7ff           call 0x9d4150
// 00a54c02  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a54c06  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a54c0a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a54c0e  55                   push ebp
// 00a54c0f  899424e4000000       mov dword ptr [esp + 0xe4], edx
// 00a54c16  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a54c1a  898c24ec000000       mov dword ptr [esp + 0xec], ecx
// 00a54c21  83c9ff               or ecx, 0xffffffff
// 00a54c24  898424e8000000       mov dword ptr [esp + 0xe8], eax
// 00a54c2b  83ec10               sub esp, 0x10
// 00a54c2e  8bc4                 mov eax, esp
// 00a54c30  8908                 mov dword ptr [eax], ecx
// 00a54c32  89942400010000       mov dword ptr [esp + 0x100], edx
// 00a54c39  0bd1                 or edx, ecx
// 00a54c3b  895004               mov dword ptr [eax + 4], edx
// 00a54c3e  0bc9                 or ecx, ecx
// 00a54c40  894808               mov dword ptr [eax + 8], ecx
// 00a54c43  33c9                 xor ecx, ecx
// 00a54c45  89480c               mov dword ptr [eax + 0xc], ecx
// 00a54c48  8d8424f4000000       lea eax, [esp + 0xf4]
// 00a54c4f  50                   push eax
// 00a54c50  e85bc6ffff           call 0xa512b0
// 00a54c55  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a54c59  83c418               add esp, 0x18
// 00a54c5c  395828               cmp dword ptr [eax + 0x28], ebx
// 00a54c5f  0f84a9010000         je 0xa54e0e
// 00a54c65  8b5760               mov edx, dword ptr [edi + 0x60]
// 00a54c68  397a04               cmp dword ptr [edx + 4], edi
// 00a54c6b  0f850f010000         jne 0xa54d80
// 00a54c71  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00a54c74  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00a54c7a  8b10                 mov edx, dword ptr [eax]
// 00a54c7c  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 00a54c83  8b5218               mov edx, dword ptr [edx + 0x18]
// 00a54c86  57                   push edi
// 00a54c87  83ec10               sub esp, 0x10
// 00a54c8a  89442428             mov dword ptr [esp + 0x28], eax
// 00a54c8e  8bc4                 mov eax, esp
// 00a54c90  8908                 mov dword ptr [eax], ecx
// 00a54c92  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 00a54c99  894804               mov dword ptr [eax + 4], ecx
// 00a54c9c  8b8c24fc000000       mov ecx, dword ptr [esp + 0xfc]
// 00a54ca3  894808               mov dword ptr [eax + 8], ecx
// 00a54ca6  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 00a54cad  89480c               mov dword ptr [eax + 0xc], ecx
// 00a54cb0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a54cb4  56                   push esi
// 00a54cb5  ffd2                 call edx
// 00a54cb7  8b4760               mov eax, dword ptr [edi + 0x60]
// 00a54cba  397804               cmp dword ptr [eax + 4], edi
// 00a54cbd  7462                 je 0xa54d21
// 00a54cbf  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a54cc3  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 00a54cc6  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00a54ccc  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a54ccf  83f9ff               cmp ecx, -1
// 00a54cd2  7503                 jne 0xa54cd7
// 00a54cd4  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a54cd7  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00a54cda  83faff               cmp edx, -1
// 00a54cdd  7505                 jne 0xa54ce4
// 00a54cdf  8b4048               mov eax, dword ptr [eax + 0x48]
// 00a54ce2  eb02                 jmp 0xa54ce6
// 00a54ce4  8bc2                 mov eax, edx
// 00a54ce6  51                   push ecx
// 00a54ce7  50                   push eax
// 00a54ce8  8d4502               lea eax, [ebp + 2]
// 00a54ceb  2503000080           and eax, 0x80000003
// 00a54cf0  7905                 jns 0xa54cf7
// 00a54cf2  48                   dec eax
// 00a54cf3  83c8fc               or eax, 0xfffffffc
// 00a54cf6  40                   inc eax
// 00a54cf7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a54cfb  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a54cff  50                   push eax
// 00a54d00  83ec10               sub esp, 0x10
// 00a54d03  8bc4                 mov eax, esp
// 00a54d05  8908                 mov dword ptr [eax], ecx
// 00a54d07  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a54d0b  895004               mov dword ptr [eax + 4], edx
// 00a54d0e  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a54d12  894808               mov dword ptr [eax + 8], ecx
// 00a54d15  56                   push esi
// 00a54d16  89500c               mov dword ptr [eax + 0xc], edx
// 00a54d19  e8a2ceffff           call 0xa51bc0
// 00a54d1e  83c420               add esp, 0x20
// 00a54d21  55                   push ebp
// 00a54d22  33c9                 xor ecx, ecx
// 00a54d24  83ec10               sub esp, 0x10
// 00a54d27  8bc4                 mov eax, esp
// 00a54d29  8908                 mov dword ptr [eax], ecx
// 00a54d2b  895804               mov dword ptr [eax + 4], ebx
// 00a54d2e  894808               mov dword ptr [eax + 8], ecx
// 00a54d31  b902000000           mov ecx, 2
// 00a54d36  89480c               mov dword ptr [eax + 0xc], ecx
// 00a54d39  8d44242c             lea eax, [esp + 0x2c]
// 00a54d3d  50                   push eax
// 00a54d3e  e86dc5ffff           call 0xa512b0
// 00a54d43  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a54d47  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 00a54d4a  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00a54d50  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a54d53  83c418               add esp, 0x18
// 00a54d56  83f9ff               cmp ecx, -1
// 00a54d59  7505                 jne 0xa54d60
// 00a54d5b  8b4048               mov eax, dword ptr [eax + 0x48]
// 00a54d5e  eb02                 jmp 0xa54d62
// 00a54d60  8bc1                 mov eax, ecx
// 00a54d62  8b5604               mov edx, dword ptr [esi + 4]
// 00a54d65  50                   push eax
// 00a54d66  52                   push edx
// 00a54d67  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 00a54d6e  e85d08f8ff           call 0x9d55d0
// 00a54d73  c684241401000001     mov byte ptr [esp + 0x114], 1
// 00a54d7b  e91b020000           jmp 0xa54f9b
// 00a54d80  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00a54d83  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00a54d86  4a                   dec edx
// 00a54d87  3bca                 cmp ecx, edx
// 00a54d89  0f8d69020000         jge 0xa54ff8
// 00a54d8f  83fd02               cmp ebp, 2
// 00a54d92  7404                 je 0xa54d98
// 00a54d94  3beb                 cmp ebp, ebx
// 00a54d96  753b                 jne 0xa54dd3
// 00a54d98  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00a54d9b  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a54da1  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00a54da4  83f8ff               cmp eax, -1
// 00a54da7  7503                 jne 0xa54dac
// 00a54da9  8b4148               mov eax, dword ptr [ecx + 0x48]
// 00a54dac  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a54db0  50                   push eax
// 00a54db1  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a54db5  2bc1                 sub eax, ecx
// 00a54db7  83e806               sub eax, 6
// 00a54dba  50                   push eax
// 00a54dbb  83c103               add ecx, 3
// 00a54dbe  6a01                 push 1
// 00a54dc0  51                   push ecx
// 00a54dc1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a54dc5  49                   dec ecx
// 00a54dc6  51                   push ecx
// 00a54dc7  8bce                 mov ecx, esi
// 00a54dc9  e8c2470400           call 0xa99590
// 00a54dce  e925020000           jmp 0xa54ff8
// 00a54dd3  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00a54dd6  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 00a54ddc  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00a54ddf  83f8ff               cmp eax, -1
// 00a54de2  7503                 jne 0xa54de7
// 00a54de4  8b4148               mov eax, dword ptr [ecx + 0x48]
// 00a54de7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a54deb  50                   push eax
// 00a54dec  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a54df0  2bc1                 sub eax, ecx
// 00a54df2  6a01                 push 1
// 00a54df4  83e806               sub eax, 6
// 00a54df7  50                   push eax
// 00a54df8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a54dfc  48                   dec eax
// 00a54dfd  83c103               add ecx, 3
// 00a54e00  50                   push eax
// 00a54e01  51                   push ecx
// 00a54e02  8bce                 mov ecx, esi
// 00a54e04  e887470400           call 0xa99590
// 00a54e09  e9ea010000           jmp 0xa54ff8
// 00a54e0e  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00a54e11  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00a54e17  8b10                 mov edx, dword ptr [eax]
// 00a54e19  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 00a54e20  8b5218               mov edx, dword ptr [edx + 0x18]
// 00a54e23  57                   push edi
// 00a54e24  83ec10               sub esp, 0x10
// 00a54e27  89442428             mov dword ptr [esp + 0x28], eax
// 00a54e2b  8bc4                 mov eax, esp
// 00a54e2d  8908                 mov dword ptr [eax], ecx
// 00a54e2f  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 00a54e36  894804               mov dword ptr [eax + 4], ecx
// 00a54e39  8b8c24fc000000       mov ecx, dword ptr [esp + 0xfc]
// 00a54e40  894808               mov dword ptr [eax + 8], ecx
// 00a54e43  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 00a54e4a  89480c               mov dword ptr [eax + 0xc], ecx
// 00a54e4d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a54e51  56                   push esi
// 00a54e52  ffd2                 call edx
// 00a54e54  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a54e58  395824               cmp dword ptr [eax + 0x24], ebx
// 00a54e5b  7478                 je 0xa54ed5
// 00a54e5d  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00a54e60  397904               cmp dword ptr [ecx + 4], edi
// 00a54e63  7529                 jne 0xa54e8e
// 00a54e65  55                   push ebp
// 00a54e66  33c9                 xor ecx, ecx
// 00a54e68  83ec10               sub esp, 0x10
// 00a54e6b  8bc4                 mov eax, esp
// 00a54e6d  8908                 mov dword ptr [eax], ecx
// 00a54e6f  895804               mov dword ptr [eax + 4], ebx
// 00a54e72  894808               mov dword ptr [eax + 8], ecx
// 00a54e75  8d54242c             lea edx, [esp + 0x2c]
// 00a54e79  b901000000           mov ecx, 1
// 00a54e7e  52                   push edx
// 00a54e7f  89480c               mov dword ptr [eax + 0xc], ecx
// 00a54e82  e829c4ffff           call 0xa512b0
// 00a54e87  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a54e8b  83c418               add esp, 0x18
// 00a54e8e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00a54e91  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a54e97  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a54e9a  83f9ff               cmp ecx, -1
// 00a54e9d  7503                 jne 0xa54ea2
// 00a54e9f  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a54ea2  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00a54ea5  83faff               cmp edx, -1
// 00a54ea8  7516                 jne 0xa54ec0
// 00a54eaa  8b4048               mov eax, dword ptr [eax + 0x48]
// 00a54ead  51                   push ecx
// 00a54eae  50                   push eax
// 00a54eaf  8d4c2420             lea ecx, [esp + 0x20]
// 00a54eb3  51                   push ecx
// 00a54eb4  8bce                 mov ecx, esi
// 00a54eb6  e8ebdff2ff           call 0x982ea6
// 00a54ebb  e938010000           jmp 0xa54ff8
// 00a54ec0  51                   push ecx
// 00a54ec1  8bc2                 mov eax, edx
// 00a54ec3  50                   push eax
// 00a54ec4  8d4c2420             lea ecx, [esp + 0x20]
// 00a54ec8  51                   push ecx
// 00a54ec9  8bce                 mov ecx, esi
// 00a54ecb  e8d6dff2ff           call 0x982ea6
// 00a54ed0  e923010000           jmp 0xa54ff8
// 00a54ed5  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00a54ed8  83783802             cmp dword ptr [eax + 0x38], 2
// 00a54edc  7463                 je 0xa54f41
// 00a54ede  8b5760               mov edx, dword ptr [edi + 0x60]
// 00a54ee1  397a04               cmp dword ptr [edx + 4], edi
// 00a54ee4  745b                 je 0xa54f41
// 00a54ee6  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a54eec  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a54eef  83f9ff               cmp ecx, -1
// 00a54ef2  7503                 jne 0xa54ef7
// 00a54ef4  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a54ef7  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00a54efa  83faff               cmp edx, -1
// 00a54efd  7505                 jne 0xa54f04
// 00a54eff  8b4048               mov eax, dword ptr [eax + 0x48]
// 00a54f02  eb02                 jmp 0xa54f06
// 00a54f04  8bc2                 mov eax, edx
// 00a54f06  51                   push ecx
// 00a54f07  50                   push eax
// 00a54f08  8d4502               lea eax, [ebp + 2]
// 00a54f0b  2503000080           and eax, 0x80000003
// 00a54f10  7905                 jns 0xa54f17
// 00a54f12  48                   dec eax
// 00a54f13  83c8fc               or eax, 0xfffffffc
// 00a54f16  40                   inc eax
// 00a54f17  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a54f1b  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a54f1f  50                   push eax
// 00a54f20  83ec10               sub esp, 0x10
// 00a54f23  8bc4                 mov eax, esp
// 00a54f25  8908                 mov dword ptr [eax], ecx
// 00a54f27  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a54f2b  895004               mov dword ptr [eax + 4], edx
// 00a54f2e  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a54f32  894808               mov dword ptr [eax + 8], ecx
// 00a54f35  56                   push esi
// 00a54f36  89500c               mov dword ptr [eax + 0xc], edx
// 00a54f39  e882ccffff           call 0xa51bc0
// 00a54f3e  83c420               add esp, 0x20
// 00a54f41  55                   push ebp
// 00a54f42  33c9                 xor ecx, ecx
// 00a54f44  83ec10               sub esp, 0x10
// 00a54f47  8bc4                 mov eax, esp
// 00a54f49  8908                 mov dword ptr [eax], ecx
// 00a54f4b  895804               mov dword ptr [eax + 4], ebx
// 00a54f4e  894808               mov dword ptr [eax + 8], ecx
// 00a54f51  b902000000           mov ecx, 2
// 00a54f56  89480c               mov dword ptr [eax + 0xc], ecx
// 00a54f59  8d44242c             lea eax, [esp + 0x2c]
// 00a54f5d  50                   push eax
// 00a54f5e  e84dc3ffff           call 0xa512b0
// 00a54f63  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a54f67  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 00a54f6a  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00a54f70  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a54f73  83c418               add esp, 0x18
// 00a54f76  83f9ff               cmp ecx, -1
// 00a54f79  7505                 jne 0xa54f80
// 00a54f7b  8b4048               mov eax, dword ptr [eax + 0x48]
// 00a54f7e  eb02                 jmp 0xa54f82
// 00a54f80  8bc1                 mov eax, ecx
// 00a54f82  8b5604               mov edx, dword ptr [esi + 4]
// 00a54f85  50                   push eax
// 00a54f86  52                   push edx
// 00a54f87  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 00a54f8e  e83d06f8ff           call 0x9d55d0
// 00a54f93  c684241401000002     mov byte ptr [esp + 0x114], 2
// 00a54f9b  8b06                 mov eax, dword ptr [esi]
// 00a54f9d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a54fa0  6a05                 push 5
// 00a54fa2  8bce                 mov ecx, esi
// 00a54fa4  ffd2                 call edx
// 00a54fa6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a54faa  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a54fae  6a06                 push 6
// 00a54fb0  6a06                 push 6
// 00a54fb2  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a54fb6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a54fba  50                   push eax
// 00a54fbb  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a54fbf  51                   push ecx
// 00a54fc0  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a54fc3  52                   push edx
// 00a54fc4  50                   push eax
// 00a54fc5  51                   push ecx
// 00a54fc6  ff152021b200         call dword ptr [0xb22120]
// 00a54fcc  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a54fd0  3bc3                 cmp eax, ebx
// 00a54fd2  7504                 jne 0xa54fd8
// 00a54fd4  33c0                 xor eax, eax
// 00a54fd6  eb03                 jmp 0xa54fdb
// 00a54fd8  8b4004               mov eax, dword ptr [eax + 4]
// 00a54fdb  8b5604               mov edx, dword ptr [esi + 4]
// 00a54fde  50                   push eax
// 00a54fdf  52                   push edx
// 00a54fe0  e86fdff2ff           call 0x982f54
// 00a54fe5  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 00a54fec  889c2414010000       mov byte ptr [esp + 0x114], bl
// 00a54ff3  e86806f8ff           call 0x9d5660
// 00a54ff8  8d8424f4000000       lea eax, [esp + 0xf4]
// 00a54fff  50                   push eax
// 00a55000  8bce                 mov ecx, esi
// 00a55002  e8e7470400           call 0xa997ee
// 00a55007  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a5500b  395924               cmp dword ptr [ecx + 0x24], ebx
// 00a5500e  0f84bb040000         je 0xa554cf
// 00a55014  83fd03               cmp ebp, 3
// 00a55017  0f87b2040000         ja 0xa554cf
// 00a5501d  ff24ad3c55a500       jmp dword ptr [ebp*4 + 0xa5553c]
// 00a55024  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a55028  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5502c  89542440             mov dword ptr [esp + 0x40], edx
// 00a55030  42                   inc edx
// 00a55031  89542414             mov dword ptr [esp + 0x14], edx
// 00a55035  89542450             mov dword ptr [esp + 0x50], edx
// 00a55039  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a5503d  83c2fe               add edx, -2
// 00a55040  8954243c             mov dword ptr [esp + 0x3c], edx
// 00a55044  89542460             mov dword ptr [esp + 0x60], edx
// 00a55048  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a5504c  4a                   dec edx
// 00a5504d  89542470             mov dword ptr [esp + 0x70], edx
// 00a55051  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a55055  89942480000000       mov dword ptr [esp + 0x80], edx
// 00a5505c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a55060  8d4101               lea eax, [ecx + 1]
// 00a55063  89942490000000       mov dword ptr [esp + 0x90], edx
// 00a5506a  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a5506e  83c202               add edx, 2
// 00a55071  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a55075  894c2464             mov dword ptr [esp + 0x64], ecx
// 00a55079  899424a0000000       mov dword ptr [esp + 0xa0], edx
// 00a55080  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a55084  83c102               add ecx, 2
// 00a55087  83cdff               or ebp, 0xffffffff
// 00a5508a  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 00a55091  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a55095  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 00a5509c  898c24d4000000       mov dword ptr [esp + 0xd4], ecx
// 00a550a3  6a14                 push 0x14
// 00a550a5  8d4c2444             lea ecx, [esp + 0x44]
// 00a550a9  89442448             mov dword ptr [esp + 0x48], eax
// 00a550ad  89442478             mov dword ptr [esp + 0x78], eax
// 00a550b1  89842488000000       mov dword ptr [esp + 0x88], eax
// 00a550b8  89842498000000       mov dword ptr [esp + 0x98], eax
// 00a550bf  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 00a550c6  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 00a550cd  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a550d1  51                   push ecx
// 00a550d2  83c2fd               add edx, -3
// 00a550d5  56                   push esi
// 00a550d6  895c2454             mov dword ptr [esp + 0x54], ebx
// 00a550da  896c2458             mov dword ptr [esp + 0x58], ebp
// 00a550de  896c2464             mov dword ptr [esp + 0x64], ebp
// 00a550e2  895c2468             mov dword ptr [esp + 0x68], ebx
// 00a550e6  c744247401000000     mov dword ptr [esp + 0x74], 1
// 00a550ee  895c2478             mov dword ptr [esp + 0x78], ebx
// 00a550f2  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 00a550f9  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 00a55100  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 00a55107  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 00a5510e  c78424a400000001000000 mov dword ptr [esp + 0xa4], 1
// 00a55119  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 00a55120  89ac24b4000000       mov dword ptr [esp + 0xb4], ebp
// 00a55127  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 00a5512e  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 00a55135  89ac24c8000000       mov dword ptr [esp + 0xc8], ebp
// 00a5513c  899424cc000000       mov dword ptr [esp + 0xcc], edx
// 00a55143  c78424d400000001000000 mov dword ptr [esp + 0xd4], 1
// 00a5514e  899c24d8000000       mov dword ptr [esp + 0xd8], ebx
// 00a55155  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 00a5515c  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 00a55163  89ac24e8000000       mov dword ptr [esp + 0xe8], ebp
// 00a5516a  e82120f8ff           call 0x9d7190
// 00a5516f  8bc8                 mov ecx, eax
// 00a55171  e88a0df8ff           call 0x9d5f00
// 00a55176  e957030000           jmp 0xa554d2
// 00a5517b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a5517f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a55183  8d4501               lea eax, [ebp + 1]
// 00a55186  896c2454             mov dword ptr [esp + 0x54], ebp
// 00a5518a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a5518e  83c5fe               add ebp, -2
// 00a55191  894c2440             mov dword ptr [esp + 0x40], ecx
// 00a55195  894c2460             mov dword ptr [esp + 0x60], ecx
// 00a55199  896c2464             mov dword ptr [esp + 0x64], ebp
// 00a5519d  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a551a1  89442444             mov dword ptr [esp + 0x44], eax
// 00a551a5  8d4101               lea eax, [ecx + 1]
// 00a551a8  83c102               add ecx, 2
// 00a551ab  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a551af  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 00a551b6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a551ba  83caff               or edx, 0xffffffff
// 00a551bd  896c2474             mov dword ptr [esp + 0x74], ebp
// 00a551c1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a551c5  41                   inc ecx
// 00a551c6  45                   inc ebp
// 00a551c7  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 00a551ce  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a551d2  89ac2484000000       mov dword ptr [esp + 0x84], ebp
// 00a551d9  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a551dd  83c102               add ecx, 2
// 00a551e0  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a551e4  89542458             mov dword ptr [esp + 0x58], edx
// 00a551e8  89542478             mov dword ptr [esp + 0x78], edx
// 00a551ec  89942488000000       mov dword ptr [esp + 0x88], edx
// 00a551f3  89942498000000       mov dword ptr [esp + 0x98], edx
// 00a551fa  899424a8000000       mov dword ptr [esp + 0xa8], edx
// 00a55201  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 00a55208  899424c8000000       mov dword ptr [esp + 0xc8], edx
// 00a5520f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a55213  83c5fe               add ebp, -2
// 00a55216  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 00a5521d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a55221  83c2fd               add edx, -3
// 00a55224  895c2448             mov dword ptr [esp + 0x48], ebx
// 00a55228  89442450             mov dword ptr [esp + 0x50], eax
// 00a5522c  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00a55230  895c2468             mov dword ptr [esp + 0x68], ebx
// 00a55234  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 00a5523c  89442470             mov dword ptr [esp + 0x70], eax
// 00a55240  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 00a55247  898c24c0000000       mov dword ptr [esp + 0xc0], ecx
// 00a5524e  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 00a55255  899424d4000000       mov dword ptr [esp + 0xd4], edx
// 00a5525c  c78424dc00000001000000 mov dword ptr [esp + 0xdc], 1
// 00a55267  e902020000           jmp 0xa5546e
// 00a5526c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a55270  8d45fe               lea eax, [ebp - 2]
// 00a55273  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a55277  4d                   dec ebp
// 00a55278  896c2454             mov dword ptr [esp + 0x54], ebp
// 00a5527c  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00a55280  4d                   dec ebp
// 00a55281  896c2460             mov dword ptr [esp + 0x60], ebp
// 00a55285  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00a55289  83c5fe               add ebp, -2
// 00a5528c  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00a55290  896c2470             mov dword ptr [esp + 0x70], ebp
// 00a55294  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a55298  4d                   dec ebp
// 00a55299  896c2474             mov dword ptr [esp + 0x74], ebp
// 00a5529d  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00a552a1  b901000000           mov ecx, 1
// 00a552a6  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 00a552ad  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a552b1  89542440             mov dword ptr [esp + 0x40], edx
// 00a552b5  42                   inc edx
// 00a552b6  83c502               add ebp, 2
// 00a552b9  89542450             mov dword ptr [esp + 0x50], edx
// 00a552bd  89942480000000       mov dword ptr [esp + 0x80], edx
// 00a552c4  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 00a552cb  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a552cf  89ac24a0000000       mov dword ptr [esp + 0xa0], ebp
// 00a552d6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00a552da  83c2fd               add edx, -3
// 00a552dd  89442444             mov dword ptr [esp + 0x44], eax
// 00a552e1  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00a552e5  89442464             mov dword ptr [esp + 0x64], eax
// 00a552e9  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00a552ed  894c2478             mov dword ptr [esp + 0x78], ecx
// 00a552f1  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a552f8  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 00a552ff  89842494000000       mov dword ptr [esp + 0x94], eax
// 00a55306  898c2498000000       mov dword ptr [esp + 0x98], ecx
// 00a5530d  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 00a55314  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 00a5531b  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 00a55322  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a55326  898c24c8000000       mov dword ptr [esp + 0xc8], ecx
// 00a5532d  898c24dc000000       mov dword ptr [esp + 0xdc], ecx
// 00a55334  83c5fd               add ebp, -3
// 00a55337  6a14                 push 0x14
// 00a55339  8d4c2444             lea ecx, [esp + 0x44]
// 00a5533d  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00a55341  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00a55349  895c2460             mov dword ptr [esp + 0x60], ebx
// 00a5534d  895c246c             mov dword ptr [esp + 0x6c], ebx
// 00a55351  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 00a55358  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 00a5535f  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 00a5536a  899424b8000000       mov dword ptr [esp + 0xb8], edx
// 00a55371  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 00a55378  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 00a5537f  899424d8000000       mov dword ptr [esp + 0xd8], edx
// 00a55386  51                   push ecx
// 00a55387  e913010000           jmp 0xa5549f
// 00a5538c  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a55390  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a55394  8d68ff               lea ebp, [eax - 1]
// 00a55397  896c2440             mov dword ptr [esp + 0x40], ebp
// 00a5539b  896c2460             mov dword ptr [esp + 0x60], ebp
// 00a5539f  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a553a3  83c5fe               add ebp, -2
// 00a553a6  896c2464             mov dword ptr [esp + 0x64], ebp
// 00a553aa  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a553ae  896c2474             mov dword ptr [esp + 0x74], ebp
// 00a553b2  83c5fe               add ebp, -2
// 00a553b5  8d5101               lea edx, [ecx + 1]
// 00a553b8  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 00a553bf  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00a553c3  89542444             mov dword ptr [esp + 0x44], edx
// 00a553c7  89942484000000       mov dword ptr [esp + 0x84], edx
// 00a553ce  83c5fd               add ebp, -3
// 00a553d1  899424a4000000       mov dword ptr [esp + 0xa4], edx
// 00a553d8  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a553dc  83c202               add edx, 2
// 00a553df  89ac24a0000000       mov dword ptr [esp + 0xa0], ebp
// 00a553e6  89ac24c0000000       mov dword ptr [esp + 0xc0], ebp
// 00a553ed  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a553f1  83c0fe               add eax, -2
// 00a553f4  899424b4000000       mov dword ptr [esp + 0xb4], edx
// 00a553fb  8d55fe               lea edx, [ebp - 2]
// 00a553fe  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a55402  b901000000           mov ecx, 1
// 00a55407  83c5fd               add ebp, -3
// 00a5540a  895c2448             mov dword ptr [esp + 0x48], ebx
// 00a5540e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00a55416  89442450             mov dword ptr [esp + 0x50], eax
// 00a5541a  894c2458             mov dword ptr [esp + 0x58], ecx
// 00a5541e  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00a55422  895c2468             mov dword ptr [esp + 0x68], ebx
// 00a55426  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00a5542a  89442470             mov dword ptr [esp + 0x70], eax
// 00a5542e  894c2478             mov dword ptr [esp + 0x78], ecx
// 00a55432  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00a55439  898c2498000000       mov dword ptr [esp + 0x98], ecx
// 00a55440  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 00a55447  c78424bc000000ffffffff mov dword ptr [esp + 0xbc], 0xffffffff
// 00a55452  899424c4000000       mov dword ptr [esp + 0xc4], edx
// 00a55459  898c24c8000000       mov dword ptr [esp + 0xc8], ecx
// 00a55460  89ac24d4000000       mov dword ptr [esp + 0xd4], ebp
// 00a55467  898c24dc000000       mov dword ptr [esp + 0xdc], ecx
// 00a5546e  89842480000000       mov dword ptr [esp + 0x80], eax
// 00a55475  89842490000000       mov dword ptr [esp + 0x90], eax
// 00a5547c  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 00a55483  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 00a5548a  6a14                 push 0x14
// 00a5548c  8d442444             lea eax, [esp + 0x44]
// 00a55490  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 00a55497  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 00a5549e  50                   push eax
// 00a5549f  56                   push esi
// 00a554a0  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 00a554a7  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 00a554ae  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 00a554b5  899c24d8000000       mov dword ptr [esp + 0xd8], ebx
// 00a554bc  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 00a554c3  e8c81cf8ff           call 0x9d7190
// 00a554c8  8bc8                 mov ecx, eax
// 00a554ca  e8310af8ff           call 0x9d5f00
// 00a554cf  83cdff               or ebp, 0xffffffff
// 00a554d2  8b5f44               mov ebx, dword ptr [edi + 0x44]
// 00a554d5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a554d9  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00a554dc  8b11                 mov edx, dword ptr [ecx]
// 00a554de  6a01                 push 1
// 00a554e0  83ec10               sub esp, 0x10
// 00a554e3  8bc4                 mov eax, esp
// 00a554e5  8918                 mov dword ptr [eax], ebx
// 00a554e7  8b5f48               mov ebx, dword ptr [edi + 0x48]
// 00a554ea  895804               mov dword ptr [eax + 4], ebx
// 00a554ed  8b5f4c               mov ebx, dword ptr [edi + 0x4c]
// 00a554f0  895808               mov dword ptr [eax + 8], ebx
// 00a554f3  8b5f50               mov ebx, dword ptr [edi + 0x50]
// 00a554f6  57                   push edi
// 00a554f7  89580c               mov dword ptr [eax + 0xc], ebx
// 00a554fa  8b4268               mov eax, dword ptr [edx + 0x68]
// 00a554fd  56                   push esi
// 00a554fe  ffd0                 call eax
// 00a55500  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 00a55507  89ac2414010000       mov dword ptr [esp + 0x114], ebp
// 00a5550e  c78424f400000028e1c000 mov dword ptr [esp + 0xf4], 0xc0e128
// 00a55519  e8e2169cff           call 0x416c00
// 00a5551e  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 00a55525  64890d00000000       mov dword ptr fs:[0], ecx
// 00a5552c  59                   pop ecx
// 00a5552d  5f                   pop edi
// 00a5552e  5e                   pop esi
// 00a5552f  5d                   pop ebp
// 00a55530  5b                   pop ebx
// 00a55531  81c404010000         add esp, 0x104
// 00a55537  c20800               ret 8
// 00a5553a  8bff                 mov edi, edi
// 00a5553c  2450                 and al, 0x50
// 00a5553e  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a5553f  007b51               add byte ptr [ebx + 0x51], bh
// 00a55542  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a55543  006c52a5             add byte ptr [edx + edx*2 - 0x5b], ch
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPageFlat@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp