// roc 2007-08 0050cac0  unit: G3D::BinaryInput  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050cac0
//
// 0050cac0  53                   push ebx
// 0050cac1  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0050cac5  55                   push ebp
// 0050cac6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0050caca  56                   push esi
// 0050cacb  57                   push edi
// 0050cacc  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0050cad0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0050cad4  3944241c             cmp dword ptr [esp + 0x1c], eax
// 0050cad8  750e                 jne 0x50cae8
// 0050cada  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050cade  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 0050cae2  0f8474010000         je 0x50cc5c
// 0050cae8  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0050caed  740d                 je 0x50cafc
// 0050caef  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0050caf4  8b35d8e67700         mov esi, dword ptr [0x77e6d8]
// 0050cafa  eb3f                 jmp 0x50cb3b
// 0050cafc  8b742424             mov esi, dword ptr [esp + 0x24]
// 0050cb00  85f6                 test esi, esi
// 0050cb02  7404                 je 0x50cb08
// 0050cb04  85c0                 test eax, eax
// 0050cb06  7506                 jne 0x50cb0e
// 0050cb08  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cb0e  8b7608               mov esi, dword ptr [esi + 8]
// 0050cb11  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050cb15  3b720c               cmp esi, dword ptr [edx + 0xc]
// 0050cb18  7606                 jbe 0x50cb20
// 0050cb1a  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cb20  39742428             cmp dword ptr [esp + 0x28], esi
// 0050cb24  8b35d8e67700         mov esi, dword ptr [0x77e6d8]
// 0050cb2a  7702                 ja 0x50cb2e
// 0050cb2c  ffd6                 call esi
// 0050cb2e  836c242804           sub dword ptr [esp + 0x28], 4
// 0050cb33  c744242c1f000000     mov dword ptr [esp + 0x2c], 0x1f
// 0050cb3b  837c242400           cmp dword ptr [esp + 0x24], 0
// 0050cb40  7502                 jne 0x50cb44
// 0050cb42  ffd6                 call esi
// 0050cb44  85ed                 test ebp, ebp
// 0050cb46  7405                 je 0x50cb4d
// 0050cb48  83ed01               sub ebp, 1
// 0050cb4b  eb30                 jmp 0x50cb7d
// 0050cb4d  85db                 test ebx, ebx
// 0050cb4f  7404                 je 0x50cb55
// 0050cb51  85ff                 test edi, edi
// 0050cb53  7502                 jne 0x50cb57
// 0050cb55  ffd6                 call esi
// 0050cb57  8b7308               mov esi, dword ptr [ebx + 8]
// 0050cb5a  3b730c               cmp esi, dword ptr [ebx + 0xc]
// 0050cb5d  7606                 jbe 0x50cb65
// 0050cb5f  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cb65  3bfe                 cmp edi, esi
// 0050cb67  7706                 ja 0x50cb6f
// 0050cb69  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cb6f  8b35d8e67700         mov esi, dword ptr [0x77e6d8]
// 0050cb75  83ef04               sub edi, 4
// 0050cb78  bd1f000000           mov ebp, 0x1f
// 0050cb7d  85db                 test ebx, ebx
// 0050cb7f  7502                 jne 0x50cb83
// 0050cb81  ffd6                 call esi
// 0050cb83  837c242400           cmp dword ptr [esp + 0x24], 0
// 0050cb88  7407                 je 0x50cb91
// 0050cb8a  837c242800           cmp dword ptr [esp + 0x28], 0
// 0050cb8f  7502                 jne 0x50cb93
// 0050cb91  ffd6                 call esi
// 0050cb93  8b442424             mov eax, dword ptr [esp + 0x24]
// 0050cb97  8b7008               mov esi, dword ptr [eax + 8]
// 0050cb9a  3b700c               cmp esi, dword ptr [eax + 0xc]
// 0050cb9d  7606                 jbe 0x50cba5
// 0050cb9f  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cba5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0050cba9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0050cbad  2bc6                 sub eax, esi
// 0050cbaf  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0050cbb3  c1f802               sar eax, 2
// 0050cbb6  c1e005               shl eax, 5
// 0050cbb9  03c6                 add eax, esi
// 0050cbbb  3b01                 cmp eax, dword ptr [ecx]
// 0050cbbd  7206                 jb 0x50cbc5
// 0050cbbf  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cbc5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0050cbc9  ba01000000           mov edx, 1
// 0050cbce  8bce                 mov ecx, esi
// 0050cbd0  d3e2                 shl edx, cl
// 0050cbd2  8510                 test dword ptr [eax], edx
// 0050cbd4  7442                 je 0x50cc18
// 0050cbd6  85db                 test ebx, ebx
// 0050cbd8  7404                 je 0x50cbde
// 0050cbda  85ff                 test edi, edi
// 0050cbdc  7506                 jne 0x50cbe4
// 0050cbde  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cbe4  8b7308               mov esi, dword ptr [ebx + 8]
// 0050cbe7  3b730c               cmp esi, dword ptr [ebx + 0xc]
// 0050cbea  7606                 jbe 0x50cbf2
// 0050cbec  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cbf2  8bcf                 mov ecx, edi
// 0050cbf4  2bce                 sub ecx, esi
// 0050cbf6  c1f902               sar ecx, 2
// 0050cbf9  c1e105               shl ecx, 5
// 0050cbfc  03cd                 add ecx, ebp
// 0050cbfe  3b0b                 cmp ecx, dword ptr [ebx]
// 0050cc00  7206                 jb 0x50cc08
// 0050cc02  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cc08  ba01000000           mov edx, 1
// 0050cc0d  8bcd                 mov ecx, ebp
// 0050cc0f  d3e2                 shl edx, cl
// 0050cc11  0917                 or dword ptr [edi], edx
// 0050cc13  e9b8feffff           jmp 0x50cad0
// 0050cc18  85db                 test ebx, ebx
// 0050cc1a  7404                 je 0x50cc20
// 0050cc1c  85ff                 test edi, edi
// 0050cc1e  7506                 jne 0x50cc26
// 0050cc20  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cc26  8b7308               mov esi, dword ptr [ebx + 8]
// 0050cc29  3b730c               cmp esi, dword ptr [ebx + 0xc]
// 0050cc2c  7606                 jbe 0x50cc34
// 0050cc2e  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cc34  8bc7                 mov eax, edi
// 0050cc36  2bc6                 sub eax, esi
// 0050cc38  c1f802               sar eax, 2
// 0050cc3b  c1e005               shl eax, 5
// 0050cc3e  03c5                 add eax, ebp
// 0050cc40  3b03                 cmp eax, dword ptr [ebx]
// 0050cc42  7206                 jb 0x50cc4a
// 0050cc44  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cc4a  ba01000000           mov edx, 1
// 0050cc4f  8bcd                 mov ecx, ebp
// 0050cc51  d3e2                 shl edx, cl
// 0050cc53  f7d2                 not edx
// 0050cc55  2117                 and dword ptr [edi], edx
// 0050cc57  e974feffff           jmp 0x50cad0
// 0050cc5c  85db                 test ebx, ebx
// 0050cc5e  8b742414             mov esi, dword ptr [esp + 0x14]
// 0050cc62  c70600000000         mov dword ptr [esi], 0
// 0050cc68  897e04               mov dword ptr [esi + 4], edi
// 0050cc6b  896e08               mov dword ptr [esi + 8], ebp
// 0050cc6e  7506                 jne 0x50cc76
// 0050cc70  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cc76  5f                   pop edi
// 0050cc77  891e                 mov dword ptr [esi], ebx
// 0050cc79  8bc6                 mov eax, esi
// 0050cc7b  5e                   pop esi
// 0050cc7c  5d                   pop ebp
// 0050cc7d  5b                   pop ebx
// 0050cc7e  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??$_Copy_backward_opt@V?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@V12@Uforward_iterator_tag@2@@std@@YA?AV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@0@V10@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
