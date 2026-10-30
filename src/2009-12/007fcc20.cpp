// roc 2009-12 007fcc20  unit: CPatchedControlComboBox  size: 587 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fcc20
//
// 007fcc20  6aff                 push -1
// 007fcc22  68518f9500           push 0x958f51
// 007fcc27  64a100000000         mov eax, dword ptr fs:[0]
// 007fcc2d  50                   push eax
// 007fcc2e  83ec30               sub esp, 0x30
// 007fcc31  53                   push ebx
// 007fcc32  55                   push ebp
// 007fcc33  56                   push esi
// 007fcc34  57                   push edi
// 007fcc35  a10052b600           mov eax, dword ptr [0xb65200]
// 007fcc3a  33c4                 xor eax, esp
// 007fcc3c  50                   push eax
// 007fcc3d  8d442444             lea eax, [esp + 0x44]
// 007fcc41  64a300000000         mov dword ptr fs:[0], eax
// 007fcc47  8bd9                 mov ebx, ecx
// 007fcc49  895c2418             mov dword ptr [esp + 0x18], ebx
// 007fcc4d  8d4c2414             lea ecx, [esp + 0x14]
// 007fcc51  ff1574de9800         call dword ptr [0x98de74]
// 007fcc57  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 007fcc5b  8b7508               mov esi, dword ptr [ebp + 8]
// 007fcc5e  8bcb                 mov ecx, ebx
// 007fcc60  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 007fcc68  e893ddffff           call 0x7faa00
// 007fcc6d  8b10                 mov edx, dword ptr [eax]
// 007fcc6f  8b9224020000         mov edx, dword ptr [edx + 0x224]
// 007fcc75  8d4c2414             lea ecx, [esp + 0x14]
// 007fcc79  51                   push ecx
// 007fcc7a  56                   push esi
// 007fcc7b  8bc8                 mov ecx, eax
// 007fcc7d  ffd2                 call edx
// 007fcc7f  8d451c               lea eax, [ebp + 0x1c]
// 007fcc82  50                   push eax
// 007fcc83  8d4c2428             lea ecx, [esp + 0x28]
// 007fcc87  51                   push ecx
// 007fcc88  ff1564cc9800         call dword ptr [0x98cc64]
// 007fcc8e  8b5518               mov edx, dword ptr [ebp + 0x18]
// 007fcc91  52                   push edx
// 007fcc92  e899971200           call 0x926430
// 007fcc97  8b7510               mov esi, dword ptr [ebp + 0x10]
// 007fcc9a  8bcb                 mov ecx, ebx
// 007fcc9c  8bf8                 mov edi, eax
// 007fcc9e  83e601               and esi, 1
// 007fcca1  e89a92ffff           call 0x7f5f40
// 007fcca6  6a05                 push 5
// 007fcca8  6a02                 push 2
// 007fccaa  6a00                 push 0
// 007fccac  6a00                 push 0
// 007fccae  8bd8                 mov ebx, eax
// 007fccb0  8b07                 mov eax, dword ptr [edi]
// 007fccb2  8b13                 mov edx, dword ptr [ebx]
// 007fccb4  6a01                 push 1
// 007fccb6  6a00                 push 0
// 007fccb8  8944246c             mov dword ptr [esp + 0x6c], eax
// 007fccbc  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007fccc2  56                   push esi
// 007fccc3  8bcb                 mov ecx, ebx
// 007fccc5  ffd0                 call eax
// 007fccc7  8b542454             mov edx, dword ptr [esp + 0x54]
// 007fcccb  50                   push eax
// 007fcccc  8b4238               mov eax, dword ptr [edx + 0x38]
// 007fcccf  8bcf                 mov ecx, edi
// 007fccd1  ffd0                 call eax
// 007fccd3  89442420             mov dword ptr [esp + 0x20], eax
// 007fccd7  6a05                 push 5
// 007fccd9  85f6                 test esi, esi
// 007fccdb  743b                 je 0x7fcd18
// 007fccdd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fcce1  8b13                 mov edx, dword ptr [ebx]
// 007fcce3  6a02                 push 2
// 007fcce5  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 007fcceb  6a00                 push 0
// 007fcced  6a00                 push 0
// 007fccef  6a01                 push 1
// 007fccf1  6a00                 push 0
// 007fccf3  6a01                 push 1
// 007fccf5  83ec10               sub esp, 0x10
// 007fccf8  8bc4                 mov eax, esp
// 007fccfa  8908                 mov dword ptr [eax], ecx
// 007fccfc  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007fcd00  894804               mov dword ptr [eax + 4], ecx
// 007fcd03  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007fcd07  894808               mov dword ptr [eax + 8], ecx
// 007fcd0a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007fcd0e  89480c               mov dword ptr [eax + 0xc], ecx
// 007fcd11  57                   push edi
// 007fcd12  8bcb                 mov ecx, ebx
// 007fcd14  ffd2                 call edx
// 007fcd16  eb14                 jmp 0x7fcd2c
// 007fcd18  8bcb                 mov ecx, ebx
// 007fcd1a  e821090000           call 0x7fd640
// 007fcd1f  50                   push eax
// 007fcd20  8d442428             lea eax, [esp + 0x28]
// 007fcd24  50                   push eax
// 007fcd25  8bcf                 mov ecx, edi
// 007fcd27  e8d278ffff           call 0x7f45fe
// 007fcd2c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fcd30  e8cbfeffff           call 0x7fcc00
// 007fcd35  89442454             mov dword ptr [esp + 0x54], eax
// 007fcd39  83f8ff               cmp eax, -1
// 007fcd3c  0f84a0000000         je 0x7fcde2
// 007fcd42  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fcd46  8b11                 mov edx, dword ptr [ecx]
// 007fcd48  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 007fcd4e  ffd0                 call eax
// 007fcd50  8bc8                 mov ecx, eax
// 007fcd52  e8b9780000           call 0x804610
// 007fcd57  8b4d08               mov ecx, dword ptr [ebp + 8]
// 007fcd5a  034c2454             add ecx, dword ptr [esp + 0x54]
// 007fcd5e  6a00                 push 0
// 007fcd60  51                   push ecx
// 007fcd61  8bc8                 mov ecx, eax
// 007fcd63  e8182e0100           call 0x80fb80
// 007fcd68  8be8                 mov ebp, eax
// 007fcd6a  85ed                 test ebp, ebp
// 007fcd6c  7474                 je 0x7fcde2
// 007fcd6e  83ec08               sub esp, 8
// 007fcd71  8bc4                 mov eax, esp
// 007fcd73  8bcd                 mov ecx, ebp
// 007fcd75  8964245c             mov dword ptr [esp + 0x5c], esp
// 007fcd79  c70000000000         mov dword ptr [eax], 0
// 007fcd7f  c7400400000000       mov dword ptr [eax + 4], 0
// 007fcd86  e8e58acdff           call 0x4d5870
// 007fcd8b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007fcd8f  8b542430             mov edx, dword ptr [esp + 0x30]
// 007fcd93  03d1                 add edx, ecx
// 007fcd95  2bd0                 sub edx, eax
// 007fcd97  8bc2                 mov eax, edx
// 007fcd99  99                   cdq 
// 007fcd9a  2bc2                 sub eax, edx
// 007fcd9c  d1f8                 sar eax, 1
// 007fcd9e  8944245c             mov dword ptr [esp + 0x5c], eax
// 007fcda2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007fcda6  83c002               add eax, 2
// 007fcda9  f7de                 neg esi
// 007fcdab  1bf6                 sbb esi, esi
// 007fcdad  83e602               and esi, 2
// 007fcdb0  56                   push esi
// 007fcdb1  8bcd                 mov ecx, ebp
// 007fcdb3  89442424             mov dword ptr [esp + 0x24], eax
// 007fcdb7  e8a4360100           call 0x810460
// 007fcdbc  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007fcdc0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007fcdc4  50                   push eax
// 007fcdc5  51                   push ecx
// 007fcdc6  52                   push edx
// 007fcdc7  57                   push edi
// 007fcdc8  8bcd                 mov ecx, ebp
// 007fcdca  e8e1400100           call 0x810eb0
// 007fcdcf  8bcd                 mov ecx, ebp
// 007fcdd1  e8aa0e0500           call 0x84dc80
// 007fcdd6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007fcdda  8d540102             lea edx, [ecx + eax + 2]
// 007fcdde  89542424             mov dword ptr [esp + 0x24], edx
// 007fcde2  81c3a4000000         add ebx, 0xa4
// 007fcde8  53                   push ebx
// 007fcde9  57                   push edi
// 007fcdea  8d4c243c             lea ecx, [esp + 0x3c]
// 007fcdee  e86de80400           call 0x84b660
// 007fcdf3  6a01                 push 1
// 007fcdf5  8bcf                 mov ecx, edi
// 007fcdf7  c644245001           mov byte ptr [esp + 0x50], 1
// 007fcdfc  e88f961200           call 0x926490
// 007fce01  8344242403           add dword ptr [esp + 0x24], 3
// 007fce06  8b37                 mov esi, dword ptr [edi]
// 007fce08  6824080000           push 0x824
// 007fce0d  8d442428             lea eax, [esp + 0x28]
// 007fce11  50                   push eax
// 007fce12  8d4c241c             lea ecx, [esp + 0x1c]
// 007fce16  ff15b4dd9800         call dword ptr [0x98ddb4]
// 007fce1c  50                   push eax
// 007fce1d  8d4c2420             lea ecx, [esp + 0x20]
// 007fce21  ff1580de9800         call dword ptr [0x98de80]
// 007fce27  8b5670               mov edx, dword ptr [esi + 0x70]
// 007fce2a  50                   push eax
// 007fce2b  8bcf                 mov ecx, edi
// 007fce2d  ffd2                 call edx
// 007fce2f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007fce33  8b07                 mov eax, dword ptr [edi]
// 007fce35  8b5038               mov edx, dword ptr [eax + 0x38]
// 007fce38  51                   push ecx
// 007fce39  8bcf                 mov ecx, edi
// 007fce3b  ffd2                 call edx
// 007fce3d  8d4c2434             lea ecx, [esp + 0x34]
// 007fce41  c644244c00           mov byte ptr [esp + 0x4c], 0
// 007fce46  e895e80400           call 0x84b6e0
// 007fce4b  8d4c2414             lea ecx, [esp + 0x14]
// 007fce4f  ff15c0de9800         call dword ptr [0x98dec0]
// 007fce55  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007fce59  64890d00000000       mov dword ptr fs:[0], ecx
// 007fce60  59                   pop ecx
// 007fce61  5f                   pop edi
// 007fce62  5e                   pop esi
// 007fce63  5d                   pop ebp
// 007fce64  5b                   pop ebx
// 007fce65  83c43c               add esp, 0x3c
// 007fce68  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPControlComboBox@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp