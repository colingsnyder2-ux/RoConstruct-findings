// roc 2011-06 0086d560  unit: CXTPStatusBarPane  size: 555 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086d560
//
// 0086d560  6aff                 push -1
// 0086d562  68a874a000           push 0xa074a8
// 0086d567  64a100000000         mov eax, dword ptr fs:[0]
// 0086d56d  50                   push eax
// 0086d56e  83ec38               sub esp, 0x38
// 0086d571  53                   push ebx
// 0086d572  55                   push ebp
// 0086d573  56                   push esi
// 0086d574  57                   push edi
// 0086d575  a12058c900           mov eax, dword ptr [0xc95820]
// 0086d57a  33c4                 xor eax, esp
// 0086d57c  50                   push eax
// 0086d57d  8d44244c             lea eax, [esp + 0x4c]
// 0086d581  64a300000000         mov dword ptr fs:[0], eax
// 0086d587  8bf1                 mov esi, ecx
// 0086d589  85f6                 test esi, esi
// 0086d58b  0f84df010000         je 0x86d770
// 0086d591  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086d594  85c0                 test eax, eax
// 0086d596  0f84d4010000         je 0x86d770
// 0086d59c  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 0086d5a1  0f8485010000         je 0x86d72c
// 0086d5a7  8d4c2428             lea ecx, [esp + 0x28]
// 0086d5ab  51                   push ecx
// 0086d5ac  50                   push eax
// 0086d5ad  ff155c1ca400         call dword ptr [0xa41c5c]
// 0086d5b3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0086d5b7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0086d5bb  f7d8                 neg eax
// 0086d5bd  50                   push eax
// 0086d5be  f7d9                 neg ecx
// 0086d5c0  51                   push ecx
// 0086d5c1  8d542430             lea edx, [esp + 0x30]
// 0086d5c5  52                   push edx
// 0086d5c6  ff15601ca400         call dword ptr [0xa41c60]
// 0086d5cc  8b06                 mov eax, dword ptr [esi]
// 0086d5ce  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0086d5d4  6a01                 push 1
// 0086d5d6  8d4c242c             lea ecx, [esp + 0x2c]
// 0086d5da  51                   push ecx
// 0086d5db  8bce                 mov ecx, esi
// 0086d5dd  ffd2                 call edx
// 0086d5df  8b06                 mov eax, dword ptr [esi]
// 0086d5e1  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0086d5e7  8d4c241c             lea ecx, [esp + 0x1c]
// 0086d5eb  51                   push ecx
// 0086d5ec  6a00                 push 0
// 0086d5ee  6807040000           push 0x407
// 0086d5f3  8bce                 mov ecx, esi
// 0086d5f5  ffd2                 call edx
// 0086d5f7  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0086d5fb  2b7c2428             sub edi, dword ptr [esp + 0x28]
// 0086d5ff  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0086d605  037c2424             add edi, dword ptr [esp + 0x24]
// 0086d609  33ed                 xor ebp, ebp
// 0086d60b  33db                 xor ebx, ebx
// 0086d60d  33d2                 xor edx, edx
// 0086d60f  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0086d613  895c2418             mov dword ptr [esp + 0x18], ebx
// 0086d617  85c0                 test eax, eax
// 0086d619  7e48                 jle 0x86d663
// 0086d61b  eb03                 jmp 0x86d620
// 0086d61d  8d4900               lea ecx, [ecx]
// 0086d620  52                   push edx
// 0086d621  8bce                 mov ecx, esi
// 0086d623  e838f4ffff           call 0x86ca60
// 0086d628  8bc8                 mov ecx, eax
// 0086d62a  895154               mov dword ptr [ecx + 0x54], edx
// 0086d62d  e8ee42beff           call 0x451920
// 0086d632  85c0                 test eax, eax
// 0086d634  741c                 je 0x86d652
// 0086d636  895958               mov dword ptr [ecx + 0x58], ebx
// 0086d639  43                   inc ebx
// 0086d63a  f7412800000008       test dword ptr [ecx + 0x28], 0x8000000
// 0086d641  7401                 je 0x86d644
// 0086d643  45                   inc ebp
// 0086d644  b8faffffff           mov eax, 0xfffffffa
// 0086d649  2b4124               sub eax, dword ptr [ecx + 0x24]
// 0086d64c  2b442424             sub eax, dword ptr [esp + 0x24]
// 0086d650  03f8                 add edi, eax
// 0086d652  42                   inc edx
// 0086d653  3b96a0000000         cmp edx, dword ptr [esi + 0xa0]
// 0086d659  7cc5                 jl 0x86d620
// 0086d65b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0086d65f  895c2418             mov dword ptr [esp + 0x18], ebx
// 0086d663  8d4c2438             lea ecx, [esp + 0x38]
// 0086d667  e8e4f1ffff           call 0x86c850
// 0086d66c  6aff                 push -1
// 0086d66e  53                   push ebx
// 0086d66f  8d4c2440             lea ecx, [esp + 0x40]
// 0086d673  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0086d67b  e8c014fdff           call 0x83eb40
// 0086d680  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0086d684  33d2                 xor edx, edx
// 0086d686  33db                 xor ebx, ebx
// 0086d688  3996a0000000         cmp dword ptr [esi + 0xa0], edx
// 0086d68e  89542414             mov dword ptr [esp + 0x14], edx
// 0086d692  7e65                 jle 0x86d6f9
// 0086d694  52                   push edx
// 0086d695  8bce                 mov ecx, esi
// 0086d697  e8c4f3ffff           call 0x86ca60
// 0086d69c  8bc8                 mov ecx, eax
// 0086d69e  e87d42beff           call 0x451920
// 0086d6a3  85c0                 test eax, eax
// 0086d6a5  7445                 je 0x86d6ec
// 0086d6a7  f7412800000008       test dword ptr [ecx + 0x28], 0x8000000
// 0086d6ae  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0086d6b1  8d6c2806             lea ebp, [eax + ebp + 6]
// 0086d6b5  7417                 je 0x86d6ce
// 0086d6b7  85ff                 test edi, edi
// 0086d6b9  7e13                 jle 0x86d6ce
// 0086d6bb  8bc7                 mov eax, edi
// 0086d6bd  99                   cdq 
// 0086d6be  f77c245c             idiv dword ptr [esp + 0x5c]
// 0086d6c2  ff4c245c             dec dword ptr [esp + 0x5c]
// 0086d6c6  8b542414             mov edx, dword ptr [esp + 0x14]
// 0086d6ca  03e8                 add ebp, eax
// 0086d6cc  2bf8                 sub edi, eax
// 0086d6ce  85db                 test ebx, ebx
// 0086d6d0  0f8cb0000000         jl 0x86d786
// 0086d6d6  3b5c2440             cmp ebx, dword ptr [esp + 0x40]
// 0086d6da  0f8da6000000         jge 0x86d786
// 0086d6e0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0086d6e4  892c99               mov dword ptr [ecx + ebx*4], ebp
// 0086d6e7  43                   inc ebx
// 0086d6e8  036c2424             add ebp, dword ptr [esp + 0x24]
// 0086d6ec  42                   inc edx
// 0086d6ed  3b96a0000000         cmp edx, dword ptr [esi + 0xa0]
// 0086d6f3  89542414             mov dword ptr [esp + 0x14], edx
// 0086d6f7  7c9b                 jl 0x86d694
// 0086d6f9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0086d6fd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086d701  8b16                 mov edx, dword ptr [esi]
// 0086d703  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 0086d709  50                   push eax
// 0086d70a  51                   push ecx
// 0086d70b  6804040000           push 0x404
// 0086d710  8bce                 mov ecx, esi
// 0086d712  ffd2                 call edx
// 0086d714  8bce                 mov ecx, esi
// 0086d716  e8e5fcffff           call 0x86d400
// 0086d71b  8d4c2438             lea ecx, [esp + 0x38]
// 0086d71f  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0086d727  e844f1ffff           call 0x86c870
// 0086d72c  837c246000           cmp dword ptr [esp + 0x60], 0
// 0086d731  743d                 je 0x86d770
// 0086d733  33ff                 xor edi, edi
// 0086d735  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 0086d73b  7e33                 jle 0x86d770
// 0086d73d  8d4900               lea ecx, [ecx]
// 0086d740  57                   push edi
// 0086d741  8bce                 mov ecx, esi
// 0086d743  e818f3ffff           call 0x86ca60
// 0086d748  8bc8                 mov ecx, eax
// 0086d74a  e8d141beff           call 0x451920
// 0086d74f  85c0                 test eax, eax
// 0086d751  7414                 je 0x86d767
// 0086d753  f6412c01             test byte ptr [ecx + 0x2c], 1
// 0086d757  740e                 je 0x86d767
// 0086d759  6a01                 push 1
// 0086d75b  83c130               add ecx, 0x30
// 0086d75e  51                   push ecx
// 0086d75f  57                   push edi
// 0086d760  8bce                 mov ecx, esi
// 0086d762  e8f9f3ffff           call 0x86cb60
// 0086d767  47                   inc edi
// 0086d768  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 0086d76e  7cd0                 jl 0x86d740
// 0086d770  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0086d774  64890d00000000       mov dword ptr fs:[0], ecx
// 0086d77b  59                   pop ecx
// 0086d77c  5f                   pop edi
// 0086d77d  5e                   pop esi
// 0086d77e  5d                   pop ebp
// 0086d77f  5b                   pop ebx
// 0086d780  83c444               add esp, 0x44
// 0086d783  c20800               ret 8
// 0086d786  e87fcbf9ff           call 0x80a30a
// copied from an identical function in another client (function ?UpdateAllPanes@CXTPStatusBar@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp