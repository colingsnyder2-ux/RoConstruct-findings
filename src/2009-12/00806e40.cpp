// roc 2009-12 00806e40  unit: CXTPCommandBar  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00806e40
//
// 00806e40  6aff                 push -1
// 00806e42  68d8969500           push 0x9596d8
// 00806e47  64a100000000         mov eax, dword ptr fs:[0]
// 00806e4d  50                   push eax
// 00806e4e  83ec58               sub esp, 0x58
// 00806e51  53                   push ebx
// 00806e52  55                   push ebp
// 00806e53  56                   push esi
// 00806e54  57                   push edi
// 00806e55  a10052b600           mov eax, dword ptr [0xb65200]
// 00806e5a  33c4                 xor eax, esp
// 00806e5c  50                   push eax
// 00806e5d  8d44246c             lea eax, [esp + 0x6c]
// 00806e61  64a300000000         mov dword ptr fs:[0], eax
// 00806e67  8bd9                 mov ebx, ecx
// 00806e69  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 00806e6d  85ed                 test ebp, ebp
// 00806e6f  0f8405020000         je 0x80707a
// 00806e75  837d0400             cmp dword ptr [ebp + 4], 0
// 00806e79  0f84fb010000         je 0x80707a
// 00806e7f  e80cd7ffff           call 0x804590
// 00806e84  8bf8                 mov edi, eax
// 00806e86  8bcb                 mov ecx, ebx
// 00806e88  897c241c             mov dword ptr [esp + 0x1c], edi
// 00806e8c  e83fd6ffff           call 0x8044d0
// 00806e91  8bf0                 mov esi, eax
// 00806e93  8b03                 mov eax, dword ptr [ebx]
// 00806e95  8b90bc010000         mov edx, dword ptr [eax + 0x1bc]
// 00806e9b  55                   push ebp
// 00806e9c  8bcb                 mov ecx, ebx
// 00806e9e  89742424             mov dword ptr [esp + 0x24], esi
// 00806ea2  ffd2                 call edx
// 00806ea4  8bcb                 mov ecx, ebx
// 00806ea6  e805d5ffff           call 0x8043b0
// 00806eab  85c0                 test eax, eax
// 00806ead  7509                 jne 0x806eb8
// 00806eaf  83bb0001000004       cmp dword ptr [ebx + 0x100], 4
// 00806eb6  7515                 jne 0x806ecd
// 00806eb8  8b07                 mov eax, dword ptr [edi]
// 00806eba  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 00806ec0  6a01                 push 1
// 00806ec2  53                   push ebx
// 00806ec3  55                   push ebp
// 00806ec4  8d4c2420             lea ecx, [esp + 0x20]
// 00806ec8  51                   push ecx
// 00806ec9  8bcf                 mov ecx, edi
// 00806ecb  ffd2                 call edx
// 00806ecd  6a01                 push 1
// 00806ecf  8bcd                 mov ecx, ebp
// 00806ed1  e8baf51100           call 0x926490
// 00806ed6  8bcb                 mov ecx, ebx
// 00806ed8  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00806ee0  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00806ee8  e863e3ffff           call 0x805250
// 00806eed  85c0                 test eax, eax
// 00806eef  0f8e62010000         jle 0x807057
// 00806ef5  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00806ef9  50                   push eax
// 00806efa  8bcb                 mov ecx, ebx
// 00806efc  e85fe3ffff           call 0x805260
// 00806f01  8bf0                 mov esi, eax
// 00806f03  85f6                 test esi, esi
// 00806f05  0f8430010000         je 0x80703b
// 00806f0b  399e00010000         cmp dword ptr [esi + 0x100], ebx
// 00806f11  0f8524010000         jne 0x80703b
// 00806f17  8b16                 mov edx, dword ptr [esi]
// 00806f19  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00806f1f  6a00                 push 0
// 00806f21  8bce                 mov ecx, esi
// 00806f23  ffd0                 call eax
// 00806f25  85c0                 test eax, eax
// 00806f27  0f840e010000         je 0x80703b
// 00806f2d  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00806f34  741d                 je 0x806f53
// 00806f36  837c241400           cmp dword ptr [esp + 0x14], 0
// 00806f3b  7516                 jne 0x806f53
// 00806f3d  8b17                 mov edx, dword ptr [edi]
// 00806f3f  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 00806f45  6a01                 push 1
// 00806f47  56                   push esi
// 00806f48  53                   push ebx
// 00806f49  55                   push ebp
// 00806f4a  8d442434             lea eax, [esp + 0x34]
// 00806f4e  50                   push eax
// 00806f4f  8bcf                 mov ecx, edi
// 00806f51  ffd2                 call edx
// 00806f53  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00806f59  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00806f5f  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00806f65  8944242c             mov dword ptr [esp + 0x2c], eax
// 00806f69  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00806f6f  894c2430             mov dword ptr [esp + 0x30], ecx
// 00806f73  8d4c242c             lea ecx, [esp + 0x2c]
// 00806f77  89542434             mov dword ptr [esp + 0x34], edx
// 00806f7b  51                   push ecx
// 00806f7c  8d942484000000       lea edx, [esp + 0x84]
// 00806f83  8944243c             mov dword ptr [esp + 0x3c], eax
// 00806f87  52                   push edx
// 00806f88  8d442464             lea eax, [esp + 0x64]
// 00806f8c  50                   push eax
// 00806f8d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00806f95  ff15dcca9800         call dword ptr [0x98cadc]
// 00806f9b  85c0                 test eax, eax
// 00806f9d  744e                 je 0x806fed
// 00806f9f  8b3f                 mov edi, dword ptr [edi]
// 00806fa1  8bce                 mov ecx, esi
// 00806fa3  81c7e0000000         add edi, 0xe0
// 00806fa9  e842eac2ff           call 0x4359f0
// 00806fae  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00806fb2  8b17                 mov edx, dword ptr [edi]
// 00806fb4  50                   push eax
// 00806fb5  53                   push ebx
// 00806fb6  ffd2                 call edx
// 00806fb8  50                   push eax
// 00806fb9  55                   push ebp
// 00806fba  8d4c2454             lea ecx, [esp + 0x54]
// 00806fbe  e89d460400           call 0x84b660
// 00806fc3  8b06                 mov eax, dword ptr [esi]
// 00806fc5  8b90a0000000         mov edx, dword ptr [eax + 0xa0]
// 00806fcb  55                   push ebp
// 00806fcc  8bce                 mov ecx, esi
// 00806fce  c744247800000000     mov dword ptr [esp + 0x78], 0
// 00806fd6  ffd2                 call edx
// 00806fd8  8d4c244c             lea ecx, [esp + 0x4c]
// 00806fdc  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 00806fe4  e8f7460400           call 0x84b6e0
// 00806fe9  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00806fed  8b442420             mov eax, dword ptr [esp + 0x20]
// 00806ff1  85c0                 test eax, eax
// 00806ff3  7446                 je 0x80703b
// 00806ff5  83785c00             cmp dword ptr [eax + 0x5c], 0
// 00806ff9  7440                 je 0x80703b
// 00806ffb  397058               cmp dword ptr [eax + 0x58], esi
// 00806ffe  753b                 jne 0x80703b
// 00807000  8d44243c             lea eax, [esp + 0x3c]
// 00807004  50                   push eax
// 00807005  8bce                 mov ecx, esi
// 00807007  e8a4ebfeff           call 0x7f5bb0
// 0080700c  6a00                 push 0
// 0080700e  6a00                 push 0
// 00807010  8d4c2444             lea ecx, [esp + 0x44]
// 00807014  51                   push ecx
// 00807015  8bcd                 mov ecx, ebp
// 00807017  e8dcd5feff           call 0x7f45f8
// 0080701c  6aff                 push -1
// 0080701e  6aff                 push -1
// 00807020  8d542444             lea edx, [esp + 0x44]
// 00807024  52                   push edx
// 00807025  ff1558ca9800         call dword ptr [0x98ca58]
// 0080702b  6a00                 push 0
// 0080702d  6a00                 push 0
// 0080702f  8d442444             lea eax, [esp + 0x44]
// 00807033  50                   push eax
// 00807034  8bcd                 mov ecx, ebp
// 00807036  e8bdd5feff           call 0x7f45f8
// 0080703b  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0080703f  42                   inc edx
// 00807040  8bcb                 mov ecx, ebx
// 00807042  8954247c             mov dword ptr [esp + 0x7c], edx
// 00807046  e805e2ffff           call 0x805250
// 0080704b  3bd0                 cmp edx, eax
// 0080704d  0f8ca2feffff         jl 0x806ef5
// 00807053  8b742420             mov esi, dword ptr [esp + 0x20]
// 00807057  85f6                 test esi, esi
// 00807059  741f                 je 0x80707a
// 0080705b  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 0080705f  7419                 je 0x80707a
// 00807061  8d8b3c010000         lea ecx, [ebx + 0x13c]
// 00807067  51                   push ecx
// 00807068  ff1568cc9800         call dword ptr [0x98cc68]
// 0080706e  85c0                 test eax, eax
// 00807070  7508                 jne 0x80707a
// 00807072  55                   push ebp
// 00807073  8bcb                 mov ecx, ebx
// 00807075  e886e3ffff           call 0x805400
// 0080707a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0080707e  64890d00000000       mov dword ptr fs:[0], ecx
// 00807085  59                   pop ecx
// 00807086  5f                   pop edi
// 00807087  5e                   pop esi
// 00807088  5d                   pop ebp
// 00807089  5b                   pop ebx
// 0080708a  83c464               add esp, 0x64
// 0080708d  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBar@CXTPCommandBar@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp