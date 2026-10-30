// roc 2007-03 0054c600  unit: seg_00540000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054c600
//
// 0054c600  51                   push ecx
// 0054c601  56                   push esi
// 0054c602  8bf1                 mov esi, ecx
// 0054c604  8b4620               mov eax, dword ptr [esi + 0x20]
// 0054c607  833800               cmp dword ptr [eax], 0
// 0054c60a  7507                 jne 0x54c613
// 0054c60c  8b16                 mov edx, dword ptr [esi]
// 0054c60e  8b4254               mov eax, dword ptr [edx + 0x54]
// 0054c611  ffd0                 call eax
// 0054c613  8b4620               mov eax, dword ptr [esi + 0x20]
// 0054c616  8b08                 mov ecx, dword ptr [eax]
// 0054c618  8b5630               mov edx, dword ptr [esi + 0x30]
// 0054c61b  8b12                 mov edx, dword ptr [edx]
// 0054c61d  03d1                 add edx, ecx
// 0054c61f  3bca                 cmp ecx, edx
// 0054c621  8bc1                 mov eax, ecx
// 0054c623  7306                 jae 0x54c62b
// 0054c625  0fb600               movzx eax, byte ptr [eax]
// 0054c628  5e                   pop esi
// 0054c629  59                   pop ecx
// 0054c62a  c3                   ret 
// 0054c62b  8b5610               mov edx, dword ptr [esi + 0x10]
// 0054c62e  2b02                 sub eax, dword ptr [edx]
// 0054c630  53                   push ebx
// 0054c631  394650               cmp dword ptr [esi + 0x50], eax
// 0054c634  8d5e50               lea ebx, [esi + 0x50]
// 0054c637  89442408             mov dword ptr [esp + 8], eax
// 0054c63b  57                   push edi
// 0054c63c  8bc3                 mov eax, ebx
// 0054c63e  7c04                 jl 0x54c644
// 0054c640  8d44240c             lea eax, [esp + 0xc]
// 0054c644  8b38                 mov edi, dword ptr [eax]
// 0054c646  85ff                 test edi, edi
// 0054c648  7416                 je 0x54c660
// 0054c64a  8b03                 mov eax, dword ptr [ebx]
// 0054c64c  57                   push edi
// 0054c64d  2bcf                 sub ecx, edi
// 0054c64f  51                   push ecx
// 0054c650  2bc7                 sub eax, edi
// 0054c652  034648               add eax, dword ptr [esi + 0x48]
// 0054c655  57                   push edi
// 0054c656  50                   push eax
// 0054c657  ff1578e97700         call dword ptr [0x77e978]
// 0054c65d  83c410               add esp, 0x10
// 0054c660  8b0b                 mov ecx, dword ptr [ebx]
// 0054c662  8b5648               mov edx, dword ptr [esi + 0x48]
// 0054c665  8d0411               lea eax, [ecx + edx]
// 0054c668  8b5610               mov edx, dword ptr [esi + 0x10]
// 0054c66b  8bc8                 mov ecx, eax
// 0054c66d  2bcf                 sub ecx, edi
// 0054c66f  890a                 mov dword ptr [edx], ecx
// 0054c671  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0054c674  8901                 mov dword ptr [ecx], eax
// 0054c676  8bd0                 mov edx, eax
// 0054c678  2bd0                 sub edx, eax
// 0054c67a  8b4630               mov eax, dword ptr [esi + 0x30]
// 0054c67d  8910                 mov dword ptr [eax], edx
// 0054c67f  8b03                 mov eax, dword ptr [ebx]
// 0054c681  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0054c684  034648               add eax, dword ptr [esi + 0x48]
// 0054c687  8b09                 mov ecx, dword ptr [ecx]
// 0054c689  8b5630               mov edx, dword ptr [esi + 0x30]
// 0054c68c  5f                   pop edi
// 0054c68d  2bc1                 sub eax, ecx
// 0054c68f  5b                   pop ebx
// 0054c690  8902                 mov dword ptr [edx], eax
// 0054c692  83c8ff               or eax, 0xffffffff
// 0054c695  5e                   pop esi
// 0054c696  59                   pop ecx
// 0054c697  c3                   ret 
// copied from an identical function in another client (function ?underflow@?$indirect_streambuf@U?$basic_null_source@D@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp