// from server: 100% by auto
// roc 2009-06 00560d90  unit: RBX::WedgeBuilder  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00560d90
//
// 00560d90  6aff                 push -1
// 00560d92  68146f8500           push 0x856f14
// 00560d97  64a100000000         mov eax, dword ptr fs:[0]
// 00560d9d  50                   push eax
// 00560d9e  64892500000000       mov dword ptr fs:[0], esp
// 00560da5  83ec08               sub esp, 8
// 00560da8  56                   push esi
// 00560da9  8bf1                 mov esi, ecx
// 00560dab  8b4604               mov eax, dword ptr [esi + 4]
// 00560dae  3b4608               cmp eax, dword ptr [esi + 8]
// 00560db1  8b0e                 mov ecx, dword ptr [esi]
// 00560db3  89742404             mov dword ptr [esp + 4], esi
// 00560db7  7d3a                 jge 0x560df3
// 00560db9  8d0c81               lea ecx, [ecx + eax*4]
// 00560dbc  894c2408             mov dword ptr [esp + 8], ecx
// 00560dc0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00560dc8  85c9                 test ecx, ecx
// 00560dca  7412                 je 0x560dde
// 00560dcc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00560dd0  c70100000000         mov dword ptr [ecx], 0
// 00560dd6  8b02                 mov eax, dword ptr [edx]
// 00560dd8  50                   push eax
// 00560dd9  e882eaf3ff           call 0x49f860
// 00560dde  ff4604               inc dword ptr [esi + 4]
// 00560de1  5e                   pop esi
// 00560de2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00560de6  64890d00000000       mov dword ptr fs:[0], ecx
// 00560ded  83c414               add esp, 0x14
// 00560df0  c20400               ret 4
// 00560df3  57                   push edi
// 00560df4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00560df8  3bf9                 cmp edi, ecx
// 00560dfa  0f8281000000         jb 0x560e81
// 00560e00  8d0c81               lea ecx, [ecx + eax*4]
// 00560e03  3bf9                 cmp edi, ecx
// 00560e05  737a                 jae 0x560e81
// 00560e07  8b3f                 mov edi, dword ptr [edi]
// 00560e09  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00560e11  85ff                 test edi, edi
// 00560e13  740e                 je 0x560e23
// 00560e15  8d4704               lea eax, [edi + 4]
// 00560e18  50                   push eax
// 00560e19  897c2424             mov dword ptr [esp + 0x24], edi
// 00560e1d  ff15d0e18900         call dword ptr [0x89e1d0]
// 00560e23  8d542420             lea edx, [esp + 0x20]
// 00560e27  52                   push edx
// 00560e28  8bce                 mov ecx, esi
// 00560e2a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00560e32  e859ffffff           call 0x560d90
// 00560e37  8b442420             mov eax, dword ptr [esp + 0x20]
// 00560e3b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00560e43  85c0                 test eax, eax
// 00560e45  7456                 je 0x560e9d
// 00560e47  83c004               add eax, 4
// 00560e4a  50                   push eax
// 00560e4b  ff15a4e18900         call dword ptr [0x89e1a4]
// 00560e51  85c0                 test eax, eax
// 00560e53  7548                 jne 0x560e9d
// 00560e55  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00560e59  e8223feeff           call 0x444d80
// 00560e5e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00560e62  85c9                 test ecx, ecx
// 00560e64  7437                 je 0x560e9d
// 00560e66  8b01                 mov eax, dword ptr [ecx]
// 00560e68  8b10                 mov edx, dword ptr [eax]
// 00560e6a  6a01                 push 1
// 00560e6c  ffd2                 call edx
// 00560e6e  5f                   pop edi
// 00560e6f  5e                   pop esi
// 00560e70  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00560e74  64890d00000000       mov dword ptr fs:[0], ecx
// 00560e7b  83c414               add esp, 0x14
// 00560e7e  c20400               ret 4
// 00560e81  6a00                 push 0
// 00560e83  40                   inc eax
// 00560e84  50                   push eax
// 00560e85  8bce                 mov ecx, esi
// 00560e87  e884fdffff           call 0x560c10
// 00560e8c  8b07                 mov eax, dword ptr [edi]
// 00560e8e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00560e91  8b16                 mov edx, dword ptr [esi]
// 00560e93  50                   push eax
// 00560e94  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 00560e98  e8c3e9f3ff           call 0x49f860
// 00560e9d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00560ea1  5f                   pop edi
// 00560ea2  5e                   pop esi
// 00560ea3  64890d00000000       mov dword ptr fs:[0], ecx
// 00560eaa  83c414               add esp, 0x14
// 00560ead  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
