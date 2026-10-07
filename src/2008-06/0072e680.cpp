// roc 2008-06 0072e680  unit: CXTPControlGalleryPaintManager  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e680
//
// 0072e680  53                   push ebx
// 0072e681  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0072e685  56                   push esi
// 0072e686  57                   push edi
// 0072e687  33ff                 xor edi, edi
// 0072e689  3bdf                 cmp ebx, edi
// 0072e68b  8bf1                 mov esi, ecx
// 0072e68d  7d05                 jge 0x72e694
// 0072e68f  e8b022f7ff           call 0x6a0944
// 0072e694  8b442414             mov eax, dword ptr [esp + 0x14]
// 0072e698  3bc7                 cmp eax, edi
// 0072e69a  7c03                 jl 0x72e69f
// 0072e69c  894610               mov dword ptr [esi + 0x10], eax
// 0072e69f  3bdf                 cmp ebx, edi
// 0072e6a1  751f                 jne 0x72e6c2
// 0072e6a3  8b4604               mov eax, dword ptr [esi + 4]
// 0072e6a6  3bc7                 cmp eax, edi
// 0072e6a8  740c                 je 0x72e6b6
// 0072e6aa  50                   push eax
// 0072e6ab  e89a22f7ff           call 0x6a094a
// 0072e6b0  83c404               add esp, 4
// 0072e6b3  897e04               mov dword ptr [esi + 4], edi
// 0072e6b6  897e0c               mov dword ptr [esi + 0xc], edi
// 0072e6b9  897e08               mov dword ptr [esi + 8], edi
// 0072e6bc  5f                   pop edi
// 0072e6bd  5e                   pop esi
// 0072e6be  5b                   pop ebx
// 0072e6bf  c20800               ret 8
// 0072e6c2  8b5604               mov edx, dword ptr [esi + 4]
// 0072e6c5  55                   push ebp
// 0072e6c6  3bd7                 cmp edx, edi
// 0072e6c8  7535                 jne 0x72e6ff
// 0072e6ca  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0072e6cd  3bdd                 cmp ebx, ebp
// 0072e6cf  7e02                 jle 0x72e6d3
// 0072e6d1  8beb                 mov ebp, ebx
// 0072e6d3  8d7c6d00             lea edi, [ebp + ebp*2]
// 0072e6d7  03ff                 add edi, edi
// 0072e6d9  03ff                 add edi, edi
// 0072e6db  03ff                 add edi, edi
// 0072e6dd  57                   push edi
// 0072e6de  e87322f7ff           call 0x6a0956
// 0072e6e3  57                   push edi
// 0072e6e4  6a00                 push 0
// 0072e6e6  50                   push eax
// 0072e6e7  894604               mov dword ptr [esi + 4], eax
// 0072e6ea  e81530f7ff           call 0x6a1704
// 0072e6ef  83c410               add esp, 0x10
// 0072e6f2  896e0c               mov dword ptr [esi + 0xc], ebp
// 0072e6f5  5d                   pop ebp
// 0072e6f6  5f                   pop edi
// 0072e6f7  895e08               mov dword ptr [esi + 8], ebx
// 0072e6fa  5e                   pop esi
// 0072e6fb  5b                   pop ebx
// 0072e6fc  c20800               ret 8
// 0072e6ff  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0072e702  3bd9                 cmp ebx, ecx
// 0072e704  7f33                 jg 0x72e739
// 0072e706  8b4e08               mov ecx, dword ptr [esi + 8]
// 0072e709  3bd9                 cmp ebx, ecx
// 0072e70b  0f8ece000000         jle 0x72e7df
// 0072e711  8bc3                 mov eax, ebx
// 0072e713  2bc1                 sub eax, ecx
// 0072e715  8d0440               lea eax, [eax + eax*2]
// 0072e718  03c0                 add eax, eax
// 0072e71a  03c0                 add eax, eax
// 0072e71c  03c0                 add eax, eax
// 0072e71e  50                   push eax
// 0072e71f  8d0c49               lea ecx, [ecx + ecx*2]
// 0072e722  8d14ca               lea edx, [edx + ecx*8]
// 0072e725  57                   push edi
// 0072e726  52                   push edx
// 0072e727  e8d82ff7ff           call 0x6a1704
// 0072e72c  83c40c               add esp, 0xc
// 0072e72f  5d                   pop ebp
// 0072e730  5f                   pop edi
// 0072e731  895e08               mov dword ptr [esi + 8], ebx
// 0072e734  5e                   pop esi
// 0072e735  5b                   pop ebx
// 0072e736  c20800               ret 8
// 0072e739  8b4610               mov eax, dword ptr [esi + 0x10]
// 0072e73c  3bc7                 cmp eax, edi
// 0072e73e  7524                 jne 0x72e764
// 0072e740  8b4608               mov eax, dword ptr [esi + 8]
// 0072e743  99                   cdq 
// 0072e744  83e207               and edx, 7
// 0072e747  03c2                 add eax, edx
// 0072e749  c1f803               sar eax, 3
// 0072e74c  83f804               cmp eax, 4
// 0072e74f  7d07                 jge 0x72e758
// 0072e751  b804000000           mov eax, 4
// 0072e756  eb0c                 jmp 0x72e764
// 0072e758  3d00040000           cmp eax, 0x400
// 0072e75d  7e05                 jle 0x72e764
// 0072e75f  b800040000           mov eax, 0x400
// 0072e764  8d3c01               lea edi, [ecx + eax]
// 0072e767  3bdf                 cmp ebx, edi
// 0072e769  7d06                 jge 0x72e771
// 0072e76b  897c2414             mov dword ptr [esp + 0x14], edi
// 0072e76f  eb06                 jmp 0x72e777
// 0072e771  895c2414             mov dword ptr [esp + 0x14], ebx
// 0072e775  8bfb                 mov edi, ebx
// 0072e777  3bf9                 cmp edi, ecx
// 0072e779  7d05                 jge 0x72e780
// 0072e77b  e8c421f7ff           call 0x6a0944
// 0072e780  8d3c7f               lea edi, [edi + edi*2]
// 0072e783  03ff                 add edi, edi
// 0072e785  03ff                 add edi, edi
// 0072e787  03ff                 add edi, edi
// 0072e789  57                   push edi
// 0072e78a  e8c721f7ff           call 0x6a0956
// 0072e78f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0072e792  8be8                 mov ebp, eax
// 0072e794  8b4608               mov eax, dword ptr [esi + 8]
// 0072e797  8d0440               lea eax, [eax + eax*2]
// 0072e79a  03c0                 add eax, eax
// 0072e79c  03c0                 add eax, eax
// 0072e79e  03c0                 add eax, eax
// 0072e7a0  50                   push eax
// 0072e7a1  51                   push ecx
// 0072e7a2  57                   push edi
// 0072e7a3  55                   push ebp
// 0072e7a4  e86730cdff           call 0x401810
// 0072e7a9  8b4e08               mov ecx, dword ptr [esi + 8]
// 0072e7ac  8bc3                 mov eax, ebx
// 0072e7ae  2bc1                 sub eax, ecx
// 0072e7b0  8d1440               lea edx, [eax + eax*2]
// 0072e7b3  03d2                 add edx, edx
// 0072e7b5  03d2                 add edx, edx
// 0072e7b7  03d2                 add edx, edx
// 0072e7b9  52                   push edx
// 0072e7ba  8d0449               lea eax, [ecx + ecx*2]
// 0072e7bd  8d4cc500             lea ecx, [ebp + eax*8]
// 0072e7c1  6a00                 push 0
// 0072e7c3  51                   push ecx
// 0072e7c4  e83b2ff7ff           call 0x6a1704
// 0072e7c9  8b5604               mov edx, dword ptr [esi + 4]
// 0072e7cc  52                   push edx
// 0072e7cd  e87821f7ff           call 0x6a094a
// 0072e7d2  8b442438             mov eax, dword ptr [esp + 0x38]
// 0072e7d6  83c424               add esp, 0x24
// 0072e7d9  896e04               mov dword ptr [esi + 4], ebp
// 0072e7dc  89460c               mov dword ptr [esi + 0xc], eax
// 0072e7df  5d                   pop ebp
// 0072e7e0  5f                   pop edi
// 0072e7e1  895e08               mov dword ptr [esi + 8], ebx
// 0072e7e4  5e                   pop esi
// 0072e7e5  5b                   pop ebx
// 0072e7e6  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetSize@?$CArray@UGALLERYITEM_POSITION@CXTPControlGallery@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
