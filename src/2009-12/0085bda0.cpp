// roc 2009-12 0085bda0  unit: CXTPStatusBarPane  size: 555 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085bda0
//
// 0085bda0  6aff                 push -1
// 0085bda2  68c8e39500           push 0x95e3c8
// 0085bda7  64a100000000         mov eax, dword ptr fs:[0]
// 0085bdad  50                   push eax
// 0085bdae  83ec38               sub esp, 0x38
// 0085bdb1  53                   push ebx
// 0085bdb2  55                   push ebp
// 0085bdb3  56                   push esi
// 0085bdb4  57                   push edi
// 0085bdb5  a10052b600           mov eax, dword ptr [0xb65200]
// 0085bdba  33c4                 xor eax, esp
// 0085bdbc  50                   push eax
// 0085bdbd  8d44244c             lea eax, [esp + 0x4c]
// 0085bdc1  64a300000000         mov dword ptr fs:[0], eax
// 0085bdc7  8bf1                 mov esi, ecx
// 0085bdc9  85f6                 test esi, esi
// 0085bdcb  0f84df010000         je 0x85bfb0
// 0085bdd1  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085bdd4  85c0                 test eax, eax
// 0085bdd6  0f84d4010000         je 0x85bfb0
// 0085bddc  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 0085bde1  0f8485010000         je 0x85bf6c
// 0085bde7  8d4c2428             lea ecx, [esp + 0x28]
// 0085bdeb  51                   push ecx
// 0085bdec  50                   push eax
// 0085bded  ff1570cc9800         call dword ptr [0x98cc70]
// 0085bdf3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085bdf7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085bdfb  f7d8                 neg eax
// 0085bdfd  50                   push eax
// 0085bdfe  f7d9                 neg ecx
// 0085be00  51                   push ecx
// 0085be01  8d542430             lea edx, [esp + 0x30]
// 0085be05  52                   push edx
// 0085be06  ff156ccc9800         call dword ptr [0x98cc6c]
// 0085be0c  8b06                 mov eax, dword ptr [esi]
// 0085be0e  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0085be14  6a01                 push 1
// 0085be16  8d4c242c             lea ecx, [esp + 0x2c]
// 0085be1a  51                   push ecx
// 0085be1b  8bce                 mov ecx, esi
// 0085be1d  ffd2                 call edx
// 0085be1f  8b06                 mov eax, dword ptr [esi]
// 0085be21  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0085be27  8d4c241c             lea ecx, [esp + 0x1c]
// 0085be2b  51                   push ecx
// 0085be2c  6a00                 push 0
// 0085be2e  6807040000           push 0x407
// 0085be33  8bce                 mov ecx, esi
// 0085be35  ffd2                 call edx
// 0085be37  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0085be3b  2b7c2428             sub edi, dword ptr [esp + 0x28]
// 0085be3f  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0085be45  037c2424             add edi, dword ptr [esp + 0x24]
// 0085be49  33ed                 xor ebp, ebp
// 0085be4b  33db                 xor ebx, ebx
// 0085be4d  33d2                 xor edx, edx
// 0085be4f  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0085be53  895c2418             mov dword ptr [esp + 0x18], ebx
// 0085be57  85c0                 test eax, eax
// 0085be59  7e48                 jle 0x85bea3
// 0085be5b  eb03                 jmp 0x85be60
// 0085be5d  8d4900               lea ecx, [ecx]
// 0085be60  52                   push edx
// 0085be61  8bce                 mov ecx, esi
// 0085be63  e898f4ffff           call 0x85b300
// 0085be68  8bc8                 mov ecx, eax
// 0085be6a  895154               mov dword ptr [ecx + 0x54], edx
// 0085be6d  e87e75f1ff           call 0x7733f0
// 0085be72  85c0                 test eax, eax
// 0085be74  741c                 je 0x85be92
// 0085be76  895958               mov dword ptr [ecx + 0x58], ebx
// 0085be79  43                   inc ebx
// 0085be7a  f7412800000008       test dword ptr [ecx + 0x28], 0x8000000
// 0085be81  7401                 je 0x85be84
// 0085be83  45                   inc ebp
// 0085be84  b8faffffff           mov eax, 0xfffffffa
// 0085be89  2b4124               sub eax, dword ptr [ecx + 0x24]
// 0085be8c  2b442424             sub eax, dword ptr [esp + 0x24]
// 0085be90  03f8                 add edi, eax
// 0085be92  42                   inc edx
// 0085be93  3b96a0000000         cmp edx, dword ptr [esi + 0xa0]
// 0085be99  7cc5                 jl 0x85be60
// 0085be9b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0085be9f  895c2418             mov dword ptr [esp + 0x18], ebx
// 0085bea3  8d4c2438             lea ecx, [esp + 0x38]
// 0085bea7  e844f2ffff           call 0x85b0f0
// 0085beac  6aff                 push -1
// 0085beae  53                   push ebx
// 0085beaf  8d4c2440             lea ecx, [esp + 0x40]
// 0085beb3  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0085bebb  e8e094ffff           call 0x8553a0
// 0085bec0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0085bec4  33d2                 xor edx, edx
// 0085bec6  33db                 xor ebx, ebx
// 0085bec8  3996a0000000         cmp dword ptr [esi + 0xa0], edx
// 0085bece  89542414             mov dword ptr [esp + 0x14], edx
// 0085bed2  7e65                 jle 0x85bf39
// 0085bed4  52                   push edx
// 0085bed5  8bce                 mov ecx, esi
// 0085bed7  e824f4ffff           call 0x85b300
// 0085bedc  8bc8                 mov ecx, eax
// 0085bede  e80d75f1ff           call 0x7733f0
// 0085bee3  85c0                 test eax, eax
// 0085bee5  7445                 je 0x85bf2c
// 0085bee7  f7412800000008       test dword ptr [ecx + 0x28], 0x8000000
// 0085beee  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0085bef1  8d6c2806             lea ebp, [eax + ebp + 6]
// 0085bef5  7417                 je 0x85bf0e
// 0085bef7  85ff                 test edi, edi
// 0085bef9  7e13                 jle 0x85bf0e
// 0085befb  8bc7                 mov eax, edi
// 0085befd  99                   cdq 
// 0085befe  f77c245c             idiv dword ptr [esp + 0x5c]
// 0085bf02  ff4c245c             dec dword ptr [esp + 0x5c]
// 0085bf06  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085bf0a  03e8                 add ebp, eax
// 0085bf0c  2bf8                 sub edi, eax
// 0085bf0e  85db                 test ebx, ebx
// 0085bf10  0f8cb0000000         jl 0x85bfc6
// 0085bf16  3b5c2440             cmp ebx, dword ptr [esp + 0x40]
// 0085bf1a  0f8da6000000         jge 0x85bfc6
// 0085bf20  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0085bf24  892c99               mov dword ptr [ecx + ebx*4], ebp
// 0085bf27  43                   inc ebx
// 0085bf28  036c2424             add ebp, dword ptr [esp + 0x24]
// 0085bf2c  42                   inc edx
// 0085bf2d  3b96a0000000         cmp edx, dword ptr [esi + 0xa0]
// 0085bf33  89542414             mov dword ptr [esp + 0x14], edx
// 0085bf37  7c9b                 jl 0x85bed4
// 0085bf39  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0085bf3d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085bf41  8b16                 mov edx, dword ptr [esi]
// 0085bf43  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 0085bf49  50                   push eax
// 0085bf4a  51                   push ecx
// 0085bf4b  6804040000           push 0x404
// 0085bf50  8bce                 mov ecx, esi
// 0085bf52  ffd2                 call edx
// 0085bf54  8bce                 mov ecx, esi
// 0085bf56  e8e5fcffff           call 0x85bc40
// 0085bf5b  8d4c2438             lea ecx, [esp + 0x38]
// 0085bf5f  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0085bf67  e8a4f1ffff           call 0x85b110
// 0085bf6c  837c246000           cmp dword ptr [esp + 0x60], 0
// 0085bf71  743d                 je 0x85bfb0
// 0085bf73  33ff                 xor edi, edi
// 0085bf75  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 0085bf7b  7e33                 jle 0x85bfb0
// 0085bf7d  8d4900               lea ecx, [ecx]
// 0085bf80  57                   push edi
// 0085bf81  8bce                 mov ecx, esi
// 0085bf83  e878f3ffff           call 0x85b300
// 0085bf88  8bc8                 mov ecx, eax
// 0085bf8a  e86174f1ff           call 0x7733f0
// 0085bf8f  85c0                 test eax, eax
// 0085bf91  7414                 je 0x85bfa7
// 0085bf93  f6412c01             test byte ptr [ecx + 0x2c], 1
// 0085bf97  740e                 je 0x85bfa7
// 0085bf99  6a01                 push 1
// 0085bf9b  83c130               add ecx, 0x30
// 0085bf9e  51                   push ecx
// 0085bf9f  57                   push edi
// 0085bfa0  8bce                 mov ecx, esi
// 0085bfa2  e859f4ffff           call 0x85b400
// 0085bfa7  47                   inc edi
// 0085bfa8  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 0085bfae  7cd0                 jl 0x85bf80
// 0085bfb0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0085bfb4  64890d00000000       mov dword ptr fs:[0], ecx
// 0085bfbb  59                   pop ecx
// 0085bfbc  5f                   pop edi
// 0085bfbd  5e                   pop esi
// 0085bfbe  5d                   pop ebp
// 0085bfbf  5b                   pop ebx
// 0085bfc0  83c444               add esp, 0x44
// 0085bfc3  c20800               ret 8
// 0085bfc6  e8417bf9ff           call 0x7f3b0c
// copied from an identical function in another client (function ?UpdateAllPanes@CXTPStatusBar@@QAEXHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp