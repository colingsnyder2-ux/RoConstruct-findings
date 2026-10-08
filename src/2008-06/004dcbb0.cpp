// from server: 100% by auto
// roc 2008-06 004dcbb0  unit: RBX::ViewNew::ViewG3D  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dcbb0
//
// 004dcbb0  6aff                 push -1
// 004dcbb2  68e4487c00           push 0x7c48e4
// 004dcbb7  64a100000000         mov eax, dword ptr fs:[0]
// 004dcbbd  50                   push eax
// 004dcbbe  64892500000000       mov dword ptr fs:[0], esp
// 004dcbc5  83ec08               sub esp, 8
// 004dcbc8  56                   push esi
// 004dcbc9  8bf1                 mov esi, ecx
// 004dcbcb  8b4604               mov eax, dword ptr [esi + 4]
// 004dcbce  3b4608               cmp eax, dword ptr [esi + 8]
// 004dcbd1  8b0e                 mov ecx, dword ptr [esi]
// 004dcbd3  89742404             mov dword ptr [esp + 4], esi
// 004dcbd7  7d3a                 jge 0x4dcc13
// 004dcbd9  8d0c81               lea ecx, [ecx + eax*4]
// 004dcbdc  894c2408             mov dword ptr [esp + 8], ecx
// 004dcbe0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004dcbe8  85c9                 test ecx, ecx
// 004dcbea  7412                 je 0x4dcbfe
// 004dcbec  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004dcbf0  c70100000000         mov dword ptr [ecx], 0
// 004dcbf6  8b02                 mov eax, dword ptr [edx]
// 004dcbf8  50                   push eax
// 004dcbf9  e8a2c30b00           call 0x598fa0
// 004dcbfe  ff4604               inc dword ptr [esi + 4]
// 004dcc01  5e                   pop esi
// 004dcc02  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dcc06  64890d00000000       mov dword ptr fs:[0], ecx
// 004dcc0d  83c414               add esp, 0x14
// 004dcc10  c20400               ret 4
// 004dcc13  57                   push edi
// 004dcc14  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004dcc18  3bf9                 cmp edi, ecx
// 004dcc1a  0f8281000000         jb 0x4dcca1
// 004dcc20  8d0c81               lea ecx, [ecx + eax*4]
// 004dcc23  3bf9                 cmp edi, ecx
// 004dcc25  737a                 jae 0x4dcca1
// 004dcc27  8b3f                 mov edi, dword ptr [edi]
// 004dcc29  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004dcc31  85ff                 test edi, edi
// 004dcc33  740e                 je 0x4dcc43
// 004dcc35  8d4704               lea eax, [edi + 4]
// 004dcc38  50                   push eax
// 004dcc39  897c2424             mov dword ptr [esp + 0x24], edi
// 004dcc3d  ff15b0218000         call dword ptr [0x8021b0]
// 004dcc43  8d542420             lea edx, [esp + 0x20]
// 004dcc47  52                   push edx
// 004dcc48  8bce                 mov ecx, esi
// 004dcc4a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004dcc52  e859ffffff           call 0x4dcbb0
// 004dcc57  8b442420             mov eax, dword ptr [esp + 0x20]
// 004dcc5b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004dcc63  85c0                 test eax, eax
// 004dcc65  7456                 je 0x4dccbd
// 004dcc67  83c004               add eax, 4
// 004dcc6a  50                   push eax
// 004dcc6b  ff15ac218000         call dword ptr [0x8021ac]
// 004dcc71  85c0                 test eax, eax
// 004dcc73  7548                 jne 0x4dccbd
// 004dcc75  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004dcc79  e812e1f7ff           call 0x45ad90
// 004dcc7e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004dcc82  85c9                 test ecx, ecx
// 004dcc84  7437                 je 0x4dccbd
// 004dcc86  8b01                 mov eax, dword ptr [ecx]
// 004dcc88  8b10                 mov edx, dword ptr [eax]
// 004dcc8a  6a01                 push 1
// 004dcc8c  ffd2                 call edx
// 004dcc8e  5f                   pop edi
// 004dcc8f  5e                   pop esi
// 004dcc90  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dcc94  64890d00000000       mov dword ptr fs:[0], ecx
// 004dcc9b  83c414               add esp, 0x14
// 004dcc9e  c20400               ret 4
// 004dcca1  6a00                 push 0
// 004dcca3  40                   inc eax
// 004dcca4  50                   push eax
// 004dcca5  8bce                 mov ecx, esi
// 004dcca7  e834fbffff           call 0x4dc7e0
// 004dccac  8b07                 mov eax, dword ptr [edi]
// 004dccae  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dccb1  8b16                 mov edx, dword ptr [esi]
// 004dccb3  50                   push eax
// 004dccb4  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004dccb8  e8e3c20b00           call 0x598fa0
// 004dccbd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004dccc1  5f                   pop edi
// 004dccc2  5e                   pop esi
// 004dccc3  64890d00000000       mov dword ptr fs:[0], ecx
// 004dccca  83c414               add esp, 0x14
// 004dcccd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
