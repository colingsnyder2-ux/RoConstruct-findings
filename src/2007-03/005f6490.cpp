// roc 2007-03 005f6490  unit: seg_005f0000  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f6490
//
// 005f6490  83ec0c               sub esp, 0xc
// 005f6493  56                   push esi
// 005f6494  8bf1                 mov esi, ecx
// 005f6496  837e0800             cmp dword ptr [esi + 8], 0
// 005f649a  57                   push edi
// 005f649b  7521                 jne 0x5f64be
// 005f649d  8b442424             mov eax, dword ptr [esp + 0x24]
// 005f64a1  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f64a4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005f64a8  50                   push eax
// 005f64a9  51                   push ecx
// 005f64aa  6a01                 push 1
// 005f64ac  57                   push edi
// 005f64ad  8bce                 mov ecx, esi
// 005f64af  e8dcf8ffff           call 0x5f5d90
// 005f64b4  8bc7                 mov eax, edi
// 005f64b6  5f                   pop edi
// 005f64b7  5e                   pop esi
// 005f64b8  83c40c               add esp, 0xc
// 005f64bb  c21000               ret 0x10
// 005f64be  8b5604               mov edx, dword ptr [esi + 4]
// 005f64c1  8b3a                 mov edi, dword ptr [edx]
// 005f64c3  55                   push ebp
// 005f64c4  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005f64c8  85ed                 test ebp, ebp
// 005f64ca  7404                 je 0x5f64d0
// 005f64cc  3bee                 cmp ebp, esi
// 005f64ce  7406                 je 0x5f64d6
// 005f64d0  ff1544e97700         call dword ptr [0x77e944]
// 005f64d6  53                   push ebx
// 005f64d7  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 005f64db  3bdf                 cmp ebx, edi
// 005f64dd  7534                 jne 0x5f6513
// 005f64df  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005f64e3  8d430c               lea eax, [ebx + 0xc]
// 005f64e6  50                   push eax
// 005f64e7  57                   push edi
// 005f64e8  8bce                 mov ecx, esi
// 005f64ea  e8f1ecffff           call 0x5f51e0
// 005f64ef  84c0                 test al, al
// 005f64f1  0f846a010000         je 0x5f6661
// 005f64f7  57                   push edi
// 005f64f8  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005f64fc  53                   push ebx
// 005f64fd  6a01                 push 1
// 005f64ff  57                   push edi
// 005f6500  8bce                 mov ecx, esi
// 005f6502  e889f8ffff           call 0x5f5d90
// 005f6507  5b                   pop ebx
// 005f6508  5d                   pop ebp
// 005f6509  8bc7                 mov eax, edi
// 005f650b  5f                   pop edi
// 005f650c  5e                   pop esi
// 005f650d  83c40c               add esp, 0xc
// 005f6510  c21000               ret 0x10
// 005f6513  85ed                 test ebp, ebp
// 005f6515  8b7e04               mov edi, dword ptr [esi + 4]
// 005f6518  7404                 je 0x5f651e
// 005f651a  3bee                 cmp ebp, esi
// 005f651c  7406                 je 0x5f6524
// 005f651e  ff1544e97700         call dword ptr [0x77e944]
// 005f6524  3bdf                 cmp ebx, edi
// 005f6526  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005f652a  7536                 jne 0x5f6562
// 005f652c  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f652f  8b5908               mov ebx, dword ptr [ecx + 8]
// 005f6532  57                   push edi
// 005f6533  8d530c               lea edx, [ebx + 0xc]
// 005f6536  52                   push edx
// 005f6537  8bce                 mov ecx, esi
// 005f6539  e8a2ecffff           call 0x5f51e0
// 005f653e  84c0                 test al, al
// 005f6540  0f841b010000         je 0x5f6661
// 005f6546  57                   push edi
// 005f6547  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005f654b  53                   push ebx
// 005f654c  6a00                 push 0
// 005f654e  57                   push edi
// 005f654f  8bce                 mov ecx, esi
// 005f6551  e83af8ffff           call 0x5f5d90
// 005f6556  5b                   pop ebx
// 005f6557  5d                   pop ebp
// 005f6558  8bc7                 mov eax, edi
// 005f655a  5f                   pop edi
// 005f655b  5e                   pop esi
// 005f655c  83c40c               add esp, 0xc
// 005f655f  c21000               ret 0x10
// 005f6562  8d430c               lea eax, [ebx + 0xc]
// 005f6565  50                   push eax
// 005f6566  57                   push edi
// 005f6567  8bce                 mov ecx, esi
// 005f6569  e872ecffff           call 0x5f51e0
// 005f656e  84c0                 test al, al
// 005f6570  7463                 je 0x5f65d5
// 005f6572  8d4c2424             lea ecx, [esp + 0x24]
// 005f6576  896c2424             mov dword ptr [esp + 0x24], ebp
// 005f657a  895c2428             mov dword ptr [esp + 0x28], ebx
// 005f657e  e8edf2ffff           call 0x5f5870
// 005f6583  8b442428             mov eax, dword ptr [esp + 0x28]
// 005f6587  57                   push edi
// 005f6588  83c00c               add eax, 0xc
// 005f658b  50                   push eax
// 005f658c  8bce                 mov ecx, esi
// 005f658e  e84decffff           call 0x5f51e0
// 005f6593  84c0                 test al, al
// 005f6595  743e                 je 0x5f65d5
// 005f6597  8b442428             mov eax, dword ptr [esp + 0x28]
// 005f659b  8b4808               mov ecx, dword ptr [eax + 8]
// 005f659e  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 005f65a2  57                   push edi
// 005f65a3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005f65a7  8bce                 mov ecx, esi
// 005f65a9  7415                 je 0x5f65c0
// 005f65ab  50                   push eax
// 005f65ac  6a00                 push 0
// 005f65ae  57                   push edi
// 005f65af  e8dcf7ffff           call 0x5f5d90
// 005f65b4  5b                   pop ebx
// 005f65b5  5d                   pop ebp
// 005f65b6  8bc7                 mov eax, edi
// 005f65b8  5f                   pop edi
// 005f65b9  5e                   pop esi
// 005f65ba  83c40c               add esp, 0xc
// 005f65bd  c21000               ret 0x10
// 005f65c0  53                   push ebx
// 005f65c1  6a01                 push 1
// 005f65c3  57                   push edi
// 005f65c4  e8c7f7ffff           call 0x5f5d90
// 005f65c9  5b                   pop ebx
// 005f65ca  5d                   pop ebp
// 005f65cb  8bc7                 mov eax, edi
// 005f65cd  5f                   pop edi
// 005f65ce  5e                   pop esi
// 005f65cf  83c40c               add esp, 0xc
// 005f65d2  c21000               ret 0x10
// 005f65d5  57                   push edi
// 005f65d6  8d430c               lea eax, [ebx + 0xc]
// 005f65d9  50                   push eax
// 005f65da  8bce                 mov ecx, esi
// 005f65dc  e8ffebffff           call 0x5f51e0
// 005f65e1  84c0                 test al, al
// 005f65e3  747c                 je 0x5f6661
// 005f65e5  8b5604               mov edx, dword ptr [esi + 4]
// 005f65e8  8d4c2424             lea ecx, [esp + 0x24]
// 005f65ec  896c2424             mov dword ptr [esp + 0x24], ebp
// 005f65f0  895c2428             mov dword ptr [esp + 0x28], ebx
// 005f65f4  89542414             mov dword ptr [esp + 0x14], edx
// 005f65f8  89742410             mov dword ptr [esp + 0x10], esi
// 005f65fc  e85fc9eeff           call 0x4e2f60
// 005f6601  8d442410             lea eax, [esp + 0x10]
// 005f6605  50                   push eax
// 005f6606  8d4c2428             lea ecx, [esp + 0x28]
// 005f660a  e85156e5ff           call 0x44bc60
// 005f660f  84c0                 test al, al
// 005f6611  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005f6615  7510                 jne 0x5f6627
// 005f6617  8d4d0c               lea ecx, [ebp + 0xc]
// 005f661a  51                   push ecx
// 005f661b  57                   push edi
// 005f661c  8bce                 mov ecx, esi
// 005f661e  e8bdebffff           call 0x5f51e0
// 005f6623  84c0                 test al, al
// 005f6625  743a                 je 0x5f6661
// 005f6627  8b5308               mov edx, dword ptr [ebx + 8]
// 005f662a  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 005f662e  57                   push edi
// 005f662f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005f6633  8bce                 mov ecx, esi
// 005f6635  7415                 je 0x5f664c
// 005f6637  53                   push ebx
// 005f6638  6a00                 push 0
// 005f663a  57                   push edi
// 005f663b  e850f7ffff           call 0x5f5d90
// 005f6640  5b                   pop ebx
// 005f6641  5d                   pop ebp
// 005f6642  8bc7                 mov eax, edi
// 005f6644  5f                   pop edi
// 005f6645  5e                   pop esi
// 005f6646  83c40c               add esp, 0xc
// 005f6649  c21000               ret 0x10
// 005f664c  55                   push ebp
// 005f664d  6a01                 push 1
// 005f664f  57                   push edi
// 005f6650  e83bf7ffff           call 0x5f5d90
// 005f6655  5b                   pop ebx
// 005f6656  5d                   pop ebp
// 005f6657  8bc7                 mov eax, edi
// 005f6659  5f                   pop edi
// 005f665a  5e                   pop esi
// 005f665b  83c40c               add esp, 0xc
// 005f665e  c21000               ret 0x10
// 005f6661  57                   push edi
// 005f6662  8d442414             lea eax, [esp + 0x14]
// 005f6666  50                   push eax
// 005f6667  8bce                 mov ecx, esi
// 005f6669  e852fcffff           call 0x5f62c0
// 005f666e  8b10                 mov edx, dword ptr [eax]
// 005f6670  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f6674  5b                   pop ebx
// 005f6675  5d                   pop ebp
// 005f6676  8911                 mov dword ptr [ecx], edx
// 005f6678  8b4004               mov eax, dword ptr [eax + 4]
// 005f667b  5f                   pop edi
// 005f667c  894104               mov dword ptr [ecx + 4], eax
// 005f667f  8bc1                 mov eax, ecx
// 005f6681  5e                   pop esi
// 005f6682  83c40c               add esp, 0xc
// 005f6685  c21000               ret 0x10
// library rbxgs/v8world\Block.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
