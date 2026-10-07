// roc 2007-08 004d9920  unit: RBX::View::MegaTextureProxy  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d9920
//
// 004d9920  53                   push ebx
// 004d9921  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004d9925  55                   push ebp
// 004d9926  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004d992a  56                   push esi
// 004d992b  8bf1                 mov esi, ecx
// 004d992d  8b06                 mov eax, dword ptr [esi]
// 004d992f  57                   push edi
// 004d9930  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d9934  3bf8                 cmp edi, eax
// 004d9936  720e                 jb 0x4d9946
// 004d9938  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d993b  8d1488               lea edx, [eax + ecx*4]
// 004d993e  3bfa                 cmp edi, edx
// 004d9940  0f829a000000         jb 0x4d99e0
// 004d9946  3bd8                 cmp ebx, eax
// 004d9948  720e                 jb 0x4d9958
// 004d994a  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d994d  8d1488               lea edx, [eax + ecx*4]
// 004d9950  3bda                 cmp ebx, edx
// 004d9952  0f8288000000         jb 0x4d99e0
// 004d9958  3be8                 cmp ebp, eax
// 004d995a  720a                 jb 0x4d9966
// 004d995c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d995f  8d1488               lea edx, [eax + ecx*4]
// 004d9962  3bea                 cmp ebp, edx
// 004d9964  727a                 jb 0x4d99e0
// 004d9966  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d9969  8d5102               lea edx, [ecx + 2]
// 004d996c  3b5608               cmp edx, dword ptr [esi + 8]
// 004d996f  7d39                 jge 0x4d99aa
// 004d9971  8d0488               lea eax, [eax + ecx*4]
// 004d9974  85c0                 test eax, eax
// 004d9976  7404                 je 0x4d997c
// 004d9978  8b0f                 mov ecx, dword ptr [edi]
// 004d997a  8908                 mov dword ptr [eax], ecx
// 004d997c  8b5604               mov edx, dword ptr [esi + 4]
// 004d997f  8b06                 mov eax, dword ptr [esi]
// 004d9981  8d449004             lea eax, [eax + edx*4 + 4]
// 004d9985  85c0                 test eax, eax
// 004d9987  7404                 je 0x4d998d
// 004d9989  8b0b                 mov ecx, dword ptr [ebx]
// 004d998b  8908                 mov dword ptr [eax], ecx
// 004d998d  8b5604               mov edx, dword ptr [esi + 4]
// 004d9990  8b06                 mov eax, dword ptr [esi]
// 004d9992  8d449008             lea eax, [eax + edx*4 + 8]
// 004d9996  85c0                 test eax, eax
// 004d9998  7405                 je 0x4d999f
// 004d999a  8b4d00               mov ecx, dword ptr [ebp]
// 004d999d  8908                 mov dword ptr [eax], ecx
// 004d999f  83460403             add dword ptr [esi + 4], 3
// 004d99a3  5f                   pop edi
// 004d99a4  5e                   pop esi
// 004d99a5  5d                   pop ebp
// 004d99a6  5b                   pop ebx
// 004d99a7  c20c00               ret 0xc
// 004d99aa  83c103               add ecx, 3
// 004d99ad  6a00                 push 0
// 004d99af  51                   push ecx
// 004d99b0  8bce                 mov ecx, esi
// 004d99b2  e80936faff           call 0x47cfc0
// 004d99b7  8b5604               mov edx, dword ptr [esi + 4]
// 004d99ba  8b06                 mov eax, dword ptr [esi]
// 004d99bc  8b0f                 mov ecx, dword ptr [edi]
// 004d99be  894c90f4             mov dword ptr [eax + edx*4 - 0xc], ecx
// 004d99c2  8b5604               mov edx, dword ptr [esi + 4]
// 004d99c5  8b06                 mov eax, dword ptr [esi]
// 004d99c7  8b0b                 mov ecx, dword ptr [ebx]
// 004d99c9  894c90f8             mov dword ptr [eax + edx*4 - 8], ecx
// 004d99cd  8b5604               mov edx, dword ptr [esi + 4]
// 004d99d0  8b06                 mov eax, dword ptr [esi]
// 004d99d2  8b4d00               mov ecx, dword ptr [ebp]
// 004d99d5  5f                   pop edi
// 004d99d6  5e                   pop esi
// 004d99d7  5d                   pop ebp
// 004d99d8  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004d99dc  5b                   pop ebx
// 004d99dd  c20c00               ret 0xc
// 004d99e0  8b17                 mov edx, dword ptr [edi]
// 004d99e2  8b03                 mov eax, dword ptr [ebx]
// 004d99e4  8b4d00               mov ecx, dword ptr [ebp]
// 004d99e7  89542418             mov dword ptr [esp + 0x18], edx
// 004d99eb  8d542414             lea edx, [esp + 0x14]
// 004d99ef  8944241c             mov dword ptr [esp + 0x1c], eax
// 004d99f3  52                   push edx
// 004d99f4  894c2418             mov dword ptr [esp + 0x18], ecx
// 004d99f8  8d442420             lea eax, [esp + 0x20]
// 004d99fc  50                   push eax
// 004d99fd  8d4c2420             lea ecx, [esp + 0x20]
// 004d9a01  51                   push ecx
// 004d9a02  8bce                 mov ecx, esi
// 004d9a04  e817ffffff           call 0x4d9920
// 004d9a09  5f                   pop edi
// 004d9a0a  5e                   pop esi
// 004d9a0b  5d                   pop ebp
// 004d9a0c  5b                   pop ebx
// 004d9a0d  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\MeshBuilder.cpp (function ?append@?$Array@H@G3D@@QAEXABH00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshBuilder.cpp
