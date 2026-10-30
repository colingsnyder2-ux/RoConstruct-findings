// roc 2011-06 00890d90  unit: CXTPOffice2007Theme  size: 3422 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00890d90
//
// 00890d90  6aff                 push -1
// 00890d92  68d896a000           push 0xa096d8
// 00890d97  64a100000000         mov eax, dword ptr fs:[0]
// 00890d9d  50                   push eax
// 00890d9e  81ec38010000         sub esp, 0x138
// 00890da4  53                   push ebx
// 00890da5  55                   push ebp
// 00890da6  56                   push esi
// 00890da7  57                   push edi
// 00890da8  a12058c900           mov eax, dword ptr [0xc95820]
// 00890dad  33c4                 xor eax, esp
// 00890daf  50                   push eax
// 00890db0  8d84244c010000       lea eax, [esp + 0x14c]
// 00890db7  64a300000000         mov dword ptr fs:[0], eax
// 00890dbd  8bf9                 mov edi, ecx
// 00890dbf  8bb42460010000       mov esi, dword ptr [esp + 0x160]
// 00890dc6  8b4608               mov eax, dword ptr [esi + 8]
// 00890dc9  50                   push eax
// 00890dca  e85995f7ff           call 0x80a328
// 00890dcf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00890dd2  8bd8                 mov ebx, eax
// 00890dd4  894c2418             mov dword ptr [esp + 0x18], ecx
// 00890dd8  53                   push ebx
// 00890dd9  8d8c2410010000       lea ecx, [esp + 0x110]
// 00890de0  895c2440             mov dword ptr [esp + 0x40], ebx
// 00890de4  e8a7bffcff           call 0x85cd90
// 00890de9  8d94240c010000       lea edx, [esp + 0x10c]
// 00890df0  52                   push edx
// 00890df1  8bcb                 mov ecx, ebx
// 00890df3  e80698f7ff           call 0x80a5fe
// 00890df8  53                   push ebx
// 00890df9  8d4c2420             lea ecx, [esp + 0x20]
// 00890dfd  e82ebffcff           call 0x85cd30
// 00890e02  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00890e06  2b8c2418010000       sub ecx, dword ptr [esp + 0x118]
// 00890e0d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00890e11  8bac240c010000       mov ebp, dword ptr [esp + 0x10c]
// 00890e18  894c2454             mov dword ptr [esp + 0x54], ecx
// 00890e1c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00890e20  2be8                 sub ebp, eax
// 00890e22  f7d9                 neg ecx
// 00890e24  f7d8                 neg eax
// 00890e26  51                   push ecx
// 00890e27  50                   push eax
// 00890e28  8d442424             lea eax, [esp + 0x24]
// 00890e2c  50                   push eax
// 00890e2d  ff15601ca400         call dword ptr [0xa41c60]
// 00890e33  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00890e37  8b542424             mov edx, dword ptr [esp + 0x24]
// 00890e3b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00890e3f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00890e43  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 00890e4a  8bce                 mov ecx, esi
// 00890e4c  899424ac000000       mov dword ptr [esp + 0xac], edx
// 00890e53  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 00890e5a  e871770600           call 0x8f85d0
// 00890e5f  8d4c2458             lea ecx, [esp + 0x58]
// 00890e63  51                   push ecx
// 00890e64  8bce                 mov ecx, esi
// 00890e66  89442444             mov dword ptr [esp + 0x44], eax
// 00890e6a  03d8                 add ebx, eax
// 00890e6c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00890e74  e817790600           call 0x8f8790
// 00890e79  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 00890e80  85c0                 test eax, eax
// 00890e82  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00890e89  7409                 je 0x890e94
// 00890e8b  2b442458             sub eax, dword ptr [esp + 0x58]
// 00890e8f  2bc3                 sub eax, ebx
// 00890e91  48                   dec eax
// 00890e92  eb02                 jmp 0x890e96
// 00890e94  2bc3                 sub eax, ebx
// 00890e96  89442414             mov dword ptr [esp + 0x14], eax
// 00890e9a  85ed                 test ebp, ebp
// 00890e9c  7e3c                 jle 0x890eda
// 00890e9e  837c241800           cmp dword ptr [esp + 0x18], 0
// 00890ea3  7408                 je 0x890ead
// 00890ea5  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 00890eab  eb06                 jmp 0x890eb3
// 00890ead  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00890eb3  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 00890eba  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 00890ec1  50                   push eax
// 00890ec2  8b442420             mov eax, dword ptr [esp + 0x20]
// 00890ec6  2bd3                 sub edx, ebx
// 00890ec8  52                   push edx
// 00890ec9  6a01                 push 1
// 00890ecb  53                   push ebx
// 00890ecc  50                   push eax
// 00890ecd  8bce                 mov ecx, esi
// 00890ecf  e802b71300           call 0x9cc5d6
// 00890ed4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00890ed8  eb07                 jmp 0x890ee1
// 00890eda  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 00890ee1  83fd01               cmp ebp, 1
// 00890ee4  7e2b                 jle 0x890f11
// 00890ee6  837c241800           cmp dword ptr [esp + 0x18], 0
// 00890eeb  7408                 je 0x890ef5
// 00890eed  8b8fd0050000         mov ecx, dword ptr [edi + 0x5d0]
// 00890ef3  eb06                 jmp 0x890efb
// 00890ef5  8b8fe0050000         mov ecx, dword ptr [edi + 0x5e0]
// 00890efb  51                   push ecx
// 00890efc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00890f00  50                   push eax
// 00890f01  6a01                 push 1
// 00890f03  41                   inc ecx
// 00890f04  53                   push ebx
// 00890f05  51                   push ecx
// 00890f06  8bce                 mov ecx, esi
// 00890f08  e8c9b61300           call 0x9cc5d6
// 00890f0d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00890f11  83fd02               cmp ebp, 2
// 00890f14  7e2d                 jle 0x890f43
// 00890f16  837c241800           cmp dword ptr [esp + 0x18], 0
// 00890f1b  7408                 je 0x890f25
// 00890f1d  8b8fd4050000         mov ecx, dword ptr [edi + 0x5d4]
// 00890f23  eb06                 jmp 0x890f2b
// 00890f25  8b8fe4050000         mov ecx, dword ptr [edi + 0x5e4]
// 00890f2b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00890f2f  51                   push ecx
// 00890f30  50                   push eax
// 00890f31  6a01                 push 1
// 00890f33  53                   push ebx
// 00890f34  83c202               add edx, 2
// 00890f37  52                   push edx
// 00890f38  8bce                 mov ecx, esi
// 00890f3a  e897b61300           call 0x9cc5d6
// 00890f3f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00890f43  83fd03               cmp ebp, 3
// 00890f46  7e2f                 jle 0x890f77
// 00890f48  837c241800           cmp dword ptr [esp + 0x18], 0
// 00890f4d  7408                 je 0x890f57
// 00890f4f  8b8fd8050000         mov ecx, dword ptr [edi + 0x5d8]
// 00890f55  eb06                 jmp 0x890f5d
// 00890f57  8b8fe8050000         mov ecx, dword ptr [edi + 0x5e8]
// 00890f5d  51                   push ecx
// 00890f5e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00890f62  50                   push eax
// 00890f63  8d45fd               lea eax, [ebp - 3]
// 00890f66  50                   push eax
// 00890f67  83c103               add ecx, 3
// 00890f6a  53                   push ebx
// 00890f6b  51                   push ecx
// 00890f6c  8bce                 mov ecx, esi
// 00890f6e  e863b61300           call 0x9cc5d6
// 00890f73  8b442414             mov eax, dword ptr [esp + 0x14]
// 00890f77  85ed                 test ebp, ebp
// 00890f79  7e34                 jle 0x890faf
// 00890f7b  837c241800           cmp dword ptr [esp + 0x18], 0
// 00890f80  7408                 je 0x890f8a
// 00890f82  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 00890f88  eb06                 jmp 0x890f90
// 00890f8a  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00890f90  8b542424             mov edx, dword ptr [esp + 0x24]
// 00890f94  50                   push eax
// 00890f95  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 00890f9c  2bc3                 sub eax, ebx
// 00890f9e  50                   push eax
// 00890f9f  6a01                 push 1
// 00890fa1  53                   push ebx
// 00890fa2  4a                   dec edx
// 00890fa3  52                   push edx
// 00890fa4  8bce                 mov ecx, esi
// 00890fa6  e82bb61300           call 0x9cc5d6
// 00890fab  8b442414             mov eax, dword ptr [esp + 0x14]
// 00890faf  83fd01               cmp ebp, 1
// 00890fb2  7e2d                 jle 0x890fe1
// 00890fb4  837c241800           cmp dword ptr [esp + 0x18], 0
// 00890fb9  7408                 je 0x890fc3
// 00890fbb  8b8fd0050000         mov ecx, dword ptr [edi + 0x5d0]
// 00890fc1  eb06                 jmp 0x890fc9
// 00890fc3  8b8fe0050000         mov ecx, dword ptr [edi + 0x5e0]
// 00890fc9  51                   push ecx
// 00890fca  50                   push eax
// 00890fcb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00890fcf  6a01                 push 1
// 00890fd1  53                   push ebx
// 00890fd2  83c0fe               add eax, -2
// 00890fd5  50                   push eax
// 00890fd6  8bce                 mov ecx, esi
// 00890fd8  e8f9b51300           call 0x9cc5d6
// 00890fdd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00890fe1  83fd02               cmp ebp, 2
// 00890fe4  7e2d                 jle 0x891013
// 00890fe6  837c241800           cmp dword ptr [esp + 0x18], 0
// 00890feb  7408                 je 0x890ff5
// 00890fed  8b8fd4050000         mov ecx, dword ptr [edi + 0x5d4]
// 00890ff3  eb06                 jmp 0x890ffb
// 00890ff5  8b8fe4050000         mov ecx, dword ptr [edi + 0x5e4]
// 00890ffb  51                   push ecx
// 00890ffc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00891000  50                   push eax
// 00891001  6a01                 push 1
// 00891003  83c1fd               add ecx, -3
// 00891006  53                   push ebx
// 00891007  51                   push ecx
// 00891008  8bce                 mov ecx, esi
// 0089100a  e8c7b51300           call 0x9cc5d6
// 0089100f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00891013  83fd03               cmp ebp, 3
// 00891016  7e2a                 jle 0x891042
// 00891018  837c241800           cmp dword ptr [esp + 0x18], 0
// 0089101d  7408                 je 0x891027
// 0089101f  8b8fd8050000         mov ecx, dword ptr [edi + 0x5d8]
// 00891025  eb06                 jmp 0x89102d
// 00891027  8b8fe8050000         mov ecx, dword ptr [edi + 0x5e8]
// 0089102d  51                   push ecx
// 0089102e  50                   push eax
// 0089102f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00891033  8d55fd               lea edx, [ebp - 3]
// 00891036  52                   push edx
// 00891037  53                   push ebx
// 00891038  2bc5                 sub eax, ebp
// 0089103a  50                   push eax
// 0089103b  8bce                 mov ecx, esi
// 0089103d  e894b51300           call 0x9cc5d6
// 00891042  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00891046  85db                 test ebx, ebx
// 00891048  7420                 je 0x89106a
// 0089104a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089104e  e8c5b51300           call 0x9cc618
// 00891053  a900000001           test eax, 0x1000000
// 00891058  7408                 je 0x891062
// 0089105a  8b87d8050000         mov eax, dword ptr [edi + 0x5d8]
// 00891060  eb0e                 jmp 0x891070
// 00891062  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 00891068  eb06                 jmp 0x891070
// 0089106a  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00891070  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00891074  8b542428             mov edx, dword ptr [esp + 0x28]
// 00891078  50                   push eax
// 00891079  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089107d  6a01                 push 1
// 0089107f  2bc8                 sub ecx, eax
// 00891081  51                   push ecx
// 00891082  4a                   dec edx
// 00891083  52                   push edx
// 00891084  50                   push eax
// 00891085  8bce                 mov ecx, esi
// 00891087  e84ab51300           call 0x9cc5d6
// 0089108c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00891090  83f901               cmp ecx, 1
// 00891093  7e35                 jle 0x8910ca
// 00891095  85db                 test ebx, ebx
// 00891097  7408                 je 0x8910a1
// 00891099  8b87d8050000         mov eax, dword ptr [edi + 0x5d8]
// 0089109f  eb06                 jmp 0x8910a7
// 008910a1  8b87e8050000         mov eax, dword ptr [edi + 0x5e8]
// 008910a7  8b542424             mov edx, dword ptr [esp + 0x24]
// 008910ab  50                   push eax
// 008910ac  8d41ff               lea eax, [ecx - 1]
// 008910af  50                   push eax
// 008910b0  8b442424             mov eax, dword ptr [esp + 0x24]
// 008910b4  2bd0                 sub edx, eax
// 008910b6  83ea02               sub edx, 2
// 008910b9  52                   push edx
// 008910ba  8b542434             mov edx, dword ptr [esp + 0x34]
// 008910be  2bd1                 sub edx, ecx
// 008910c0  52                   push edx
// 008910c1  40                   inc eax
// 008910c2  50                   push eax
// 008910c3  8bce                 mov ecx, esi
// 008910c5  e80cb51300           call 0x9cc5d6
// 008910ca  8b442420             mov eax, dword ptr [esp + 0x20]
// 008910ce  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008910d2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008910d6  03c8                 add ecx, eax
// 008910d8  89442470             mov dword ptr [esp + 0x70], eax
// 008910dc  8b442424             mov eax, dword ptr [esp + 0x24]
// 008910e0  894c2478             mov dword ptr [esp + 0x78], ecx
// 008910e4  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 008910eb  8954246c             mov dword ptr [esp + 0x6c], edx
// 008910ef  89442474             mov dword ptr [esp + 0x74], eax
// 008910f3  e858740600           call 0x8f8550
// 008910f8  85c0                 test eax, eax
// 008910fa  0f8481050000         je 0x891681
// 00891100  85f6                 test esi, esi
// 00891102  7403                 je 0x891107
// 00891104  8b7604               mov esi, dword ptr [esi + 4]
// 00891107  8d4c246c             lea ecx, [esp + 0x6c]
// 0089110b  51                   push ecx
// 0089110c  56                   push esi
// 0089110d  8d8c2424010000       lea ecx, [esp + 0x124]
// 00891114  e8d7bcfcff           call 0x85cdf0
// 00891119  68f009ad00           push 0xad09f0
// 0089111e  8bcf                 mov ecx, edi
// 00891120  c784245801000000000000 mov dword ptr [esp + 0x158], 0
// 0089112b  e860e1ffff           call 0x88f290
// 00891130  33db                 xor ebx, ebx
// 00891132  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00891136  6a02                 push 2
// 00891138  0f94c3               sete bl
// 0089113b  8bf0                 mov esi, eax
// 0089113d  8d9424b8000000       lea edx, [esp + 0xb8]
// 00891144  8bce                 mov ecx, esi
// 00891146  53                   push ebx
// 00891147  52                   push edx
// 00891148  e8c3c50500           call 0x8ed710
// 0089114d  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 00891154  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00891158  8bc1                 mov eax, ecx
// 0089115a  2b8424b4000000       sub eax, dword ptr [esp + 0xb4]
// 00891161  899424cc000000       mov dword ptr [esp + 0xcc], edx
// 00891168  03c2                 add eax, edx
// 0089116a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089116e  899424d0000000       mov dword ptr [esp + 0xd0], edx
// 00891175  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 0089117c  8b442478             mov eax, dword ptr [esp + 0x78]
// 00891180  33d2                 xor edx, edx
// 00891182  83ec10               sub esp, 0x10
// 00891185  898424e8000000       mov dword ptr [esp + 0xe8], eax
// 0089118c  8bc4                 mov eax, esp
// 0089118e  8910                 mov dword ptr [eax], edx
// 00891190  89942498000000       mov dword ptr [esp + 0x98], edx
// 00891197  ba05000000           mov edx, 5
// 0089119c  895004               mov dword ptr [eax + 4], edx
// 0089119f  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 008911a6  895008               mov dword ptr [eax + 8], edx
// 008911a9  83ec10               sub esp, 0x10
// 008911ac  ba03000000           mov edx, 3
// 008911b1  89500c               mov dword ptr [eax + 0xc], edx
// 008911b4  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 008911bb  8bc4                 mov eax, esp
// 008911bd  8910                 mov dword ptr [eax], edx
// 008911bf  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 008911c6  895004               mov dword ptr [eax + 4], edx
// 008911c9  894808               mov dword ptr [eax + 8], ecx
// 008911cc  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 008911d3  89480c               mov dword ptr [eax + 0xc], ecx
// 008911d6  8d9424ec000000       lea edx, [esp + 0xec]
// 008911dd  52                   push edx
// 008911de  8d842440010000       lea eax, [esp + 0x140]
// 008911e5  50                   push eax
// 008911e6  8bce                 mov ecx, esi
// 008911e8  e8f3bd0500           call 0x8ecfe0
// 008911ed  68e009ad00           push 0xad09e0
// 008911f2  8bcf                 mov ecx, edi
// 008911f4  e897e0ffff           call 0x88f290
// 008911f9  6a02                 push 2
// 008911fb  53                   push ebx
// 008911fc  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00891203  8bf0                 mov esi, eax
// 00891205  51                   push ecx
// 00891206  8bce                 mov ecx, esi
// 00891208  e803c50500           call 0x8ed710
// 0089120d  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00891214  8b442424             mov eax, dword ptr [esp + 0x24]
// 00891218  8bd1                 mov edx, ecx
// 0089121a  2b9424ac000000       sub edx, dword ptr [esp + 0xac]
// 00891221  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 00891228  03d0                 add edx, eax
// 0089122a  8b442478             mov eax, dword ptr [esp + 0x78]
// 0089122e  89942494000000       mov dword ptr [esp + 0x94], edx
// 00891235  8b542420             mov edx, dword ptr [esp + 0x20]
// 00891239  89942498000000       mov dword ptr [esp + 0x98], edx
// 00891240  33d2                 xor edx, edx
// 00891242  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 00891249  89942488000000       mov dword ptr [esp + 0x88], edx
// 00891250  83ec10               sub esp, 0x10
// 00891253  8bc4                 mov eax, esp
// 00891255  8910                 mov dword ptr [eax], edx
// 00891257  ba05000000           mov edx, 5
// 0089125c  895004               mov dword ptr [eax + 4], edx
// 0089125f  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00891266  895008               mov dword ptr [eax + 8], edx
// 00891269  83ec10               sub esp, 0x10
// 0089126c  ba03000000           mov edx, 3
// 00891271  89500c               mov dword ptr [eax + 0xc], edx
// 00891274  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 0089127b  8bc4                 mov eax, esp
// 0089127d  8908                 mov dword ptr [eax], ecx
// 0089127f  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 00891286  894804               mov dword ptr [eax + 4], ecx
// 00891289  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00891290  895008               mov dword ptr [eax + 8], edx
// 00891293  89480c               mov dword ptr [eax + 0xc], ecx
// 00891296  8d9424b4000000       lea edx, [esp + 0xb4]
// 0089129d  52                   push edx
// 0089129e  8d842440010000       lea eax, [esp + 0x140]
// 008912a5  50                   push eax
// 008912a6  8bce                 mov ecx, esi
// 008912a8  e833bd0500           call 0x8ecfe0
// 008912ad  68b409ad00           push 0xad09b4
// 008912b2  8bcf                 mov ecx, edi
// 008912b4  e8d7dfffff           call 0x88f290
// 008912b9  8b8c24d4000000       mov ecx, dword ptr [esp + 0xd4]
// 008912c0  2b8c24cc000000       sub ecx, dword ptr [esp + 0xcc]
// 008912c7  8b542420             mov edx, dword ptr [esp + 0x20]
// 008912cb  034c241c             add ecx, dword ptr [esp + 0x1c]
// 008912cf  8bf0                 mov esi, eax
// 008912d1  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008912d8  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 008912df  6a02                 push 2
// 008912e1  03442428             add eax, dword ptr [esp + 0x28]
// 008912e5  894c2460             mov dword ptr [esp + 0x60], ecx
// 008912e9  53                   push ebx
// 008912ea  8d8c2488000000       lea ecx, [esp + 0x88]
// 008912f1  8944246c             mov dword ptr [esp + 0x6c], eax
// 008912f5  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008912fc  51                   push ecx
// 008912fd  8bce                 mov ecx, esi
// 008912ff  8954246c             mov dword ptr [esp + 0x6c], edx
// 00891303  89442474             mov dword ptr [esp + 0x74], eax
// 00891307  e804c40500           call 0x8ed710
// 0089130c  33d2                 xor edx, edx
// 0089130e  83ec10               sub esp, 0x10
// 00891311  8bcc                 mov ecx, esp
// 00891313  8911                 mov dword ptr [ecx], edx
// 00891315  ba05000000           mov edx, 5
// 0089131a  895104               mov dword ptr [ecx + 4], edx
// 0089131d  33d2                 xor edx, edx
// 0089131f  895108               mov dword ptr [ecx + 8], edx
// 00891322  83ec10               sub esp, 0x10
// 00891325  ba03000000           mov edx, 3
// 0089132a  89510c               mov dword ptr [ecx + 0xc], edx
// 0089132d  8b10                 mov edx, dword ptr [eax]
// 0089132f  8bcc                 mov ecx, esp
// 00891331  8911                 mov dword ptr [ecx], edx
// 00891333  8b5004               mov edx, dword ptr [eax + 4]
// 00891336  895104               mov dword ptr [ecx + 4], edx
// 00891339  8b5008               mov edx, dword ptr [eax + 8]
// 0089133c  8b400c               mov eax, dword ptr [eax + 0xc]
// 0089133f  895108               mov dword ptr [ecx + 8], edx
// 00891342  89410c               mov dword ptr [ecx + 0xc], eax
// 00891345  8d4c247c             lea ecx, [esp + 0x7c]
// 00891349  51                   push ecx
// 0089134a  8d942440010000       lea edx, [esp + 0x140]
// 00891351  52                   push edx
// 00891352  8bce                 mov ecx, esi
// 00891354  e887bc0500           call 0x8ecfe0
// 00891359  8b742470             mov esi, dword ptr [esp + 0x70]
// 0089135d  8b942460010000       mov edx, dword ptr [esp + 0x160]
// 00891364  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00891368  037240               add esi, dword ptr [edx + 0x40]
// 0089136b  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0089136f  89442444             mov dword ptr [esp + 0x44], eax
// 00891373  8b442478             mov eax, dword ptr [esp + 0x78]
// 00891377  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0089137b  c744244407000000     mov dword ptr [esp + 0x44], 7
// 00891383  89742448             mov dword ptr [esp + 0x48], esi
// 00891387  83e803               sub eax, 3
// 0089138a  89442450             mov dword ptr [esp + 0x50], eax
// 0089138e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00891392  50                   push eax
// 00891393  8bcf                 mov ecx, edi
// 00891395  e806f9ffff           call 0x890ca0
// 0089139a  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 008913a1  85c0                 test eax, eax
// 008913a3  0f84dc000000         je 0x891485
// 008913a9  6a32                 push 0x32
// 008913ab  ff15e019a400         call dword ptr [0xa419e0]
// 008913b1  6a31                 push 0x31
// 008913b3  89442418             mov dword ptr [esp + 0x18], eax
// 008913b7  ff15e019a400         call dword ptr [0xa419e0]
// 008913bd  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 008913c4  8944242c             mov dword ptr [esp + 0x2c], eax
// 008913c8  8b4140               mov eax, dword ptr [ecx + 0x40]
// 008913cb  8d48ff               lea ecx, [eax - 1]
// 008913ce  8b442478             mov eax, dword ptr [esp + 0x78]
// 008913d2  2b442470             sub eax, dword ptr [esp + 0x70]
// 008913d6  2bc1                 sub eax, ecx
// 008913d8  2b442414             sub eax, dword ptr [esp + 0x14]
// 008913dc  99                   cdq 
// 008913dd  2bc2                 sub eax, edx
// 008913df  d1f8                 sar eax, 1
// 008913e1  03c1                 add eax, ecx
// 008913e3  89842490000000       mov dword ptr [esp + 0x90], eax
// 008913ea  e891d9fcff           call 0x85ed80
// 008913ef  8d94241c010000       lea edx, [esp + 0x11c]
// 008913f6  52                   push edx
// 008913f7  e8d4c7fcff           call 0x85dbd0
// 008913fc  83c404               add esp, 4
// 008913ff  89442440             mov dword ptr [esp + 0x40], eax
// 00891403  83e001               and eax, 1
// 00891406  8944247c             mov dword ptr [esp + 0x7c], eax
// 0089140a  741d                 je 0x891429
// 0089140c  e86fd9fcff           call 0x85ed80
// 00891411  8b442440             mov eax, dword ptr [esp + 0x40]
// 00891415  83c808               or eax, 8
// 00891418  50                   push eax
// 00891419  8d8c2420010000       lea ecx, [esp + 0x120]
// 00891420  51                   push ecx
// 00891421  e8dac7fcff           call 0x85dc00
// 00891426  83c408               add esp, 8
// 00891429  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089142d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00891431  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 00891438  6a03                 push 3
// 0089143a  6a00                 push 0
// 0089143c  6a00                 push 0
// 0089143e  52                   push edx
// 0089143f  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00891446  50                   push eax
// 00891447  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 0089144e  51                   push ecx
// 0089144f  52                   push edx
// 00891450  6a07                 push 7
// 00891452  50                   push eax
// 00891453  ff15bc1aa400         call dword ptr [0xa41abc]
// 00891459  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 0089145e  741a                 je 0x89147a
// 00891460  e81bd9fcff           call 0x85ed80
// 00891465  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00891469  51                   push ecx
// 0089146a  8d942420010000       lea edx, [esp + 0x120]
// 00891471  52                   push edx
// 00891472  e889c7fcff           call 0x85dc00
// 00891477  83c408               add esp, 8
// 0089147a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089147e  83c00c               add eax, 0xc
// 00891481  89442444             mov dword ptr [esp + 0x44], eax
// 00891485  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 0089148c  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0089148f  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00891492  33c9                 xor ecx, ecx
// 00891494  89542440             mov dword ptr [esp + 0x40], edx
// 00891498  894c2414             mov dword ptr [esp + 0x14], ecx
// 0089149c  85c0                 test eax, eax
// 0089149e  7f69                 jg 0x891509
// 008914a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008914a4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008914a8  296c244c             sub dword ptr [esp + 0x4c], ebp
// 008914ac  8b17                 mov edx, dword ptr [edi]
// 008914ae  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 008914b4  50                   push eax
// 008914b5  51                   push ecx
// 008914b6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008914ba  83ec10               sub esp, 0x10
// 008914bd  8bc4                 mov eax, esp
// 008914bf  8908                 mov dword ptr [eax], ecx
// 008914c1  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008914c5  897004               mov dword ptr [eax + 4], esi
// 008914c8  894808               mov dword ptr [eax + 8], ecx
// 008914cb  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008914cf  89480c               mov dword ptr [eax + 0xc], ecx
// 008914d2  8d842434010000       lea eax, [esp + 0x134]
// 008914d9  50                   push eax
// 008914da  8bcf                 mov ecx, edi
// 008914dc  ffd2                 call edx
// 008914de  8d8c241c010000       lea ecx, [esp + 0x11c]
// 008914e5  c7842454010000ffffffff mov dword ptr [esp + 0x154], 0xffffffff
// 008914f0  e80bbbfcff           call 0x85d000
// 008914f5  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 008914fc  e9ec020000           jmp 0x8917ed
// 00891501  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00891505  8b542440             mov edx, dword ptr [esp + 0x40]
// 00891509  85c9                 test ecx, ecx
// 0089150b  7c18                 jl 0x891525
// 0089150d  3bc8                 cmp ecx, eax
// 0089150f  7d14                 jge 0x891525
// 00891511  3b4a2c               cmp ecx, dword ptr [edx + 0x2c]
// 00891514  0f8d62010000         jge 0x89167c
// 0089151a  8b5228               mov edx, dword ptr [edx + 0x28]
// 0089151d  8b348a               mov esi, dword ptr [edx + ecx*4]
// 00891520  8d048a               lea eax, [edx + ecx*4]
// 00891523  eb02                 jmp 0x891527
// 00891525  33f6                 xor esi, esi
// 00891527  8b06                 mov eax, dword ptr [esi]
// 00891529  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0089152f  6a00                 push 0
// 00891531  8bce                 mov ecx, esi
// 00891533  ffd2                 call edx
// 00891535  85c0                 test eax, eax
// 00891537  0f841e010000         je 0x89165b
// 0089153d  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00891543  83f8ff               cmp eax, -1
// 00891546  750f                 jne 0x891557
// 00891548  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0089154e  85c9                 test ecx, ecx
// 00891550  7405                 je 0x891557
// 00891552  e809b7f7ff           call 0x80cc60
// 00891557  85c0                 test eax, eax
// 00891559  740e                 je 0x891569
// 0089155b  837c241800           cmp dword ptr [esp + 0x18], 0
// 00891560  7407                 je 0x891569
// 00891562  b901000000           mov ecx, 1
// 00891567  eb02                 jmp 0x89156b
// 00891569  33c9                 xor ecx, ecx
// 0089156b  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00891571  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00891577  8944247c             mov dword ptr [esp + 0x7c], eax
// 0089157b  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00891581  89442430             mov dword ptr [esp + 0x30], eax
// 00891585  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0089158b  89442438             mov dword ptr [esp + 0x38], eax
// 0089158f  8b07                 mov eax, dword ptr [edi]
// 00891591  8954242c             mov dword ptr [esp + 0x2c], edx
// 00891595  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 0089159b  0530010000           add eax, 0x130
// 008915a0  89542434             mov dword ptr [esp + 0x34], edx
// 008915a4  8b16                 mov edx, dword ptr [esi]
// 008915a6  89842490000000       mov dword ptr [esp + 0x90], eax
// 008915ad  8b4278               mov eax, dword ptr [edx + 0x78]
// 008915b0  51                   push ecx
// 008915b1  8bce                 mov ecx, esi
// 008915b3  ffd0                 call eax
// 008915b5  8b16                 mov edx, dword ptr [esi]
// 008915b7  50                   push eax
// 008915b8  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008915bb  8bce                 mov ecx, esi
// 008915bd  ffd0                 call eax
// 008915bf  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008915c6  8b542434             mov edx, dword ptr [esp + 0x34]
// 008915ca  50                   push eax
// 008915cb  51                   push ecx
// 008915cc  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008915d0  83ec10               sub esp, 0x10
// 008915d3  8bc4                 mov eax, esp
// 008915d5  8910                 mov dword ptr [eax], edx
// 008915d7  8b542454             mov edx, dword ptr [esp + 0x54]
// 008915db  894804               mov dword ptr [eax + 4], ecx
// 008915de  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008915e2  895008               mov dword ptr [eax + 8], edx
// 008915e5  89480c               mov dword ptr [eax + 0xc], ecx
// 008915e8  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 008915ef  8d94243c010000       lea edx, [esp + 0x13c]
// 008915f6  52                   push edx
// 008915f7  8b10                 mov edx, dword ptr [eax]
// 008915f9  8bcf                 mov ecx, edi
// 008915fb  ffd2                 call edx
// 008915fd  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00891603  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00891609  3944244c             cmp dword ptr [esp + 0x4c], eax
// 0089160d  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00891613  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0089161a  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00891620  89942488000000       mov dword ptr [esp + 0x88], edx
// 00891627  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 0089162e  7c2b                 jl 0x89165b
// 00891630  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00891636  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 0089163c  89942484000000       mov dword ptr [esp + 0x84], edx
// 00891643  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00891649  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00891650  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 00891657  8944244c             mov dword ptr [esp + 0x4c], eax
// 0089165b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089165f  8b442440             mov eax, dword ptr [esp + 0x40]
// 00891663  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00891666  41                   inc ecx
// 00891667  3bc8                 cmp ecx, eax
// 00891669  894c2414             mov dword ptr [esp + 0x14], ecx
// 0089166d  0f8c8efeffff         jl 0x891501
// 00891673  8b742448             mov esi, dword ptr [esp + 0x48]
// 00891677  e924feffff           jmp 0x8914a0
// 0089167c  e8898cf7ff           call 0x80a30a
// 00891681  68f009ad00           push 0xad09f0
// 00891686  8bcf                 mov ecx, edi
// 00891688  e803dcffff           call 0x88f290
// 0089168d  33c9                 xor ecx, ecx
// 0089168f  85db                 test ebx, ebx
// 00891691  0f94c1               sete cl
// 00891694  6a02                 push 2
// 00891696  8d542448             lea edx, [esp + 0x48]
// 0089169a  89442440             mov dword ptr [esp + 0x40], eax
// 0089169e  8bd9                 mov ebx, ecx
// 008916a0  53                   push ebx
// 008916a1  52                   push edx
// 008916a2  8bc8                 mov ecx, eax
// 008916a4  e867c00500           call 0x8ed710
// 008916a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008916ad  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008916b1  8d1428               lea edx, [eax + ebp]
// 008916b4  8944245c             mov dword ptr [esp + 0x5c], eax
// 008916b8  8b442478             mov eax, dword ptr [esp + 0x78]
// 008916bc  894c2460             mov dword ptr [esp + 0x60], ecx
// 008916c0  33c9                 xor ecx, ecx
// 008916c2  83ec10               sub esp, 0x10
// 008916c5  89442478             mov dword ptr [esp + 0x78], eax
// 008916c9  8bc4                 mov eax, esp
// 008916cb  8908                 mov dword ptr [eax], ecx
// 008916cd  898c24cc000000       mov dword ptr [esp + 0xcc], ecx
// 008916d4  b905000000           mov ecx, 5
// 008916d9  894804               mov dword ptr [eax + 4], ecx
// 008916dc  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 008916e3  894808               mov dword ptr [eax + 8], ecx
// 008916e6  83ec10               sub esp, 0x10
// 008916e9  b903000000           mov ecx, 3
// 008916ee  89480c               mov dword ptr [eax + 0xc], ecx
// 008916f1  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008916f5  8bc4                 mov eax, esp
// 008916f7  89942484000000       mov dword ptr [esp + 0x84], edx
// 008916fe  8b542464             mov edx, dword ptr [esp + 0x64]
// 00891702  8910                 mov dword ptr [eax], edx
// 00891704  8b542470             mov edx, dword ptr [esp + 0x70]
// 00891708  894804               mov dword ptr [eax + 4], ecx
// 0089170b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0089170f  896808               mov dword ptr [eax + 8], ebp
// 00891712  89500c               mov dword ptr [eax + 0xc], edx
// 00891715  8d44247c             lea eax, [esp + 0x7c]
// 00891719  50                   push eax
// 0089171a  56                   push esi
// 0089171b  896c2474             mov dword ptr [esp + 0x74], ebp
// 0089171f  e8bcb80500           call 0x8ecfe0
// 00891724  68e009ad00           push 0xad09e0
// 00891729  8bcf                 mov ecx, edi
// 0089172b  e860dbffff           call 0x88f290
// 00891730  6a02                 push 2
// 00891732  53                   push ebx
// 00891733  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 0089173a  51                   push ecx
// 0089173b  8bc8                 mov ecx, eax
// 0089173d  89442448             mov dword ptr [esp + 0x48], eax
// 00891741  e8cabf0500           call 0x8ed710
// 00891746  8b10                 mov edx, dword ptr [eax]
// 00891748  89542444             mov dword ptr [esp + 0x44], edx
// 0089174c  8b4804               mov ecx, dword ptr [eax + 4]
// 0089174f  894c2448             mov dword ptr [esp + 0x48], ecx
// 00891753  8b4808               mov ecx, dword ptr [eax + 8]
// 00891756  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0089175a  8b500c               mov edx, dword ptr [eax + 0xc]
// 0089175d  8bc1                 mov eax, ecx
// 0089175f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00891763  89542450             mov dword ptr [esp + 0x50], edx
// 00891767  8bd1                 mov edx, ecx
// 00891769  2bd5                 sub edx, ebp
// 0089176b  89942494000000       mov dword ptr [esp + 0x94], edx
// 00891772  8b542470             mov edx, dword ptr [esp + 0x70]
// 00891776  2bc5                 sub eax, ebp
// 00891778  89942498000000       mov dword ptr [esp + 0x98], edx
// 0089177f  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 00891786  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0089178a  33d2                 xor edx, edx
// 0089178c  89442444             mov dword ptr [esp + 0x44], eax
// 00891790  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 00891797  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 0089179e  83ec10               sub esp, 0x10
// 008917a1  8bcc                 mov ecx, esp
// 008917a3  8911                 mov dword ptr [ecx], edx
// 008917a5  ba05000000           mov edx, 5
// 008917aa  895104               mov dword ptr [ecx + 4], edx
// 008917ad  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 008917b4  895108               mov dword ptr [ecx + 8], edx
// 008917b7  83ec10               sub esp, 0x10
// 008917ba  ba03000000           mov edx, 3
// 008917bf  89510c               mov dword ptr [ecx + 0xc], edx
// 008917c2  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008917c6  8bcc                 mov ecx, esp
// 008917c8  8901                 mov dword ptr [ecx], eax
// 008917ca  8b442468             mov eax, dword ptr [esp + 0x68]
// 008917ce  894104               mov dword ptr [ecx + 4], eax
// 008917d1  8b442470             mov eax, dword ptr [esp + 0x70]
// 008917d5  895108               mov dword ptr [ecx + 8], edx
// 008917d8  89410c               mov dword ptr [ecx + 0xc], eax
// 008917db  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 008917e2  51                   push ecx
// 008917e3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008917e7  56                   push esi
// 008917e8  e8f3b70500           call 0x8ecfe0
// 008917ed  83bc24c400000000     cmp dword ptr [esp + 0xc4], 0
// 008917f5  0f84d7020000         je 0x891ad2
// 008917fb  68e80aad00           push 0xad0ae8
// 00891800  8bcf                 mov ecx, edi
// 00891802  e889daffff           call 0x88f290
// 00891807  8bc8                 mov ecx, eax
// 00891809  89442414             mov dword ptr [esp + 0x14], eax
// 0089180d  e87ebf0500           call 0x8ed790
// 00891812  89442438             mov dword ptr [esp + 0x38], eax
// 00891816  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0089181a  40                   inc eax
// 0089181b  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 00891822  8b442428             mov eax, dword ptr [esp + 0x28]
// 00891826  8d55ff               lea edx, [ebp - 1]
// 00891829  89542434             mov dword ptr [esp + 0x34], edx
// 0089182d  8bd0                 mov edx, eax
// 0089182f  2b542458             sub edx, dword ptr [esp + 0x58]
// 00891833  2b442454             sub eax, dword ptr [esp + 0x54]
// 00891837  2b542454             sub edx, dword ptr [esp + 0x54]
// 0089183b  83ec10               sub esp, 0x10
// 0089183e  899424f0000000       mov dword ptr [esp + 0xf0], edx
// 00891845  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00891849  03d5                 add edx, ebp
// 0089184b  899424f4000000       mov dword ptr [esp + 0xf4], edx
// 00891852  33d2                 xor edx, edx
// 00891854  898424f8000000       mov dword ptr [esp + 0xf8], eax
// 0089185b  8bc4                 mov eax, esp
// 0089185d  8910                 mov dword ptr [eax], edx
// 0089185f  895004               mov dword ptr [eax + 4], edx
// 00891862  895008               mov dword ptr [eax + 8], edx
// 00891865  89500c               mov dword ptr [eax + 0xc], edx
// 00891868  33c9                 xor ecx, ecx
// 0089186a  83ec10               sub esp, 0x10
// 0089186d  8bc4                 mov eax, esp
// 0089186f  8908                 mov dword ptr [eax], ecx
// 00891871  89942488000000       mov dword ptr [esp + 0x88], edx
// 00891878  8b542454             mov edx, dword ptr [esp + 0x54]
// 0089187c  894804               mov dword ptr [eax + 4], ecx
// 0089187f  895008               mov dword ptr [eax + 8], edx
// 00891882  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00891886  894c2450             mov dword ptr [esp + 0x50], ecx
// 0089188a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0089188e  8d9424fc000000       lea edx, [esp + 0xfc]
// 00891895  52                   push edx
// 00891896  89480c               mov dword ptr [eax + 0xc], ecx
// 00891899  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089189d  56                   push esi
// 0089189e  e83db70500           call 0x8ecfe0
// 008918a3  68c40aad00           push 0xad0ac4
// 008918a8  8bcf                 mov ecx, edi
// 008918aa  e8e1d9ffff           call 0x88f290
// 008918af  8bc8                 mov ecx, eax
// 008918b1  89442414             mov dword ptr [esp + 0x14], eax
// 008918b5  e8d6be0500           call 0x8ed790
// 008918ba  50                   push eax
// 008918bb  8d45ff               lea eax, [ebp - 1]
// 008918be  50                   push eax
// 008918bf  6a00                 push 0
// 008918c1  6a00                 push 0
// 008918c3  8d4c243c             lea ecx, [esp + 0x3c]
// 008918c7  51                   push ecx
// 008918c8  ff15c81ba400         call dword ptr [0xa41bc8]
// 008918ce  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008918d2  8b442428             mov eax, dword ptr [esp + 0x28]
// 008918d6  8bd1                 mov edx, ecx
// 008918d8  2bd5                 sub edx, ebp
// 008918da  899424ec000000       mov dword ptr [esp + 0xec], edx
// 008918e1  8bd0                 mov edx, eax
// 008918e3  2b542458             sub edx, dword ptr [esp + 0x58]
// 008918e7  2b442454             sub eax, dword ptr [esp + 0x54]
// 008918eb  2b542454             sub edx, dword ptr [esp + 0x54]
// 008918ef  49                   dec ecx
// 008918f0  899424f0000000       mov dword ptr [esp + 0xf0], edx
// 008918f7  898c24f4000000       mov dword ptr [esp + 0xf4], ecx
// 008918fe  33c9                 xor ecx, ecx
// 00891900  33d2                 xor edx, edx
// 00891902  83ec10               sub esp, 0x10
// 00891905  89842408010000       mov dword ptr [esp + 0x108], eax
// 0089190c  8bc4                 mov eax, esp
// 0089190e  8908                 mov dword ptr [eax], ecx
// 00891910  895004               mov dword ptr [eax + 4], edx
// 00891913  894808               mov dword ptr [eax + 8], ecx
// 00891916  89480c               mov dword ptr [eax + 0xc], ecx
// 00891919  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089191d  8b542440             mov edx, dword ptr [esp + 0x40]
// 00891921  83ec10               sub esp, 0x10
// 00891924  8bc4                 mov eax, esp
// 00891926  8908                 mov dword ptr [eax], ecx
// 00891928  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0089192c  895004               mov dword ptr [eax + 4], edx
// 0089192f  8b542458             mov edx, dword ptr [esp + 0x58]
// 00891933  894808               mov dword ptr [eax + 8], ecx
// 00891936  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089193a  89500c               mov dword ptr [eax + 0xc], edx
// 0089193d  8d84240c010000       lea eax, [esp + 0x10c]
// 00891944  50                   push eax
// 00891945  56                   push esi
// 00891946  e895b60500           call 0x8ecfe0
// 0089194b  83fd03               cmp ebp, 3
// 0089194e  0f8e7e010000         jle 0x891ad2
// 00891954  683412ad00           push 0xad1234
// 00891959  8bcf                 mov ecx, edi
// 0089195b  e830d9ffff           call 0x88f290
// 00891960  6a02                 push 2
// 00891962  53                   push ebx
// 00891963  8d4c2464             lea ecx, [esp + 0x64]
// 00891967  51                   push ecx
// 00891968  8bc8                 mov ecx, eax
// 0089196a  89442420             mov dword ptr [esp + 0x20], eax
// 0089196e  e89dbd0500           call 0x8ed710
// 00891973  8b10                 mov edx, dword ptr [eax]
// 00891975  8954242c             mov dword ptr [esp + 0x2c], edx
// 00891979  8b4804               mov ecx, dword ptr [eax + 4]
// 0089197c  894c2430             mov dword ptr [esp + 0x30], ecx
// 00891980  8b4808               mov ecx, dword ptr [eax + 8]
// 00891983  894c2434             mov dword ptr [esp + 0x34], ecx
// 00891987  8b400c               mov eax, dword ptr [eax + 0xc]
// 0089198a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089198e  898c2494000000       mov dword ptr [esp + 0x94], ecx
// 00891995  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00891999  2bc8                 sub ecx, eax
// 0089199b  034c2428             add ecx, dword ptr [esp + 0x28]
// 0089199f  89442438             mov dword ptr [esp + 0x38], eax
// 008919a3  8b442434             mov eax, dword ptr [esp + 0x34]
// 008919a7  2bc2                 sub eax, edx
// 008919a9  0344241c             add eax, dword ptr [esp + 0x1c]
// 008919ad  68ff00ff00           push 0xff00ff
// 008919b2  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 008919b9  33c0                 xor eax, eax
// 008919bb  89442460             mov dword ptr [esp + 0x60], eax
// 008919bf  89442464             mov dword ptr [esp + 0x64], eax
// 008919c3  89442468             mov dword ptr [esp + 0x68], eax
// 008919c7  8944246c             mov dword ptr [esp + 0x6c], eax
// 008919cb  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 008919d2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008919d6  8d442460             lea eax, [esp + 0x60]
// 008919da  50                   push eax
// 008919db  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008919df  83ec10               sub esp, 0x10
// 008919e2  898c24b8000000       mov dword ptr [esp + 0xb8], ecx
// 008919e9  8bcc                 mov ecx, esp
// 008919eb  8911                 mov dword ptr [ecx], edx
// 008919ed  8b542448             mov edx, dword ptr [esp + 0x48]
// 008919f1  895104               mov dword ptr [ecx + 4], edx
// 008919f4  8b542450             mov edx, dword ptr [esp + 0x50]
// 008919f8  894108               mov dword ptr [ecx + 8], eax
// 008919fb  8d8424ac000000       lea eax, [esp + 0xac]
// 00891a02  50                   push eax
// 00891a03  89510c               mov dword ptr [ecx + 0xc], edx
// 00891a06  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00891a0a  56                   push esi
// 00891a0b  e840c20500           call 0x8edc50
// 00891a10  83fd03               cmp ebp, 3
// 00891a13  0f8eb9000000         jle 0x891ad2
// 00891a19  682012ad00           push 0xad1220
// 00891a1e  8bcf                 mov ecx, edi
// 00891a20  e86bd8ffff           call 0x88f290
// 00891a25  6a02                 push 2
// 00891a27  53                   push ebx
// 00891a28  8d4c2464             lea ecx, [esp + 0x64]
// 00891a2c  8bf8                 mov edi, eax
// 00891a2e  51                   push ecx
// 00891a2f  8bcf                 mov ecx, edi
// 00891a31  e8dabc0500           call 0x8ed710
// 00891a36  8b10                 mov edx, dword ptr [eax]
// 00891a38  8954242c             mov dword ptr [esp + 0x2c], edx
// 00891a3c  8b5804               mov ebx, dword ptr [eax + 4]
// 00891a3f  895c2430             mov dword ptr [esp + 0x30], ebx
// 00891a43  8b6808               mov ebp, dword ptr [eax + 8]
// 00891a46  8bca                 mov ecx, edx
// 00891a48  2bcd                 sub ecx, ebp
// 00891a4a  034c2424             add ecx, dword ptr [esp + 0x24]
// 00891a4e  896c2434             mov dword ptr [esp + 0x34], ebp
// 00891a52  8b400c               mov eax, dword ptr [eax + 0xc]
// 00891a55  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00891a5c  89442438             mov dword ptr [esp + 0x38], eax
// 00891a60  8bcb                 mov ecx, ebx
// 00891a62  2bc8                 sub ecx, eax
// 00891a64  8b442428             mov eax, dword ptr [esp + 0x28]
// 00891a68  03c8                 add ecx, eax
// 00891a6a  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00891a71  33c0                 xor eax, eax
// 00891a73  68ff00ff00           push 0xff00ff
// 00891a78  89842400010000       mov dword ptr [esp + 0x100], eax
// 00891a7f  89842404010000       mov dword ptr [esp + 0x104], eax
// 00891a86  89842408010000       mov dword ptr [esp + 0x108], eax
// 00891a8d  8984240c010000       mov dword ptr [esp + 0x10c], eax
// 00891a94  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00891a9b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00891a9f  8d842400010000       lea eax, [esp + 0x100]
// 00891aa6  50                   push eax
// 00891aa7  83ec10               sub esp, 0x10
// 00891aaa  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 00891ab1  8bcc                 mov ecx, esp
// 00891ab3  8911                 mov dword ptr [ecx], edx
// 00891ab5  8b542450             mov edx, dword ptr [esp + 0x50]
// 00891ab9  895904               mov dword ptr [ecx + 4], ebx
// 00891abc  8d842498000000       lea eax, [esp + 0x98]
// 00891ac3  896908               mov dword ptr [ecx + 8], ebp
// 00891ac6  50                   push eax
// 00891ac7  89510c               mov dword ptr [ecx + 0xc], edx
// 00891aca  56                   push esi
// 00891acb  8bcf                 mov ecx, edi
// 00891acd  e87ec10500           call 0x8edc50
// 00891ad2  8b8c244c010000       mov ecx, dword ptr [esp + 0x14c]
// 00891ad9  64890d00000000       mov dword ptr fs:[0], ecx
// 00891ae0  59                   pop ecx
// 00891ae1  5f                   pop edi
// 00891ae2  5e                   pop esi
// 00891ae3  5d                   pop ebp
// 00891ae4  5b                   pop ebx
// 00891ae5  81c444010000         add esp, 0x144
// 00891aeb  c20800               ret 8
// copied from an identical function in another client (function ?DrawRibbonFrame@CXTPOffice2007Theme@@UAEXPAVCDC@@PAVCXTPOffice2007FrameHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp