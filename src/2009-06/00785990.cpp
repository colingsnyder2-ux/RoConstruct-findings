// roc 2009-06 00785990  unit: CXTPToolTipContextToolTip  size: 837 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00785990
//
// 00785990  6aff                 push -1
// 00785992  6871a58700           push 0x87a571
// 00785997  64a100000000         mov eax, dword ptr fs:[0]
// 0078599d  50                   push eax
// 0078599e  83ec44               sub esp, 0x44
// 007859a1  53                   push ebx
// 007859a2  55                   push ebp
// 007859a3  56                   push esi
// 007859a4  57                   push edi
// 007859a5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007859aa  33c4                 xor eax, esp
// 007859ac  50                   push eax
// 007859ad  8d442458             lea eax, [esp + 0x58]
// 007859b1  64a300000000         mov dword ptr fs:[0], eax
// 007859b7  8bf1                 mov esi, ecx
// 007859b9  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 007859bd  57                   push edi
// 007859be  8d4c2420             lea ecx, [esp + 0x20]
// 007859c2  ff15e4fc8900         call dword ptr [0x89fce4]
// 007859c8  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007859cb  8b5048               mov edx, dword ptr [eax + 0x48]
// 007859ce  8b684c               mov ebp, dword ptr [eax + 0x4c]
// 007859d1  8b4844               mov ecx, dword ptr [eax + 0x44]
// 007859d4  8b4050               mov eax, dword ptr [eax + 0x50]
// 007859d7  014c2470             add dword ptr [esp + 0x70], ecx
// 007859db  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 007859df  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007859e3  8344247003           add dword ptr [esp + 0x70], 3
// 007859e8  03da                 add ebx, edx
// 007859ea  8b542478             mov edx, dword ptr [esp + 0x78]
// 007859ee  2bd5                 sub edx, ebp
// 007859f0  2bc8                 sub ecx, eax
// 007859f2  8b4720               mov eax, dword ptr [edi + 0x20]
// 007859f5  83c303               add ebx, 3
// 007859f8  83ea03               sub edx, 3
// 007859fb  83e903               sub ecx, 3
// 007859fe  33ed                 xor ebp, ebp
// 00785a00  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00785a08  895c2474             mov dword ptr [esp + 0x74], ebx
// 00785a0c  89542478             mov dword ptr [esp + 0x78], edx
// 00785a10  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00785a14  c744241800080000     mov dword ptr [esp + 0x18], 0x800
// 00785a1c  3bc5                 cmp eax, ebp
// 00785a1e  0f84e1000000         je 0x785b05
// 00785a24  6aec                 push -0x14
// 00785a26  50                   push eax
// 00785a27  ff1558ed8900         call dword ptr [0x89ed58]
// 00785a2d  a900004000           test eax, 0x400000
// 00785a32  0f84cd000000         je 0x785b05
// 00785a38  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 00785a40  c744241802080200     mov dword ptr [esp + 0x18], 0x20802
// 00785a48  8b442478             mov eax, dword ptr [esp + 0x78]
// 00785a4c  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00785a50  8b542470             mov edx, dword ptr [esp + 0x70]
// 00785a54  83c0fe               add eax, -2
// 00785a57  83c102               add ecx, 2
// 00785a5a  83c202               add edx, 2
// 00785a5d  33db                 xor ebx, ebx
// 00785a5f  39ae2c010000         cmp dword ptr [esi + 0x12c], ebp
// 00785a65  89442450             mov dword ptr [esp + 0x50], eax
// 00785a69  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00785a6d  0f95c3               setne bl
// 00785a70  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00785a74  8dbe28010000         lea edi, [esi + 0x128]
// 00785a7a  8bcf                 mov ecx, edi
// 00785a7c  89542448             mov dword ptr [esp + 0x48], edx
// 00785a80  89442454             mov dword ptr [esp + 0x54], eax
// 00785a84  895c2424             mov dword ptr [esp + 0x24], ebx
// 00785a88  ff155cfb8900         call dword ptr [0x89fb5c]
// 00785a8e  33c9                 xor ecx, ecx
// 00785a90  84c0                 test al, al
// 00785a92  0f94c1               sete cl
// 00785a95  3bdd                 cmp ebx, ebp
// 00785a97  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00785a9b  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00785aa3  896c2438             mov dword ptr [esp + 0x38], ebp
// 00785aa7  894c2414             mov dword ptr [esp + 0x14], ecx
// 00785aab  0f8492000000         je 0x785b43
// 00785ab1  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00785ab7  e8f473fcff           call 0x74ceb0
// 00785abc  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00785ac2  8be8                 mov ebp, eax
// 00785ac4  e857270400           call 0x7c8220
// 00785ac9  33c9                 xor ecx, ecx
// 00785acb  83fd10               cmp ebp, 0x10
// 00785ace  0f9ec1               setle cl
// 00785ad1  89442428             mov dword ptr [esp + 0x28], eax
// 00785ad5  89442438             mov dword ptr [esp + 0x38], eax
// 00785ad9  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00785add  894c2420             mov dword ptr [esp + 0x20], ecx
// 00785ae1  85c9                 test ecx, ecx
// 00785ae3  745e                 je 0x785b43
// 00785ae5  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 00785ae9  85ed                 test ebp, ebp
// 00785aeb  7421                 je 0x785b0e
// 00785aed  8b542478             mov edx, dword ptr [esp + 0x78]
// 00785af1  2bd0                 sub edx, eax
// 00785af3  8b442474             mov eax, dword ptr [esp + 0x74]
// 00785af7  89442444             mov dword ptr [esp + 0x44], eax
// 00785afb  89542440             mov dword ptr [esp + 0x40], edx
// 00785aff  8d442440             lea eax, [esp + 0x40]
// 00785b03  eb0d                 jmp 0x785b12
// 00785b05  896c246c             mov dword ptr [esp + 0x6c], ebp
// 00785b09  e93affffff           jmp 0x785a48
// 00785b0e  8d442470             lea eax, [esp + 0x70]
// 00785b12  8b4804               mov ecx, dword ptr [eax + 4]
// 00785b15  8b10                 mov edx, dword ptr [eax]
// 00785b17  51                   push ecx
// 00785b18  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00785b1e  52                   push edx
// 00785b1f  53                   push ebx
// 00785b20  e8ab44fbff           call 0x739fd0
// 00785b25  85ed                 test ebp, ebp
// 00785b27  0f84b4000000         je 0x785be1
// 00785b2d  837c241400           cmp dword ptr [esp + 0x14], 0
// 00785b32  0f849a000000         je 0x785bd2
// 00785b38  83c8ff               or eax, 0xffffffff
// 00785b3b  2b442428             sub eax, dword ptr [esp + 0x28]
// 00785b3f  01442450             add dword ptr [esp + 0x50], eax
// 00785b43  837c241400           cmp dword ptr [esp + 0x14], 0
// 00785b48  0f84d5000000         je 0x785c23
// 00785b4e  8b566c               mov edx, dword ptr [esi + 0x6c]
// 00785b51  81c2a0000000         add edx, 0xa0
// 00785b57  52                   push edx
// 00785b58  53                   push ebx
// 00785b59  8d4c2430             lea ecx, [esp + 0x30]
// 00785b5d  e8feacfeff           call 0x770860
// 00785b62  8b442418             mov eax, dword ptr [esp + 0x18]
// 00785b66  8b2b                 mov ebp, dword ptr [ebx]
// 00785b68  83c820               or eax, 0x20
// 00785b6b  50                   push eax
// 00785b6c  8d4c244c             lea ecx, [esp + 0x4c]
// 00785b70  51                   push ecx
// 00785b71  8bcf                 mov ecx, edi
// 00785b73  c644246801           mov byte ptr [esp + 0x68], 1
// 00785b78  ff1554fb8900         call dword ptr [0x89fb54]
// 00785b7e  50                   push eax
// 00785b7f  8bcf                 mov ecx, edi
// 00785b81  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00785b87  8b5570               mov edx, dword ptr [ebp + 0x70]
// 00785b8a  50                   push eax
// 00785b8b  8bcb                 mov ecx, ebx
// 00785b8d  ffd2                 call edx
// 00785b8f  8d442440             lea eax, [esp + 0x40]
// 00785b93  50                   push eax
// 00785b94  8bcf                 mov ecx, edi
// 00785b96  ff1554fb8900         call dword ptr [0x89fb54]
// 00785b9c  50                   push eax
// 00785b9d  8bcf                 mov ecx, edi
// 00785b9f  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00785ba5  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00785ba8  50                   push eax
// 00785ba9  51                   push ecx
// 00785baa  ff1550e18900         call dword ptr [0x89e150]
// 00785bb0  8b442474             mov eax, dword ptr [esp + 0x74]
// 00785bb4  03442444             add eax, dword ptr [esp + 0x44]
// 00785bb8  83c00c               add eax, 0xc
// 00785bbb  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00785bc0  89442474             mov dword ptr [esp + 0x74], eax
// 00785bc4  7445                 je 0x785c0b
// 00785bc6  834424700f           add dword ptr [esp + 0x70], 0xf
// 00785bcb  836c24780a           sub dword ptr [esp + 0x78], 0xa
// 00785bd0  eb43                 jmp 0x785c15
// 00785bd2  b9fdffffff           mov ecx, 0xfffffffd
// 00785bd7  2b4c2428             sub ecx, dword ptr [esp + 0x28]
// 00785bdb  014c2478             add dword ptr [esp + 0x78], ecx
// 00785bdf  eb42                 jmp 0x785c23
// 00785be1  837c241400           cmp dword ptr [esp + 0x14], 0
// 00785be6  8b442428             mov eax, dword ptr [esp + 0x28]
// 00785bea  7411                 je 0x785bfd
// 00785bec  8b542448             mov edx, dword ptr [esp + 0x48]
// 00785bf0  8d4c0201             lea ecx, [edx + eax + 1]
// 00785bf4  894c2448             mov dword ptr [esp + 0x48], ecx
// 00785bf8  e946ffffff           jmp 0x785b43
// 00785bfd  8b542470             mov edx, dword ptr [esp + 0x70]
// 00785c01  8d4c0203             lea ecx, [edx + eax + 3]
// 00785c05  894c2470             mov dword ptr [esp + 0x70], ecx
// 00785c09  eb18                 jmp 0x785c23
// 00785c0b  834424700a           add dword ptr [esp + 0x70], 0xa
// 00785c10  836c24780f           sub dword ptr [esp + 0x78], 0xf
// 00785c15  8d4c2428             lea ecx, [esp + 0x28]
// 00785c19  c644246000           mov byte ptr [esp + 0x60], 0
// 00785c1e  e8bdacfeff           call 0x7708e0
// 00785c23  837c242400           cmp dword ptr [esp + 0x24], 0
// 00785c28  745f                 je 0x785c89
// 00785c2a  837c242000           cmp dword ptr [esp + 0x20], 0
// 00785c2f  7558                 jne 0x785c89
// 00785c31  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 00785c35  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00785c39  85ed                 test ebp, ebp
// 00785c3b  7418                 je 0x785c55
// 00785c3d  8b442478             mov eax, dword ptr [esp + 0x78]
// 00785c41  8b542474             mov edx, dword ptr [esp + 0x74]
// 00785c45  2bc7                 sub eax, edi
// 00785c47  89442440             mov dword ptr [esp + 0x40], eax
// 00785c4b  89542444             mov dword ptr [esp + 0x44], edx
// 00785c4f  8d442440             lea eax, [esp + 0x40]
// 00785c53  eb04                 jmp 0x785c59
// 00785c55  8d442470             lea eax, [esp + 0x70]
// 00785c59  8b4804               mov ecx, dword ptr [eax + 4]
// 00785c5c  8b10                 mov edx, dword ptr [eax]
// 00785c5e  51                   push ecx
// 00785c5f  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00785c65  52                   push edx
// 00785c66  53                   push ebx
// 00785c67  e86443fbff           call 0x739fd0
// 00785c6c  85ed                 test ebp, ebp
// 00785c6e  740d                 je 0x785c7d
// 00785c70  b8fbffffff           mov eax, 0xfffffffb
// 00785c75  2bc7                 sub eax, edi
// 00785c77  01442478             add dword ptr [esp + 0x78], eax
// 00785c7b  eb0c                 jmp 0x785c89
// 00785c7d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00785c81  8d543905             lea edx, [ecx + edi + 5]
// 00785c85  89542470             mov dword ptr [esp + 0x70], edx
// 00785c89  8b442418             mov eax, dword ptr [esp + 0x18]
// 00785c8d  8b33                 mov esi, dword ptr [ebx]
// 00785c8f  83c810               or eax, 0x10
// 00785c92  50                   push eax
// 00785c93  8d442474             lea eax, [esp + 0x74]
// 00785c97  50                   push eax
// 00785c98  8d4c2424             lea ecx, [esp + 0x24]
// 00785c9c  ff1554fb8900         call dword ptr [0x89fb54]
// 00785ca2  50                   push eax
// 00785ca3  8d4c2428             lea ecx, [esp + 0x28]
// 00785ca7  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00785cad  8b5670               mov edx, dword ptr [esi + 0x70]
// 00785cb0  50                   push eax
// 00785cb1  8bcb                 mov ecx, ebx
// 00785cb3  ffd2                 call edx
// 00785cb5  8d4c241c             lea ecx, [esp + 0x1c]
// 00785cb9  ff1510fd8900         call dword ptr [0x89fd10]
// 00785cbf  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00785cc3  64890d00000000       mov dword ptr fs:[0], ecx
// 00785cca  59                   pop ecx
// 00785ccb  5f                   pop edi
// 00785ccc  5e                   pop esi
// 00785ccd  5d                   pop ebp
// 00785cce  5b                   pop ebx
// 00785ccf  83c450               add esp, 0x50
// 00785cd2  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawEntry@CXTPToolTipContextToolTip@@MAEXPAVCDC@@PAUTOOLITEM@1@VCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp