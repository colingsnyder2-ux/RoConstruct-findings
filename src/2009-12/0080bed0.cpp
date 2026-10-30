// roc 2009-12 0080bed0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 537 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080bed0
//
// 0080bed0  83ec08               sub esp, 8
// 0080bed3  53                   push ebx
// 0080bed4  56                   push esi
// 0080bed5  8bf1                 mov esi, ecx
// 0080bed7  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0080beda  33db                 xor ebx, ebx
// 0080bedc  3bc3                 cmp eax, ebx
// 0080bede  57                   push edi
// 0080bedf  7e36                 jle 0x80bf17
// 0080bee1  48                   dec eax
// 0080bee2  3bc3                 cmp eax, ebx
// 0080bee4  8d4e44               lea ecx, [esi + 0x44]
// 0080bee7  7c29                 jl 0x80bf12
// 0080bee9  3b4108               cmp eax, dword ptr [ecx + 8]
// 0080beec  7d24                 jge 0x80bf12
// 0080beee  8b5104               mov edx, dword ptr [ecx + 4]
// 0080bef1  8b3c82               mov edi, dword ptr [edx + eax*4]
// 0080bef4  6a01                 push 1
// 0080bef6  50                   push eax
// 0080bef7  e884130200           call 0x82d280
// 0080befc  8b4638               mov eax, dword ptr [esi + 0x38]
// 0080beff  8d4e30               lea ecx, [esi + 0x30]
// 0080bf02  57                   push edi
// 0080bf03  50                   push eax
// 0080bf04  e867ed0500           call 0x86ac70
// 0080bf09  8bc7                 mov eax, edi
// 0080bf0b  5f                   pop edi
// 0080bf0c  5e                   pop esi
// 0080bf0d  5b                   pop ebx
// 0080bf0e  83c408               add esp, 8
// 0080bf11  c3                   ret 
// 0080bf12  e8f57bfeff           call 0x7f3b0c
// 0080bf17  391e                 cmp dword ptr [esi], ebx
// 0080bf19  0f8582000000         jne 0x80bfa1
// 0080bf1f  395e04               cmp dword ptr [esi + 4], ebx
// 0080bf22  757d                 jne 0x80bfa1
// 0080bf24  8b5628               mov edx, dword ptr [esi + 0x28]
// 0080bf27  8b4624               mov eax, dword ptr [esi + 0x24]
// 0080bf2a  8d4e1c               lea ecx, [esi + 0x1c]
// 0080bf2d  51                   push ecx
// 0080bf2e  52                   push edx
// 0080bf2f  50                   push eax
// 0080bf30  53                   push ebx
// 0080bf31  e80accffff           call 0x808b40
// 0080bf36  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0080bf39  8b5624               mov edx, dword ptr [esi + 0x24]
// 0080bf3c  83c410               add esp, 0x10
// 0080bf3f  53                   push ebx
// 0080bf40  6a01                 push 1
// 0080bf42  6a01                 push 1
// 0080bf44  51                   push ecx
// 0080bf45  52                   push edx
// 0080bf46  8906                 mov dword ptr [esi], eax
// 0080bf48  ff1578b19800         call dword ptr [0x98b178]
// 0080bf4e  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0080bf51  894604               mov dword ptr [esi + 4], eax
// 0080bf54  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0080bf57  391e                 cmp dword ptr [esi], ebx
// 0080bf59  743d                 je 0x80bf98
// 0080bf5b  3bc3                 cmp eax, ebx
// 0080bf5d  7439                 je 0x80bf98
// 0080bf5f  6a18                 push 0x18
// 0080bf61  e8fa78feff           call 0x7f3860
// 0080bf66  8bf8                 mov edi, eax
// 0080bf68  897714               mov dword ptr [edi + 0x14], esi
// 0080bf6b  891f                 mov dword ptr [edi], ebx
// 0080bf6d  8b5624               mov edx, dword ptr [esi + 0x24]
// 0080bf70  8b5e28               mov ebx, dword ptr [esi + 0x28]
// 0080bf73  33c0                 xor eax, eax
// 0080bf75  33c9                 xor ecx, ecx
// 0080bf77  894704               mov dword ptr [edi + 4], eax
// 0080bf7a  894f08               mov dword ptr [edi + 8], ecx
// 0080bf7d  83c404               add esp, 4
// 0080bf80  89570c               mov dword ptr [edi + 0xc], edx
// 0080bf83  57                   push edi
// 0080bf84  8d4e30               lea ecx, [esi + 0x30]
// 0080bf87  895f10               mov dword ptr [edi + 0x10], ebx
// 0080bf8a  e841f7ffff           call 0x80b6d0
// 0080bf8f  8bc7                 mov eax, edi
// 0080bf91  5f                   pop edi
// 0080bf92  5e                   pop esi
// 0080bf93  5b                   pop ebx
// 0080bf94  83c408               add esp, 8
// 0080bf97  c3                   ret 
// 0080bf98  5f                   pop edi
// 0080bf99  5e                   pop esi
// 0080bf9a  33c0                 xor eax, eax
// 0080bf9c  5b                   pop ebx
// 0080bf9d  83c408               add esp, 8
// 0080bfa0  c3                   ret 
// 0080bfa1  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0080bfa4  8b4628               mov eax, dword ptr [esi + 0x28]
// 0080bfa7  034e2c               add ecx, dword ptr [esi + 0x2c]
// 0080bfaa  55                   push ebp
// 0080bfab  8d542410             lea edx, [esp + 0x10]
// 0080bfaf  52                   push edx
// 0080bfb0  50                   push eax
// 0080bfb1  51                   push ecx
// 0080bfb2  53                   push ebx
// 0080bfb3  895c2420             mov dword ptr [esp + 0x20], ebx
// 0080bfb7  e884cbffff           call 0x808b40
// 0080bfbc  8b5628               mov edx, dword ptr [esi + 0x28]
// 0080bfbf  83c410               add esp, 0x10
// 0080bfc2  53                   push ebx
// 0080bfc3  8bf8                 mov edi, eax
// 0080bfc5  8b4624               mov eax, dword ptr [esi + 0x24]
// 0080bfc8  03462c               add eax, dword ptr [esi + 0x2c]
// 0080bfcb  6a01                 push 1
// 0080bfcd  6a01                 push 1
// 0080bfcf  52                   push edx
// 0080bfd0  50                   push eax
// 0080bfd1  897c2428             mov dword ptr [esp + 0x28], edi
// 0080bfd5  ff1578b19800         call dword ptr [0x98b178]
// 0080bfdb  8be8                 mov ebp, eax
// 0080bfdd  3bfb                 cmp edi, ebx
// 0080bfdf  0f84fa000000         je 0x80c0df
// 0080bfe5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0080bfe9  3bfb                 cmp edi, ebx
// 0080bfeb  0f84ee000000         je 0x80c0df
// 0080bff1  395e28               cmp dword ptr [esi + 0x28], ebx
// 0080bff4  7e33                 jle 0x80c029
// 0080bff6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0080bff9  03c0                 add eax, eax
// 0080bffb  03c0                 add eax, eax
// 0080bffd  8d4900               lea ecx, [ecx]
// 0080c000  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0080c003  50                   push eax
// 0080c004  51                   push ecx
// 0080c005  57                   push edi
// 0080c006  e8db8cfeff           call 0x7f4ce6
// 0080c00b  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0080c00e  8b5624               mov edx, dword ptr [esi + 0x24]
// 0080c011  8d048d00000000       lea eax, [ecx*4]
// 0080c018  01461c               add dword ptr [esi + 0x1c], eax
// 0080c01b  03d1                 add edx, ecx
// 0080c01d  43                   inc ebx
// 0080c01e  83c40c               add esp, 0xc
// 0080c021  3b5e28               cmp ebx, dword ptr [esi + 0x28]
// 0080c024  8d3c97               lea edi, [edi + edx*4]
// 0080c027  7cd7                 jl 0x80c000
// 0080c029  85ed                 test ebp, ebp
// 0080c02b  0f84ae000000         je 0x80c0df
// 0080c031  8d7e08               lea edi, [esi + 8]
// 0080c034  55                   push ebp
// 0080c035  8bcf                 mov ecx, edi
// 0080c037  e854deffff           call 0x809e90
// 0080c03c  8b4604               mov eax, dword ptr [esi + 4]
// 0080c03f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0080c042  6a04                 push 4
// 0080c044  6a00                 push 0
// 0080c046  6a00                 push 0
// 0080c048  6a00                 push 0
// 0080c04a  6a00                 push 0
// 0080c04c  6a00                 push 0
// 0080c04e  50                   push eax
// 0080c04f  6a00                 push 0
// 0080c051  6a00                 push 0
// 0080c053  51                   push ecx
// 0080c054  ff15f8ca9800         call dword ptr [0x98caf8]
// 0080c05a  8b4710               mov eax, dword ptr [edi + 0x10]
// 0080c05d  85c0                 test eax, eax
// 0080c05f  7412                 je 0x80c073
// 0080c061  8b4f04               mov ecx, dword ptr [edi + 4]
// 0080c064  50                   push eax
// 0080c065  51                   push ecx
// 0080c066  ff154cb19800         call dword ptr [0x98b14c]
// 0080c06c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0080c073  8b16                 mov edx, dword ptr [esi]
// 0080c075  8b3d3cb19800         mov edi, dword ptr [0x98b13c]
// 0080c07b  52                   push edx
// 0080c07c  ffd7                 call edi
// 0080c07e  8b4604               mov eax, dword ptr [esi + 4]
// 0080c081  50                   push eax
// 0080c082  ffd7                 call edi
// 0080c084  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080c088  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080c08c  6a18                 push 0x18
// 0080c08e  890e                 mov dword ptr [esi], ecx
// 0080c090  896e04               mov dword ptr [esi + 4], ebp
// 0080c093  89561c               mov dword ptr [esi + 0x1c], edx
// 0080c096  e8c577feff           call 0x7f3860
// 0080c09b  8bf8                 mov edi, eax
// 0080c09d  897714               mov dword ptr [edi + 0x14], esi
// 0080c0a0  c70700000000         mov dword ptr [edi], 0
// 0080c0a6  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0080c0a9  8b4624               mov eax, dword ptr [esi + 0x24]
// 0080c0ac  8b5e28               mov ebx, dword ptr [esi + 0x28]
// 0080c0af  894f04               mov dword ptr [edi + 4], ecx
// 0080c0b2  03c1                 add eax, ecx
// 0080c0b4  33d2                 xor edx, edx
// 0080c0b6  895708               mov dword ptr [edi + 8], edx
// 0080c0b9  83c404               add esp, 4
// 0080c0bc  89470c               mov dword ptr [edi + 0xc], eax
// 0080c0bf  8d4e30               lea ecx, [esi + 0x30]
// 0080c0c2  895f10               mov dword ptr [edi + 0x10], ebx
// 0080c0c5  8b4108               mov eax, dword ptr [ecx + 8]
// 0080c0c8  57                   push edi
// 0080c0c9  50                   push eax
// 0080c0ca  e8a1eb0500           call 0x86ac70
// 0080c0cf  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0080c0d2  014e2c               add dword ptr [esi + 0x2c], ecx
// 0080c0d5  5d                   pop ebp
// 0080c0d6  8bc7                 mov eax, edi
// 0080c0d8  5f                   pop edi
// 0080c0d9  5e                   pop esi
// 0080c0da  5b                   pop ebx
// 0080c0db  83c408               add esp, 8
// 0080c0de  c3                   ret 
// 0080c0df  5d                   pop ebp
// 0080c0e0  5f                   pop edi
// 0080c0e1  5e                   pop esi
// 0080c0e2  33c0                 xor eax, eax
// 0080c0e4  5b                   pop ebx
// 0080c0e5  83c408               add esp, 8
// 0080c0e8  c3                   ret 
// copied from an identical function in another client (function ?AllocBitmap@CXTPImageManagerResource@@AAEPAUXTP_IMAGERESOURCE_INFO@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp