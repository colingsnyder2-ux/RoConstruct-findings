// roc 2010-06 008138d0  unit: CXTColorDialog  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008138d0
//
// 008138d0  6aff                 push -1
// 008138d2  6891469b00           push 0x9b4691
// 008138d7  64a100000000         mov eax, dword ptr fs:[0]
// 008138dd  50                   push eax
// 008138de  83ec14               sub esp, 0x14
// 008138e1  53                   push ebx
// 008138e2  56                   push esi
// 008138e3  57                   push edi
// 008138e4  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008138e9  33c4                 xor eax, esp
// 008138eb  50                   push eax
// 008138ec  8d442424             lea eax, [esp + 0x24]
// 008138f0  64a300000000         mov dword ptr fs:[0], eax
// 008138f6  8bf1                 mov esi, ecx
// 008138f8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008138fb  8b442434             mov eax, dword ptr [esp + 0x34]
// 008138ff  51                   push ecx
// 00813900  898624010000         mov dword ptr [esi + 0x124], eax
// 00813906  ff15e8bb9e00         call dword ptr [0x9ebbe8]
// 0081390c  85c0                 test eax, eax
// 0081390e  747a                 je 0x81398a
// 00813910  56                   push esi
// 00813911  8d4c2414             lea ecx, [esp + 0x14]
// 00813915  e81a4ff9ff           call 0x7a8834
// 0081391a  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 00813920  52                   push edx
// 00813921  8d8604010000         lea eax, [esi + 0x104]
// 00813927  50                   push eax
// 00813928  8d4c2418             lea ecx, [esp + 0x18]
// 0081392c  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00813934  e8054ef9ff           call 0x7a873e
// 00813939  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 00813940  7437                 je 0x813979
// 00813942  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 00813948  51                   push ecx
// 00813949  8d542438             lea edx, [esp + 0x38]
// 0081394d  52                   push edx
// 0081394e  e88df6ffff           call 0x812fe0
// 00813953  83c408               add esp, 8
// 00813956  8bc8                 mov ecx, eax
// 00813958  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0081395d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00813963  50                   push eax
// 00813964  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0081396a  e8e543f9ff           call 0x7a7d54
// 0081396f  8d4c2434             lea ecx, [esp + 0x34]
// 00813973  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00813979  8d4c2410             lea ecx, [esp + 0x10]
// 0081397d  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00813985  e8a44ef9ff           call 0x7a882e
// 0081398a  837c243800           cmp dword ptr [esp + 0x38], 0
// 0081398f  0f8484000000         je 0x813a19
// 00813995  8b4620               mov eax, dword ptr [esi + 0x20]
// 00813998  8b1d54ba9e00         mov ebx, dword ptr [0x9eba54]
// 0081399e  6a00                 push 0
// 008139a0  6a00                 push 0
// 008139a2  6874040000           push 0x474
// 008139a7  50                   push eax
// 008139a8  ffd3                 call ebx
// 008139aa  50                   push eax
// 008139ab  e8ba42f9ff           call 0x7a7c6a
// 008139b0  85c0                 test eax, eax
// 008139b2  7465                 je 0x813a19
// 008139b4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008139b7  6a00                 push 0
// 008139b9  6a00                 push 0
// 008139bb  6874040000           push 0x474
// 008139c0  51                   push ecx
// 008139c1  ffd3                 call ebx
// 008139c3  50                   push eax
// 008139c4  e8a142f9ff           call 0x7a7c6a
// 008139c9  85c0                 test eax, eax
// 008139cb  744c                 je 0x813a19
// 008139cd  83782000             cmp dword ptr [eax + 0x20], 0
// 008139d1  7446                 je 0x813a19
// 008139d3  8bce                 mov ecx, esi
// 008139d5  33ff                 xor edi, edi
// 008139d7  e8889b1600           call 0x97d564
// 008139dc  85c0                 test eax, eax
// 008139de  7e39                 jle 0x813a19
// 008139e0  85ff                 test edi, edi
// 008139e2  7c4a                 jl 0x813a2e
// 008139e4  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 008139ea  7d42                 jge 0x813a2e
// 008139ec  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 008139f2  8b04ba               mov eax, dword ptr [edx + edi*4]
// 008139f5  85c0                 test eax, eax
// 008139f7  7435                 je 0x813a2e
// 008139f9  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 008139ff  8b5020               mov edx, dword ptr [eax + 0x20]
// 00813a02  6a00                 push 0
// 00813a04  51                   push ecx
// 00813a05  6842270000           push 0x2742
// 00813a0a  52                   push edx
// 00813a0b  ffd3                 call ebx
// 00813a0d  8bce                 mov ecx, esi
// 00813a0f  47                   inc edi
// 00813a10  e84f9b1600           call 0x97d564
// 00813a15  3bf8                 cmp edi, eax
// 00813a17  7cc7                 jl 0x8139e0
// 00813a19  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00813a1d  64890d00000000       mov dword ptr fs:[0], ecx
// 00813a24  59                   pop ecx
// 00813a25  5f                   pop edi
// 00813a26  5e                   pop esi
// 00813a27  5b                   pop ebx
// 00813a28  83c420               add esp, 0x20
// 00813a2b  c20800               ret 8
// 00813a2e  e81942f9ff           call 0x7a7c4c
// copied from an identical function in another client (function ?SetNewColor@CXTColorDialog@@QAEXKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp