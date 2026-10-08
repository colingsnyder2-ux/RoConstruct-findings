// roc 2007-03 004d0c90  unit: seg_004d0000  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d0c90
//
// 004d0c90  6aff                 push -1
// 004d0c92  6854db7400           push 0x74db54
// 004d0c97  64a100000000         mov eax, dword ptr fs:[0]
// 004d0c9d  50                   push eax
// 004d0c9e  64892500000000       mov dword ptr fs:[0], esp
// 004d0ca5  83ec08               sub esp, 8
// 004d0ca8  56                   push esi
// 004d0ca9  8bf1                 mov esi, ecx
// 004d0cab  8b4604               mov eax, dword ptr [esi + 4]
// 004d0cae  3b4608               cmp eax, dword ptr [esi + 8]
// 004d0cb1  8b0e                 mov ecx, dword ptr [esi]
// 004d0cb3  89742404             mov dword ptr [esp + 4], esi
// 004d0cb7  7d3b                 jge 0x4d0cf4
// 004d0cb9  8d0c81               lea ecx, [ecx + eax*4]
// 004d0cbc  894c2408             mov dword ptr [esp + 8], ecx
// 004d0cc0  85c9                 test ecx, ecx
// 004d0cc2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004d0cca  7412                 je 0x4d0cde
// 004d0ccc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004d0cd0  c70100000000         mov dword ptr [ecx], 0
// 004d0cd6  8b02                 mov eax, dword ptr [edx]
// 004d0cd8  50                   push eax
// 004d0cd9  e8b243faff           call 0x475090
// 004d0cde  83460401             add dword ptr [esi + 4], 1
// 004d0ce2  5e                   pop esi
// 004d0ce3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d0ce7  64890d00000000       mov dword ptr fs:[0], ecx
// 004d0cee  83c414               add esp, 0x14
// 004d0cf1  c20400               ret 4
// 004d0cf4  57                   push edi
// 004d0cf5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004d0cf9  3bf9                 cmp edi, ecx
// 004d0cfb  0f8281000000         jb 0x4d0d82
// 004d0d01  8d0c81               lea ecx, [ecx + eax*4]
// 004d0d04  3bf9                 cmp edi, ecx
// 004d0d06  737a                 jae 0x4d0d82
// 004d0d08  8b3f                 mov edi, dword ptr [edi]
// 004d0d0a  85ff                 test edi, edi
// 004d0d0c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004d0d14  740e                 je 0x4d0d24
// 004d0d16  8d4704               lea eax, [edi + 4]
// 004d0d19  50                   push eax
// 004d0d1a  897c2424             mov dword ptr [esp + 0x24], edi
// 004d0d1e  ff15acd27700         call dword ptr [0x77d2ac]
// 004d0d24  8d542420             lea edx, [esp + 0x20]
// 004d0d28  52                   push edx
// 004d0d29  8bce                 mov ecx, esi
// 004d0d2b  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004d0d33  e858ffffff           call 0x4d0c90
// 004d0d38  8b442420             mov eax, dword ptr [esp + 0x20]
// 004d0d3c  85c0                 test eax, eax
// 004d0d3e  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004d0d46  7458                 je 0x4d0da0
// 004d0d48  83c004               add eax, 4
// 004d0d4b  50                   push eax
// 004d0d4c  ff15a8d27700         call dword ptr [0x77d2a8]
// 004d0d52  85c0                 test eax, eax
// 004d0d54  754a                 jne 0x4d0da0
// 004d0d56  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d0d5a  e86126f9ff           call 0x4633c0
// 004d0d5f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d0d63  85c9                 test ecx, ecx
// 004d0d65  7439                 je 0x4d0da0
// 004d0d67  8b01                 mov eax, dword ptr [ecx]
// 004d0d69  8b10                 mov edx, dword ptr [eax]
// 004d0d6b  6a01                 push 1
// 004d0d6d  ffd2                 call edx
// 004d0d6f  5f                   pop edi
// 004d0d70  5e                   pop esi
// 004d0d71  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d0d75  64890d00000000       mov dword ptr fs:[0], ecx
// 004d0d7c  83c414               add esp, 0x14
// 004d0d7f  c20400               ret 4
// 004d0d82  6a00                 push 0
// 004d0d84  83c001               add eax, 1
// 004d0d87  50                   push eax
// 004d0d88  8bce                 mov ecx, esi
// 004d0d8a  e861cbffff           call 0x4cd8f0
// 004d0d8f  8b07                 mov eax, dword ptr [edi]
// 004d0d91  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d0d94  8b16                 mov edx, dword ptr [esi]
// 004d0d96  50                   push eax
// 004d0d97  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004d0d9b  e8f042faff           call 0x475090
// 004d0da0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d0da4  5f                   pop edi
// 004d0da5  5e                   pop esi
// 004d0da6  64890d00000000       mov dword ptr fs:[0], ecx
// 004d0dad  83c414               add esp, 0x14
// 004d0db0  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
