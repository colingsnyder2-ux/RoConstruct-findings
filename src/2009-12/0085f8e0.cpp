// roc 2009-12 0085f8e0  unit: CXTColorDialog  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085f8e0
//
// 0085f8e0  6aff                 push -1
// 0085f8e2  6881e79500           push 0x95e781
// 0085f8e7  64a100000000         mov eax, dword ptr fs:[0]
// 0085f8ed  50                   push eax
// 0085f8ee  83ec14               sub esp, 0x14
// 0085f8f1  53                   push ebx
// 0085f8f2  56                   push esi
// 0085f8f3  57                   push edi
// 0085f8f4  a10052b600           mov eax, dword ptr [0xb65200]
// 0085f8f9  33c4                 xor eax, esp
// 0085f8fb  50                   push eax
// 0085f8fc  8d442424             lea eax, [esp + 0x24]
// 0085f900  64a300000000         mov dword ptr fs:[0], eax
// 0085f906  8bf1                 mov esi, ecx
// 0085f908  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085f90b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0085f90f  51                   push ecx
// 0085f910  898624010000         mov dword ptr [esi + 0x124], eax
// 0085f916  ff1564ca9800         call dword ptr [0x98ca64]
// 0085f91c  85c0                 test eax, eax
// 0085f91e  747a                 je 0x85f99a
// 0085f920  56                   push esi
// 0085f921  8d4c2414             lea ecx, [esp + 0x14]
// 0085f925  e8ac4df9ff           call 0x7f46d6
// 0085f92a  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 0085f930  52                   push edx
// 0085f931  8d8604010000         lea eax, [esi + 0x104]
// 0085f937  50                   push eax
// 0085f938  8d4c2418             lea ecx, [esp + 0x18]
// 0085f93c  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0085f944  e8b54cf9ff           call 0x7f45fe
// 0085f949  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 0085f950  7437                 je 0x85f989
// 0085f952  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 0085f958  51                   push ecx
// 0085f959  8d542438             lea edx, [esp + 0x38]
// 0085f95d  52                   push edx
// 0085f95e  e88df6ffff           call 0x85eff0
// 0085f963  83c408               add esp, 8
// 0085f966  8bc8                 mov ecx, eax
// 0085f968  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0085f96d  ff1580de9800         call dword ptr [0x98de80]
// 0085f973  50                   push eax
// 0085f974  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0085f97a  e89542f9ff           call 0x7f3c14
// 0085f97f  8d4c2434             lea ecx, [esp + 0x34]
// 0085f983  ff15c0de9800         call dword ptr [0x98dec0]
// 0085f989  8d4c2410             lea ecx, [esp + 0x10]
// 0085f98d  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0085f995  e8364df9ff           call 0x7f46d0
// 0085f99a  837c243800           cmp dword ptr [esp + 0x38], 0
// 0085f99f  0f8484000000         je 0x85fa29
// 0085f9a5  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085f9a8  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 0085f9ae  6a00                 push 0
// 0085f9b0  6a00                 push 0
// 0085f9b2  6874040000           push 0x474
// 0085f9b7  50                   push eax
// 0085f9b8  ffd3                 call ebx
// 0085f9ba  50                   push eax
// 0085f9bb  e86a41f9ff           call 0x7f3b2a
// 0085f9c0  85c0                 test eax, eax
// 0085f9c2  7465                 je 0x85fa29
// 0085f9c4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085f9c7  6a00                 push 0
// 0085f9c9  6a00                 push 0
// 0085f9cb  6874040000           push 0x474
// 0085f9d0  51                   push ecx
// 0085f9d1  ffd3                 call ebx
// 0085f9d3  50                   push eax
// 0085f9d4  e85141f9ff           call 0x7f3b2a
// 0085f9d9  85c0                 test eax, eax
// 0085f9db  744c                 je 0x85fa29
// 0085f9dd  83782000             cmp dword ptr [eax + 0x20], 0
// 0085f9e1  7446                 je 0x85fa29
// 0085f9e3  8bce                 mov ecx, esi
// 0085f9e5  33ff                 xor edi, edi
// 0085f9e7  e836720c00           call 0x926c22
// 0085f9ec  85c0                 test eax, eax
// 0085f9ee  7e39                 jle 0x85fa29
// 0085f9f0  85ff                 test edi, edi
// 0085f9f2  7c4a                 jl 0x85fa3e
// 0085f9f4  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 0085f9fa  7d42                 jge 0x85fa3e
// 0085f9fc  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 0085fa02  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0085fa05  85c0                 test eax, eax
// 0085fa07  7435                 je 0x85fa3e
// 0085fa09  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 0085fa0f  8b5020               mov edx, dword ptr [eax + 0x20]
// 0085fa12  6a00                 push 0
// 0085fa14  51                   push ecx
// 0085fa15  6842270000           push 0x2742
// 0085fa1a  52                   push edx
// 0085fa1b  ffd3                 call ebx
// 0085fa1d  8bce                 mov ecx, esi
// 0085fa1f  47                   inc edi
// 0085fa20  e8fd710c00           call 0x926c22
// 0085fa25  3bf8                 cmp edi, eax
// 0085fa27  7cc7                 jl 0x85f9f0
// 0085fa29  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085fa2d  64890d00000000       mov dword ptr fs:[0], ecx
// 0085fa34  59                   pop ecx
// 0085fa35  5f                   pop edi
// 0085fa36  5e                   pop esi
// 0085fa37  5b                   pop ebx
// 0085fa38  83c420               add esp, 0x20
// 0085fa3b  c20800               ret 8
// 0085fa3e  e8c940f9ff           call 0x7f3b0c
// copied from an identical function in another client (function ?SetNewColor@CXTColorDialog@@QAEXKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp