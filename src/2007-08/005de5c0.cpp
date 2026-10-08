// roc 2007-08 005de5c0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005de5c0
//
// 005de5c0  53                   push ebx
// 005de5c1  56                   push esi
// 005de5c2  57                   push edi
// 005de5c3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005de5c7  8b7704               mov esi, dword ptr [edi + 4]
// 005de5ca  8b07                 mov eax, dword ptr [edi]
// 005de5cc  69f69f400000         imul esi, esi, 0x409f
// 005de5d2  8bd9                 mov ebx, ecx
// 005de5d4  69c05df4ffff         imul eax, eax, 0xfffff45d
// 005de5da  8b4f08               mov ecx, dword ptr [edi + 8]
// 005de5dd  6bc9b7               imul ecx, ecx, -0x49
// 005de5e0  33f0                 xor esi, eax
// 005de5e2  33f1                 xor esi, ecx
// 005de5e4  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005de5e7  81e6ffff0000         and esi, 0xffff
// 005de5ed  85c9                 test ecx, ecx
// 005de5ef  740c                 je 0x5de5fd
// 005de5f1  8b4310               mov eax, dword ptr [ebx + 0x10]
// 005de5f4  2bc1                 sub eax, ecx
// 005de5f6  c1f802               sar eax, 2
// 005de5f9  3bf0                 cmp esi, eax
// 005de5fb  7206                 jb 0x5de603
// 005de5fd  ff15d8e67700         call dword ptr [0x77e6d8]
// 005de603  8b530c               mov edx, dword ptr [ebx + 0xc]
// 005de606  8b04b2               mov eax, dword ptr [edx + esi*4]
// 005de609  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005de60d  8d4900               lea ecx, [ecx]
// 005de610  3908                 cmp dword ptr [eax], ecx
// 005de612  7517                 jne 0x5de62b
// 005de614  8b5014               mov edx, dword ptr [eax + 0x14]
// 005de617  3b17                 cmp edx, dword ptr [edi]
// 005de619  7510                 jne 0x5de62b
// 005de61b  8b5018               mov edx, dword ptr [eax + 0x18]
// 005de61e  3b5704               cmp edx, dword ptr [edi + 4]
// 005de621  7508                 jne 0x5de62b
// 005de623  8b501c               mov edx, dword ptr [eax + 0x1c]
// 005de626  3b5708               cmp edx, dword ptr [edi + 8]
// 005de629  7405                 je 0x5de630
// 005de62b  8b4004               mov eax, dword ptr [eax + 4]
// 005de62e  ebe0                 jmp 0x5de610
// 005de630  5f                   pop edi
// 005de631  5e                   pop esi
// 005de632  5b                   pop ebx
// 005de633  c20800               ret 8
// library openrbx-client/App\v8world\SpatialHash.cpp (function ?findNode@SpatialHash@RBX@@AAEPAVSpatialNode@2@PAVPrimitive@2@ABVVector3int32@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SpatialHash.cpp
