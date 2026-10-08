// from server: 100% by auto
// roc 2009-06 00561140  unit: RBX::Mesh::Level  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00561140
//
// 00561140  53                   push ebx
// 00561141  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00561145  55                   push ebp
// 00561146  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0056114a  56                   push esi
// 0056114b  8bf1                 mov esi, ecx
// 0056114d  8b06                 mov eax, dword ptr [esi]
// 0056114f  57                   push edi
// 00561150  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00561154  3bf8                 cmp edi, eax
// 00561156  720e                 jb 0x561166
// 00561158  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056115b  8d1488               lea edx, [eax + ecx*4]
// 0056115e  3bfa                 cmp edi, edx
// 00561160  0f829a000000         jb 0x561200
// 00561166  3bd8                 cmp ebx, eax
// 00561168  720e                 jb 0x561178
// 0056116a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056116d  8d1488               lea edx, [eax + ecx*4]
// 00561170  3bda                 cmp ebx, edx
// 00561172  0f8288000000         jb 0x561200
// 00561178  3be8                 cmp ebp, eax
// 0056117a  720a                 jb 0x561186
// 0056117c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056117f  8d1488               lea edx, [eax + ecx*4]
// 00561182  3bea                 cmp ebp, edx
// 00561184  727a                 jb 0x561200
// 00561186  8b4e04               mov ecx, dword ptr [esi + 4]
// 00561189  8d5102               lea edx, [ecx + 2]
// 0056118c  3b5608               cmp edx, dword ptr [esi + 8]
// 0056118f  7d39                 jge 0x5611ca
// 00561191  8d0488               lea eax, [eax + ecx*4]
// 00561194  85c0                 test eax, eax
// 00561196  7404                 je 0x56119c
// 00561198  8b0f                 mov ecx, dword ptr [edi]
// 0056119a  8908                 mov dword ptr [eax], ecx
// 0056119c  8b5604               mov edx, dword ptr [esi + 4]
// 0056119f  8b06                 mov eax, dword ptr [esi]
// 005611a1  8d449004             lea eax, [eax + edx*4 + 4]
// 005611a5  85c0                 test eax, eax
// 005611a7  7404                 je 0x5611ad
// 005611a9  8b0b                 mov ecx, dword ptr [ebx]
// 005611ab  8908                 mov dword ptr [eax], ecx
// 005611ad  8b5604               mov edx, dword ptr [esi + 4]
// 005611b0  8b06                 mov eax, dword ptr [esi]
// 005611b2  8d449008             lea eax, [eax + edx*4 + 8]
// 005611b6  85c0                 test eax, eax
// 005611b8  7405                 je 0x5611bf
// 005611ba  8b4d00               mov ecx, dword ptr [ebp]
// 005611bd  8908                 mov dword ptr [eax], ecx
// 005611bf  83460403             add dword ptr [esi + 4], 3
// 005611c3  5f                   pop edi
// 005611c4  5e                   pop esi
// 005611c5  5d                   pop ebp
// 005611c6  5b                   pop ebx
// 005611c7  c20c00               ret 0xc
// 005611ca  83c103               add ecx, 3
// 005611cd  6a00                 push 0
// 005611cf  51                   push ecx
// 005611d0  8bce                 mov ecx, esi
// 005611d2  e8f992f4ff           call 0x4aa4d0
// 005611d7  8b5604               mov edx, dword ptr [esi + 4]
// 005611da  8b06                 mov eax, dword ptr [esi]
// 005611dc  8b0f                 mov ecx, dword ptr [edi]
// 005611de  894c90f4             mov dword ptr [eax + edx*4 - 0xc], ecx
// 005611e2  8b5604               mov edx, dword ptr [esi + 4]
// 005611e5  8b06                 mov eax, dword ptr [esi]
// 005611e7  8b0b                 mov ecx, dword ptr [ebx]
// 005611e9  894c90f8             mov dword ptr [eax + edx*4 - 8], ecx
// 005611ed  8b5604               mov edx, dword ptr [esi + 4]
// 005611f0  8b06                 mov eax, dword ptr [esi]
// 005611f2  8b4d00               mov ecx, dword ptr [ebp]
// 005611f5  5f                   pop edi
// 005611f6  5e                   pop esi
// 005611f7  5d                   pop ebp
// 005611f8  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005611fc  5b                   pop ebx
// 005611fd  c20c00               ret 0xc
// 00561200  8b17                 mov edx, dword ptr [edi]
// 00561202  8b03                 mov eax, dword ptr [ebx]
// 00561204  8b4d00               mov ecx, dword ptr [ebp]
// 00561207  89542418             mov dword ptr [esp + 0x18], edx
// 0056120b  8d542414             lea edx, [esp + 0x14]
// 0056120f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00561213  52                   push edx
// 00561214  894c2418             mov dword ptr [esp + 0x18], ecx
// 00561218  8d442420             lea eax, [esp + 0x20]
// 0056121c  50                   push eax
// 0056121d  8d4c2420             lea ecx, [esp + 0x20]
// 00561221  51                   push ecx
// 00561222  8bce                 mov ecx, esi
// 00561224  e817ffffff           call 0x561140
// 00561229  5f                   pop edi
// 0056122a  5e                   pop esi
// 0056122b  5d                   pop ebp
// 0056122c  5b                   pop ebx
// 0056122d  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\MeshBuilder.cpp (function ?append@?$Array@H@G3D@@QAEXABH00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshBuilder.cpp
