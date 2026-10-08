// from server: 100% by auto
// roc 2012-06 009fa530  unit: CXTPControlGalleryPaintManager  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fa530
//
// 009fa530  53                   push ebx
// 009fa531  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009fa535  56                   push esi
// 009fa536  57                   push edi
// 009fa537  33ff                 xor edi, edi
// 009fa539  3bdf                 cmp ebx, edi
// 009fa53b  8bf1                 mov esi, ecx
// 009fa53d  7d05                 jge 0x9fa544
// 009fa53f  e87c7ef8ff           call 0x9823c0
// 009fa544  8b442414             mov eax, dword ptr [esp + 0x14]
// 009fa548  3bc7                 cmp eax, edi
// 009fa54a  7c03                 jl 0x9fa54f
// 009fa54c  894610               mov dword ptr [esi + 0x10], eax
// 009fa54f  3bdf                 cmp ebx, edi
// 009fa551  751f                 jne 0x9fa572
// 009fa553  8b4604               mov eax, dword ptr [esi + 4]
// 009fa556  3bc7                 cmp eax, edi
// 009fa558  740c                 je 0x9fa566
// 009fa55a  50                   push eax
// 009fa55b  e85a7ef8ff           call 0x9823ba
// 009fa560  83c404               add esp, 4
// 009fa563  897e04               mov dword ptr [esi + 4], edi
// 009fa566  897e0c               mov dword ptr [esi + 0xc], edi
// 009fa569  897e08               mov dword ptr [esi + 8], edi
// 009fa56c  5f                   pop edi
// 009fa56d  5e                   pop esi
// 009fa56e  5b                   pop ebx
// 009fa56f  c20800               ret 8
// 009fa572  8b5604               mov edx, dword ptr [esi + 4]
// 009fa575  55                   push ebp
// 009fa576  3bd7                 cmp edx, edi
// 009fa578  7535                 jne 0x9fa5af
// 009fa57a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 009fa57d  3bdd                 cmp ebx, ebp
// 009fa57f  7e02                 jle 0x9fa583
// 009fa581  8beb                 mov ebp, ebx
// 009fa583  8d7c6d00             lea edi, [ebp + ebp*2]
// 009fa587  03ff                 add edi, edi
// 009fa589  03ff                 add edi, edi
// 009fa58b  03ff                 add edi, edi
// 009fa58d  57                   push edi
// 009fa58e  e85d7ef8ff           call 0x9823f0
// 009fa593  57                   push edi
// 009fa594  6a00                 push 0
// 009fa596  50                   push eax
// 009fa597  894604               mov dword ptr [esi + 4], eax
// 009fa59a  e8d58df8ff           call 0x983374
// 009fa59f  83c410               add esp, 0x10
// 009fa5a2  896e0c               mov dword ptr [esi + 0xc], ebp
// 009fa5a5  5d                   pop ebp
// 009fa5a6  5f                   pop edi
// 009fa5a7  895e08               mov dword ptr [esi + 8], ebx
// 009fa5aa  5e                   pop esi
// 009fa5ab  5b                   pop ebx
// 009fa5ac  c20800               ret 8
// 009fa5af  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009fa5b2  3bd9                 cmp ebx, ecx
// 009fa5b4  7f33                 jg 0x9fa5e9
// 009fa5b6  8b4e08               mov ecx, dword ptr [esi + 8]
// 009fa5b9  3bd9                 cmp ebx, ecx
// 009fa5bb  0f8ece000000         jle 0x9fa68f
// 009fa5c1  8bc3                 mov eax, ebx
// 009fa5c3  2bc1                 sub eax, ecx
// 009fa5c5  8d0440               lea eax, [eax + eax*2]
// 009fa5c8  03c0                 add eax, eax
// 009fa5ca  03c0                 add eax, eax
// 009fa5cc  03c0                 add eax, eax
// 009fa5ce  50                   push eax
// 009fa5cf  8d0c49               lea ecx, [ecx + ecx*2]
// 009fa5d2  8d14ca               lea edx, [edx + ecx*8]
// 009fa5d5  57                   push edi
// 009fa5d6  52                   push edx
// 009fa5d7  e8988df8ff           call 0x983374
// 009fa5dc  83c40c               add esp, 0xc
// 009fa5df  5d                   pop ebp
// 009fa5e0  5f                   pop edi
// 009fa5e1  895e08               mov dword ptr [esi + 8], ebx
// 009fa5e4  5e                   pop esi
// 009fa5e5  5b                   pop ebx
// 009fa5e6  c20800               ret 8
// 009fa5e9  8b4610               mov eax, dword ptr [esi + 0x10]
// 009fa5ec  3bc7                 cmp eax, edi
// 009fa5ee  7524                 jne 0x9fa614
// 009fa5f0  8b4608               mov eax, dword ptr [esi + 8]
// 009fa5f3  99                   cdq 
// 009fa5f4  83e207               and edx, 7
// 009fa5f7  03c2                 add eax, edx
// 009fa5f9  c1f803               sar eax, 3
// 009fa5fc  83f804               cmp eax, 4
// 009fa5ff  7d07                 jge 0x9fa608
// 009fa601  b804000000           mov eax, 4
// 009fa606  eb0c                 jmp 0x9fa614
// 009fa608  3d00040000           cmp eax, 0x400
// 009fa60d  7e05                 jle 0x9fa614
// 009fa60f  b800040000           mov eax, 0x400
// 009fa614  8d3c01               lea edi, [ecx + eax]
// 009fa617  3bdf                 cmp ebx, edi
// 009fa619  7d06                 jge 0x9fa621
// 009fa61b  897c2414             mov dword ptr [esp + 0x14], edi
// 009fa61f  eb06                 jmp 0x9fa627
// 009fa621  895c2414             mov dword ptr [esp + 0x14], ebx
// 009fa625  8bfb                 mov edi, ebx
// 009fa627  3bf9                 cmp edi, ecx
// 009fa629  7d05                 jge 0x9fa630
// 009fa62b  e8907df8ff           call 0x9823c0
// 009fa630  8d3c7f               lea edi, [edi + edi*2]
// 009fa633  03ff                 add edi, edi
// 009fa635  03ff                 add edi, edi
// 009fa637  03ff                 add edi, edi
// 009fa639  57                   push edi
// 009fa63a  e8b17df8ff           call 0x9823f0
// 009fa63f  8b4e04               mov ecx, dword ptr [esi + 4]
// 009fa642  8be8                 mov ebp, eax
// 009fa644  8b4608               mov eax, dword ptr [esi + 8]
// 009fa647  8d0440               lea eax, [eax + eax*2]
// 009fa64a  03c0                 add eax, eax
// 009fa64c  03c0                 add eax, eax
// 009fa64e  03c0                 add eax, eax
// 009fa650  50                   push eax
// 009fa651  51                   push ecx
// 009fa652  57                   push edi
// 009fa653  55                   push ebp
// 009fa654  e8779ba0ff           call 0x4041d0
// 009fa659  8b4e08               mov ecx, dword ptr [esi + 8]
// 009fa65c  8bc3                 mov eax, ebx
// 009fa65e  2bc1                 sub eax, ecx
// 009fa660  8d1440               lea edx, [eax + eax*2]
// 009fa663  03d2                 add edx, edx
// 009fa665  03d2                 add edx, edx
// 009fa667  03d2                 add edx, edx
// 009fa669  52                   push edx
// 009fa66a  8d0449               lea eax, [ecx + ecx*2]
// 009fa66d  8d4cc500             lea ecx, [ebp + eax*8]
// 009fa671  6a00                 push 0
// 009fa673  51                   push ecx
// 009fa674  e8fb8cf8ff           call 0x983374
// 009fa679  8b5604               mov edx, dword ptr [esi + 4]
// 009fa67c  52                   push edx
// 009fa67d  e8387df8ff           call 0x9823ba
// 009fa682  8b442438             mov eax, dword ptr [esp + 0x38]
// 009fa686  83c424               add esp, 0x24
// 009fa689  896e04               mov dword ptr [esi + 4], ebp
// 009fa68c  89460c               mov dword ptr [esi + 0xc], eax
// 009fa68f  5d                   pop ebp
// 009fa690  5f                   pop edi
// 009fa691  895e08               mov dword ptr [esi + 8], ebx
// 009fa694  5e                   pop esi
// 009fa695  5b                   pop ebx
// 009fa696  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlGallery.cpp (function ?SetSize@?$CArray@UGALLERYITEM_POSITION@CXTPControlGallery@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlGallery.cpp
