// roc 2010-06 00540100  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00540100
//
// 00540100  6aff                 push -1
// 00540102  68c4f99800           push 0x98f9c4
// 00540107  64a100000000         mov eax, dword ptr fs:[0]
// 0054010d  50                   push eax
// 0054010e  64892500000000       mov dword ptr fs:[0], esp
// 00540115  83ec08               sub esp, 8
// 00540118  56                   push esi
// 00540119  8bf1                 mov esi, ecx
// 0054011b  8b4604               mov eax, dword ptr [esi + 4]
// 0054011e  3b4608               cmp eax, dword ptr [esi + 8]
// 00540121  8b0e                 mov ecx, dword ptr [esi]
// 00540123  89742404             mov dword ptr [esp + 4], esi
// 00540127  7d3a                 jge 0x540163
// 00540129  8d0c81               lea ecx, [ecx + eax*4]
// 0054012c  894c2408             mov dword ptr [esp + 8], ecx
// 00540130  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00540138  85c9                 test ecx, ecx
// 0054013a  7412                 je 0x54014e
// 0054013c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00540140  c70100000000         mov dword ptr [ecx], 0
// 00540146  8b02                 mov eax, dword ptr [edx]
// 00540148  50                   push eax
// 00540149  e8d26bf4ff           call 0x486d20
// 0054014e  ff4604               inc dword ptr [esi + 4]
// 00540151  5e                   pop esi
// 00540152  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00540156  64890d00000000       mov dword ptr fs:[0], ecx
// 0054015d  83c414               add esp, 0x14
// 00540160  c20400               ret 4
// 00540163  57                   push edi
// 00540164  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00540168  3bf9                 cmp edi, ecx
// 0054016a  0f8281000000         jb 0x5401f1
// 00540170  8d0c81               lea ecx, [ecx + eax*4]
// 00540173  3bf9                 cmp edi, ecx
// 00540175  737a                 jae 0x5401f1
// 00540177  8b3f                 mov edi, dword ptr [edi]
// 00540179  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00540181  85ff                 test edi, edi
// 00540183  740e                 je 0x540193
// 00540185  8d4704               lea eax, [edi + 4]
// 00540188  50                   push eax
// 00540189  897c2424             mov dword ptr [esp + 0x24], edi
// 0054018d  ff1580a39e00         call dword ptr [0x9ea380]
// 00540193  8d542420             lea edx, [esp + 0x20]
// 00540197  52                   push edx
// 00540198  8bce                 mov ecx, esi
// 0054019a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 005401a2  e859ffffff           call 0x540100
// 005401a7  8b442420             mov eax, dword ptr [esp + 0x20]
// 005401ab  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005401b3  85c0                 test eax, eax
// 005401b5  7456                 je 0x54020d
// 005401b7  83c004               add eax, 4
// 005401ba  50                   push eax
// 005401bb  ff157ca39e00         call dword ptr [0x9ea37c]
// 005401c1  85c0                 test eax, eax
// 005401c3  7548                 jne 0x54020d
// 005401c5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005401c9  e85239f4ff           call 0x483b20
// 005401ce  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005401d2  85c9                 test ecx, ecx
// 005401d4  7437                 je 0x54020d
// 005401d6  8b01                 mov eax, dword ptr [ecx]
// 005401d8  8b10                 mov edx, dword ptr [eax]
// 005401da  6a01                 push 1
// 005401dc  ffd2                 call edx
// 005401de  5f                   pop edi
// 005401df  5e                   pop esi
// 005401e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005401e4  64890d00000000       mov dword ptr fs:[0], ecx
// 005401eb  83c414               add esp, 0x14
// 005401ee  c20400               ret 4
// 005401f1  6a00                 push 0
// 005401f3  40                   inc eax
// 005401f4  50                   push eax
// 005401f5  8bce                 mov ecx, esi
// 005401f7  e8a4fbffff           call 0x53fda0
// 005401fc  8b07                 mov eax, dword ptr [edi]
// 005401fe  8b4e04               mov ecx, dword ptr [esi + 4]
// 00540201  8b16                 mov edx, dword ptr [esi]
// 00540203  50                   push eax
// 00540204  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 00540208  e8136bf4ff           call 0x486d20
// 0054020d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00540211  5f                   pop edi
// 00540212  5e                   pop esi
// 00540213  64890d00000000       mov dword ptr fs:[0], ecx
// 0054021a  83c414               add esp, 0x14
// 0054021d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
