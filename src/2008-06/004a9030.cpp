// from server: 99% by colin
// roc 2008-06 00498b20  unit: RBX::Network::VPlayers::?$SignalDesc  size: 536 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00498b20
//
// 00498b20  83ec14               sub esp, 0x14
// 00498b23  56                   push esi
// 00498b24  8bf1                 mov esi, ecx
// 00498b26  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00498b2a  57                   push edi
// 00498b2b  7521                 jne 0x498b4e
// 00498b2d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00498b31  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00498b34  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00498b38  50                   push eax
// 00498b39  51                   push ecx
// 00498b3a  6a01                 push 1
// 00498b3c  57                   push edi
// 00498b3d  8bce                 mov ecx, esi
// 00498b3f  e8bcedffff           call 0x497900
// 00498b44  8bc7                 mov eax, edi
// 00498b46  5f                   pop edi
// 00498b47  5e                   pop esi
// 00498b48  83c414               add esp, 0x14
// 00498b4b  c21000               ret 0x10
// 00498b4e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00498b52  8b5618               mov edx, dword ptr [esi + 0x18]
// 00498b55  8b3a                 mov edi, dword ptr [edx]
// 00498b57  8b0e                 mov ecx, dword ptr [esi]
// 00498b59  53                   push ebx
// 00498b5a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00498b60  85c0                 test eax, eax
// 00498b62  7404                 je 0x498b68
// 00498b64  3bc1                 cmp eax, ecx
// 00498b66  7406                 je 0x498b6e
// 00498b68  ffd3                 call ebx
// 00498b6a  8b442428             mov eax, dword ptr [esp + 0x28]
// 00498b6e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00498b72  3bd7                 cmp edx, edi
// 00498b74  7536                 jne 0x498bac
// 00498b76  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00498b7a  83c20c               add edx, 0xc
// 00498b7d  52                   push edx
// 00498b7e  8bcf                 mov ecx, edi
// 00498b80  e88bf61000           call 0x5a8210
// 00498b85  84c0                 test al, al
// 00498b87  0f8485010000         je 0x498d12
// 00498b8d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00498b91  57                   push edi
// 00498b92  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00498b96  50                   push eax
// 00498b97  6a01                 push 1
// 00498b99  57                   push edi
// 00498b9a  8bce                 mov ecx, esi
// 00498b9c  e85fedffff           call 0x497900
// 00498ba1  5b                   pop ebx
// 00498ba2  8bc7                 mov eax, edi
// 00498ba4  5f                   pop edi
// 00498ba5  5e                   pop esi
// 00498ba6  83c414               add esp, 0x14
// 00498ba9  c21000               ret 0x10
// 00498bac  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00498baf  8b0e                 mov ecx, dword ptr [esi]
// 00498bb1  85c0                 test eax, eax
// 00498bb3  7404                 je 0x498bb9
// 00498bb5  3bc1                 cmp eax, ecx
// 00498bb7  7406                 je 0x498bbf
// 00498bb9  ffd3                 call ebx
// 00498bbb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00498bbf  3bd7                 cmp edx, edi
// 00498bc1  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00498bc5  7538                 jne 0x498bff
// 00498bc7  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00498bca  8b4908               mov ecx, dword ptr [ecx + 8]
// 00498bcd  83c10c               add ecx, 0xc
// 00498bd0  57                   push edi
// 00498bd1  e83af61000           call 0x5a8210
// 00498bd6  84c0                 test al, al
// 00498bd8  0f8434010000         je 0x498d12
// 00498bde  8b5618               mov edx, dword ptr [esi + 0x18]
// 00498be1  8b4208               mov eax, dword ptr [edx + 8]
// 00498be4  57                   push edi
// 00498be5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00498be9  50                   push eax
// 00498bea  6a00                 push 0
// 00498bec  57                   push edi
// 00498bed  8bce                 mov ecx, esi
// 00498bef  e80cedffff           call 0x497900
// 00498bf4  5b                   pop ebx
// 00498bf5  8bc7                 mov eax, edi
// 00498bf7  5f                   pop edi
// 00498bf8  5e                   pop esi
// 00498bf9  83c414               add esp, 0x14
// 00498bfc  c21000               ret 0x10
// 00498bff  83c20c               add edx, 0xc
// 00498c02  52                   push edx
// 00498c03  8bcf                 mov ecx, edi
// 00498c05  e806f61000           call 0x5a8210
// 00498c0a  84c0                 test al, al
// 00498c0c  7468                 je 0x498c76
// 00498c0e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00498c12  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00498c16  894c240c             mov dword ptr [esp + 0xc], ecx
// 00498c1a  8d4c240c             lea ecx, [esp + 0xc]
// 00498c1e  89542410             mov dword ptr [esp + 0x10], edx
// 00498c22  e819330100           call 0x4abf40
// 00498c27  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00498c2b  57                   push edi
// 00498c2c  8d4b0c               lea ecx, [ebx + 0xc]
// 00498c2f  e8dcf51000           call 0x5a8210
// 00498c34  84c0                 test al, al
// 00498c36  743e                 je 0x498c76
// 00498c38  8b4308               mov eax, dword ptr [ebx + 8]
// 00498c3b  80781900             cmp byte ptr [eax + 0x19], 0
// 00498c3f  57                   push edi
// 00498c40  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00498c44  7416                 je 0x498c5c
// 00498c46  53                   push ebx
// 00498c47  6a00                 push 0
// 00498c49  57                   push edi
// 00498c4a  8bce                 mov ecx, esi
// 00498c4c  e8afecffff           call 0x497900
// 00498c51  5b                   pop ebx
// 00498c52  8bc7                 mov eax, edi
// 00498c54  5f                   pop edi
// 00498c55  5e                   pop esi
// 00498c56  83c414               add esp, 0x14
// 00498c59  c21000               ret 0x10
// 00498c5c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00498c60  51                   push ecx
// 00498c61  6a01                 push 1
// 00498c63  57                   push edi
// 00498c64  8bce                 mov ecx, esi
// 00498c66  e895ecffff           call 0x497900
// 00498c6b  5b                   pop ebx
// 00498c6c  8bc7                 mov eax, edi
// 00498c6e  5f                   pop edi
// 00498c6f  5e                   pop esi
// 00498c70  83c414               add esp, 0x14
// 00498c73  c21000               ret 0x10
// 00498c76  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00498c7a  57                   push edi
// 00498c7b  83c10c               add ecx, 0xc
// 00498c7e  e88df51000           call 0x5a8210
// 00498c83  84c0                 test al, al
// 00498c85  0f8487000000         je 0x498d12
// 00498c8b  8b542428             mov edx, dword ptr [esp + 0x28]
// 00498c8f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00498c92  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00498c96  8954240c             mov dword ptr [esp + 0xc], edx
// 00498c9a  8b16                 mov edx, dword ptr [esi]
// 00498c9c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00498ca0  8d4c240c             lea ecx, [esp + 0xc]
// 00498ca4  89442410             mov dword ptr [esp + 0x10], eax
// 00498ca8  89542414             mov dword ptr [esp + 0x14], edx
// 00498cac  e89fe51100           call 0x5b7250
// 00498cb1  8d442414             lea eax, [esp + 0x14]
// 00498cb5  50                   push eax
// 00498cb6  8d4c2410             lea ecx, [esp + 0x10]
// 00498cba  e8e13f1500           call 0x5ecca0
// 00498cbf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00498cc3  84c0                 test al, al
// 00498cc5  750f                 jne 0x498cd6
// 00498cc7  8d4b0c               lea ecx, [ebx + 0xc]
// 00498cca  51                   push ecx
// 00498ccb  8bcf                 mov ecx, edi
// 00498ccd  e83ef51000           call 0x5a8210
// 00498cd2  84c0                 test al, al
// 00498cd4  743c                 je 0x498d12
// 00498cd6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00498cda  8b5008               mov edx, dword ptr [eax + 8]
// 00498cdd  807a1900             cmp byte ptr [edx + 0x19], 0
// 00498ce1  57                   push edi
// 00498ce2  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00498ce6  8bce                 mov ecx, esi
// 00498ce8  7414                 je 0x498cfe
// 00498cea  50                   push eax
// 00498ceb  6a00                 push 0
// 00498ced  57                   push edi
// 00498cee  e80decffff           call 0x497900
// 00498cf3  5b                   pop ebx
// 00498cf4  8bc7                 mov eax, edi
// 00498cf6  5f                   pop edi
// 00498cf7  5e                   pop esi
// 00498cf8  83c414               add esp, 0x14
// 00498cfb  c21000               ret 0x10
// 00498cfe  53                   push ebx
// 00498cff  6a01                 push 1
// 00498d01  57                   push edi
// 00498d02  e8f9ebffff           call 0x497900
// 00498d07  5b                   pop ebx
// 00498d08  8bc7                 mov eax, edi
// 00498d0a  5f                   pop edi
// 00498d0b  5e                   pop esi
// 00498d0c  83c414               add esp, 0x14
// 00498d0f  c21000               ret 0x10
// 00498d12  57                   push edi
// 00498d13  8d442418             lea eax, [esp + 0x18]
// 00498d17  50                   push eax
// 00498d18  8bce                 mov ecx, esi
// 00498d1a  e8e1f5ffff           call 0x498300
// 00498d1f  8b10                 mov edx, dword ptr [eax]
// 00498d21  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00498d25  5b                   pop ebx
// 00498d26  8911                 mov dword ptr [ecx], edx
// 00498d28  8b4004               mov eax, dword ptr [eax + 4]
// 00498d2b  5f                   pop edi
// 00498d2c  894104               mov dword ptr [ecx + 4], eax
// 00498d2f  8bc1                 mov eax, ecx
// 00498d31  5e                   pop esi
// 00498d32  83c414               add esp, 0x14
// 00498d35  c21000               ret 0x10
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
