// roc 2012-06 009f9580  unit: CXTPDockingPaneAutoHidePanel  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9580
//
// 009f9580  83ec1c               sub esp, 0x1c
// 009f9583  8b442424             mov eax, dword ptr [esp + 0x24]
// 009f9587  53                   push ebx
// 009f9588  55                   push ebp
// 009f9589  56                   push esi
// 009f958a  57                   push edi
// 009f958b  8bf9                 mov edi, ecx
// 009f958d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009f9591  50                   push eax
// 009f9592  51                   push ecx
// 009f9593  ff15b43cb200         call dword ptr [0xb23cb4]
// 009f9599  8b5f28               mov ebx, dword ptr [edi + 0x28]
// 009f959c  83eb01               sub ebx, 1
// 009f959f  89442410             mov dword ptr [esp + 0x10], eax
// 009f95a3  786a                 js 0x9f960f
// 009f95a5  85db                 test ebx, ebx
// 009f95a7  0f8c1c010000         jl 0x9f96c9
// 009f95ad  3b5f28               cmp ebx, dword ptr [edi + 0x28]
// 009f95b0  0f8d13010000         jge 0x9f96c9
// 009f95b6  8b5724               mov edx, dword ptr [edi + 0x24]
// 009f95b9  8b349a               mov esi, dword ptr [edx + ebx*4]
// 009f95bc  8b06                 mov eax, dword ptr [esi]
// 009f95be  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 009f95c4  8bce                 mov ecx, esi
// 009f95c6  ffd2                 call edx
// 009f95c8  85c0                 test eax, eax
// 009f95ca  743e                 je 0x9f960a
// 009f95cc  8b442434             mov eax, dword ptr [esp + 0x34]
// 009f95d0  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 009f95d4  56                   push esi
// 009f95d5  8d4c2420             lea ecx, [esp + 0x20]
// 009f95d9  8944241c             mov dword ptr [esp + 0x1c], eax
// 009f95dd  e85ebbfdff           call 0x9d5140
// 009f95e2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009f95e6  51                   push ecx
// 009f95e7  55                   push ebp
// 009f95e8  50                   push eax
// 009f95e9  ff15483bb200         call dword ptr [0xb23b48]
// 009f95ef  85c0                 test eax, eax
// 009f95f1  7417                 je 0x9f960a
// 009f95f3  8b4620               mov eax, dword ptr [esi + 0x20]
// 009f95f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009f95fa  3bc1                 cmp eax, ecx
// 009f95fc  743a                 je 0x9f9638
// 009f95fe  51                   push ecx
// 009f95ff  50                   push eax
// 009f9600  ff15143db200         call dword ptr [0xb23d14]
// 009f9606  85c0                 test eax, eax
// 009f9608  752e                 jne 0x9f9638
// 009f960a  83eb01               sub ebx, 1
// 009f960d  7996                 jns 0x9f95a5
// 009f960f  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 009f9612  85c9                 test ecx, ecx
// 009f9614  7411                 je 0x9f9627
// 009f9616  8b01                 mov eax, dword ptr [ecx]
// 009f9618  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 009f961e  ffd2                 call edx
// 009f9620  c7471000000000       mov dword ptr [edi + 0x10], 0
// 009f9627  8bcf                 mov ecx, edi
// 009f9629  e8f2fdffff           call 0x9f9420
// 009f962e  5f                   pop edi
// 009f962f  5e                   pop esi
// 009f9630  5d                   pop ebp
// 009f9631  5b                   pop ebx
// 009f9632  83c41c               add esp, 0x1c
// 009f9635  c20800               ret 8
// 009f9638  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 009f963b  8b1d883ab200         mov ebx, dword ptr [0xb23a88]
// 009f9641  3bce                 cmp ecx, esi
// 009f9643  7528                 jne 0x9f966d
// 009f9645  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009f9648  8d542430             lea edx, [esp + 0x30]
// 009f964c  52                   push edx
// 009f964d  50                   push eax
// 009f964e  ffd3                 call ebx
// 009f9650  8b442434             mov eax, dword ptr [esp + 0x34]
// 009f9654  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 009f9657  8b11                 mov edx, dword ptr [ecx]
// 009f9659  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 009f965f  50                   push eax
// 009f9660  8b442434             mov eax, dword ptr [esp + 0x34]
// 009f9664  50                   push eax
// 009f9665  8b4704               mov eax, dword ptr [edi + 4]
// 009f9668  50                   push eax
// 009f9669  ffd2                 call edx
// 009f966b  eb15                 jmp 0x9f9682
// 009f966d  85c9                 test ecx, ecx
// 009f966f  7411                 je 0x9f9682
// 009f9671  8b01                 mov eax, dword ptr [ecx]
// 009f9673  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 009f9679  ffd2                 call edx
// 009f967b  c7471000000000       mov dword ptr [edi + 0x10], 0
// 009f9682  837f1000             cmp dword ptr [edi + 0x10], 0
// 009f9686  759f                 jne 0x9f9627
// 009f9688  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009f968b  8d442430             lea eax, [esp + 0x30]
// 009f968f  50                   push eax
// 009f9690  51                   push ecx
// 009f9691  ffd3                 call ebx
// 009f9693  8b442434             mov eax, dword ptr [esp + 0x34]
// 009f9697  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009f969b  8b16                 mov edx, dword ptr [esi]
// 009f969d  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 009f96a3  50                   push eax
// 009f96a4  8b4704               mov eax, dword ptr [edi + 4]
// 009f96a7  51                   push ecx
// 009f96a8  50                   push eax
// 009f96a9  8bce                 mov ecx, esi
// 009f96ab  ffd2                 call edx
// 009f96ad  85c0                 test eax, eax
// 009f96af  0f8472ffffff         je 0x9f9627
// 009f96b5  8bcf                 mov ecx, edi
// 009f96b7  897710               mov dword ptr [edi + 0x10], esi
// 009f96ba  e861fdffff           call 0x9f9420
// 009f96bf  5f                   pop edi
// 009f96c0  5e                   pop esi
// 009f96c1  5d                   pop ebp
// 009f96c2  5b                   pop ebx
// 009f96c3  83c41c               add esp, 0x1c
// 009f96c6  c20800               ret 8
// 009f96c9  e8f28cf8ff           call 0x9823c0
// copied from an identical function in another client (function ?PickTarget@CXTPCustomizeDropSource@@AAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp