// roc 2011-06 008721c0  unit: CXTPToolTipContextToolTip  size: 837 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008721c0
//
// 008721c0  6aff                 push -1
// 008721c2  687178a000           push 0xa07871
// 008721c7  64a100000000         mov eax, dword ptr fs:[0]
// 008721cd  50                   push eax
// 008721ce  83ec44               sub esp, 0x44
// 008721d1  53                   push ebx
// 008721d2  55                   push ebp
// 008721d3  56                   push esi
// 008721d4  57                   push edi
// 008721d5  a12058c900           mov eax, dword ptr [0xc95820]
// 008721da  33c4                 xor eax, esp
// 008721dc  50                   push eax
// 008721dd  8d442458             lea eax, [esp + 0x58]
// 008721e1  64a300000000         mov dword ptr fs:[0], eax
// 008721e7  8bf1                 mov esi, ecx
// 008721e9  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 008721ed  57                   push edi
// 008721ee  8d4c2420             lea ecx, [esp + 0x20]
// 008721f2  ff15e42da400         call dword ptr [0xa42de4]
// 008721f8  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008721fb  8b5048               mov edx, dword ptr [eax + 0x48]
// 008721fe  8b684c               mov ebp, dword ptr [eax + 0x4c]
// 00872201  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00872204  8b4050               mov eax, dword ptr [eax + 0x50]
// 00872207  014c2470             add dword ptr [esp + 0x70], ecx
// 0087220b  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0087220f  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00872213  8344247003           add dword ptr [esp + 0x70], 3
// 00872218  03da                 add ebx, edx
// 0087221a  8b542478             mov edx, dword ptr [esp + 0x78]
// 0087221e  2bd5                 sub edx, ebp
// 00872220  2bc8                 sub ecx, eax
// 00872222  8b4720               mov eax, dword ptr [edi + 0x20]
// 00872225  83c303               add ebx, 3
// 00872228  83ea03               sub edx, 3
// 0087222b  83e903               sub ecx, 3
// 0087222e  33ed                 xor ebp, ebp
// 00872230  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00872238  895c2474             mov dword ptr [esp + 0x74], ebx
// 0087223c  89542478             mov dword ptr [esp + 0x78], edx
// 00872240  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00872244  c744241800080000     mov dword ptr [esp + 0x18], 0x800
// 0087224c  3bc5                 cmp eax, ebp
// 0087224e  0f84e1000000         je 0x872335
// 00872254  6aec                 push -0x14
// 00872256  50                   push eax
// 00872257  ff15981ca400         call dword ptr [0xa41c98]
// 0087225d  a900004000           test eax, 0x400000
// 00872262  0f84cd000000         je 0x872335
// 00872268  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 00872270  c744241802080200     mov dword ptr [esp + 0x18], 0x20802
// 00872278  8b442478             mov eax, dword ptr [esp + 0x78]
// 0087227c  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00872280  8b542470             mov edx, dword ptr [esp + 0x70]
// 00872284  83c0fe               add eax, -2
// 00872287  83c102               add ecx, 2
// 0087228a  83c202               add edx, 2
// 0087228d  33db                 xor ebx, ebx
// 0087228f  39ae2c010000         cmp dword ptr [esi + 0x12c], ebp
// 00872295  89442450             mov dword ptr [esp + 0x50], eax
// 00872299  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 0087229d  0f95c3               setne bl
// 008722a0  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008722a4  8dbe28010000         lea edi, [esi + 0x128]
// 008722aa  8bcf                 mov ecx, edi
// 008722ac  89542448             mov dword ptr [esp + 0x48], edx
// 008722b0  89442454             mov dword ptr [esp + 0x54], eax
// 008722b4  895c2424             mov dword ptr [esp + 0x24], ebx
// 008722b8  ff15b026a400         call dword ptr [0xa426b0]
// 008722be  33c9                 xor ecx, ecx
// 008722c0  84c0                 test al, al
// 008722c2  0f94c1               sete cl
// 008722c5  3bdd                 cmp ebx, ebp
// 008722c7  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008722cb  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008722d3  896c2438             mov dword ptr [esp + 0x38], ebp
// 008722d7  894c2414             mov dword ptr [esp + 0x14], ecx
// 008722db  0f8492000000         je 0x872373
// 008722e1  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 008722e7  e8e41e0300           call 0x8a41d0
// 008722ec  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 008722f2  8be8                 mov ebp, eax
// 008722f4  e89770ffff           call 0x869390
// 008722f9  33c9                 xor ecx, ecx
// 008722fb  83fd10               cmp ebp, 0x10
// 008722fe  0f9ec1               setle cl
// 00872301  89442428             mov dword ptr [esp + 0x28], eax
// 00872305  89442438             mov dword ptr [esp + 0x38], eax
// 00872309  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0087230d  894c2420             mov dword ptr [esp + 0x20], ecx
// 00872311  85c9                 test ecx, ecx
// 00872313  745e                 je 0x872373
// 00872315  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 00872319  85ed                 test ebp, ebp
// 0087231b  7421                 je 0x87233e
// 0087231d  8b542478             mov edx, dword ptr [esp + 0x78]
// 00872321  2bd0                 sub edx, eax
// 00872323  8b442474             mov eax, dword ptr [esp + 0x74]
// 00872327  89442444             mov dword ptr [esp + 0x44], eax
// 0087232b  89542440             mov dword ptr [esp + 0x40], edx
// 0087232f  8d442440             lea eax, [esp + 0x40]
// 00872333  eb0d                 jmp 0x872342
// 00872335  896c246c             mov dword ptr [esp + 0x6c], ebp
// 00872339  e93affffff           jmp 0x872278
// 0087233e  8d442470             lea eax, [esp + 0x70]
// 00872342  8b4804               mov ecx, dword ptr [eax + 4]
// 00872345  8b10                 mov edx, dword ptr [eax]
// 00872347  51                   push ecx
// 00872348  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 0087234e  52                   push edx
// 0087234f  53                   push ebx
// 00872350  e82b49fbff           call 0x826c80
// 00872355  85ed                 test ebp, ebp
// 00872357  0f84b4000000         je 0x872411
// 0087235d  837c241400           cmp dword ptr [esp + 0x14], 0
// 00872362  0f849a000000         je 0x872402
// 00872368  83c8ff               or eax, 0xffffffff
// 0087236b  2b442428             sub eax, dword ptr [esp + 0x28]
// 0087236f  01442450             add dword ptr [esp + 0x50], eax
// 00872373  837c241400           cmp dword ptr [esp + 0x14], 0
// 00872378  0f84d5000000         je 0x872453
// 0087237e  8b566c               mov edx, dword ptr [esi + 0x6c]
// 00872381  81c2a0000000         add edx, 0xa0
// 00872387  52                   push edx
// 00872388  53                   push ebx
// 00872389  8d4c2430             lea ecx, [esp + 0x30]
// 0087238d  e88eadfeff           call 0x85d120
// 00872392  8b442418             mov eax, dword ptr [esp + 0x18]
// 00872396  8b2b                 mov ebp, dword ptr [ebx]
// 00872398  83c820               or eax, 0x20
// 0087239b  50                   push eax
// 0087239c  8d4c244c             lea ecx, [esp + 0x4c]
// 008723a0  51                   push ecx
// 008723a1  8bcf                 mov ecx, edi
// 008723a3  c644246801           mov byte ptr [esp + 0x68], 1
// 008723a8  ff15a826a400         call dword ptr [0xa426a8]
// 008723ae  50                   push eax
// 008723af  8bcf                 mov ecx, edi
// 008723b1  ff15c82da400         call dword ptr [0xa42dc8]
// 008723b7  8b5570               mov edx, dword ptr [ebp + 0x70]
// 008723ba  50                   push eax
// 008723bb  8bcb                 mov ecx, ebx
// 008723bd  ffd2                 call edx
// 008723bf  8d442440             lea eax, [esp + 0x40]
// 008723c3  50                   push eax
// 008723c4  8bcf                 mov ecx, edi
// 008723c6  ff15a826a400         call dword ptr [0xa426a8]
// 008723cc  50                   push eax
// 008723cd  8bcf                 mov ecx, edi
// 008723cf  ff15c82da400         call dword ptr [0xa42dc8]
// 008723d5  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008723d8  50                   push eax
// 008723d9  51                   push ecx
// 008723da  ff153801a400         call dword ptr [0xa40138]
// 008723e0  8b442474             mov eax, dword ptr [esp + 0x74]
// 008723e4  03442444             add eax, dword ptr [esp + 0x44]
// 008723e8  83c00c               add eax, 0xc
// 008723eb  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 008723f0  89442474             mov dword ptr [esp + 0x74], eax
// 008723f4  7445                 je 0x87243b
// 008723f6  834424700f           add dword ptr [esp + 0x70], 0xf
// 008723fb  836c24780a           sub dword ptr [esp + 0x78], 0xa
// 00872400  eb43                 jmp 0x872445
// 00872402  b9fdffffff           mov ecx, 0xfffffffd
// 00872407  2b4c2428             sub ecx, dword ptr [esp + 0x28]
// 0087240b  014c2478             add dword ptr [esp + 0x78], ecx
// 0087240f  eb42                 jmp 0x872453
// 00872411  837c241400           cmp dword ptr [esp + 0x14], 0
// 00872416  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087241a  7411                 je 0x87242d
// 0087241c  8b542448             mov edx, dword ptr [esp + 0x48]
// 00872420  8d4c0201             lea ecx, [edx + eax + 1]
// 00872424  894c2448             mov dword ptr [esp + 0x48], ecx
// 00872428  e946ffffff           jmp 0x872373
// 0087242d  8b542470             mov edx, dword ptr [esp + 0x70]
// 00872431  8d4c0203             lea ecx, [edx + eax + 3]
// 00872435  894c2470             mov dword ptr [esp + 0x70], ecx
// 00872439  eb18                 jmp 0x872453
// 0087243b  834424700a           add dword ptr [esp + 0x70], 0xa
// 00872440  836c24780f           sub dword ptr [esp + 0x78], 0xf
// 00872445  8d4c2428             lea ecx, [esp + 0x28]
// 00872449  c644246000           mov byte ptr [esp + 0x60], 0
// 0087244e  e84dadfeff           call 0x85d1a0
// 00872453  837c242400           cmp dword ptr [esp + 0x24], 0
// 00872458  745f                 je 0x8724b9
// 0087245a  837c242000           cmp dword ptr [esp + 0x20], 0
// 0087245f  7558                 jne 0x8724b9
// 00872461  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 00872465  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00872469  85ed                 test ebp, ebp
// 0087246b  7418                 je 0x872485
// 0087246d  8b442478             mov eax, dword ptr [esp + 0x78]
// 00872471  8b542474             mov edx, dword ptr [esp + 0x74]
// 00872475  2bc7                 sub eax, edi
// 00872477  89442440             mov dword ptr [esp + 0x40], eax
// 0087247b  89542444             mov dword ptr [esp + 0x44], edx
// 0087247f  8d442440             lea eax, [esp + 0x40]
// 00872483  eb04                 jmp 0x872489
// 00872485  8d442470             lea eax, [esp + 0x70]
// 00872489  8b4804               mov ecx, dword ptr [eax + 4]
// 0087248c  8b10                 mov edx, dword ptr [eax]
// 0087248e  51                   push ecx
// 0087248f  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00872495  52                   push edx
// 00872496  53                   push ebx
// 00872497  e8e447fbff           call 0x826c80
// 0087249c  85ed                 test ebp, ebp
// 0087249e  740d                 je 0x8724ad
// 008724a0  b8fbffffff           mov eax, 0xfffffffb
// 008724a5  2bc7                 sub eax, edi
// 008724a7  01442478             add dword ptr [esp + 0x78], eax
// 008724ab  eb0c                 jmp 0x8724b9
// 008724ad  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008724b1  8d543905             lea edx, [ecx + edi + 5]
// 008724b5  89542470             mov dword ptr [esp + 0x70], edx
// 008724b9  8b442418             mov eax, dword ptr [esp + 0x18]
// 008724bd  8b33                 mov esi, dword ptr [ebx]
// 008724bf  83c810               or eax, 0x10
// 008724c2  50                   push eax
// 008724c3  8d442474             lea eax, [esp + 0x74]
// 008724c7  50                   push eax
// 008724c8  8d4c2424             lea ecx, [esp + 0x24]
// 008724cc  ff15a826a400         call dword ptr [0xa426a8]
// 008724d2  50                   push eax
// 008724d3  8d4c2428             lea ecx, [esp + 0x28]
// 008724d7  ff15c82da400         call dword ptr [0xa42dc8]
// 008724dd  8b5670               mov edx, dword ptr [esi + 0x70]
// 008724e0  50                   push eax
// 008724e1  8bcb                 mov ecx, ebx
// 008724e3  ffd2                 call edx
// 008724e5  8d4c241c             lea ecx, [esp + 0x1c]
// 008724e9  ff15082ea400         call dword ptr [0xa42e08]
// 008724ef  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008724f3  64890d00000000       mov dword ptr fs:[0], ecx
// 008724fa  59                   pop ecx
// 008724fb  5f                   pop edi
// 008724fc  5e                   pop esi
// 008724fd  5d                   pop ebp
// 008724fe  5b                   pop ebx
// 008724ff  83c450               add esp, 0x50
// 00872502  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawEntry@CXTPToolTipContextToolTip@@MAEXPAVCDC@@PAUTOOLITEM@1@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp