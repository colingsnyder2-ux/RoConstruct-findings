// from server: 100% by auto
// roc 2010-06 00523a10  unit: RBX::MeshGen  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00523a10
//
// 00523a10  53                   push ebx
// 00523a11  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00523a15  55                   push ebp
// 00523a16  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00523a1a  56                   push esi
// 00523a1b  8bf1                 mov esi, ecx
// 00523a1d  8b06                 mov eax, dword ptr [esi]
// 00523a1f  57                   push edi
// 00523a20  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00523a24  3bf8                 cmp edi, eax
// 00523a26  720e                 jb 0x523a36
// 00523a28  8b4e04               mov ecx, dword ptr [esi + 4]
// 00523a2b  8d1488               lea edx, [eax + ecx*4]
// 00523a2e  3bfa                 cmp edi, edx
// 00523a30  0f829a000000         jb 0x523ad0
// 00523a36  3bd8                 cmp ebx, eax
// 00523a38  720e                 jb 0x523a48
// 00523a3a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00523a3d  8d1488               lea edx, [eax + ecx*4]
// 00523a40  3bda                 cmp ebx, edx
// 00523a42  0f8288000000         jb 0x523ad0
// 00523a48  3be8                 cmp ebp, eax
// 00523a4a  720a                 jb 0x523a56
// 00523a4c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00523a4f  8d1488               lea edx, [eax + ecx*4]
// 00523a52  3bea                 cmp ebp, edx
// 00523a54  727a                 jb 0x523ad0
// 00523a56  8b4e04               mov ecx, dword ptr [esi + 4]
// 00523a59  8d5102               lea edx, [ecx + 2]
// 00523a5c  3b5608               cmp edx, dword ptr [esi + 8]
// 00523a5f  7d39                 jge 0x523a9a
// 00523a61  8d0488               lea eax, [eax + ecx*4]
// 00523a64  85c0                 test eax, eax
// 00523a66  7404                 je 0x523a6c
// 00523a68  8b0f                 mov ecx, dword ptr [edi]
// 00523a6a  8908                 mov dword ptr [eax], ecx
// 00523a6c  8b5604               mov edx, dword ptr [esi + 4]
// 00523a6f  8b06                 mov eax, dword ptr [esi]
// 00523a71  8d449004             lea eax, [eax + edx*4 + 4]
// 00523a75  85c0                 test eax, eax
// 00523a77  7404                 je 0x523a7d
// 00523a79  8b0b                 mov ecx, dword ptr [ebx]
// 00523a7b  8908                 mov dword ptr [eax], ecx
// 00523a7d  8b5604               mov edx, dword ptr [esi + 4]
// 00523a80  8b06                 mov eax, dword ptr [esi]
// 00523a82  8d449008             lea eax, [eax + edx*4 + 8]
// 00523a86  85c0                 test eax, eax
// 00523a88  7405                 je 0x523a8f
// 00523a8a  8b4d00               mov ecx, dword ptr [ebp]
// 00523a8d  8908                 mov dword ptr [eax], ecx
// 00523a8f  83460403             add dword ptr [esi + 4], 3
// 00523a93  5f                   pop edi
// 00523a94  5e                   pop esi
// 00523a95  5d                   pop ebp
// 00523a96  5b                   pop ebx
// 00523a97  c20c00               ret 0xc
// 00523a9a  83c103               add ecx, 3
// 00523a9d  6a00                 push 0
// 00523a9f  51                   push ecx
// 00523aa0  8bce                 mov ecx, esi
// 00523aa2  e8f956f6ff           call 0x4891a0
// 00523aa7  8b5604               mov edx, dword ptr [esi + 4]
// 00523aaa  8b06                 mov eax, dword ptr [esi]
// 00523aac  8b0f                 mov ecx, dword ptr [edi]
// 00523aae  894c90f4             mov dword ptr [eax + edx*4 - 0xc], ecx
// 00523ab2  8b5604               mov edx, dword ptr [esi + 4]
// 00523ab5  8b06                 mov eax, dword ptr [esi]
// 00523ab7  8b0b                 mov ecx, dword ptr [ebx]
// 00523ab9  894c90f8             mov dword ptr [eax + edx*4 - 8], ecx
// 00523abd  8b5604               mov edx, dword ptr [esi + 4]
// 00523ac0  8b06                 mov eax, dword ptr [esi]
// 00523ac2  8b4d00               mov ecx, dword ptr [ebp]
// 00523ac5  5f                   pop edi
// 00523ac6  5e                   pop esi
// 00523ac7  5d                   pop ebp
// 00523ac8  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00523acc  5b                   pop ebx
// 00523acd  c20c00               ret 0xc
// 00523ad0  8b17                 mov edx, dword ptr [edi]
// 00523ad2  8b03                 mov eax, dword ptr [ebx]
// 00523ad4  8b4d00               mov ecx, dword ptr [ebp]
// 00523ad7  89542418             mov dword ptr [esp + 0x18], edx
// 00523adb  8d542414             lea edx, [esp + 0x14]
// 00523adf  8944241c             mov dword ptr [esp + 0x1c], eax
// 00523ae3  52                   push edx
// 00523ae4  894c2418             mov dword ptr [esp + 0x18], ecx
// 00523ae8  8d442420             lea eax, [esp + 0x20]
// 00523aec  50                   push eax
// 00523aed  8d4c2420             lea ecx, [esp + 0x20]
// 00523af1  51                   push ecx
// 00523af2  8bce                 mov ecx, esi
// 00523af4  e817ffffff           call 0x523a10
// 00523af9  5f                   pop edi
// 00523afa  5e                   pop esi
// 00523afb  5d                   pop ebp
// 00523afc  5b                   pop ebx
// 00523afd  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\MeshBuilder.cpp (function ?append@?$Array@H@G3D@@QAEXABH00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshBuilder.cpp
