// roc 2009-12 0081f510  unit: CXTPReportControl  size: 636 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f510
//
// 0081f510  6aff                 push -1
// 0081f512  6844ae9500           push 0x95ae44
// 0081f517  64a100000000         mov eax, dword ptr fs:[0]
// 0081f51d  50                   push eax
// 0081f51e  83ec20               sub esp, 0x20
// 0081f521  53                   push ebx
// 0081f522  55                   push ebp
// 0081f523  56                   push esi
// 0081f524  57                   push edi
// 0081f525  a10052b600           mov eax, dword ptr [0xb65200]
// 0081f52a  33c4                 xor eax, esp
// 0081f52c  50                   push eax
// 0081f52d  8d442434             lea eax, [esp + 0x34]
// 0081f531  64a300000000         mov dword ptr fs:[0], eax
// 0081f537  8bf9                 mov edi, ecx
// 0081f539  897c2424             mov dword ptr [esp + 0x24], edi
// 0081f53d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0081f541  33db                 xor ebx, ebx
// 0081f543  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0081f547  3bcb                 cmp ecx, ebx
// 0081f549  7475                 je 0x81f5c0
// 0081f54b  8b01                 mov eax, dword ptr [ecx]
// 0081f54d  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081f550  ffd2                 call edx
// 0081f552  8d4c2448             lea ecx, [esp + 0x48]
// 0081f556  85c0                 test eax, eax
// 0081f558  0f851e020000         jne 0x81f77c
// 0081f55e  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0081f564  84c0                 test al, al
// 0081f566  7558                 jne 0x81f5c0
// 0081f568  8b07                 mov eax, dword ptr [edi]
// 0081f56a  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 0081f570  8bcf                 mov ecx, edi
// 0081f572  ffd2                 call edx
// 0081f574  8a0d564f9f00         mov cl, byte ptr [0x9f4f56]
// 0081f57a  8944242c             mov dword ptr [esp + 0x2c], eax
// 0081f57e  66a1544f9f00         mov ax, word ptr [0x9f4f54]
// 0081f584  884c2416             mov byte ptr [esp + 0x16], cl
// 0081f588  8d4c2448             lea ecx, [esp + 0x48]
// 0081f58c  6689442414           mov word ptr [esp + 0x14], ax
// 0081f591  895c2428             mov dword ptr [esp + 0x28], ebx
// 0081f595  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0081f59b  50                   push eax
// 0081f59c  8d4c244c             lea ecx, [esp + 0x4c]
// 0081f5a0  ff155cd29800         call dword ptr [0x98d25c]
// 0081f5a6  8d542428             lea edx, [esp + 0x28]
// 0081f5aa  52                   push edx
// 0081f5ab  8d4c2418             lea ecx, [esp + 0x18]
// 0081f5af  51                   push ecx
// 0081f5b0  50                   push eax
// 0081f5b1  ff1500ba9800         call dword ptr [0x98ba00]
// 0081f5b7  8bf0                 mov esi, eax
// 0081f5b9  83c40c               add esp, 0xc
// 0081f5bc  3bf3                 cmp esi, ebx
// 0081f5be  7526                 jne 0x81f5e6
// 0081f5c0  8d4c2448             lea ecx, [esp + 0x48]
// 0081f5c4  ff15c0de9800         call dword ptr [0x98dec0]
// 0081f5ca  33c0                 xor eax, eax
// 0081f5cc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0081f5d0  64890d00000000       mov dword ptr fs:[0], ecx
// 0081f5d7  59                   pop ecx
// 0081f5d8  5f                   pop edi
// 0081f5d9  5e                   pop esi
// 0081f5da  5d                   pop ebp
// 0081f5db  5b                   pop ebx
// 0081f5dc  83c42c               add esp, 0x2c
// 0081f5df  c20c00               ret 0xc
// 0081f5e2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0081f5e6  56                   push esi
// 0081f5e7  8d4c241c             lea ecx, [esp + 0x1c]
// 0081f5eb  ff15b8de9800         call dword ptr [0x98deb8]
// 0081f5f1  8d4c2418             lea ecx, [esp + 0x18]
// 0081f5f5  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0081f5fa  ff1544d89800         call dword ptr [0x98d844]
// 0081f600  8b97ec000000         mov edx, dword ptr [edi + 0xec]
// 0081f606  8b4230               mov eax, dword ptr [edx + 0x30]
// 0081f609  33ed                 xor ebp, ebp
// 0081f60b  33ff                 xor edi, edi
// 0081f60d  3bc3                 cmp eax, ebx
// 0081f60f  89442430             mov dword ptr [esp + 0x30], eax
// 0081f613  0f8eaf000000         jle 0x81f6c8
// 0081f619  8da42400000000       lea esp, [esp]
// 0081f620  3bfb                 cmp edi, ebx
// 0081f622  8b442424             mov eax, dword ptr [esp + 0x24]
// 0081f626  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 0081f62c  0f8c8b000000         jl 0x81f6bd
// 0081f632  3b7830               cmp edi, dword ptr [eax + 0x30]
// 0081f635  0f8d82000000         jge 0x81f6bd
// 0081f63b  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0081f63e  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 0081f641  8d04b9               lea eax, [ecx + edi*4]
// 0081f644  3bf3                 cmp esi, ebx
// 0081f646  7475                 je 0x81f6bd
// 0081f648  8bce                 mov ecx, esi
// 0081f64a  e871440900           call 0x8b3ac0
// 0081f64f  85c0                 test eax, eax
// 0081f651  7506                 jne 0x81f659
// 0081f653  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 0081f657  7464                 je 0x81f6bd
// 0081f659  395e64               cmp dword ptr [esi + 0x64], ebx
// 0081f65c  745f                 je 0x81f6bd
// 0081f65e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0081f662  56                   push esi
// 0081f663  e8d8b60000           call 0x82ad40
// 0081f668  3bc3                 cmp eax, ebx
// 0081f66a  7451                 je 0x81f6bd
// 0081f66c  8b10                 mov edx, dword ptr [eax]
// 0081f66e  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0081f671  56                   push esi
// 0081f672  8d4c2420             lea ecx, [esp + 0x20]
// 0081f676  51                   push ecx
// 0081f677  8bc8                 mov ecx, eax
// 0081f679  ffd2                 call edx
// 0081f67b  8d4c241c             lea ecx, [esp + 0x1c]
// 0081f67f  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0081f684  ff1544d89800         call dword ptr [0x98d844]
// 0081f68a  53                   push ebx
// 0081f68b  8d4c241c             lea ecx, [esp + 0x1c]
// 0081f68f  ff1580de9800         call dword ptr [0x98de80]
// 0081f695  50                   push eax
// 0081f696  8d4c2424             lea ecx, [esp + 0x24]
// 0081f69a  ff1500d89800         call dword ptr [0x98d800]
// 0081f6a0  33c9                 xor ecx, ecx
// 0081f6a2  83f8ff               cmp eax, -1
// 0081f6a5  0f95c1               setne cl
// 0081f6a8  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0081f6ad  8be9                 mov ebp, ecx
// 0081f6af  8d4c241c             lea ecx, [esp + 0x1c]
// 0081f6b3  ff15c0de9800         call dword ptr [0x98dec0]
// 0081f6b9  3beb                 cmp ebp, ebx
// 0081f6bb  750b                 jne 0x81f6c8
// 0081f6bd  47                   inc edi
// 0081f6be  3b7c2430             cmp edi, dword ptr [esp + 0x30]
// 0081f6c2  0f8c58ffffff         jl 0x81f620
// 0081f6c8  395c244c             cmp dword ptr [esp + 0x4c], ebx
// 0081f6cc  746b                 je 0x81f739
// 0081f6ce  3beb                 cmp ebp, ebx
// 0081f6d0  756b                 jne 0x81f73d
// 0081f6d2  8b742444             mov esi, dword ptr [esp + 0x44]
// 0081f6d6  8bce                 mov ecx, esi
// 0081f6d8  e8b3b00300           call 0x85a790
// 0081f6dd  85c0                 test eax, eax
// 0081f6df  0f8489000000         je 0x81f76e
// 0081f6e5  8bce                 mov ecx, esi
// 0081f6e7  e8a4b00300           call 0x85a790
// 0081f6ec  8b10                 mov edx, dword ptr [eax]
// 0081f6ee  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0081f6f1  53                   push ebx
// 0081f6f2  8d4c2424             lea ecx, [esp + 0x24]
// 0081f6f6  51                   push ecx
// 0081f6f7  8bc8                 mov ecx, eax
// 0081f6f9  ffd2                 call edx
// 0081f6fb  8d4c2420             lea ecx, [esp + 0x20]
// 0081f6ff  c644243c03           mov byte ptr [esp + 0x3c], 3
// 0081f704  ff1544d89800         call dword ptr [0x98d844]
// 0081f70a  53                   push ebx
// 0081f70b  8d4c241c             lea ecx, [esp + 0x1c]
// 0081f70f  ff1580de9800         call dword ptr [0x98de80]
// 0081f715  50                   push eax
// 0081f716  8d4c2428             lea ecx, [esp + 0x28]
// 0081f71a  ff1500d89800         call dword ptr [0x98d800]
// 0081f720  33c9                 xor ecx, ecx
// 0081f722  83f8ff               cmp eax, -1
// 0081f725  0f95c1               setne cl
// 0081f728  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0081f72d  8be9                 mov ebp, ecx
// 0081f72f  8d4c2420             lea ecx, [esp + 0x20]
// 0081f733  ff15c0de9800         call dword ptr [0x98dec0]
// 0081f739  3beb                 cmp ebp, ebx
// 0081f73b  7431                 je 0x81f76e
// 0081f73d  8d542428             lea edx, [esp + 0x28]
// 0081f741  52                   push edx
// 0081f742  8d442418             lea eax, [esp + 0x18]
// 0081f746  50                   push eax
// 0081f747  53                   push ebx
// 0081f748  ff1500ba9800         call dword ptr [0x98ba00]
// 0081f74e  83c40c               add esp, 0xc
// 0081f751  8d4c2418             lea ecx, [esp + 0x18]
// 0081f755  8bf0                 mov esi, eax
// 0081f757  885c243c             mov byte ptr [esp + 0x3c], bl
// 0081f75b  ff15c0de9800         call dword ptr [0x98dec0]
// 0081f761  3bf3                 cmp esi, ebx
// 0081f763  0f8579feffff         jne 0x81f5e2
// 0081f769  e952feffff           jmp 0x81f5c0
// 0081f76e  8d4c2418             lea ecx, [esp + 0x18]
// 0081f772  ff15c0de9800         call dword ptr [0x98dec0]
// 0081f778  8d4c2448             lea ecx, [esp + 0x48]
// 0081f77c  ff15c0de9800         call dword ptr [0x98dec0]
// 0081f782  b801000000           mov eax, 1
// 0081f787  e940feffff           jmp 0x81f5cc
// copied from an identical function in another client (function ?ApplyFilter@CXTPReportControl@@MAEHPAVCXTPReportRecord@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportControl.cpp