// roc 2007-03 0056f400  unit: seg_00560000  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056f400
//
// 0056f400  83ec0c               sub esp, 0xc
// 0056f403  56                   push esi
// 0056f404  8bf1                 mov esi, ecx
// 0056f406  837e0800             cmp dword ptr [esi + 8], 0
// 0056f40a  57                   push edi
// 0056f40b  7521                 jne 0x56f42e
// 0056f40d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056f411  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056f414  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0056f418  50                   push eax
// 0056f419  51                   push ecx
// 0056f41a  6a01                 push 1
// 0056f41c  57                   push edi
// 0056f41d  8bce                 mov ecx, esi
// 0056f41f  e82c88ffff           call 0x567c50
// 0056f424  8bc7                 mov eax, edi
// 0056f426  5f                   pop edi
// 0056f427  5e                   pop esi
// 0056f428  83c40c               add esp, 0xc
// 0056f42b  c21000               ret 0x10
// 0056f42e  8b5604               mov edx, dword ptr [esi + 4]
// 0056f431  8b3a                 mov edi, dword ptr [edx]
// 0056f433  55                   push ebp
// 0056f434  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0056f438  85ed                 test ebp, ebp
// 0056f43a  7404                 je 0x56f440
// 0056f43c  3bee                 cmp ebp, esi
// 0056f43e  7406                 je 0x56f446
// 0056f440  ff1544e97700         call dword ptr [0x77e944]
// 0056f446  53                   push ebx
// 0056f447  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0056f44b  3bdf                 cmp ebx, edi
// 0056f44d  7536                 jne 0x56f485
// 0056f44f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0056f453  8d430c               lea eax, [ebx + 0xc]
// 0056f456  50                   push eax
// 0056f457  57                   push edi
// 0056f458  ff15e0e67700         call dword ptr [0x77e6e0]
// 0056f45e  83c408               add esp, 8
// 0056f461  84c0                 test al, al
// 0056f463  0f8476010000         je 0x56f5df
// 0056f469  57                   push edi
// 0056f46a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056f46e  53                   push ebx
// 0056f46f  6a01                 push 1
// 0056f471  57                   push edi
// 0056f472  8bce                 mov ecx, esi
// 0056f474  e8d787ffff           call 0x567c50
// 0056f479  5b                   pop ebx
// 0056f47a  5d                   pop ebp
// 0056f47b  8bc7                 mov eax, edi
// 0056f47d  5f                   pop edi
// 0056f47e  5e                   pop esi
// 0056f47f  83c40c               add esp, 0xc
// 0056f482  c21000               ret 0x10
// 0056f485  85ed                 test ebp, ebp
// 0056f487  8b7e04               mov edi, dword ptr [esi + 4]
// 0056f48a  7404                 je 0x56f490
// 0056f48c  3bee                 cmp ebp, esi
// 0056f48e  7406                 je 0x56f496
// 0056f490  ff1544e97700         call dword ptr [0x77e944]
// 0056f496  3bdf                 cmp ebx, edi
// 0056f498  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0056f49c  753e                 jne 0x56f4dc
// 0056f49e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056f4a1  8b4108               mov eax, dword ptr [ecx + 8]
// 0056f4a4  83c00c               add eax, 0xc
// 0056f4a7  57                   push edi
// 0056f4a8  50                   push eax
// 0056f4a9  ff15e0e67700         call dword ptr [0x77e6e0]
// 0056f4af  83c408               add esp, 8
// 0056f4b2  84c0                 test al, al
// 0056f4b4  0f8425010000         je 0x56f5df
// 0056f4ba  8b5604               mov edx, dword ptr [esi + 4]
// 0056f4bd  8b4208               mov eax, dword ptr [edx + 8]
// 0056f4c0  57                   push edi
// 0056f4c1  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056f4c5  50                   push eax
// 0056f4c6  6a00                 push 0
// 0056f4c8  57                   push edi
// 0056f4c9  8bce                 mov ecx, esi
// 0056f4cb  e88087ffff           call 0x567c50
// 0056f4d0  5b                   pop ebx
// 0056f4d1  5d                   pop ebp
// 0056f4d2  8bc7                 mov eax, edi
// 0056f4d4  5f                   pop edi
// 0056f4d5  5e                   pop esi
// 0056f4d6  83c40c               add esp, 0xc
// 0056f4d9  c21000               ret 0x10
// 0056f4dc  8d430c               lea eax, [ebx + 0xc]
// 0056f4df  50                   push eax
// 0056f4e0  57                   push edi
// 0056f4e1  ff15e0e67700         call dword ptr [0x77e6e0]
// 0056f4e7  83c408               add esp, 8
// 0056f4ea  84c0                 test al, al
// 0056f4ec  7463                 je 0x56f551
// 0056f4ee  8d4c2424             lea ecx, [esp + 0x24]
// 0056f4f2  896c2424             mov dword ptr [esp + 0x24], ebp
// 0056f4f6  895c2428             mov dword ptr [esp + 0x28], ebx
// 0056f4fa  e8018c0800           call 0x5f8100
// 0056f4ff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056f503  83c10c               add ecx, 0xc
// 0056f506  57                   push edi
// 0056f507  51                   push ecx
// 0056f508  8bce                 mov ecx, esi
// 0056f50a  e8a14fedff           call 0x4444b0
// 0056f50f  84c0                 test al, al
// 0056f511  743e                 je 0x56f551
// 0056f513  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056f517  8b5008               mov edx, dword ptr [eax + 8]
// 0056f51a  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 0056f51e  57                   push edi
// 0056f51f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056f523  8bce                 mov ecx, esi
// 0056f525  7415                 je 0x56f53c
// 0056f527  50                   push eax
// 0056f528  6a00                 push 0
// 0056f52a  57                   push edi
// 0056f52b  e82087ffff           call 0x567c50
// 0056f530  5b                   pop ebx
// 0056f531  5d                   pop ebp
// 0056f532  8bc7                 mov eax, edi
// 0056f534  5f                   pop edi
// 0056f535  5e                   pop esi
// 0056f536  83c40c               add esp, 0xc
// 0056f539  c21000               ret 0x10
// 0056f53c  53                   push ebx
// 0056f53d  6a01                 push 1
// 0056f53f  57                   push edi
// 0056f540  e80b87ffff           call 0x567c50
// 0056f545  5b                   pop ebx
// 0056f546  5d                   pop ebp
// 0056f547  8bc7                 mov eax, edi
// 0056f549  5f                   pop edi
// 0056f54a  5e                   pop esi
// 0056f54b  83c40c               add esp, 0xc
// 0056f54e  c21000               ret 0x10
// 0056f551  8d430c               lea eax, [ebx + 0xc]
// 0056f554  57                   push edi
// 0056f555  50                   push eax
// 0056f556  ff15e0e67700         call dword ptr [0x77e6e0]
// 0056f55c  83c408               add esp, 8
// 0056f55f  84c0                 test al, al
// 0056f561  747c                 je 0x56f5df
// 0056f563  8b4604               mov eax, dword ptr [esi + 4]
// 0056f566  8d4c2424             lea ecx, [esp + 0x24]
// 0056f56a  896c2424             mov dword ptr [esp + 0x24], ebp
// 0056f56e  895c2428             mov dword ptr [esp + 0x28], ebx
// 0056f572  89442414             mov dword ptr [esp + 0x14], eax
// 0056f576  89742410             mov dword ptr [esp + 0x10], esi
// 0056f57a  e8f1e0fbff           call 0x52d670
// 0056f57f  8d4c2410             lea ecx, [esp + 0x10]
// 0056f583  51                   push ecx
// 0056f584  8d4c2428             lea ecx, [esp + 0x28]
// 0056f588  e8d3c6edff           call 0x44bc60
// 0056f58d  84c0                 test al, al
// 0056f58f  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0056f593  7510                 jne 0x56f5a5
// 0056f595  8d550c               lea edx, [ebp + 0xc]
// 0056f598  52                   push edx
// 0056f599  57                   push edi
// 0056f59a  8bce                 mov ecx, esi
// 0056f59c  e80f4fedff           call 0x4444b0
// 0056f5a1  84c0                 test al, al
// 0056f5a3  743a                 je 0x56f5df
// 0056f5a5  8b4308               mov eax, dword ptr [ebx + 8]
// 0056f5a8  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0056f5ac  57                   push edi
// 0056f5ad  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056f5b1  8bce                 mov ecx, esi
// 0056f5b3  7415                 je 0x56f5ca
// 0056f5b5  53                   push ebx
// 0056f5b6  6a00                 push 0
// 0056f5b8  57                   push edi
// 0056f5b9  e89286ffff           call 0x567c50
// 0056f5be  5b                   pop ebx
// 0056f5bf  5d                   pop ebp
// 0056f5c0  8bc7                 mov eax, edi
// 0056f5c2  5f                   pop edi
// 0056f5c3  5e                   pop esi
// 0056f5c4  83c40c               add esp, 0xc
// 0056f5c7  c21000               ret 0x10
// 0056f5ca  55                   push ebp
// 0056f5cb  6a01                 push 1
// 0056f5cd  57                   push edi
// 0056f5ce  e87d86ffff           call 0x567c50
// 0056f5d3  5b                   pop ebx
// 0056f5d4  5d                   pop ebp
// 0056f5d5  8bc7                 mov eax, edi
// 0056f5d7  5f                   pop edi
// 0056f5d8  5e                   pop esi
// 0056f5d9  83c40c               add esp, 0xc
// 0056f5dc  c21000               ret 0x10
// 0056f5df  57                   push edi
// 0056f5e0  8d4c2414             lea ecx, [esp + 0x14]
// 0056f5e4  51                   push ecx
// 0056f5e5  8bce                 mov ecx, esi
// 0056f5e7  e8e43cfdff           call 0x5432d0
// 0056f5ec  8b10                 mov edx, dword ptr [eax]
// 0056f5ee  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056f5f2  5b                   pop ebx
// 0056f5f3  5d                   pop ebp
// 0056f5f4  8911                 mov dword ptr [ecx], edx
// 0056f5f6  8b4004               mov eax, dword ptr [eax + 4]
// 0056f5f9  5f                   pop edi
// 0056f5fa  894104               mov dword ptr [ecx + 4], eax
// 0056f5fd  8bc1                 mov eax, ecx
// 0056f5ff  5e                   pop esi
// 0056f600  83c40c               add esp, 0xc
// 0056f603  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
