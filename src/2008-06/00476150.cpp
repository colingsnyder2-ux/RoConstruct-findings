// from server: 100% by auto
// roc 2008-06 00476150  unit: G3D::VARArea  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476150
//
// 00476150  6aff                 push -1
// 00476152  68e4487c00           push 0x7c48e4
// 00476157  64a100000000         mov eax, dword ptr fs:[0]
// 0047615d  50                   push eax
// 0047615e  64892500000000       mov dword ptr fs:[0], esp
// 00476165  83ec08               sub esp, 8
// 00476168  56                   push esi
// 00476169  8bf1                 mov esi, ecx
// 0047616b  8b4604               mov eax, dword ptr [esi + 4]
// 0047616e  3b4608               cmp eax, dword ptr [esi + 8]
// 00476171  8b0e                 mov ecx, dword ptr [esi]
// 00476173  89742404             mov dword ptr [esp + 4], esi
// 00476177  7d3a                 jge 0x4761b3
// 00476179  8d0c81               lea ecx, [ecx + eax*4]
// 0047617c  894c2408             mov dword ptr [esp + 8], ecx
// 00476180  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00476188  85c9                 test ecx, ecx
// 0047618a  7412                 je 0x47619e
// 0047618c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00476190  c70100000000         mov dword ptr [ecx], 0
// 00476196  8b02                 mov eax, dword ptr [edx]
// 00476198  50                   push eax
// 00476199  e8022e1200           call 0x598fa0
// 0047619e  ff4604               inc dword ptr [esi + 4]
// 004761a1  5e                   pop esi
// 004761a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004761a6  64890d00000000       mov dword ptr fs:[0], ecx
// 004761ad  83c414               add esp, 0x14
// 004761b0  c20400               ret 4
// 004761b3  57                   push edi
// 004761b4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004761b8  3bf9                 cmp edi, ecx
// 004761ba  0f8281000000         jb 0x476241
// 004761c0  8d0c81               lea ecx, [ecx + eax*4]
// 004761c3  3bf9                 cmp edi, ecx
// 004761c5  737a                 jae 0x476241
// 004761c7  8b3f                 mov edi, dword ptr [edi]
// 004761c9  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004761d1  85ff                 test edi, edi
// 004761d3  740e                 je 0x4761e3
// 004761d5  8d4704               lea eax, [edi + 4]
// 004761d8  50                   push eax
// 004761d9  897c2424             mov dword ptr [esp + 0x24], edi
// 004761dd  ff15b0218000         call dword ptr [0x8021b0]
// 004761e3  8d542420             lea edx, [esp + 0x20]
// 004761e7  52                   push edx
// 004761e8  8bce                 mov ecx, esi
// 004761ea  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004761f2  e859ffffff           call 0x476150
// 004761f7  8b442420             mov eax, dword ptr [esp + 0x20]
// 004761fb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00476203  85c0                 test eax, eax
// 00476205  7456                 je 0x47625d
// 00476207  83c004               add eax, 4
// 0047620a  50                   push eax
// 0047620b  ff15ac218000         call dword ptr [0x8021ac]
// 00476211  85c0                 test eax, eax
// 00476213  7548                 jne 0x47625d
// 00476215  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00476219  e8724bfeff           call 0x45ad90
// 0047621e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00476222  85c9                 test ecx, ecx
// 00476224  7437                 je 0x47625d
// 00476226  8b01                 mov eax, dword ptr [ecx]
// 00476228  8b10                 mov edx, dword ptr [eax]
// 0047622a  6a01                 push 1
// 0047622c  ffd2                 call edx
// 0047622e  5f                   pop edi
// 0047622f  5e                   pop esi
// 00476230  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00476234  64890d00000000       mov dword ptr fs:[0], ecx
// 0047623b  83c414               add esp, 0x14
// 0047623e  c20400               ret 4
// 00476241  6a00                 push 0
// 00476243  40                   inc eax
// 00476244  50                   push eax
// 00476245  8bce                 mov ecx, esi
// 00476247  e864fdffff           call 0x475fb0
// 0047624c  8b07                 mov eax, dword ptr [edi]
// 0047624e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00476251  8b16                 mov edx, dword ptr [esi]
// 00476253  50                   push eax
// 00476254  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 00476258  e8432d1200           call 0x598fa0
// 0047625d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00476261  5f                   pop edi
// 00476262  5e                   pop esi
// 00476263  64890d00000000       mov dword ptr fs:[0], ecx
// 0047626a  83c414               add esp, 0x14
// 0047626d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
