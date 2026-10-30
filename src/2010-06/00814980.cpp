// roc 2010-06 00814980  unit: CXTPToolTipContextToolTip  size: 837 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00814980
//
// 00814980  6aff                 push -1
// 00814982  6831479b00           push 0x9b4731
// 00814987  64a100000000         mov eax, dword ptr fs:[0]
// 0081498d  50                   push eax
// 0081498e  83ec44               sub esp, 0x44
// 00814991  53                   push ebx
// 00814992  55                   push ebp
// 00814993  56                   push esi
// 00814994  57                   push edi
// 00814995  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0081499a  33c4                 xor eax, esp
// 0081499c  50                   push eax
// 0081499d  8d442458             lea eax, [esp + 0x58]
// 008149a1  64a300000000         mov dword ptr fs:[0], eax
// 008149a7  8bf1                 mov esi, ecx
// 008149a9  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 008149ad  57                   push edi
// 008149ae  8d4c2420             lea ecx, [esp + 0x20]
// 008149b2  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 008149b8  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008149bb  8b5048               mov edx, dword ptr [eax + 0x48]
// 008149be  8b684c               mov ebp, dword ptr [eax + 0x4c]
// 008149c1  8b4844               mov ecx, dword ptr [eax + 0x44]
// 008149c4  8b4050               mov eax, dword ptr [eax + 0x50]
// 008149c7  014c2470             add dword ptr [esp + 0x70], ecx
// 008149cb  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 008149cf  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008149d3  8344247003           add dword ptr [esp + 0x70], 3
// 008149d8  03da                 add ebx, edx
// 008149da  8b542478             mov edx, dword ptr [esp + 0x78]
// 008149de  2bd5                 sub edx, ebp
// 008149e0  2bc8                 sub ecx, eax
// 008149e2  8b4720               mov eax, dword ptr [edi + 0x20]
// 008149e5  83c303               add ebx, 3
// 008149e8  83ea03               sub edx, 3
// 008149eb  83e903               sub ecx, 3
// 008149ee  33ed                 xor ebp, ebp
// 008149f0  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008149f8  895c2474             mov dword ptr [esp + 0x74], ebx
// 008149fc  89542478             mov dword ptr [esp + 0x78], edx
// 00814a00  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00814a04  c744241800080000     mov dword ptr [esp + 0x18], 0x800
// 00814a0c  3bc5                 cmp eax, ebp
// 00814a0e  0f84e1000000         je 0x814af5
// 00814a14  6aec                 push -0x14
// 00814a16  50                   push eax
// 00814a17  ff15fcbb9e00         call dword ptr [0x9ebbfc]
// 00814a1d  a900004000           test eax, 0x400000
// 00814a22  0f84cd000000         je 0x814af5
// 00814a28  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 00814a30  c744241802080200     mov dword ptr [esp + 0x18], 0x20802
// 00814a38  8b442478             mov eax, dword ptr [esp + 0x78]
// 00814a3c  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00814a40  8b542470             mov edx, dword ptr [esp + 0x70]
// 00814a44  83c0fe               add eax, -2
// 00814a47  83c102               add ecx, 2
// 00814a4a  83c202               add edx, 2
// 00814a4d  33db                 xor ebx, ebx
// 00814a4f  39ae2c010000         cmp dword ptr [esi + 0x12c], ebp
// 00814a55  89442450             mov dword ptr [esp + 0x50], eax
// 00814a59  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00814a5d  0f95c3               setne bl
// 00814a60  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00814a64  8dbe28010000         lea edi, [esi + 0x128]
// 00814a6a  8bcf                 mov ecx, edi
// 00814a6c  89542448             mov dword ptr [esp + 0x48], edx
// 00814a70  89442454             mov dword ptr [esp + 0x54], eax
// 00814a74  895c2424             mov dword ptr [esp + 0x24], ebx
// 00814a78  ff15eccd9e00         call dword ptr [0x9ecdec]
// 00814a7e  33c9                 xor ecx, ecx
// 00814a80  84c0                 test al, al
// 00814a82  0f94c1               sete cl
// 00814a85  3bdd                 cmp ebx, ebp
// 00814a87  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00814a8b  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00814a93  896c2438             mov dword ptr [esp + 0x38], ebp
// 00814a97  894c2414             mov dword ptr [esp + 0x14], ecx
// 00814a9b  0f8492000000         je 0x814b33
// 00814aa1  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00814aa7  e8a440faff           call 0x7b8b50
// 00814aac  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00814ab2  8be8                 mov ebp, eax
// 00814ab4  e8e796fbff           call 0x7ce1a0
// 00814ab9  33c9                 xor ecx, ecx
// 00814abb  83fd10               cmp ebp, 0x10
// 00814abe  0f9ec1               setle cl
// 00814ac1  89442428             mov dword ptr [esp + 0x28], eax
// 00814ac5  89442438             mov dword ptr [esp + 0x38], eax
// 00814ac9  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00814acd  894c2420             mov dword ptr [esp + 0x20], ecx
// 00814ad1  85c9                 test ecx, ecx
// 00814ad3  745e                 je 0x814b33
// 00814ad5  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 00814ad9  85ed                 test ebp, ebp
// 00814adb  7421                 je 0x814afe
// 00814add  8b542478             mov edx, dword ptr [esp + 0x78]
// 00814ae1  2bd0                 sub edx, eax
// 00814ae3  8b442474             mov eax, dword ptr [esp + 0x74]
// 00814ae7  89442444             mov dword ptr [esp + 0x44], eax
// 00814aeb  89542440             mov dword ptr [esp + 0x40], edx
// 00814aef  8d442440             lea eax, [esp + 0x40]
// 00814af3  eb0d                 jmp 0x814b02
// 00814af5  896c246c             mov dword ptr [esp + 0x6c], ebp
// 00814af9  e93affffff           jmp 0x814a38
// 00814afe  8d442470             lea eax, [esp + 0x70]
// 00814b02  8b4804               mov ecx, dword ptr [eax + 4]
// 00814b05  8b10                 mov edx, dword ptr [eax]
// 00814b07  51                   push ecx
// 00814b08  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00814b0e  52                   push edx
// 00814b0f  53                   push ebx
// 00814b10  e84b06fbff           call 0x7c5160
// 00814b15  85ed                 test ebp, ebp
// 00814b17  0f84b4000000         je 0x814bd1
// 00814b1d  837c241400           cmp dword ptr [esp + 0x14], 0
// 00814b22  0f849a000000         je 0x814bc2
// 00814b28  83c8ff               or eax, 0xffffffff
// 00814b2b  2b442428             sub eax, dword ptr [esp + 0x28]
// 00814b2f  01442450             add dword ptr [esp + 0x50], eax
// 00814b33  837c241400           cmp dword ptr [esp + 0x14], 0
// 00814b38  0f84d5000000         je 0x814c13
// 00814b3e  8b566c               mov edx, dword ptr [esi + 0x6c]
// 00814b41  81c2a0000000         add edx, 0xa0
// 00814b47  52                   push edx
// 00814b48  53                   push ebx
// 00814b49  8d4c2430             lea ecx, [esp + 0x30]
// 00814b4d  e84eabfeff           call 0x7ff6a0
// 00814b52  8b442418             mov eax, dword ptr [esp + 0x18]
// 00814b56  8b2b                 mov ebp, dword ptr [ebx]
// 00814b58  83c820               or eax, 0x20
// 00814b5b  50                   push eax
// 00814b5c  8d4c244c             lea ecx, [esp + 0x4c]
// 00814b60  51                   push ecx
// 00814b61  8bcf                 mov ecx, edi
// 00814b63  c644246801           mov byte ptr [esp + 0x68], 1
// 00814b68  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00814b6e  50                   push eax
// 00814b6f  8bcf                 mov ecx, edi
// 00814b71  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00814b77  8b5570               mov edx, dword ptr [ebp + 0x70]
// 00814b7a  50                   push eax
// 00814b7b  8bcb                 mov ecx, ebx
// 00814b7d  ffd2                 call edx
// 00814b7f  8d442440             lea eax, [esp + 0x40]
// 00814b83  50                   push eax
// 00814b84  8bcf                 mov ecx, edi
// 00814b86  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00814b8c  50                   push eax
// 00814b8d  8bcf                 mov ecx, edi
// 00814b8f  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00814b95  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00814b98  50                   push eax
// 00814b99  51                   push ecx
// 00814b9a  ff1594a19e00         call dword ptr [0x9ea194]
// 00814ba0  8b442474             mov eax, dword ptr [esp + 0x74]
// 00814ba4  03442444             add eax, dword ptr [esp + 0x44]
// 00814ba8  83c00c               add eax, 0xc
// 00814bab  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00814bb0  89442474             mov dword ptr [esp + 0x74], eax
// 00814bb4  7445                 je 0x814bfb
// 00814bb6  834424700f           add dword ptr [esp + 0x70], 0xf
// 00814bbb  836c24780a           sub dword ptr [esp + 0x78], 0xa
// 00814bc0  eb43                 jmp 0x814c05
// 00814bc2  b9fdffffff           mov ecx, 0xfffffffd
// 00814bc7  2b4c2428             sub ecx, dword ptr [esp + 0x28]
// 00814bcb  014c2478             add dword ptr [esp + 0x78], ecx
// 00814bcf  eb42                 jmp 0x814c13
// 00814bd1  837c241400           cmp dword ptr [esp + 0x14], 0
// 00814bd6  8b442428             mov eax, dword ptr [esp + 0x28]
// 00814bda  7411                 je 0x814bed
// 00814bdc  8b542448             mov edx, dword ptr [esp + 0x48]
// 00814be0  8d4c0201             lea ecx, [edx + eax + 1]
// 00814be4  894c2448             mov dword ptr [esp + 0x48], ecx
// 00814be8  e946ffffff           jmp 0x814b33
// 00814bed  8b542470             mov edx, dword ptr [esp + 0x70]
// 00814bf1  8d4c0203             lea ecx, [edx + eax + 3]
// 00814bf5  894c2470             mov dword ptr [esp + 0x70], ecx
// 00814bf9  eb18                 jmp 0x814c13
// 00814bfb  834424700a           add dword ptr [esp + 0x70], 0xa
// 00814c00  836c24780f           sub dword ptr [esp + 0x78], 0xf
// 00814c05  8d4c2428             lea ecx, [esp + 0x28]
// 00814c09  c644246000           mov byte ptr [esp + 0x60], 0
// 00814c0e  e80dabfeff           call 0x7ff720
// 00814c13  837c242400           cmp dword ptr [esp + 0x24], 0
// 00814c18  745f                 je 0x814c79
// 00814c1a  837c242000           cmp dword ptr [esp + 0x20], 0
// 00814c1f  7558                 jne 0x814c79
// 00814c21  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 00814c25  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00814c29  85ed                 test ebp, ebp
// 00814c2b  7418                 je 0x814c45
// 00814c2d  8b442478             mov eax, dword ptr [esp + 0x78]
// 00814c31  8b542474             mov edx, dword ptr [esp + 0x74]
// 00814c35  2bc7                 sub eax, edi
// 00814c37  89442440             mov dword ptr [esp + 0x40], eax
// 00814c3b  89542444             mov dword ptr [esp + 0x44], edx
// 00814c3f  8d442440             lea eax, [esp + 0x40]
// 00814c43  eb04                 jmp 0x814c49
// 00814c45  8d442470             lea eax, [esp + 0x70]
// 00814c49  8b4804               mov ecx, dword ptr [eax + 4]
// 00814c4c  8b10                 mov edx, dword ptr [eax]
// 00814c4e  51                   push ecx
// 00814c4f  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00814c55  52                   push edx
// 00814c56  53                   push ebx
// 00814c57  e80405fbff           call 0x7c5160
// 00814c5c  85ed                 test ebp, ebp
// 00814c5e  740d                 je 0x814c6d
// 00814c60  b8fbffffff           mov eax, 0xfffffffb
// 00814c65  2bc7                 sub eax, edi
// 00814c67  01442478             add dword ptr [esp + 0x78], eax
// 00814c6b  eb0c                 jmp 0x814c79
// 00814c6d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00814c71  8d543905             lea edx, [ecx + edi + 5]
// 00814c75  89542470             mov dword ptr [esp + 0x70], edx
// 00814c79  8b442418             mov eax, dword ptr [esp + 0x18]
// 00814c7d  8b33                 mov esi, dword ptr [ebx]
// 00814c7f  83c810               or eax, 0x10
// 00814c82  50                   push eax
// 00814c83  8d442474             lea eax, [esp + 0x74]
// 00814c87  50                   push eax
// 00814c88  8d4c2424             lea ecx, [esp + 0x24]
// 00814c8c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00814c92  50                   push eax
// 00814c93  8d4c2428             lea ecx, [esp + 0x28]
// 00814c97  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00814c9d  8b5670               mov edx, dword ptr [esi + 0x70]
// 00814ca0  50                   push eax
// 00814ca1  8bcb                 mov ecx, ebx
// 00814ca3  ffd2                 call edx
// 00814ca5  8d4c241c             lea ecx, [esp + 0x1c]
// 00814ca9  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00814caf  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00814cb3  64890d00000000       mov dword ptr fs:[0], ecx
// 00814cba  59                   pop ecx
// 00814cbb  5f                   pop edi
// 00814cbc  5e                   pop esi
// 00814cbd  5d                   pop ebp
// 00814cbe  5b                   pop ebx
// 00814cbf  83c450               add esp, 0x50
// 00814cc2  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawEntry@CXTPToolTipContextToolTip@@MAEXPAVCDC@@PAUTOOLITEM@1@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp