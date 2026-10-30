// from server: 100% by auto
// roc 2011-06 00822340  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00822340
//
// 00822340  56                   push esi
// 00822341  57                   push edi
// 00822342  8bf1                 mov esi, ecx
// 00822344  33ff                 xor edi, edi
// 00822346  397e0c               cmp dword ptr [esi + 0xc], edi
// 00822349  742e                 je 0x822379
// 0082234b  8b06                 mov eax, dword ptr [esi]
// 0082234d  3bc7                 cmp eax, edi
// 0082234f  7407                 je 0x822358
// 00822351  50                   push eax
// 00822352  ff15c81aa400         call dword ptr [0xa41ac8]
// 00822358  8b4604               mov eax, dword ptr [esi + 4]
// 0082235b  3bc7                 cmp eax, edi
// 0082235d  7407                 je 0x822366
// 0082235f  50                   push eax
// 00822360  ff159c01a400         call dword ptr [0xa4019c]
// 00822366  8b4614               mov eax, dword ptr [esi + 0x14]
// 00822369  3bc7                 cmp eax, edi
// 0082236b  740c                 je 0x822379
// 0082236d  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00822370  50                   push eax
// 00822371  e8fafeffff           call 0x822270
// 00822376  897e14               mov dword ptr [esi + 0x14], edi
// 00822379  893e                 mov dword ptr [esi], edi
// 0082237b  897e04               mov dword ptr [esi + 4], edi
// 0082237e  897e08               mov dword ptr [esi + 8], edi
// 00822381  897e14               mov dword ptr [esi + 0x14], edi
// 00822384  897e0c               mov dword ptr [esi + 0xc], edi
// 00822387  5f                   pop edi
// 00822388  5e                   pop esi
// 00822389  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Clear@CXTPImageManagerIconHandle@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
