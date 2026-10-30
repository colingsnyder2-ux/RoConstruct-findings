// roc 2009-12 00892660  unit: CXTPDockBar  size: 445 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892660
//
// 00892660  6aff                 push -1
// 00892662  6898139600           push 0x961398
// 00892667  64a100000000         mov eax, dword ptr fs:[0]
// 0089266d  50                   push eax
// 0089266e  83ec58               sub esp, 0x58
// 00892671  53                   push ebx
// 00892672  55                   push ebp
// 00892673  56                   push esi
// 00892674  57                   push edi
// 00892675  a10052b600           mov eax, dword ptr [0xb65200]
// 0089267a  33c4                 xor eax, esp
// 0089267c  50                   push eax
// 0089267d  8d44246c             lea eax, [esp + 0x6c]
// 00892681  64a300000000         mov dword ptr fs:[0], eax
// 00892687  894c2414             mov dword ptr [esp + 0x14], ecx
// 0089268b  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 0089268f  33db                 xor ebx, ebx
// 00892691  3bf3                 cmp esi, ebx
// 00892693  8d6958               lea ebp, [ecx + 0x58]
// 00892696  8bc5                 mov eax, ebp
// 00892698  0f8cf8000000         jl 0x892796
// 0089269e  8bff                 mov edi, edi
// 008926a0  3b7008               cmp esi, dword ptr [eax + 8]
// 008926a3  0f8ded000000         jge 0x892796
// 008926a9  8b4004               mov eax, dword ptr [eax + 4]
// 008926ac  391cb0               cmp dword ptr [eax + esi*4], ebx
// 008926af  8d04b0               lea eax, [eax + esi*4]
// 008926b2  7410                 je 0x8926c4
// 008926b4  3bf3                 cmp esi, ebx
// 008926b6  7e0c                 jle 0x8926c4
// 008926b8  83ee01               sub esi, 1
// 008926bb  8bc5                 mov eax, ebp
// 008926bd  79e1                 jns 0x8926a0
// 008926bf  e9d2000000           jmp 0x892796
// 008926c4  8d4c2428             lea ecx, [esp + 0x28]
// 008926c8  46                   inc esi
// 008926c9  e892eaffff           call 0x891160
// 008926ce  c7442428e43ba000     mov dword ptr [esp + 0x28], 0xa03be4
// 008926d6  3bf3                 cmp esi, ebx
// 008926d8  895c2474             mov dword ptr [esp + 0x74], ebx
// 008926dc  8bc5                 mov eax, ebp
// 008926de  0f8cb2000000         jl 0x892796
// 008926e4  3b7008               cmp esi, dword ptr [eax + 8]
// 008926e7  0f8da9000000         jge 0x892796
// 008926ed  8b4004               mov eax, dword ptr [eax + 4]
// 008926f0  8d0cb500000000       lea ecx, [esi*4]
// 008926f7  03c1                 add eax, ecx
// 008926f9  3918                 cmp dword ptr [eax], ebx
// 008926fb  0f849a000000         je 0x89279b
// 00892701  3bf3                 cmp esi, ebx
// 00892703  0f8c8d000000         jl 0x892796
// 00892709  3b7508               cmp esi, dword ptr [ebp + 8]
// 0089270c  0f8d84000000         jge 0x892796
// 00892712  8b5504               mov edx, dword ptr [ebp + 4]
// 00892715  8b3c11               mov edi, dword ptr [ecx + edx]
// 00892718  8b07                 mov eax, dword ptr [edi]
// 0089271a  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00892720  8bcf                 mov ecx, edi
// 00892722  46                   inc esi
// 00892723  ffd2                 call edx
// 00892725  85c0                 test eax, eax
// 00892727  7463                 je 0x89278c
// 00892729  57                   push edi
// 0089272a  8d4c241c             lea ecx, [esp + 0x1c]
// 0089272e  e83d8bfbff           call 0x84b270
// 00892733  8b08                 mov ecx, dword ptr [eax]
// 00892735  8b5004               mov edx, dword ptr [eax + 4]
// 00892738  894c2440             mov dword ptr [esp + 0x40], ecx
// 0089273c  8b4808               mov ecx, dword ptr [eax + 8]
// 0089273f  89542444             mov dword ptr [esp + 0x44], edx
// 00892743  8b500c               mov edx, dword ptr [eax + 0xc]
// 00892746  894c2448             mov dword ptr [esp + 0x48], ecx
// 0089274a  8b08                 mov ecx, dword ptr [eax]
// 0089274c  8954244c             mov dword ptr [esp + 0x4c], edx
// 00892750  8b5004               mov edx, dword ptr [eax + 4]
// 00892753  894c2450             mov dword ptr [esp + 0x50], ecx
// 00892757  8b4808               mov ecx, dword ptr [eax + 8]
// 0089275a  89542454             mov dword ptr [esp + 0x54], edx
// 0089275e  8b500c               mov edx, dword ptr [eax + 0xc]
// 00892761  894c2458             mov dword ptr [esp + 0x58], ecx
// 00892765  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00892769  8d44243c             lea eax, [esp + 0x3c]
// 0089276d  50                   push eax
// 0089276e  51                   push ecx
// 0089276f  8d4c2430             lea ecx, [esp + 0x30]
// 00892773  897c2444             mov dword ptr [esp + 0x44], edi
// 00892777  89542464             mov dword ptr [esp + 0x64], edx
// 0089277b  89742468             mov dword ptr [esp + 0x68], esi
// 0089277f  895c246c             mov dword ptr [esp + 0x6c], ebx
// 00892783  895c2470             mov dword ptr [esp + 0x70], ebx
// 00892787  e8c4ecffff           call 0x891450
// 0089278c  3bf3                 cmp esi, ebx
// 0089278e  8bc5                 mov eax, ebp
// 00892790  0f8d4effffff         jge 0x8926e4
// 00892796  e87113f6ff           call 0x7f3b0c
// 0089279b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089279f  f7425400550000       test dword ptr [edx + 0x54], 0x5500
// 008927a6  7409                 je 0x8927b1
// 008927a8  8d4c2428             lea ecx, [esp + 0x28]
// 008927ac  e82fe9ffff           call 0x8910e0
// 008927b1  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008927b5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008927b9  68100e8900           push 0x890e10
// 008927be  6a30                 push 0x30
// 008927c0  55                   push ebp
// 008927c1  57                   push edi
// 008927c2  ff1584b99800         call dword ptr [0x98b984]
// 008927c8  83c410               add esp, 0x10
// 008927cb  33f6                 xor esi, esi
// 008927cd  3beb                 cmp ebp, ebx
// 008927cf  7e25                 jle 0x8927f6
// 008927d1  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 008927d8  85f6                 test esi, esi
// 008927da  7cba                 jl 0x892796
// 008927dc  3bf5                 cmp esi, ebp
// 008927de  7db6                 jge 0x892796
// 008927e0  8b07                 mov eax, dword ptr [edi]
// 008927e2  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008927e5  50                   push eax
// 008927e6  51                   push ecx
// 008927e7  8bcb                 mov ecx, ebx
// 008927e9  e88284fdff           call 0x86ac70
// 008927ee  46                   inc esi
// 008927ef  83c730               add edi, 0x30
// 008927f2  3bf5                 cmp esi, ebp
// 008927f4  7ce2                 jl 0x8927d8
// 008927f6  8d4c2428             lea ecx, [esp + 0x28]
// 008927fa  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 00892802  e879e9ffff           call 0x891180
// 00892807  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0089280b  64890d00000000       mov dword ptr fs:[0], ecx
// 00892812  59                   pop ecx
// 00892813  5f                   pop edi
// 00892814  5e                   pop esi
// 00892815  5d                   pop ebp
// 00892816  5b                   pop ebx
// 00892817  83c464               add esp, 0x64
// 0089281a  c20800               ret 8
// copied from an identical function in another client (function ?GetVisibleToolbars@CXTPDockBar@@IAEXHAAV?$CArray@PAVCXTPToolBar@@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp