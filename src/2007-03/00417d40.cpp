// roc 2007-03 00417d40  unit: seg_00410000  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00417d40
//
// 00417d40  83ec0c               sub esp, 0xc
// 00417d43  56                   push esi
// 00417d44  8bf1                 mov esi, ecx
// 00417d46  837e0800             cmp dword ptr [esi + 8], 0
// 00417d4a  57                   push edi
// 00417d4b  7521                 jne 0x417d6e
// 00417d4d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00417d51  8b4e04               mov ecx, dword ptr [esi + 4]
// 00417d54  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00417d58  50                   push eax
// 00417d59  51                   push ecx
// 00417d5a  6a01                 push 1
// 00417d5c  57                   push edi
// 00417d5d  8bce                 mov ecx, esi
// 00417d5f  e80cf2ffff           call 0x416f70
// 00417d64  8bc7                 mov eax, edi
// 00417d66  5f                   pop edi
// 00417d67  5e                   pop esi
// 00417d68  83c40c               add esp, 0xc
// 00417d6b  c21000               ret 0x10
// 00417d6e  8b5604               mov edx, dword ptr [esi + 4]
// 00417d71  8b3a                 mov edi, dword ptr [edx]
// 00417d73  55                   push ebp
// 00417d74  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00417d78  85ed                 test ebp, ebp
// 00417d7a  7404                 je 0x417d80
// 00417d7c  3bee                 cmp ebp, esi
// 00417d7e  7406                 je 0x417d86
// 00417d80  ff1544e97700         call dword ptr [0x77e944]
// 00417d86  53                   push ebx
// 00417d87  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00417d8b  3bdf                 cmp ebx, edi
// 00417d8d  752b                 jne 0x417dba
// 00417d8f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00417d93  8b07                 mov eax, dword ptr [edi]
// 00417d95  3b430c               cmp eax, dword ptr [ebx + 0xc]
// 00417d98  0f8339010000         jae 0x417ed7
// 00417d9e  57                   push edi
// 00417d9f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00417da3  53                   push ebx
// 00417da4  6a01                 push 1
// 00417da6  57                   push edi
// 00417da7  8bce                 mov ecx, esi
// 00417da9  e8c2f1ffff           call 0x416f70
// 00417dae  5b                   pop ebx
// 00417daf  5d                   pop ebp
// 00417db0  8bc7                 mov eax, edi
// 00417db2  5f                   pop edi
// 00417db3  5e                   pop esi
// 00417db4  83c40c               add esp, 0xc
// 00417db7  c21000               ret 0x10
// 00417dba  85ed                 test ebp, ebp
// 00417dbc  8b7e04               mov edi, dword ptr [esi + 4]
// 00417dbf  7404                 je 0x417dc5
// 00417dc1  3bee                 cmp ebp, esi
// 00417dc3  7406                 je 0x417dcb
// 00417dc5  ff1544e97700         call dword ptr [0x77e944]
// 00417dcb  3bdf                 cmp ebx, edi
// 00417dcd  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00417dd1  752d                 jne 0x417e00
// 00417dd3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00417dd6  8b4108               mov eax, dword ptr [ecx + 8]
// 00417dd9  8b500c               mov edx, dword ptr [eax + 0xc]
// 00417ddc  3b17                 cmp edx, dword ptr [edi]
// 00417dde  0f83f3000000         jae 0x417ed7
// 00417de4  57                   push edi
// 00417de5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00417de9  50                   push eax
// 00417dea  6a00                 push 0
// 00417dec  57                   push edi
// 00417ded  8bce                 mov ecx, esi
// 00417def  e87cf1ffff           call 0x416f70
// 00417df4  5b                   pop ebx
// 00417df5  5d                   pop ebp
// 00417df6  8bc7                 mov eax, edi
// 00417df8  5f                   pop edi
// 00417df9  5e                   pop esi
// 00417dfa  83c40c               add esp, 0xc
// 00417dfd  c21000               ret 0x10
// 00417e00  8b07                 mov eax, dword ptr [edi]
// 00417e02  39430c               cmp dword ptr [ebx + 0xc], eax
// 00417e05  765b                 jbe 0x417e62
// 00417e07  8d4c2424             lea ecx, [esp + 0x24]
// 00417e0b  896c2424             mov dword ptr [esp + 0x24], ebp
// 00417e0f  895c2428             mov dword ptr [esp + 0x28], ebx
// 00417e13  e8687d1100           call 0x52fb80
// 00417e18  8b07                 mov eax, dword ptr [edi]
// 00417e1a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00417e1e  39410c               cmp dword ptr [ecx + 0xc], eax
// 00417e21  733c                 jae 0x417e5f
// 00417e23  8b4108               mov eax, dword ptr [ecx + 8]
// 00417e26  80781500             cmp byte ptr [eax + 0x15], 0
// 00417e2a  57                   push edi
// 00417e2b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00417e2f  7417                 je 0x417e48
// 00417e31  51                   push ecx
// 00417e32  6a00                 push 0
// 00417e34  57                   push edi
// 00417e35  8bce                 mov ecx, esi
// 00417e37  e834f1ffff           call 0x416f70
// 00417e3c  5b                   pop ebx
// 00417e3d  5d                   pop ebp
// 00417e3e  8bc7                 mov eax, edi
// 00417e40  5f                   pop edi
// 00417e41  5e                   pop esi
// 00417e42  83c40c               add esp, 0xc
// 00417e45  c21000               ret 0x10
// 00417e48  53                   push ebx
// 00417e49  6a01                 push 1
// 00417e4b  57                   push edi
// 00417e4c  8bce                 mov ecx, esi
// 00417e4e  e81df1ffff           call 0x416f70
// 00417e53  5b                   pop ebx
// 00417e54  5d                   pop ebp
// 00417e55  8bc7                 mov eax, edi
// 00417e57  5f                   pop edi
// 00417e58  5e                   pop esi
// 00417e59  83c40c               add esp, 0xc
// 00417e5c  c21000               ret 0x10
// 00417e5f  39430c               cmp dword ptr [ebx + 0xc], eax
// 00417e62  7373                 jae 0x417ed7
// 00417e64  8b4e04               mov ecx, dword ptr [esi + 4]
// 00417e67  894c2414             mov dword ptr [esp + 0x14], ecx
// 00417e6b  8d4c2424             lea ecx, [esp + 0x24]
// 00417e6f  896c2424             mov dword ptr [esp + 0x24], ebp
// 00417e73  895c2428             mov dword ptr [esp + 0x28], ebx
// 00417e77  89742410             mov dword ptr [esp + 0x10], esi
// 00417e7b  e850df1900           call 0x5b5dd0
// 00417e80  8d542410             lea edx, [esp + 0x10]
// 00417e84  52                   push edx
// 00417e85  8d4c2428             lea ecx, [esp + 0x28]
// 00417e89  e8d23d0300           call 0x44bc60
// 00417e8e  84c0                 test al, al
// 00417e90  8b442428             mov eax, dword ptr [esp + 0x28]
// 00417e94  7507                 jne 0x417e9d
// 00417e96  8b0f                 mov ecx, dword ptr [edi]
// 00417e98  3b480c               cmp ecx, dword ptr [eax + 0xc]
// 00417e9b  733a                 jae 0x417ed7
// 00417e9d  8b5308               mov edx, dword ptr [ebx + 8]
// 00417ea0  807a1500             cmp byte ptr [edx + 0x15], 0
// 00417ea4  57                   push edi
// 00417ea5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00417ea9  8bce                 mov ecx, esi
// 00417eab  7415                 je 0x417ec2
// 00417ead  53                   push ebx
// 00417eae  6a00                 push 0
// 00417eb0  57                   push edi
// 00417eb1  e8baf0ffff           call 0x416f70
// 00417eb6  5b                   pop ebx
// 00417eb7  5d                   pop ebp
// 00417eb8  8bc7                 mov eax, edi
// 00417eba  5f                   pop edi
// 00417ebb  5e                   pop esi
// 00417ebc  83c40c               add esp, 0xc
// 00417ebf  c21000               ret 0x10
// 00417ec2  50                   push eax
// 00417ec3  6a01                 push 1
// 00417ec5  57                   push edi
// 00417ec6  e8a5f0ffff           call 0x416f70
// 00417ecb  5b                   pop ebx
// 00417ecc  5d                   pop ebp
// 00417ecd  8bc7                 mov eax, edi
// 00417ecf  5f                   pop edi
// 00417ed0  5e                   pop esi
// 00417ed1  83c40c               add esp, 0xc
// 00417ed4  c21000               ret 0x10
// 00417ed7  57                   push edi
// 00417ed8  8d442414             lea eax, [esp + 0x14]
// 00417edc  50                   push eax
// 00417edd  8bce                 mov ecx, esi
// 00417edf  e8ccf9ffff           call 0x4178b0
// 00417ee4  8b10                 mov edx, dword ptr [eax]
// 00417ee6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00417eea  5b                   pop ebx
// 00417eeb  5d                   pop ebp
// 00417eec  8911                 mov dword ptr [ecx], edx
// 00417eee  8b4004               mov eax, dword ptr [eax + 4]
// 00417ef1  5f                   pop edi
// 00417ef2  894104               mov dword ptr [ecx + 4], eax
// 00417ef5  8bc1                 mov eax, ecx
// 00417ef7  5e                   pop esi
// 00417ef8  83c40c               add esp, 0xc
// 00417efb  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@QBVName@RBX@@W4CameraType@Camera@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
