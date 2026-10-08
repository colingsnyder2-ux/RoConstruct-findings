// roc 2007-03 0056adf0  unit: seg_00560000  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056adf0
//
// 0056adf0  83ec0c               sub esp, 0xc
// 0056adf3  56                   push esi
// 0056adf4  8bf1                 mov esi, ecx
// 0056adf6  837e0800             cmp dword ptr [esi + 8], 0
// 0056adfa  57                   push edi
// 0056adfb  7521                 jne 0x56ae1e
// 0056adfd  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056ae01  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056ae04  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0056ae08  50                   push eax
// 0056ae09  51                   push ecx
// 0056ae0a  6a01                 push 1
// 0056ae0c  57                   push edi
// 0056ae0d  8bce                 mov ecx, esi
// 0056ae0f  e8dcfcffff           call 0x56aaf0
// 0056ae14  8bc7                 mov eax, edi
// 0056ae16  5f                   pop edi
// 0056ae17  5e                   pop esi
// 0056ae18  83c40c               add esp, 0xc
// 0056ae1b  c21000               ret 0x10
// 0056ae1e  8b5604               mov edx, dword ptr [esi + 4]
// 0056ae21  8b3a                 mov edi, dword ptr [edx]
// 0056ae23  55                   push ebp
// 0056ae24  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0056ae28  85ed                 test ebp, ebp
// 0056ae2a  7404                 je 0x56ae30
// 0056ae2c  3bee                 cmp ebp, esi
// 0056ae2e  7406                 je 0x56ae36
// 0056ae30  ff1544e97700         call dword ptr [0x77e944]
// 0056ae36  53                   push ebx
// 0056ae37  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0056ae3b  3bdf                 cmp ebx, edi
// 0056ae3d  7536                 jne 0x56ae75
// 0056ae3f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0056ae43  8d430c               lea eax, [ebx + 0xc]
// 0056ae46  50                   push eax
// 0056ae47  57                   push edi
// 0056ae48  ff15e0e67700         call dword ptr [0x77e6e0]
// 0056ae4e  83c408               add esp, 8
// 0056ae51  84c0                 test al, al
// 0056ae53  0f8476010000         je 0x56afcf
// 0056ae59  57                   push edi
// 0056ae5a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056ae5e  53                   push ebx
// 0056ae5f  6a01                 push 1
// 0056ae61  57                   push edi
// 0056ae62  8bce                 mov ecx, esi
// 0056ae64  e887fcffff           call 0x56aaf0
// 0056ae69  5b                   pop ebx
// 0056ae6a  5d                   pop ebp
// 0056ae6b  8bc7                 mov eax, edi
// 0056ae6d  5f                   pop edi
// 0056ae6e  5e                   pop esi
// 0056ae6f  83c40c               add esp, 0xc
// 0056ae72  c21000               ret 0x10
// 0056ae75  85ed                 test ebp, ebp
// 0056ae77  8b7e04               mov edi, dword ptr [esi + 4]
// 0056ae7a  7404                 je 0x56ae80
// 0056ae7c  3bee                 cmp ebp, esi
// 0056ae7e  7406                 je 0x56ae86
// 0056ae80  ff1544e97700         call dword ptr [0x77e944]
// 0056ae86  3bdf                 cmp ebx, edi
// 0056ae88  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0056ae8c  753e                 jne 0x56aecc
// 0056ae8e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056ae91  8b4108               mov eax, dword ptr [ecx + 8]
// 0056ae94  83c00c               add eax, 0xc
// 0056ae97  57                   push edi
// 0056ae98  50                   push eax
// 0056ae99  ff15e0e67700         call dword ptr [0x77e6e0]
// 0056ae9f  83c408               add esp, 8
// 0056aea2  84c0                 test al, al
// 0056aea4  0f8425010000         je 0x56afcf
// 0056aeaa  8b5604               mov edx, dword ptr [esi + 4]
// 0056aead  8b4208               mov eax, dword ptr [edx + 8]
// 0056aeb0  57                   push edi
// 0056aeb1  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056aeb5  50                   push eax
// 0056aeb6  6a00                 push 0
// 0056aeb8  57                   push edi
// 0056aeb9  8bce                 mov ecx, esi
// 0056aebb  e830fcffff           call 0x56aaf0
// 0056aec0  5b                   pop ebx
// 0056aec1  5d                   pop ebp
// 0056aec2  8bc7                 mov eax, edi
// 0056aec4  5f                   pop edi
// 0056aec5  5e                   pop esi
// 0056aec6  83c40c               add esp, 0xc
// 0056aec9  c21000               ret 0x10
// 0056aecc  8d430c               lea eax, [ebx + 0xc]
// 0056aecf  50                   push eax
// 0056aed0  57                   push edi
// 0056aed1  ff15e0e67700         call dword ptr [0x77e6e0]
// 0056aed7  83c408               add esp, 8
// 0056aeda  84c0                 test al, al
// 0056aedc  7463                 je 0x56af41
// 0056aede  8d4c2424             lea ecx, [esp + 0x24]
// 0056aee2  896c2424             mov dword ptr [esp + 0x24], ebp
// 0056aee6  895c2428             mov dword ptr [esp + 0x28], ebx
// 0056aeea  e811d20800           call 0x5f8100
// 0056aeef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056aef3  83c10c               add ecx, 0xc
// 0056aef6  57                   push edi
// 0056aef7  51                   push ecx
// 0056aef8  8bce                 mov ecx, esi
// 0056aefa  e8b195edff           call 0x4444b0
// 0056aeff  84c0                 test al, al
// 0056af01  743e                 je 0x56af41
// 0056af03  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056af07  8b5008               mov edx, dword ptr [eax + 8]
// 0056af0a  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 0056af0e  57                   push edi
// 0056af0f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056af13  8bce                 mov ecx, esi
// 0056af15  7415                 je 0x56af2c
// 0056af17  50                   push eax
// 0056af18  6a00                 push 0
// 0056af1a  57                   push edi
// 0056af1b  e8d0fbffff           call 0x56aaf0
// 0056af20  5b                   pop ebx
// 0056af21  5d                   pop ebp
// 0056af22  8bc7                 mov eax, edi
// 0056af24  5f                   pop edi
// 0056af25  5e                   pop esi
// 0056af26  83c40c               add esp, 0xc
// 0056af29  c21000               ret 0x10
// 0056af2c  53                   push ebx
// 0056af2d  6a01                 push 1
// 0056af2f  57                   push edi
// 0056af30  e8bbfbffff           call 0x56aaf0
// 0056af35  5b                   pop ebx
// 0056af36  5d                   pop ebp
// 0056af37  8bc7                 mov eax, edi
// 0056af39  5f                   pop edi
// 0056af3a  5e                   pop esi
// 0056af3b  83c40c               add esp, 0xc
// 0056af3e  c21000               ret 0x10
// 0056af41  8d430c               lea eax, [ebx + 0xc]
// 0056af44  57                   push edi
// 0056af45  50                   push eax
// 0056af46  ff15e0e67700         call dword ptr [0x77e6e0]
// 0056af4c  83c408               add esp, 8
// 0056af4f  84c0                 test al, al
// 0056af51  747c                 je 0x56afcf
// 0056af53  8b4604               mov eax, dword ptr [esi + 4]
// 0056af56  8d4c2424             lea ecx, [esp + 0x24]
// 0056af5a  896c2424             mov dword ptr [esp + 0x24], ebp
// 0056af5e  895c2428             mov dword ptr [esp + 0x28], ebx
// 0056af62  89442414             mov dword ptr [esp + 0x14], eax
// 0056af66  89742410             mov dword ptr [esp + 0x10], esi
// 0056af6a  e80127fcff           call 0x52d670
// 0056af6f  8d4c2410             lea ecx, [esp + 0x10]
// 0056af73  51                   push ecx
// 0056af74  8d4c2428             lea ecx, [esp + 0x28]
// 0056af78  e8e30ceeff           call 0x44bc60
// 0056af7d  84c0                 test al, al
// 0056af7f  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0056af83  7510                 jne 0x56af95
// 0056af85  8d550c               lea edx, [ebp + 0xc]
// 0056af88  52                   push edx
// 0056af89  57                   push edi
// 0056af8a  8bce                 mov ecx, esi
// 0056af8c  e81f95edff           call 0x4444b0
// 0056af91  84c0                 test al, al
// 0056af93  743a                 je 0x56afcf
// 0056af95  8b4308               mov eax, dword ptr [ebx + 8]
// 0056af98  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0056af9c  57                   push edi
// 0056af9d  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056afa1  8bce                 mov ecx, esi
// 0056afa3  7415                 je 0x56afba
// 0056afa5  53                   push ebx
// 0056afa6  6a00                 push 0
// 0056afa8  57                   push edi
// 0056afa9  e842fbffff           call 0x56aaf0
// 0056afae  5b                   pop ebx
// 0056afaf  5d                   pop ebp
// 0056afb0  8bc7                 mov eax, edi
// 0056afb2  5f                   pop edi
// 0056afb3  5e                   pop esi
// 0056afb4  83c40c               add esp, 0xc
// 0056afb7  c21000               ret 0x10
// 0056afba  55                   push ebp
// 0056afbb  6a01                 push 1
// 0056afbd  57                   push edi
// 0056afbe  e82dfbffff           call 0x56aaf0
// 0056afc3  5b                   pop ebx
// 0056afc4  5d                   pop ebp
// 0056afc5  8bc7                 mov eax, edi
// 0056afc7  5f                   pop edi
// 0056afc8  5e                   pop esi
// 0056afc9  83c40c               add esp, 0xc
// 0056afcc  c21000               ret 0x10
// 0056afcf  57                   push edi
// 0056afd0  8d4c2414             lea ecx, [esp + 0x14]
// 0056afd4  51                   push ecx
// 0056afd5  8bce                 mov ecx, esi
// 0056afd7  e814fdffff           call 0x56acf0
// 0056afdc  8b10                 mov edx, dword ptr [eax]
// 0056afde  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056afe2  5b                   pop ebx
// 0056afe3  5d                   pop ebp
// 0056afe4  8911                 mov dword ptr [ecx], edx
// 0056afe6  8b4004               mov eax, dword ptr [eax + 4]
// 0056afe9  5f                   pop edi
// 0056afea  894104               mov dword ptr [ecx + 4], eax
// 0056afed  8bc1                 mov eax, ecx
// 0056afef  5e                   pop esi
// 0056aff0  83c40c               add esp, 0xc
// 0056aff3  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
