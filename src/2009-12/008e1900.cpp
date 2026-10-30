// roc 2009-12 008e1900  unit: CXTColorSelectorCtrl  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1900
//
// 008e1900  6aff                 push -1
// 008e1902  6879439600           push 0x964379
// 008e1907  64a100000000         mov eax, dword ptr fs:[0]
// 008e190d  50                   push eax
// 008e190e  83ec10               sub esp, 0x10
// 008e1911  53                   push ebx
// 008e1912  55                   push ebp
// 008e1913  56                   push esi
// 008e1914  57                   push edi
// 008e1915  a10052b600           mov eax, dword ptr [0xb65200]
// 008e191a  33c4                 xor eax, esp
// 008e191c  50                   push eax
// 008e191d  8d442424             lea eax, [esp + 0x24]
// 008e1921  64a300000000         mov dword ptr fs:[0], eax
// 008e1927  8bf9                 mov edi, ecx
// 008e1929  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008e192d  6a01                 push 1
// 008e192f  8bcd                 mov ecx, ebp
// 008e1931  e85a4b0400           call 0x926490
// 008e1936  8b7500               mov esi, dword ptr [ebp]
// 008e1939  83c630               add esi, 0x30
// 008e193c  e89f2bf8ff           call 0x8644e0
// 008e1941  05dc000000           add eax, 0xdc
// 008e1946  50                   push eax
// 008e1947  8b06                 mov eax, dword ptr [esi]
// 008e1949  8bcd                 mov ecx, ebp
// 008e194b  ffd0                 call eax
// 008e194d  f687a400000002       test byte ptr [edi + 0xa4], 2
// 008e1954  89442420             mov dword ptr [esp + 0x20], eax
// 008e1958  7579                 jne 0x8e19d3
// 008e195a  8d4c2434             lea ecx, [esp + 0x34]
// 008e195e  ff1574de9800         call dword ptr [0x98de74]
// 008e1964  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008e196c  e82fcff8ff           call 0x86e8a0
// 008e1971  8b10                 mov edx, dword ptr [eax]
// 008e1973  8b5208               mov edx, dword ptr [edx + 8]
// 008e1976  68d0240000           push 0x24d0
// 008e197b  8d4c2438             lea ecx, [esp + 0x38]
// 008e197f  51                   push ecx
// 008e1980  8bc8                 mov ecx, eax
// 008e1982  ffd2                 call edx
// 008e1984  8b87a4000000         mov eax, dword ptr [edi + 0xa4]
// 008e198a  8b5d00               mov ebx, dword ptr [ebp]
// 008e198d  2410                 and al, 0x10
// 008e198f  0fb6f0               movzx esi, al
// 008e1992  f7de                 neg esi
// 008e1994  1bf6                 sbb esi, esi
// 008e1996  83e6e5               and esi, 0xffffffe5
// 008e1999  8d4c2434             lea ecx, [esp + 0x34]
// 008e199d  83c61b               add esi, 0x1b
// 008e19a0  83c364               add ebx, 0x64
// 008e19a3  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008e19a9  50                   push eax
// 008e19aa  8d4c2438             lea ecx, [esp + 0x38]
// 008e19ae  ff1580de9800         call dword ptr [0x98de80]
// 008e19b4  8b13                 mov edx, dword ptr [ebx]
// 008e19b6  50                   push eax
// 008e19b7  83c604               add esi, 4
// 008e19ba  56                   push esi
// 008e19bb  6a06                 push 6
// 008e19bd  8bcd                 mov ecx, ebp
// 008e19bf  ffd2                 call edx
// 008e19c1  8d4c2434             lea ecx, [esp + 0x34]
// 008e19c5  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008e19cd  ff15c0de9800         call dword ptr [0x98dec0]
// 008e19d3  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 008e19d9  33d2                 xor edx, edx
// 008e19db  33db                 xor ebx, ebx
// 008e19dd  3bf2                 cmp esi, edx
// 008e19df  7468                 je 0x8e1a49
// 008e19e1  eb02                 jmp 0x8e19e5
// 008e19e3  33d2                 xor edx, edx
// 008e19e5  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 008e19e8  8b4608               mov eax, dword ptr [esi + 8]
// 008e19eb  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e19ef  3bd9                 cmp ebx, ecx
// 008e19f1  7508                 jne 0x8e19fb
// 008e19f3  8b4774               mov eax, dword ptr [edi + 0x74]
// 008e19f6  83f8ff               cmp eax, -1
// 008e19f9  740b                 je 0x8e1a06
// 008e19fb  8b4774               mov eax, dword ptr [edi + 0x74]
// 008e19fe  89542418             mov dword ptr [esp + 0x18], edx
// 008e1a02  3bd8                 cmp ebx, eax
// 008e1a04  7518                 jne 0x8e1a1e
// 008e1a06  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008e1a0e  3bd8                 cmp ebx, eax
// 008e1a10  750c                 jne 0x8e1a1e
// 008e1a12  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008e1a1a  3bd9                 cmp ebx, ecx
// 008e1a1c  7404                 je 0x8e1a22
// 008e1a1e  89542414             mov dword ptr [esp + 0x14], edx
// 008e1a22  8bcf                 mov ecx, edi
// 008e1a24  e847feffff           call 0x8e1870
// 008e1a29  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e1a2d  8b10                 mov edx, dword ptr [eax]
// 008e1a2f  8b5214               mov edx, dword ptr [edx + 0x14]
// 008e1a32  51                   push ecx
// 008e1a33  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e1a37  51                   push ecx
// 008e1a38  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e1a3c  55                   push ebp
// 008e1a3d  51                   push ecx
// 008e1a3e  8bc8                 mov ecx, eax
// 008e1a40  ffd2                 call edx
// 008e1a42  8b36                 mov esi, dword ptr [esi]
// 008e1a44  43                   inc ebx
// 008e1a45  85f6                 test esi, esi
// 008e1a47  759a                 jne 0x8e19e3
// 008e1a49  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e1a4d  8b4500               mov eax, dword ptr [ebp]
// 008e1a50  8b5030               mov edx, dword ptr [eax + 0x30]
// 008e1a53  51                   push ecx
// 008e1a54  8bcd                 mov ecx, ebp
// 008e1a56  ffd2                 call edx
// 008e1a58  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e1a5c  64890d00000000       mov dword ptr fs:[0], ecx
// 008e1a63  59                   pop ecx
// 008e1a64  5f                   pop edi
// 008e1a65  5e                   pop esi
// 008e1a66  5d                   pop ebp
// 008e1a67  5b                   pop ebx
// 008e1a68  83c41c               add esp, 0x1c
// 008e1a6b  c20400               ret 4
// copied from an identical function in another client (function ?DrawColorSelector@CXTColorSelectorCtrl@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTColorSelectorCtrl.cpp