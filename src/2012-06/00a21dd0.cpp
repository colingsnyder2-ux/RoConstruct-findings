// roc 2012-06 00a21dd0  unit: CXTPRibbonBar  size: 689 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a21dd0
//
// 00a21dd0  6aff                 push -1
// 00a21dd2  686945ae00           push 0xae4569
// 00a21dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00a21ddd  50                   push eax
// 00a21dde  51                   push ecx
// 00a21ddf  53                   push ebx
// 00a21de0  55                   push ebp
// 00a21de1  56                   push esi
// 00a21de2  57                   push edi
// 00a21de3  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a21de8  33c4                 xor eax, esp
// 00a21dea  50                   push eax
// 00a21deb  8d442418             lea eax, [esp + 0x18]
// 00a21def  64a300000000         mov dword ptr fs:[0], eax
// 00a21df5  8bf1                 mov esi, ecx
// 00a21df7  6a11                 push 0x11
// 00a21df9  ff15843ab200         call dword ptr [0xb23a84]
// 00a21dff  6685c0               test ax, ax
// 00a21e02  0f8cd5010000         jl 0xa21fdd
// 00a21e08  8bce                 mov ecx, esi
// 00a21e0a  e8e10ef7ff           call 0x992cf0
// 00a21e0f  8be8                 mov ebp, eax
// 00a21e11  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a21e15  83f812               cmp eax, 0x12
// 00a21e18  0f8587000000         jne 0xa21ea5
// 00a21e1e  8bce                 mov ecx, esi
// 00a21e20  e8fbecffff           call 0xa20b20
// 00a21e25  85c0                 test eax, eax
// 00a21e27  0f8ef6000000         jle 0xa21f23
// 00a21e2d  8bcd                 mov ecx, ebp
// 00a21e2f  e8fc21f8ff           call 0x9a4030
// 00a21e34  6a01                 push 1
// 00a21e36  8bcd                 mov ecx, ebp
// 00a21e38  e8531ef8ff           call 0x9a3c90
// 00a21e3d  8bce                 mov ecx, esi
// 00a21e3f  c7454401000000       mov dword ptr [ebp + 0x44], 1
// 00a21e46  e815cbffff           call 0xa1e960
// 00a21e4b  85c0                 test eax, eax
// 00a21e4d  8b06                 mov eax, dword ptr [esi]
// 00a21e4f  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00a21e55  6a01                 push 1
// 00a21e57  7410                 je 0xa21e69
// 00a21e59  6a01                 push 1
// 00a21e5b  6a01                 push 1
// 00a21e5d  ffd2                 call edx
// 00a21e5f  b801000000           mov eax, 1
// 00a21e64  e976010000           jmp 0xa21fdf
// 00a21e69  6a00                 push 0
// 00a21e6b  6a01                 push 1
// 00a21e6d  ffd2                 call edx
// 00a21e6f  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 00a21e75  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 00a21e7b  8b06                 mov eax, dword ptr [esi]
// 00a21e7d  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 00a21e83  6a01                 push 1
// 00a21e85  52                   push edx
// 00a21e86  8bce                 mov ecx, esi
// 00a21e88  ffd0                 call eax
// 00a21e8a  8bb668020000         mov esi, dword ptr [esi + 0x268]
// 00a21e90  8b16                 mov edx, dword ptr [esi]
// 00a21e92  8b4270               mov eax, dword ptr [edx + 0x70]
// 00a21e95  6a01                 push 1
// 00a21e97  8bce                 mov ecx, esi
// 00a21e99  ffd0                 call eax
// 00a21e9b  b801000000           mov eax, 1
// 00a21ea0  e93a010000           jmp 0xa21fdf
// 00a21ea5  8d48cf               lea ecx, [eax - 0x31]
// 00a21ea8  83f908               cmp ecx, 8
// 00a21eab  7776                 ja 0xa21f23
// 00a21ead  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00a21eb3  83c0cf               add eax, -0x31
// 00a21eb6  6a00                 push 0
// 00a21eb8  50                   push eax
// 00a21eb9  e822e3faff           call 0x9d01e0
// 00a21ebe  8bf8                 mov edi, eax
// 00a21ec0  85ff                 test edi, edi
// 00a21ec2  745f                 je 0xa21f23
// 00a21ec4  8bcf                 mov ecx, edi
// 00a21ec6  e8f55ea5ff           call 0x477dc0
// 00a21ecb  85c0                 test eax, eax
// 00a21ecd  7454                 je 0xa21f23
// 00a21ecf  8b9f80000000         mov ebx, dword ptr [edi + 0x80]
// 00a21ed5  8bcd                 mov ecx, ebp
// 00a21ed7  e85421f8ff           call 0x9a4030
// 00a21edc  6a01                 push 1
// 00a21ede  8bcd                 mov ecx, ebp
// 00a21ee0  e8ab1df8ff           call 0x9a3c90
// 00a21ee5  6a01                 push 1
// 00a21ee7  c7454402000000       mov dword ptr [ebp + 0x44], 2
// 00a21eee  8b16                 mov edx, dword ptr [esi]
// 00a21ef0  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00a21ef6  6a00                 push 0
// 00a21ef8  6a01                 push 1
// 00a21efa  8bce                 mov ecx, esi
// 00a21efc  ffd0                 call eax
// 00a21efe  8b16                 mov edx, dword ptr [esi]
// 00a21f00  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00a21f06  6a01                 push 1
// 00a21f08  53                   push ebx
// 00a21f09  8bce                 mov ecx, esi
// 00a21f0b  ffd0                 call eax
// 00a21f0d  8b17                 mov edx, dword ptr [edi]
// 00a21f0f  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 00a21f15  8bcf                 mov ecx, edi
// 00a21f17  ffd0                 call eax
// 00a21f19  b801000000           mov eax, 1
// 00a21f1e  e9bc000000           jmp 0xa21fdf
// 00a21f23  8bce                 mov ecx, esi
// 00a21f25  33db                 xor ebx, ebx
// 00a21f27  e8f4ebffff           call 0xa20b20
// 00a21f2c  85c0                 test eax, eax
// 00a21f2e  0f8ea9000000         jle 0xa21fdd
// 00a21f34  53                   push ebx
// 00a21f35  8bce                 mov ecx, esi
// 00a21f37  e864feffff           call 0xa21da0
// 00a21f3c  8d4c2414             lea ecx, [esp + 0x14]
// 00a21f40  8bf8                 mov edi, eax
// 00a21f42  51                   push ecx
// 00a21f43  8bcf                 mov ecx, edi
// 00a21f45  e8a6940200           call 0xa4b3f0
// 00a21f4a  8d4c2414             lea ecx, [esp + 0x14]
// 00a21f4e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00a21f56  ff156046b200         call dword ptr [0xb24660]
// 00a21f5c  84c0                 test al, al
// 00a21f5e  755b                 jne 0xa21fbb
// 00a21f60  8bcf                 mov ecx, edi
// 00a21f62  e8d94ff9ff           call 0x9b6f40
// 00a21f67  85c0                 test eax, eax
// 00a21f69  7450                 je 0xa21fbb
// 00a21f6b  8bcf                 mov ecx, edi
// 00a21f6d  e80e4ffcff           call 0x9e6e80
// 00a21f72  85c0                 test eax, eax
// 00a21f74  7445                 je 0xa21fbb
// 00a21f76  6a00                 push 0
// 00a21f78  6a26                 push 0x26
// 00a21f7a  8d4c241c             lea ecx, [esp + 0x1c]
// 00a21f7e  ff15f447b200         call dword ptr [0xb247f4]
// 00a21f84  8bf8                 mov edi, eax
// 00a21f86  83ffff               cmp edi, -1
// 00a21f89  7e30                 jle 0xa21fbb
// 00a21f8b  8d4c2414             lea ecx, [esp + 0x14]
// 00a21f8f  ff155846b200         call dword ptr [0xb24658]
// 00a21f95  48                   dec eax
// 00a21f96  3bf8                 cmp edi, eax
// 00a21f98  7d21                 jge 0xa21fbb
// 00a21f9a  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a21f9e  52                   push edx
// 00a21f9f  47                   inc edi
// 00a21fa0  57                   push edi
// 00a21fa1  8d4c241c             lea ecx, [esp + 0x1c]
// 00a21fa5  ff15e844b200         call dword ptr [0xb244e8]
// 00a21fab  0fb6c0               movzx eax, al
// 00a21fae  50                   push eax
// 00a21faf  e89c65ffff           call 0xa18550
// 00a21fb4  83c408               add esp, 8
// 00a21fb7  85c0                 test eax, eax
// 00a21fb9  753a                 jne 0xa21ff5
// 00a21fbb  8d4c2414             lea ecx, [esp + 0x14]
// 00a21fbf  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00a21fc7  ff15d047b200         call dword ptr [0xb247d0]
// 00a21fcd  8bce                 mov ecx, esi
// 00a21fcf  43                   inc ebx
// 00a21fd0  e84bebffff           call 0xa20b20
// 00a21fd5  3bd8                 cmp ebx, eax
// 00a21fd7  0f8c57ffffff         jl 0xa21f34
// 00a21fdd  33c0                 xor eax, eax
// 00a21fdf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a21fe3  64890d00000000       mov dword ptr fs:[0], ecx
// 00a21fea  59                   pop ecx
// 00a21feb  5f                   pop edi
// 00a21fec  5e                   pop esi
// 00a21fed  5d                   pop ebp
// 00a21fee  5b                   pop ebx
// 00a21fef  83c410               add esp, 0x10
// 00a21ff2  c20400               ret 4
// 00a21ff5  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 00a21ffc  7507                 jne 0xa22005
// 00a21ffe  8bcd                 mov ecx, ebp
// 00a22000  e82b20f8ff           call 0x9a4030
// 00a22005  bf01000000           mov edi, 1
// 00a2200a  57                   push edi
// 00a2200b  8bcd                 mov ecx, ebp
// 00a2200d  e87e1cf8ff           call 0x9a3c90
// 00a22012  89be30010000         mov dword ptr [esi + 0x130], edi
// 00a22018  53                   push ebx
// 00a22019  8bce                 mov ecx, esi
// 00a2201b  897d44               mov dword ptr [ebp + 0x44], edi
// 00a2201e  e8bdc4ffff           call 0xa1e4e0
// 00a22023  8b16                 mov edx, dword ptr [esi]
// 00a22025  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00a2202b  57                   push edi
// 00a2202c  6a00                 push 0
// 00a2202e  57                   push edi
// 00a2202f  8bce                 mov ecx, esi
// 00a22031  ffd0                 call eax
// 00a22033  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00a22039  8b8880000000         mov ecx, dword ptr [eax + 0x80]
// 00a2203f  8b16                 mov edx, dword ptr [esi]
// 00a22041  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 00a22047  57                   push edi
// 00a22048  51                   push ecx
// 00a22049  8bce                 mov ecx, esi
// 00a2204b  ffd2                 call edx
// 00a2204d  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 00a22053  8b01                 mov eax, dword ptr [ecx]
// 00a22055  8b5070               mov edx, dword ptr [eax + 0x70]
// 00a22058  57                   push edi
// 00a22059  ffd2                 call edx
// 00a2205b  8bce                 mov ecx, esi
// 00a2205d  e8fec8ffff           call 0xa1e960
// 00a22062  85c0                 test eax, eax
// 00a22064  750a                 jne 0xa22070
// 00a22066  6a02                 push 2
// 00a22068  56                   push esi
// 00a22069  8bcd                 mov ecx, ebp
// 00a2206b  e8402ff8ff           call 0x9a4fb0
// 00a22070  8d4c2414             lea ecx, [esp + 0x14]
// 00a22074  ff15d047b200         call dword ptr [0xb247d0]
// 00a2207a  8bc7                 mov eax, edi
// 00a2207c  e95effffff           jmp 0xa21fdf
// copied from an identical function in another client (function ?PreviewAccel@CXTPRibbonBar@@UAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonBar.cpp