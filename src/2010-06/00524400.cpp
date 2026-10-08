// from server: 100% by auto
// roc 2010-06 00524400  unit: RBX::MeshGen  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00524400
//
// 00524400  6aff                 push -1
// 00524402  68c4f99800           push 0x98f9c4
// 00524407  64a100000000         mov eax, dword ptr fs:[0]
// 0052440d  50                   push eax
// 0052440e  64892500000000       mov dword ptr fs:[0], esp
// 00524415  83ec08               sub esp, 8
// 00524418  56                   push esi
// 00524419  8bf1                 mov esi, ecx
// 0052441b  8b4604               mov eax, dword ptr [esi + 4]
// 0052441e  3b4608               cmp eax, dword ptr [esi + 8]
// 00524421  8b0e                 mov ecx, dword ptr [esi]
// 00524423  89742404             mov dword ptr [esp + 4], esi
// 00524427  7d3a                 jge 0x524463
// 00524429  8d0c81               lea ecx, [ecx + eax*4]
// 0052442c  894c2408             mov dword ptr [esp + 8], ecx
// 00524430  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00524438  85c9                 test ecx, ecx
// 0052443a  7412                 je 0x52444e
// 0052443c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00524440  c70100000000         mov dword ptr [ecx], 0
// 00524446  8b02                 mov eax, dword ptr [edx]
// 00524448  50                   push eax
// 00524449  e8d228f6ff           call 0x486d20
// 0052444e  ff4604               inc dword ptr [esi + 4]
// 00524451  5e                   pop esi
// 00524452  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00524456  64890d00000000       mov dword ptr fs:[0], ecx
// 0052445d  83c414               add esp, 0x14
// 00524460  c20400               ret 4
// 00524463  57                   push edi
// 00524464  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00524468  3bf9                 cmp edi, ecx
// 0052446a  0f8281000000         jb 0x5244f1
// 00524470  8d0c81               lea ecx, [ecx + eax*4]
// 00524473  3bf9                 cmp edi, ecx
// 00524475  737a                 jae 0x5244f1
// 00524477  8b3f                 mov edi, dword ptr [edi]
// 00524479  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00524481  85ff                 test edi, edi
// 00524483  740e                 je 0x524493
// 00524485  8d4704               lea eax, [edi + 4]
// 00524488  50                   push eax
// 00524489  897c2424             mov dword ptr [esp + 0x24], edi
// 0052448d  ff1580a39e00         call dword ptr [0x9ea380]
// 00524493  8d542420             lea edx, [esp + 0x20]
// 00524497  52                   push edx
// 00524498  8bce                 mov ecx, esi
// 0052449a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 005244a2  e859ffffff           call 0x524400
// 005244a7  8b442420             mov eax, dword ptr [esp + 0x20]
// 005244ab  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005244b3  85c0                 test eax, eax
// 005244b5  7456                 je 0x52450d
// 005244b7  83c004               add eax, 4
// 005244ba  50                   push eax
// 005244bb  ff157ca39e00         call dword ptr [0x9ea37c]
// 005244c1  85c0                 test eax, eax
// 005244c3  7548                 jne 0x52450d
// 005244c5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005244c9  e852f6f5ff           call 0x483b20
// 005244ce  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005244d2  85c9                 test ecx, ecx
// 005244d4  7437                 je 0x52450d
// 005244d6  8b01                 mov eax, dword ptr [ecx]
// 005244d8  8b10                 mov edx, dword ptr [eax]
// 005244da  6a01                 push 1
// 005244dc  ffd2                 call edx
// 005244de  5f                   pop edi
// 005244df  5e                   pop esi
// 005244e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005244e4  64890d00000000       mov dword ptr fs:[0], ecx
// 005244eb  83c414               add esp, 0x14
// 005244ee  c20400               ret 4
// 005244f1  6a00                 push 0
// 005244f3  40                   inc eax
// 005244f4  50                   push eax
// 005244f5  8bce                 mov ecx, esi
// 005244f7  e894f6ffff           call 0x523b90
// 005244fc  8b07                 mov eax, dword ptr [edi]
// 005244fe  8b4e04               mov ecx, dword ptr [esi + 4]
// 00524501  8b16                 mov edx, dword ptr [esi]
// 00524503  50                   push eax
// 00524504  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 00524508  e81328f6ff           call 0x486d20
// 0052450d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00524511  5f                   pop edi
// 00524512  5e                   pop esi
// 00524513  64890d00000000       mov dword ptr fs:[0], ecx
// 0052451a  83c414               add esp, 0x14
// 0052451d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
