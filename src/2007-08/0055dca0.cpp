// roc 2007-08 0055dca0  unit: RBX::DataModel  size: 498 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055dca0
//
// 0055dca0  83ec0c               sub esp, 0xc
// 0055dca3  56                   push esi
// 0055dca4  8bf1                 mov esi, ecx
// 0055dca6  837e0800             cmp dword ptr [esi + 8], 0
// 0055dcaa  57                   push edi
// 0055dcab  7521                 jne 0x55dcce
// 0055dcad  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055dcb1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055dcb4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0055dcb8  50                   push eax
// 0055dcb9  51                   push ecx
// 0055dcba  6a01                 push 1
// 0055dcbc  57                   push edi
// 0055dcbd  8bce                 mov ecx, esi
// 0055dcbf  e8ecfcffff           call 0x55d9b0
// 0055dcc4  8bc7                 mov eax, edi
// 0055dcc6  5f                   pop edi
// 0055dcc7  5e                   pop esi
// 0055dcc8  83c40c               add esp, 0xc
// 0055dccb  c21000               ret 0x10
// 0055dcce  8b5604               mov edx, dword ptr [esi + 4]
// 0055dcd1  8b3a                 mov edi, dword ptr [edx]
// 0055dcd3  55                   push ebp
// 0055dcd4  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0055dcd8  85ed                 test ebp, ebp
// 0055dcda  7404                 je 0x55dce0
// 0055dcdc  3bee                 cmp ebp, esi
// 0055dcde  7406                 je 0x55dce6
// 0055dce0  ff15d8e67700         call dword ptr [0x77e6d8]
// 0055dce6  53                   push ebx
// 0055dce7  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0055dceb  3bdf                 cmp ebx, edi
// 0055dced  7533                 jne 0x55dd22
// 0055dcef  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0055dcf3  8d430c               lea eax, [ebx + 0xc]
// 0055dcf6  50                   push eax
// 0055dcf7  8bcf                 mov ecx, edi
// 0055dcf9  e812fa0200           call 0x58d710
// 0055dcfe  84c0                 test al, al
// 0055dd00  0f8465010000         je 0x55de6b
// 0055dd06  57                   push edi
// 0055dd07  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0055dd0b  53                   push ebx
// 0055dd0c  6a01                 push 1
// 0055dd0e  57                   push edi
// 0055dd0f  8bce                 mov ecx, esi
// 0055dd11  e89afcffff           call 0x55d9b0
// 0055dd16  5b                   pop ebx
// 0055dd17  5d                   pop ebp
// 0055dd18  8bc7                 mov eax, edi
// 0055dd1a  5f                   pop edi
// 0055dd1b  5e                   pop esi
// 0055dd1c  83c40c               add esp, 0xc
// 0055dd1f  c21000               ret 0x10
// 0055dd22  85ed                 test ebp, ebp
// 0055dd24  8b7e04               mov edi, dword ptr [esi + 4]
// 0055dd27  7404                 je 0x55dd2d
// 0055dd29  3bee                 cmp ebp, esi
// 0055dd2b  7406                 je 0x55dd33
// 0055dd2d  ff15d8e67700         call dword ptr [0x77e6d8]
// 0055dd33  3bdf                 cmp ebx, edi
// 0055dd35  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0055dd39  7539                 jne 0x55dd74
// 0055dd3b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055dd3e  8b4908               mov ecx, dword ptr [ecx + 8]
// 0055dd41  83c10c               add ecx, 0xc
// 0055dd44  57                   push edi
// 0055dd45  e8c6f90200           call 0x58d710
// 0055dd4a  84c0                 test al, al
// 0055dd4c  0f8419010000         je 0x55de6b
// 0055dd52  8b5604               mov edx, dword ptr [esi + 4]
// 0055dd55  8b4208               mov eax, dword ptr [edx + 8]
// 0055dd58  57                   push edi
// 0055dd59  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0055dd5d  50                   push eax
// 0055dd5e  6a00                 push 0
// 0055dd60  57                   push edi
// 0055dd61  8bce                 mov ecx, esi
// 0055dd63  e848fcffff           call 0x55d9b0
// 0055dd68  5b                   pop ebx
// 0055dd69  5d                   pop ebp
// 0055dd6a  8bc7                 mov eax, edi
// 0055dd6c  5f                   pop edi
// 0055dd6d  5e                   pop esi
// 0055dd6e  83c40c               add esp, 0xc
// 0055dd71  c21000               ret 0x10
// 0055dd74  8d430c               lea eax, [ebx + 0xc]
// 0055dd77  50                   push eax
// 0055dd78  8bcf                 mov ecx, edi
// 0055dd7a  e891f90200           call 0x58d710
// 0055dd7f  84c0                 test al, al
// 0055dd81  7460                 je 0x55dde3
// 0055dd83  8d4c2424             lea ecx, [esp + 0x24]
// 0055dd87  896c2424             mov dword ptr [esp + 0x24], ebp
// 0055dd8b  895c2428             mov dword ptr [esp + 0x28], ebx
// 0055dd8f  e89c9e0200           call 0x587c30
// 0055dd94  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055dd98  57                   push edi
// 0055dd99  83c10c               add ecx, 0xc
// 0055dd9c  e86ff90200           call 0x58d710
// 0055dda1  84c0                 test al, al
// 0055dda3  743e                 je 0x55dde3
// 0055dda5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0055dda9  8b4808               mov ecx, dword ptr [eax + 8]
// 0055ddac  80791900             cmp byte ptr [ecx + 0x19], 0
// 0055ddb0  57                   push edi
// 0055ddb1  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0055ddb5  8bce                 mov ecx, esi
// 0055ddb7  7415                 je 0x55ddce
// 0055ddb9  50                   push eax
// 0055ddba  6a00                 push 0
// 0055ddbc  57                   push edi
// 0055ddbd  e8eefbffff           call 0x55d9b0
// 0055ddc2  5b                   pop ebx
// 0055ddc3  5d                   pop ebp
// 0055ddc4  8bc7                 mov eax, edi
// 0055ddc6  5f                   pop edi
// 0055ddc7  5e                   pop esi
// 0055ddc8  83c40c               add esp, 0xc
// 0055ddcb  c21000               ret 0x10
// 0055ddce  53                   push ebx
// 0055ddcf  6a01                 push 1
// 0055ddd1  57                   push edi
// 0055ddd2  e8d9fbffff           call 0x55d9b0
// 0055ddd7  5b                   pop ebx
// 0055ddd8  5d                   pop ebp
// 0055ddd9  8bc7                 mov eax, edi
// 0055dddb  5f                   pop edi
// 0055dddc  5e                   pop esi
// 0055dddd  83c40c               add esp, 0xc
// 0055dde0  c21000               ret 0x10
// 0055dde3  57                   push edi
// 0055dde4  8d4b0c               lea ecx, [ebx + 0xc]
// 0055dde7  e824f90200           call 0x58d710
// 0055ddec  84c0                 test al, al
// 0055ddee  747b                 je 0x55de6b
// 0055ddf0  8b5604               mov edx, dword ptr [esi + 4]
// 0055ddf3  8d4c2424             lea ecx, [esp + 0x24]
// 0055ddf7  896c2424             mov dword ptr [esp + 0x24], ebp
// 0055ddfb  895c2428             mov dword ptr [esp + 0x28], ebx
// 0055ddff  89542414             mov dword ptr [esp + 0x14], edx
// 0055de03  89742410             mov dword ptr [esp + 0x10], esi
// 0055de07  e8b49e0200           call 0x587cc0
// 0055de0c  8d442410             lea eax, [esp + 0x10]
// 0055de10  50                   push eax
// 0055de11  8d4c2428             lea ecx, [esp + 0x28]
// 0055de15  e8968cf0ff           call 0x466ab0
// 0055de1a  84c0                 test al, al
// 0055de1c  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0055de20  750f                 jne 0x55de31
// 0055de22  8d4d0c               lea ecx, [ebp + 0xc]
// 0055de25  51                   push ecx
// 0055de26  8bcf                 mov ecx, edi
// 0055de28  e8e3f80200           call 0x58d710
// 0055de2d  84c0                 test al, al
// 0055de2f  743a                 je 0x55de6b
// 0055de31  8b5308               mov edx, dword ptr [ebx + 8]
// 0055de34  807a1900             cmp byte ptr [edx + 0x19], 0
// 0055de38  57                   push edi
// 0055de39  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0055de3d  8bce                 mov ecx, esi
// 0055de3f  7415                 je 0x55de56
// 0055de41  53                   push ebx
// 0055de42  6a00                 push 0
// 0055de44  57                   push edi
// 0055de45  e866fbffff           call 0x55d9b0
// 0055de4a  5b                   pop ebx
// 0055de4b  5d                   pop ebp
// 0055de4c  8bc7                 mov eax, edi
// 0055de4e  5f                   pop edi
// 0055de4f  5e                   pop esi
// 0055de50  83c40c               add esp, 0xc
// 0055de53  c21000               ret 0x10
// 0055de56  55                   push ebp
// 0055de57  6a01                 push 1
// 0055de59  57                   push edi
// 0055de5a  e851fbffff           call 0x55d9b0
// 0055de5f  5b                   pop ebx
// 0055de60  5d                   pop ebp
// 0055de61  8bc7                 mov eax, edi
// 0055de63  5f                   pop edi
// 0055de64  5e                   pop esi
// 0055de65  83c40c               add esp, 0xc
// 0055de68  c21000               ret 0x10
// 0055de6b  57                   push edi
// 0055de6c  8d442414             lea eax, [esp + 0x14]
// 0055de70  50                   push eax
// 0055de71  8bce                 mov ecx, esi
// 0055de73  e838fdffff           call 0x55dbb0
// 0055de78  8b10                 mov edx, dword ptr [eax]
// 0055de7a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055de7e  5b                   pop ebx
// 0055de7f  5d                   pop ebp
// 0055de80  8911                 mov dword ptr [ecx], edx
// 0055de82  8b4004               mov eax, dword ptr [eax + 4]
// 0055de85  5f                   pop edi
// 0055de86  894104               mov dword ptr [ecx + 4], eax
// 0055de89  8bc1                 mov eax, ecx
// 0055de8b  5e                   pop esi
// 0055de8c  83c40c               add esp, 0xc
// 0055de8f  c21000               ret 0x10
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
