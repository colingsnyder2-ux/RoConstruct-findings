// roc 2012-06 009ea710  unit: CXTPToolTipContextToolTip  size: 837 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ea710
//
// 009ea710  6aff                 push -1
// 009ea712  683114ae00           push 0xae1431
// 009ea717  64a100000000         mov eax, dword ptr fs:[0]
// 009ea71d  50                   push eax
// 009ea71e  83ec44               sub esp, 0x44
// 009ea721  53                   push ebx
// 009ea722  55                   push ebp
// 009ea723  56                   push esi
// 009ea724  57                   push edi
// 009ea725  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009ea72a  33c4                 xor eax, esp
// 009ea72c  50                   push eax
// 009ea72d  8d442458             lea eax, [esp + 0x58]
// 009ea731  64a300000000         mov dword ptr fs:[0], eax
// 009ea737  8bf1                 mov esi, ecx
// 009ea739  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 009ea73d  57                   push edi
// 009ea73e  8d4c2420             lea ecx, [esp + 0x20]
// 009ea742  ff158047b200         call dword ptr [0xb24780]
// 009ea748  8b466c               mov eax, dword ptr [esi + 0x6c]
// 009ea74b  8b5048               mov edx, dword ptr [eax + 0x48]
// 009ea74e  8b684c               mov ebp, dword ptr [eax + 0x4c]
// 009ea751  8b4844               mov ecx, dword ptr [eax + 0x44]
// 009ea754  8b4050               mov eax, dword ptr [eax + 0x50]
// 009ea757  014c2470             add dword ptr [esp + 0x70], ecx
// 009ea75b  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 009ea75f  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 009ea763  8344247003           add dword ptr [esp + 0x70], 3
// 009ea768  03da                 add ebx, edx
// 009ea76a  8b542478             mov edx, dword ptr [esp + 0x78]
// 009ea76e  2bd5                 sub edx, ebp
// 009ea770  2bc8                 sub ecx, eax
// 009ea772  8b4720               mov eax, dword ptr [edi + 0x20]
// 009ea775  83c303               add ebx, 3
// 009ea778  83ea03               sub edx, 3
// 009ea77b  83e903               sub ecx, 3
// 009ea77e  33ed                 xor ebp, ebp
// 009ea780  c744246000000000     mov dword ptr [esp + 0x60], 0
// 009ea788  895c2474             mov dword ptr [esp + 0x74], ebx
// 009ea78c  89542478             mov dword ptr [esp + 0x78], edx
// 009ea790  894c247c             mov dword ptr [esp + 0x7c], ecx
// 009ea794  c744241800080000     mov dword ptr [esp + 0x18], 0x800
// 009ea79c  3bc5                 cmp eax, ebp
// 009ea79e  0f84e1000000         je 0x9ea885
// 009ea7a4  6aec                 push -0x14
// 009ea7a6  50                   push eax
// 009ea7a7  ff15bc3ab200         call dword ptr [0xb23abc]
// 009ea7ad  a900004000           test eax, 0x400000
// 009ea7b2  0f84cd000000         je 0x9ea885
// 009ea7b8  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 009ea7c0  c744241802080200     mov dword ptr [esp + 0x18], 0x20802
// 009ea7c8  8b442478             mov eax, dword ptr [esp + 0x78]
// 009ea7cc  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 009ea7d0  8b542470             mov edx, dword ptr [esp + 0x70]
// 009ea7d4  83c0fe               add eax, -2
// 009ea7d7  83c102               add ecx, 2
// 009ea7da  83c202               add edx, 2
// 009ea7dd  33db                 xor ebx, ebx
// 009ea7df  39ae2c010000         cmp dword ptr [esi + 0x12c], ebp
// 009ea7e5  89442450             mov dword ptr [esp + 0x50], eax
// 009ea7e9  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 009ea7ed  0f95c3               setne bl
// 009ea7f0  894c244c             mov dword ptr [esp + 0x4c], ecx
// 009ea7f4  8dbe28010000         lea edi, [esi + 0x128]
// 009ea7fa  8bcf                 mov ecx, edi
// 009ea7fc  89542448             mov dword ptr [esp + 0x48], edx
// 009ea800  89442454             mov dword ptr [esp + 0x54], eax
// 009ea804  895c2424             mov dword ptr [esp + 0x24], ebx
// 009ea808  ff156046b200         call dword ptr [0xb24660]
// 009ea80e  33c9                 xor ecx, ecx
// 009ea810  84c0                 test al, al
// 009ea812  0f94c1               sete cl
// 009ea815  3bdd                 cmp ebx, ebp
// 009ea817  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 009ea81b  c744242001000000     mov dword ptr [esp + 0x20], 1
// 009ea823  896c2438             mov dword ptr [esp + 0x38], ebp
// 009ea827  894c2414             mov dword ptr [esp + 0x14], ecx
// 009ea82b  0f8492000000         je 0x9ea8c3
// 009ea831  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 009ea837  e8e4d1faff           call 0x997a20
// 009ea83c  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 009ea842  8be8                 mov ebp, eax
// 009ea844  e8170e0400           call 0xa2b660
// 009ea849  33c9                 xor ecx, ecx
// 009ea84b  83fd10               cmp ebp, 0x10
// 009ea84e  0f9ec1               setle cl
// 009ea851  89442428             mov dword ptr [esp + 0x28], eax
// 009ea855  89442438             mov dword ptr [esp + 0x38], eax
// 009ea859  896c243c             mov dword ptr [esp + 0x3c], ebp
// 009ea85d  894c2420             mov dword ptr [esp + 0x20], ecx
// 009ea861  85c9                 test ecx, ecx
// 009ea863  745e                 je 0x9ea8c3
// 009ea865  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 009ea869  85ed                 test ebp, ebp
// 009ea86b  7421                 je 0x9ea88e
// 009ea86d  8b542478             mov edx, dword ptr [esp + 0x78]
// 009ea871  2bd0                 sub edx, eax
// 009ea873  8b442474             mov eax, dword ptr [esp + 0x74]
// 009ea877  89442444             mov dword ptr [esp + 0x44], eax
// 009ea87b  89542440             mov dword ptr [esp + 0x40], edx
// 009ea87f  8d442440             lea eax, [esp + 0x40]
// 009ea883  eb0d                 jmp 0x9ea892
// 009ea885  896c246c             mov dword ptr [esp + 0x6c], ebp
// 009ea889  e93affffff           jmp 0x9ea7c8
// 009ea88e  8d442470             lea eax, [esp + 0x70]
// 009ea892  8b4804               mov ecx, dword ptr [eax + 4]
// 009ea895  8b10                 mov edx, dword ptr [eax]
// 009ea897  51                   push ecx
// 009ea898  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 009ea89e  52                   push edx
// 009ea89f  53                   push ebx
// 009ea8a0  e80b4afbff           call 0x99f2b0
// 009ea8a5  85ed                 test ebp, ebp
// 009ea8a7  0f84b4000000         je 0x9ea961
// 009ea8ad  837c241400           cmp dword ptr [esp + 0x14], 0
// 009ea8b2  0f849a000000         je 0x9ea952
// 009ea8b8  83c8ff               or eax, 0xffffffff
// 009ea8bb  2b442428             sub eax, dword ptr [esp + 0x28]
// 009ea8bf  01442450             add dword ptr [esp + 0x50], eax
// 009ea8c3  837c241400           cmp dword ptr [esp + 0x14], 0
// 009ea8c8  0f84d5000000         je 0x9ea9a3
// 009ea8ce  8b566c               mov edx, dword ptr [esi + 0x6c]
// 009ea8d1  81c2a0000000         add edx, 0xa0
// 009ea8d7  52                   push edx
// 009ea8d8  53                   push ebx
// 009ea8d9  8d4c2430             lea ecx, [esp + 0x30]
// 009ea8dd  e84eacfeff           call 0x9d5530
// 009ea8e2  8b442418             mov eax, dword ptr [esp + 0x18]
// 009ea8e6  8b2b                 mov ebp, dword ptr [ebx]
// 009ea8e8  83c820               or eax, 0x20
// 009ea8eb  50                   push eax
// 009ea8ec  8d4c244c             lea ecx, [esp + 0x4c]
// 009ea8f0  51                   push ecx
// 009ea8f1  8bcf                 mov ecx, edi
// 009ea8f3  c644246801           mov byte ptr [esp + 0x68], 1
// 009ea8f8  ff155846b200         call dword ptr [0xb24658]
// 009ea8fe  50                   push eax
// 009ea8ff  8bcf                 mov ecx, edi
// 009ea901  ff159847b200         call dword ptr [0xb24798]
// 009ea907  8b5570               mov edx, dword ptr [ebp + 0x70]
// 009ea90a  50                   push eax
// 009ea90b  8bcb                 mov ecx, ebx
// 009ea90d  ffd2                 call edx
// 009ea90f  8d442440             lea eax, [esp + 0x40]
// 009ea913  50                   push eax
// 009ea914  8bcf                 mov ecx, edi
// 009ea916  ff155846b200         call dword ptr [0xb24658]
// 009ea91c  50                   push eax
// 009ea91d  8bcf                 mov ecx, edi
// 009ea91f  ff159847b200         call dword ptr [0xb24798]
// 009ea925  8b4b08               mov ecx, dword ptr [ebx + 8]
// 009ea928  50                   push eax
// 009ea929  51                   push ecx
// 009ea92a  ff154021b200         call dword ptr [0xb22140]
// 009ea930  8b442474             mov eax, dword ptr [esp + 0x74]
// 009ea934  03442444             add eax, dword ptr [esp + 0x44]
// 009ea938  83c00c               add eax, 0xc
// 009ea93b  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 009ea940  89442474             mov dword ptr [esp + 0x74], eax
// 009ea944  7445                 je 0x9ea98b
// 009ea946  834424700f           add dword ptr [esp + 0x70], 0xf
// 009ea94b  836c24780a           sub dword ptr [esp + 0x78], 0xa
// 009ea950  eb43                 jmp 0x9ea995
// 009ea952  b9fdffffff           mov ecx, 0xfffffffd
// 009ea957  2b4c2428             sub ecx, dword ptr [esp + 0x28]
// 009ea95b  014c2478             add dword ptr [esp + 0x78], ecx
// 009ea95f  eb42                 jmp 0x9ea9a3
// 009ea961  837c241400           cmp dword ptr [esp + 0x14], 0
// 009ea966  8b442428             mov eax, dword ptr [esp + 0x28]
// 009ea96a  7411                 je 0x9ea97d
// 009ea96c  8b542448             mov edx, dword ptr [esp + 0x48]
// 009ea970  8d4c0201             lea ecx, [edx + eax + 1]
// 009ea974  894c2448             mov dword ptr [esp + 0x48], ecx
// 009ea978  e946ffffff           jmp 0x9ea8c3
// 009ea97d  8b542470             mov edx, dword ptr [esp + 0x70]
// 009ea981  8d4c0203             lea ecx, [edx + eax + 3]
// 009ea985  894c2470             mov dword ptr [esp + 0x70], ecx
// 009ea989  eb18                 jmp 0x9ea9a3
// 009ea98b  834424700a           add dword ptr [esp + 0x70], 0xa
// 009ea990  836c24780f           sub dword ptr [esp + 0x78], 0xf
// 009ea995  8d4c2428             lea ecx, [esp + 0x28]
// 009ea999  c644246000           mov byte ptr [esp + 0x60], 0
// 009ea99e  e80dacfeff           call 0x9d55b0
// 009ea9a3  837c242400           cmp dword ptr [esp + 0x24], 0
// 009ea9a8  745f                 je 0x9eaa09
// 009ea9aa  837c242000           cmp dword ptr [esp + 0x20], 0
// 009ea9af  7558                 jne 0x9eaa09
// 009ea9b1  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 009ea9b5  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 009ea9b9  85ed                 test ebp, ebp
// 009ea9bb  7418                 je 0x9ea9d5
// 009ea9bd  8b442478             mov eax, dword ptr [esp + 0x78]
// 009ea9c1  8b542474             mov edx, dword ptr [esp + 0x74]
// 009ea9c5  2bc7                 sub eax, edi
// 009ea9c7  89442440             mov dword ptr [esp + 0x40], eax
// 009ea9cb  89542444             mov dword ptr [esp + 0x44], edx
// 009ea9cf  8d442440             lea eax, [esp + 0x40]
// 009ea9d3  eb04                 jmp 0x9ea9d9
// 009ea9d5  8d442470             lea eax, [esp + 0x70]
// 009ea9d9  8b4804               mov ecx, dword ptr [eax + 4]
// 009ea9dc  8b10                 mov edx, dword ptr [eax]
// 009ea9de  51                   push ecx
// 009ea9df  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 009ea9e5  52                   push edx
// 009ea9e6  53                   push ebx
// 009ea9e7  e8c448fbff           call 0x99f2b0
// 009ea9ec  85ed                 test ebp, ebp
// 009ea9ee  740d                 je 0x9ea9fd
// 009ea9f0  b8fbffffff           mov eax, 0xfffffffb
// 009ea9f5  2bc7                 sub eax, edi
// 009ea9f7  01442478             add dword ptr [esp + 0x78], eax
// 009ea9fb  eb0c                 jmp 0x9eaa09
// 009ea9fd  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 009eaa01  8d543905             lea edx, [ecx + edi + 5]
// 009eaa05  89542470             mov dword ptr [esp + 0x70], edx
// 009eaa09  8b442418             mov eax, dword ptr [esp + 0x18]
// 009eaa0d  8b33                 mov esi, dword ptr [ebx]
// 009eaa0f  83c810               or eax, 0x10
// 009eaa12  50                   push eax
// 009eaa13  8d442474             lea eax, [esp + 0x74]
// 009eaa17  50                   push eax
// 009eaa18  8d4c2424             lea ecx, [esp + 0x24]
// 009eaa1c  ff155846b200         call dword ptr [0xb24658]
// 009eaa22  50                   push eax
// 009eaa23  8d4c2428             lea ecx, [esp + 0x28]
// 009eaa27  ff159847b200         call dword ptr [0xb24798]
// 009eaa2d  8b5670               mov edx, dword ptr [esi + 0x70]
// 009eaa30  50                   push eax
// 009eaa31  8bcb                 mov ecx, ebx
// 009eaa33  ffd2                 call edx
// 009eaa35  8d4c241c             lea ecx, [esp + 0x1c]
// 009eaa39  ff15d047b200         call dword ptr [0xb247d0]
// 009eaa3f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009eaa43  64890d00000000       mov dword ptr fs:[0], ecx
// 009eaa4a  59                   pop ecx
// 009eaa4b  5f                   pop edi
// 009eaa4c  5e                   pop esi
// 009eaa4d  5d                   pop ebp
// 009eaa4e  5b                   pop ebx
// 009eaa4f  83c450               add esp, 0x50
// 009eaa52  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawEntry@CXTPToolTipContextToolTip@@MAEXPAVCDC@@PAUTOOLITEM@1@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp