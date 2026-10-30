// roc 2009-12 008609a0  unit: CXTPToolTipContextToolTip  size: 837 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008609a0
//
// 008609a0  6aff                 push -1
// 008609a2  6821e89500           push 0x95e821
// 008609a7  64a100000000         mov eax, dword ptr fs:[0]
// 008609ad  50                   push eax
// 008609ae  83ec44               sub esp, 0x44
// 008609b1  53                   push ebx
// 008609b2  55                   push ebp
// 008609b3  56                   push esi
// 008609b4  57                   push edi
// 008609b5  a10052b600           mov eax, dword ptr [0xb65200]
// 008609ba  33c4                 xor eax, esp
// 008609bc  50                   push eax
// 008609bd  8d442458             lea eax, [esp + 0x58]
// 008609c1  64a300000000         mov dword ptr fs:[0], eax
// 008609c7  8bf1                 mov esi, ecx
// 008609c9  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 008609cd  57                   push edi
// 008609ce  8d4c2420             lea ecx, [esp + 0x20]
// 008609d2  ff1594de9800         call dword ptr [0x98de94]
// 008609d8  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008609db  8b5048               mov edx, dword ptr [eax + 0x48]
// 008609de  8b684c               mov ebp, dword ptr [eax + 0x4c]
// 008609e1  8b4844               mov ecx, dword ptr [eax + 0x44]
// 008609e4  8b4050               mov eax, dword ptr [eax + 0x50]
// 008609e7  014c2470             add dword ptr [esp + 0x70], ecx
// 008609eb  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 008609ef  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008609f3  8344247003           add dword ptr [esp + 0x70], 3
// 008609f8  03da                 add ebx, edx
// 008609fa  8b542478             mov edx, dword ptr [esp + 0x78]
// 008609fe  2bd5                 sub edx, ebp
// 00860a00  2bc8                 sub ecx, eax
// 00860a02  8b4720               mov eax, dword ptr [edi + 0x20]
// 00860a05  83c303               add ebx, 3
// 00860a08  83ea03               sub edx, 3
// 00860a0b  83e903               sub ecx, 3
// 00860a0e  33ed                 xor ebp, ebp
// 00860a10  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00860a18  895c2474             mov dword ptr [esp + 0x74], ebx
// 00860a1c  89542478             mov dword ptr [esp + 0x78], edx
// 00860a20  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00860a24  c744241800080000     mov dword ptr [esp + 0x18], 0x800
// 00860a2c  3bc5                 cmp eax, ebp
// 00860a2e  0f84e1000000         je 0x860b15
// 00860a34  6aec                 push -0x14
// 00860a36  50                   push eax
// 00860a37  ff15d8c99800         call dword ptr [0x98c9d8]
// 00860a3d  a900004000           test eax, 0x400000
// 00860a42  0f84cd000000         je 0x860b15
// 00860a48  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 00860a50  c744241802080200     mov dword ptr [esp + 0x18], 0x20802
// 00860a58  8b442478             mov eax, dword ptr [esp + 0x78]
// 00860a5c  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00860a60  8b542470             mov edx, dword ptr [esp + 0x70]
// 00860a64  83c0fe               add eax, -2
// 00860a67  83c102               add ecx, 2
// 00860a6a  83c202               add edx, 2
// 00860a6d  33db                 xor ebx, ebx
// 00860a6f  39ae2c010000         cmp dword ptr [esi + 0x12c], ebp
// 00860a75  89442450             mov dword ptr [esp + 0x50], eax
// 00860a79  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00860a7d  0f95c3               setne bl
// 00860a80  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00860a84  8dbe28010000         lea edi, [esi + 0x128]
// 00860a8a  8bcf                 mov ecx, edi
// 00860a8c  89542448             mov dword ptr [esp + 0x48], edx
// 00860a90  89442454             mov dword ptr [esp + 0x54], eax
// 00860a94  895c2424             mov dword ptr [esp + 0x24], ebx
// 00860a98  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00860a9e  33c9                 xor ecx, ecx
// 00860aa0  84c0                 test al, al
// 00860aa2  0f94c1               sete cl
// 00860aa5  3bdd                 cmp ebx, ebp
// 00860aa7  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00860aab  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00860ab3  896c2438             mov dword ptr [esp + 0x38], ebp
// 00860ab7  894c2414             mov dword ptr [esp + 0x14], ecx
// 00860abb  0f8492000000         je 0x860b53
// 00860ac1  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00860ac7  e8a44dc7ff           call 0x4d5870
// 00860acc  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00860ad2  8be8                 mov ebp, eax
// 00860ad4  e8a7d1feff           call 0x84dc80
// 00860ad9  33c9                 xor ecx, ecx
// 00860adb  83fd10               cmp ebp, 0x10
// 00860ade  0f9ec1               setle cl
// 00860ae1  89442428             mov dword ptr [esp + 0x28], eax
// 00860ae5  89442438             mov dword ptr [esp + 0x38], eax
// 00860ae9  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00860aed  894c2420             mov dword ptr [esp + 0x20], ecx
// 00860af1  85c9                 test ecx, ecx
// 00860af3  745e                 je 0x860b53
// 00860af5  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 00860af9  85ed                 test ebp, ebp
// 00860afb  7421                 je 0x860b1e
// 00860afd  8b542478             mov edx, dword ptr [esp + 0x78]
// 00860b01  2bd0                 sub edx, eax
// 00860b03  8b442474             mov eax, dword ptr [esp + 0x74]
// 00860b07  89442444             mov dword ptr [esp + 0x44], eax
// 00860b0b  89542440             mov dword ptr [esp + 0x40], edx
// 00860b0f  8d442440             lea eax, [esp + 0x40]
// 00860b13  eb0d                 jmp 0x860b22
// 00860b15  896c246c             mov dword ptr [esp + 0x6c], ebp
// 00860b19  e93affffff           jmp 0x860a58
// 00860b1e  8d442470             lea eax, [esp + 0x70]
// 00860b22  8b4804               mov ecx, dword ptr [eax + 4]
// 00860b25  8b10                 mov edx, dword ptr [eax]
// 00860b27  51                   push ecx
// 00860b28  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00860b2e  52                   push edx
// 00860b2f  53                   push ebx
// 00860b30  e88b05fbff           call 0x8110c0
// 00860b35  85ed                 test ebp, ebp
// 00860b37  0f84b4000000         je 0x860bf1
// 00860b3d  837c241400           cmp dword ptr [esp + 0x14], 0
// 00860b42  0f849a000000         je 0x860be2
// 00860b48  83c8ff               or eax, 0xffffffff
// 00860b4b  2b442428             sub eax, dword ptr [esp + 0x28]
// 00860b4f  01442450             add dword ptr [esp + 0x50], eax
// 00860b53  837c241400           cmp dword ptr [esp + 0x14], 0
// 00860b58  0f84d5000000         je 0x860c33
// 00860b5e  8b566c               mov edx, dword ptr [esi + 0x6c]
// 00860b61  81c2a0000000         add edx, 0xa0
// 00860b67  52                   push edx
// 00860b68  53                   push ebx
// 00860b69  8d4c2430             lea ecx, [esp + 0x30]
// 00860b6d  e8eeaafeff           call 0x84b660
// 00860b72  8b442418             mov eax, dword ptr [esp + 0x18]
// 00860b76  8b2b                 mov ebp, dword ptr [ebx]
// 00860b78  83c820               or eax, 0x20
// 00860b7b  50                   push eax
// 00860b7c  8d4c244c             lea ecx, [esp + 0x4c]
// 00860b80  51                   push ecx
// 00860b81  8bcf                 mov ecx, edi
// 00860b83  c644246801           mov byte ptr [esp + 0x68], 1
// 00860b88  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00860b8e  50                   push eax
// 00860b8f  8bcf                 mov ecx, edi
// 00860b91  ff1580de9800         call dword ptr [0x98de80]
// 00860b97  8b5570               mov edx, dword ptr [ebp + 0x70]
// 00860b9a  50                   push eax
// 00860b9b  8bcb                 mov ecx, ebx
// 00860b9d  ffd2                 call edx
// 00860b9f  8d442440             lea eax, [esp + 0x40]
// 00860ba3  50                   push eax
// 00860ba4  8bcf                 mov ecx, edi
// 00860ba6  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00860bac  50                   push eax
// 00860bad  8bcf                 mov ecx, edi
// 00860baf  ff1580de9800         call dword ptr [0x98de80]
// 00860bb5  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00860bb8  50                   push eax
// 00860bb9  51                   push ecx
// 00860bba  ff156cb19800         call dword ptr [0x98b16c]
// 00860bc0  8b442474             mov eax, dword ptr [esp + 0x74]
// 00860bc4  03442444             add eax, dword ptr [esp + 0x44]
// 00860bc8  83c00c               add eax, 0xc
// 00860bcb  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00860bd0  89442474             mov dword ptr [esp + 0x74], eax
// 00860bd4  7445                 je 0x860c1b
// 00860bd6  834424700f           add dword ptr [esp + 0x70], 0xf
// 00860bdb  836c24780a           sub dword ptr [esp + 0x78], 0xa
// 00860be0  eb43                 jmp 0x860c25
// 00860be2  b9fdffffff           mov ecx, 0xfffffffd
// 00860be7  2b4c2428             sub ecx, dword ptr [esp + 0x28]
// 00860beb  014c2478             add dword ptr [esp + 0x78], ecx
// 00860bef  eb42                 jmp 0x860c33
// 00860bf1  837c241400           cmp dword ptr [esp + 0x14], 0
// 00860bf6  8b442428             mov eax, dword ptr [esp + 0x28]
// 00860bfa  7411                 je 0x860c0d
// 00860bfc  8b542448             mov edx, dword ptr [esp + 0x48]
// 00860c00  8d4c0201             lea ecx, [edx + eax + 1]
// 00860c04  894c2448             mov dword ptr [esp + 0x48], ecx
// 00860c08  e946ffffff           jmp 0x860b53
// 00860c0d  8b542470             mov edx, dword ptr [esp + 0x70]
// 00860c11  8d4c0203             lea ecx, [edx + eax + 3]
// 00860c15  894c2470             mov dword ptr [esp + 0x70], ecx
// 00860c19  eb18                 jmp 0x860c33
// 00860c1b  834424700a           add dword ptr [esp + 0x70], 0xa
// 00860c20  836c24780f           sub dword ptr [esp + 0x78], 0xf
// 00860c25  8d4c2428             lea ecx, [esp + 0x28]
// 00860c29  c644246000           mov byte ptr [esp + 0x60], 0
// 00860c2e  e8adaafeff           call 0x84b6e0
// 00860c33  837c242400           cmp dword ptr [esp + 0x24], 0
// 00860c38  745f                 je 0x860c99
// 00860c3a  837c242000           cmp dword ptr [esp + 0x20], 0
// 00860c3f  7558                 jne 0x860c99
// 00860c41  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 00860c45  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00860c49  85ed                 test ebp, ebp
// 00860c4b  7418                 je 0x860c65
// 00860c4d  8b442478             mov eax, dword ptr [esp + 0x78]
// 00860c51  8b542474             mov edx, dword ptr [esp + 0x74]
// 00860c55  2bc7                 sub eax, edi
// 00860c57  89442440             mov dword ptr [esp + 0x40], eax
// 00860c5b  89542444             mov dword ptr [esp + 0x44], edx
// 00860c5f  8d442440             lea eax, [esp + 0x40]
// 00860c63  eb04                 jmp 0x860c69
// 00860c65  8d442470             lea eax, [esp + 0x70]
// 00860c69  8b4804               mov ecx, dword ptr [eax + 4]
// 00860c6c  8b10                 mov edx, dword ptr [eax]
// 00860c6e  51                   push ecx
// 00860c6f  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00860c75  52                   push edx
// 00860c76  53                   push ebx
// 00860c77  e84404fbff           call 0x8110c0
// 00860c7c  85ed                 test ebp, ebp
// 00860c7e  740d                 je 0x860c8d
// 00860c80  b8fbffffff           mov eax, 0xfffffffb
// 00860c85  2bc7                 sub eax, edi
// 00860c87  01442478             add dword ptr [esp + 0x78], eax
// 00860c8b  eb0c                 jmp 0x860c99
// 00860c8d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00860c91  8d543905             lea edx, [ecx + edi + 5]
// 00860c95  89542470             mov dword ptr [esp + 0x70], edx
// 00860c99  8b442418             mov eax, dword ptr [esp + 0x18]
// 00860c9d  8b33                 mov esi, dword ptr [ebx]
// 00860c9f  83c810               or eax, 0x10
// 00860ca2  50                   push eax
// 00860ca3  8d442474             lea eax, [esp + 0x74]
// 00860ca7  50                   push eax
// 00860ca8  8d4c2424             lea ecx, [esp + 0x24]
// 00860cac  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00860cb2  50                   push eax
// 00860cb3  8d4c2428             lea ecx, [esp + 0x28]
// 00860cb7  ff1580de9800         call dword ptr [0x98de80]
// 00860cbd  8b5670               mov edx, dword ptr [esi + 0x70]
// 00860cc0  50                   push eax
// 00860cc1  8bcb                 mov ecx, ebx
// 00860cc3  ffd2                 call edx
// 00860cc5  8d4c241c             lea ecx, [esp + 0x1c]
// 00860cc9  ff15c0de9800         call dword ptr [0x98dec0]
// 00860ccf  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00860cd3  64890d00000000       mov dword ptr fs:[0], ecx
// 00860cda  59                   pop ecx
// 00860cdb  5f                   pop edi
// 00860cdc  5e                   pop esi
// 00860cdd  5d                   pop ebp
// 00860cde  5b                   pop ebx
// 00860cdf  83c450               add esp, 0x50
// 00860ce2  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawEntry@CXTPToolTipContextToolTip@@MAEXPAVCDC@@PAUTOOLITEM@1@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp