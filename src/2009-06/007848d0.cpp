// roc 2009-06 007848d0  unit: CXTColorDialog  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007848d0
//
// 007848d0  6aff                 push -1
// 007848d2  68d1a48700           push 0x87a4d1
// 007848d7  64a100000000         mov eax, dword ptr fs:[0]
// 007848dd  50                   push eax
// 007848de  83ec14               sub esp, 0x14
// 007848e1  53                   push ebx
// 007848e2  56                   push esi
// 007848e3  57                   push edi
// 007848e4  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007848e9  33c4                 xor eax, esp
// 007848eb  50                   push eax
// 007848ec  8d442424             lea eax, [esp + 0x24]
// 007848f0  64a300000000         mov dword ptr fs:[0], eax
// 007848f6  8bf1                 mov esi, ecx
// 007848f8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007848fb  8b442434             mov eax, dword ptr [esp + 0x34]
// 007848ff  51                   push ecx
// 00784900  898624010000         mov dword ptr [esi + 0x124], eax
// 00784906  ff15c8ed8900         call dword ptr [0x89edc8]
// 0078490c  85c0                 test eax, eax
// 0078490e  747a                 je 0x78498a
// 00784910  56                   push esi
// 00784911  8d4c2414             lea ecx, [esp + 0x14]
// 00784915  e8884ff9ff           call 0x7198a2
// 0078491a  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 00784920  52                   push edx
// 00784921  8d8604010000         lea eax, [esi + 0x104]
// 00784927  50                   push eax
// 00784928  8d4c2418             lea ecx, [esp + 0x18]
// 0078492c  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00784934  e8974ef9ff           call 0x7197d0
// 00784939  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 00784940  7437                 je 0x784979
// 00784942  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 00784948  51                   push ecx
// 00784949  8d542438             lea edx, [esp + 0x38]
// 0078494d  52                   push edx
// 0078494e  e88df6ffff           call 0x783fe0
// 00784953  83c408               add esp, 8
// 00784956  8bc8                 mov ecx, eax
// 00784958  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0078495d  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00784963  50                   push eax
// 00784964  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0078496a  e87d44f9ff           call 0x718dec
// 0078496f  8d4c2434             lea ecx, [esp + 0x34]
// 00784973  ff1510fd8900         call dword ptr [0x89fd10]
// 00784979  8d4c2410             lea ecx, [esp + 0x10]
// 0078497d  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00784985  e8124ff9ff           call 0x71989c
// 0078498a  837c243800           cmp dword ptr [esp + 0x38], 0
// 0078498f  0f8484000000         je 0x784a19
// 00784995  8b4620               mov eax, dword ptr [esi + 0x20]
// 00784998  8b1d90ee8900         mov ebx, dword ptr [0x89ee90]
// 0078499e  6a00                 push 0
// 007849a0  6a00                 push 0
// 007849a2  6874040000           push 0x474
// 007849a7  50                   push eax
// 007849a8  ffd3                 call ebx
// 007849aa  50                   push eax
// 007849ab  e85243f9ff           call 0x718d02
// 007849b0  85c0                 test eax, eax
// 007849b2  7465                 je 0x784a19
// 007849b4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007849b7  6a00                 push 0
// 007849b9  6a00                 push 0
// 007849bb  6874040000           push 0x474
// 007849c0  51                   push ecx
// 007849c1  ffd3                 call ebx
// 007849c3  50                   push eax
// 007849c4  e83943f9ff           call 0x718d02
// 007849c9  85c0                 test eax, eax
// 007849cb  744c                 je 0x784a19
// 007849cd  83782000             cmp dword ptr [eax + 0x20], 0
// 007849d1  7446                 je 0x784a19
// 007849d3  8bce                 mov ecx, esi
// 007849d5  33ff                 xor edi, edi
// 007849d7  e8da7c0c00           call 0x84c6b6
// 007849dc  85c0                 test eax, eax
// 007849de  7e39                 jle 0x784a19
// 007849e0  85ff                 test edi, edi
// 007849e2  7c4a                 jl 0x784a2e
// 007849e4  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 007849ea  7d42                 jge 0x784a2e
// 007849ec  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 007849f2  8b04ba               mov eax, dword ptr [edx + edi*4]
// 007849f5  85c0                 test eax, eax
// 007849f7  7435                 je 0x784a2e
// 007849f9  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 007849ff  8b5020               mov edx, dword ptr [eax + 0x20]
// 00784a02  6a00                 push 0
// 00784a04  51                   push ecx
// 00784a05  6842270000           push 0x2742
// 00784a0a  52                   push edx
// 00784a0b  ffd3                 call ebx
// 00784a0d  8bce                 mov ecx, esi
// 00784a0f  47                   inc edi
// 00784a10  e8a17c0c00           call 0x84c6b6
// 00784a15  3bf8                 cmp edi, eax
// 00784a17  7cc7                 jl 0x7849e0
// 00784a19  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00784a1d  64890d00000000       mov dword ptr fs:[0], ecx
// 00784a24  59                   pop ecx
// 00784a25  5f                   pop edi
// 00784a26  5e                   pop esi
// 00784a27  5b                   pop ebx
// 00784a28  83c420               add esp, 0x20
// 00784a2b  c20800               ret 8
// 00784a2e  e8b142f9ff           call 0x718ce4
// copied from an identical function in another client (function ?SetNewColor@CXTColorDialog@@QAEXKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp