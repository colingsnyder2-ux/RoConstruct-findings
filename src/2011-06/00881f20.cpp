// from server: 100% by auto
// roc 2011-06 00881f20  unit: CXTPControlGalleryPaintManager  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881f20
//
// 00881f20  53                   push ebx
// 00881f21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00881f25  56                   push esi
// 00881f26  57                   push edi
// 00881f27  33ff                 xor edi, edi
// 00881f29  3bdf                 cmp ebx, edi
// 00881f2b  8bf1                 mov esi, ecx
// 00881f2d  7d05                 jge 0x881f34
// 00881f2f  e8d683f8ff           call 0x80a30a
// 00881f34  8b442414             mov eax, dword ptr [esp + 0x14]
// 00881f38  3bc7                 cmp eax, edi
// 00881f3a  7c03                 jl 0x881f3f
// 00881f3c  894610               mov dword ptr [esi + 0x10], eax
// 00881f3f  3bdf                 cmp ebx, edi
// 00881f41  751f                 jne 0x881f62
// 00881f43  8b4604               mov eax, dword ptr [esi + 4]
// 00881f46  3bc7                 cmp eax, edi
// 00881f48  740c                 je 0x881f56
// 00881f4a  50                   push eax
// 00881f4b  e8b483f8ff           call 0x80a304
// 00881f50  83c404               add esp, 4
// 00881f53  897e04               mov dword ptr [esi + 4], edi
// 00881f56  897e0c               mov dword ptr [esi + 0xc], edi
// 00881f59  897e08               mov dword ptr [esi + 8], edi
// 00881f5c  5f                   pop edi
// 00881f5d  5e                   pop esi
// 00881f5e  5b                   pop ebx
// 00881f5f  c20800               ret 8
// 00881f62  8b5604               mov edx, dword ptr [esi + 4]
// 00881f65  55                   push ebp
// 00881f66  3bd7                 cmp edx, edi
// 00881f68  7535                 jne 0x881f9f
// 00881f6a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00881f6d  3bdd                 cmp ebx, ebp
// 00881f6f  7e02                 jle 0x881f73
// 00881f71  8beb                 mov ebp, ebx
// 00881f73  8d7c6d00             lea edi, [ebp + ebp*2]
// 00881f77  03ff                 add edi, edi
// 00881f79  03ff                 add edi, edi
// 00881f7b  03ff                 add edi, edi
// 00881f7d  57                   push edi
// 00881f7e  e8bd83f8ff           call 0x80a340
// 00881f83  57                   push edi
// 00881f84  6a00                 push 0
// 00881f86  50                   push eax
// 00881f87  894604               mov dword ptr [esi + 4], eax
// 00881f8a  e85593f8ff           call 0x80b2e4
// 00881f8f  83c410               add esp, 0x10
// 00881f92  896e0c               mov dword ptr [esi + 0xc], ebp
// 00881f95  5d                   pop ebp
// 00881f96  5f                   pop edi
// 00881f97  895e08               mov dword ptr [esi + 8], ebx
// 00881f9a  5e                   pop esi
// 00881f9b  5b                   pop ebx
// 00881f9c  c20800               ret 8
// 00881f9f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00881fa2  3bd9                 cmp ebx, ecx
// 00881fa4  7f33                 jg 0x881fd9
// 00881fa6  8b4e08               mov ecx, dword ptr [esi + 8]
// 00881fa9  3bd9                 cmp ebx, ecx
// 00881fab  0f8ece000000         jle 0x88207f
// 00881fb1  8bc3                 mov eax, ebx
// 00881fb3  2bc1                 sub eax, ecx
// 00881fb5  8d0440               lea eax, [eax + eax*2]
// 00881fb8  03c0                 add eax, eax
// 00881fba  03c0                 add eax, eax
// 00881fbc  03c0                 add eax, eax
// 00881fbe  50                   push eax
// 00881fbf  8d0c49               lea ecx, [ecx + ecx*2]
// 00881fc2  8d14ca               lea edx, [edx + ecx*8]
// 00881fc5  57                   push edi
// 00881fc6  52                   push edx
// 00881fc7  e81893f8ff           call 0x80b2e4
// 00881fcc  83c40c               add esp, 0xc
// 00881fcf  5d                   pop ebp
// 00881fd0  5f                   pop edi
// 00881fd1  895e08               mov dword ptr [esi + 8], ebx
// 00881fd4  5e                   pop esi
// 00881fd5  5b                   pop ebx
// 00881fd6  c20800               ret 8
// 00881fd9  8b4610               mov eax, dword ptr [esi + 0x10]
// 00881fdc  3bc7                 cmp eax, edi
// 00881fde  7524                 jne 0x882004
// 00881fe0  8b4608               mov eax, dword ptr [esi + 8]
// 00881fe3  99                   cdq 
// 00881fe4  83e207               and edx, 7
// 00881fe7  03c2                 add eax, edx
// 00881fe9  c1f803               sar eax, 3
// 00881fec  83f804               cmp eax, 4
// 00881fef  7d07                 jge 0x881ff8
// 00881ff1  b804000000           mov eax, 4
// 00881ff6  eb0c                 jmp 0x882004
// 00881ff8  3d00040000           cmp eax, 0x400
// 00881ffd  7e05                 jle 0x882004
// 00881fff  b800040000           mov eax, 0x400
// 00882004  8d3c01               lea edi, [ecx + eax]
// 00882007  3bdf                 cmp ebx, edi
// 00882009  7d06                 jge 0x882011
// 0088200b  897c2414             mov dword ptr [esp + 0x14], edi
// 0088200f  eb06                 jmp 0x882017
// 00882011  895c2414             mov dword ptr [esp + 0x14], ebx
// 00882015  8bfb                 mov edi, ebx
// 00882017  3bf9                 cmp edi, ecx
// 00882019  7d05                 jge 0x882020
// 0088201b  e8ea82f8ff           call 0x80a30a
// 00882020  8d3c7f               lea edi, [edi + edi*2]
// 00882023  03ff                 add edi, edi
// 00882025  03ff                 add edi, edi
// 00882027  03ff                 add edi, edi
// 00882029  57                   push edi
// 0088202a  e81183f8ff           call 0x80a340
// 0088202f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00882032  8be8                 mov ebp, eax
// 00882034  8b4608               mov eax, dword ptr [esi + 8]
// 00882037  8d0440               lea eax, [eax + eax*2]
// 0088203a  03c0                 add eax, eax
// 0088203c  03c0                 add eax, eax
// 0088203e  03c0                 add eax, eax
// 00882040  50                   push eax
// 00882041  51                   push ecx
// 00882042  57                   push edi
// 00882043  55                   push ebp
// 00882044  e87715b8ff           call 0x4035c0
// 00882049  8b4e08               mov ecx, dword ptr [esi + 8]
// 0088204c  8bc3                 mov eax, ebx
// 0088204e  2bc1                 sub eax, ecx
// 00882050  8d1440               lea edx, [eax + eax*2]
// 00882053  03d2                 add edx, edx
// 00882055  03d2                 add edx, edx
// 00882057  03d2                 add edx, edx
// 00882059  52                   push edx
// 0088205a  8d0449               lea eax, [ecx + ecx*2]
// 0088205d  8d4cc500             lea ecx, [ebp + eax*8]
// 00882061  6a00                 push 0
// 00882063  51                   push ecx
// 00882064  e87b92f8ff           call 0x80b2e4
// 00882069  8b5604               mov edx, dword ptr [esi + 4]
// 0088206c  52                   push edx
// 0088206d  e89282f8ff           call 0x80a304
// 00882072  8b442438             mov eax, dword ptr [esp + 0x38]
// 00882076  83c424               add esp, 0x24
// 00882079  896e04               mov dword ptr [esi + 4], ebp
// 0088207c  89460c               mov dword ptr [esi + 0xc], eax
// 0088207f  5d                   pop ebp
// 00882080  5f                   pop edi
// 00882081  895e08               mov dword ptr [esi + 8], ebx
// 00882084  5e                   pop esi
// 00882085  5b                   pop ebx
// 00882086  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlGallery.cpp (function ?SetSize@?$CArray@UGALLERYITEM_POSITION@CXTPControlGallery@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlGallery.cpp
