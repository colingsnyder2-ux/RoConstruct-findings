// roc 2009-12 00806be0  unit: CXTPCommandBar  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00806be0
//
// 00806be0  6aff                 push -1
// 00806be2  68b2969500           push 0x9596b2
// 00806be7  64a100000000         mov eax, dword ptr fs:[0]
// 00806bed  50                   push eax
// 00806bee  83ec08               sub esp, 8
// 00806bf1  53                   push ebx
// 00806bf2  55                   push ebp
// 00806bf3  56                   push esi
// 00806bf4  57                   push edi
// 00806bf5  a10052b600           mov eax, dword ptr [0xb65200]
// 00806bfa  33c4                 xor eax, esp
// 00806bfc  50                   push eax
// 00806bfd  8d44241c             lea eax, [esp + 0x1c]
// 00806c01  64a300000000         mov dword ptr fs:[0], eax
// 00806c07  894c2418             mov dword ptr [esp + 0x18], ecx
// 00806c0b  e8c0d8ffff           call 0x8044d0
// 00806c10  8bf8                 mov edi, eax
// 00806c12  85ff                 test edi, edi
// 00806c14  7475                 je 0x806c8b
// 00806c16  33f6                 xor esi, esi
// 00806c18  397734               cmp dword ptr [edi + 0x34], esi
// 00806c1b  7e58                 jle 0x806c75
// 00806c1d  85f6                 test esi, esi
// 00806c1f  0f8c50010000         jl 0x806d75
// 00806c25  3b7734               cmp esi, dword ptr [edi + 0x34]
// 00806c28  0f8d47010000         jge 0x806d75
// 00806c2e  8b4730               mov eax, dword ptr [edi + 0x30]
// 00806c31  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 00806c34  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00806c37  8d04b0               lea eax, [eax + esi*4]
// 00806c3a  8d6b54               lea ebp, [ebx + 0x54]
// 00806c3d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00806c41  8bcd                 mov ecx, ebp
// 00806c43  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00806c49  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00806c4d  3bc1                 cmp eax, ecx
// 00806c4f  7e1e                 jle 0x806c6f
// 00806c51  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00806c55  52                   push edx
// 00806c56  51                   push ecx
// 00806c57  8bcd                 mov ecx, ebp
// 00806c59  ff1510d59800         call dword ptr [0x98d510]
// 00806c5f  0fb6c0               movzx eax, al
// 00806c62  50                   push eax
// 00806c63  e8f8800800           call 0x88ed60
// 00806c68  83c408               add esp, 8
// 00806c6b  85c0                 test eax, eax
// 00806c6d  7532                 jne 0x806ca1
// 00806c6f  46                   inc esi
// 00806c70  3b7734               cmp esi, dword ptr [edi + 0x34]
// 00806c73  7ca8                 jl 0x806c1d
// 00806c75  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00806c79  83f810               cmp eax, 0x10
// 00806c7c  740d                 je 0x806c8b
// 00806c7e  83f811               cmp eax, 0x11
// 00806c81  7408                 je 0x806c8b
// 00806c83  6a00                 push 0
// 00806c85  ff153cca9800         call dword ptr [0x98ca3c]
// 00806c8b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00806c8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00806c96  59                   pop ecx
// 00806c97  5f                   pop edi
// 00806c98  5e                   pop esi
// 00806c99  5d                   pop ebp
// 00806c9a  5b                   pop ebx
// 00806c9b  83c414               add esp, 0x14
// 00806c9e  c20400               ret 4
// 00806ca1  8b6f48               mov ebp, dword ptr [edi + 0x48]
// 00806ca4  8d7354               lea esi, [ebx + 0x54]
// 00806ca7  8bce                 mov ecx, esi
// 00806ca9  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00806caf  48                   dec eax
// 00806cb0  3bc5                 cmp eax, ebp
// 00806cb2  0f8ec2000000         jle 0x806d7a
// 00806cb8  8d4501               lea eax, [ebp + 1]
// 00806cbb  50                   push eax
// 00806cbc  8d4c2430             lea ecx, [esp + 0x30]
// 00806cc0  51                   push ecx
// 00806cc1  8bce                 mov ecx, esi
// 00806cc3  894748               mov dword ptr [edi + 0x48], eax
// 00806cc6  ff1544cf9800         call dword ptr [0x98cf44]
// 00806ccc  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 00806ccf  83c5ff               add ebp, -1
// 00806cd2  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00806cda  0f8886000000         js 0x806d66
// 00806ce0  85ed                 test ebp, ebp
// 00806ce2  0f8c8d000000         jl 0x806d75
// 00806ce8  3b6f34               cmp ebp, dword ptr [edi + 0x34]
// 00806ceb  0f8d84000000         jge 0x806d75
// 00806cf1  8b5730               mov edx, dword ptr [edi + 0x30]
// 00806cf4  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 00806cf7  8d04aa               lea eax, [edx + ebp*4]
// 00806cfa  8b4748               mov eax, dword ptr [edi + 0x48]
// 00806cfd  50                   push eax
// 00806cfe  8d4c2418             lea ecx, [esp + 0x18]
// 00806d02  51                   push ecx
// 00806d03  8d4e54               lea ecx, [esi + 0x54]
// 00806d06  ff1544cf9800         call dword ptr [0x98cf44]
// 00806d0c  8bd8                 mov ebx, eax
// 00806d0e  8d4c242c             lea ecx, [esp + 0x2c]
// 00806d12  c644242401           mov byte ptr [esp + 0x24], 1
// 00806d17  ff1580de9800         call dword ptr [0x98de80]
// 00806d1d  50                   push eax
// 00806d1e  8bcb                 mov ecx, ebx
// 00806d20  ff1584de9800         call dword ptr [0x98de84]
// 00806d26  85c0                 test eax, eax
// 00806d28  8d4c2414             lea ecx, [esp + 0x14]
// 00806d2c  0f95c3               setne bl
// 00806d2f  c644242400           mov byte ptr [esp + 0x24], 0
// 00806d34  ff15c0de9800         call dword ptr [0x98dec0]
// 00806d3a  84db                 test bl, bl
// 00806d3c  741f                 je 0x806d5d
// 00806d3e  6a01                 push 1
// 00806d40  55                   push ebp
// 00806d41  8d4f2c               lea ecx, [edi + 0x2c]
// 00806d44  e837650200           call 0x82d280
// 00806d49  8b16                 mov edx, dword ptr [esi]
// 00806d4b  8b4268               mov eax, dword ptr [edx + 0x68]
// 00806d4e  8bce                 mov ecx, esi
// 00806d50  ffd0                 call eax
// 00806d52  8b16                 mov edx, dword ptr [esi]
// 00806d54  8b4204               mov eax, dword ptr [edx + 4]
// 00806d57  6a01                 push 1
// 00806d59  8bce                 mov ecx, esi
// 00806d5b  ffd0                 call eax
// 00806d5d  83ed01               sub ebp, 1
// 00806d60  0f897affffff         jns 0x806ce0
// 00806d66  8d4c242c             lea ecx, [esp + 0x2c]
// 00806d6a  ff15c0de9800         call dword ptr [0x98dec0]
// 00806d70  e916ffffff           jmp 0x806c8b
// 00806d75  e892cdfeff           call 0x7f3b0c
// 00806d7a  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 00806d7e  0f84fffeffff         je 0x806c83
// 00806d84  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00806d88  8b11                 mov edx, dword ptr [ecx]
// 00806d8a  8b82c8010000         mov eax, dword ptr [edx + 0x1c8]
// 00806d90  53                   push ebx
// 00806d91  ffd0                 call eax
// 00806d93  e9f3feffff           jmp 0x806c8b
// copied from an identical function in another client (function ?OnKeyboardTipChar@CXTPCommandBar@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBar.cpp