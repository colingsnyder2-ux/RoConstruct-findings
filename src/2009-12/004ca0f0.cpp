// roc 2009-12 004ca0f0  unit: G3D::VARArea  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca0f0
//
// 004ca0f0  6aff                 push -1
// 004ca0f2  68f4bc9300           push 0x93bcf4
// 004ca0f7  64a100000000         mov eax, dword ptr fs:[0]
// 004ca0fd  50                   push eax
// 004ca0fe  64892500000000       mov dword ptr fs:[0], esp
// 004ca105  83ec08               sub esp, 8
// 004ca108  56                   push esi
// 004ca109  8bf1                 mov esi, ecx
// 004ca10b  8b4604               mov eax, dword ptr [esi + 4]
// 004ca10e  3b4608               cmp eax, dword ptr [esi + 8]
// 004ca111  8b0e                 mov ecx, dword ptr [esi]
// 004ca113  89742404             mov dword ptr [esp + 4], esi
// 004ca117  7d3a                 jge 0x4ca153
// 004ca119  8d0c81               lea ecx, [ecx + eax*4]
// 004ca11c  894c2408             mov dword ptr [esp + 8], ecx
// 004ca120  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004ca128  85c9                 test ecx, ecx
// 004ca12a  7412                 je 0x4ca13e
// 004ca12c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004ca130  c70100000000         mov dword ptr [ecx], 0
// 004ca136  8b02                 mov eax, dword ptr [edx]
// 004ca138  50                   push eax
// 004ca139  e8321af8ff           call 0x44bb70
// 004ca13e  ff4604               inc dword ptr [esi + 4]
// 004ca141  5e                   pop esi
// 004ca142  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ca146  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca14d  83c414               add esp, 0x14
// 004ca150  c20400               ret 4
// 004ca153  57                   push edi
// 004ca154  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004ca158  3bf9                 cmp edi, ecx
// 004ca15a  0f8281000000         jb 0x4ca1e1
// 004ca160  8d0c81               lea ecx, [ecx + eax*4]
// 004ca163  3bf9                 cmp edi, ecx
// 004ca165  737a                 jae 0x4ca1e1
// 004ca167  8b3f                 mov edi, dword ptr [edi]
// 004ca169  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004ca171  85ff                 test edi, edi
// 004ca173  740e                 je 0x4ca183
// 004ca175  8d4704               lea eax, [edi + 4]
// 004ca178  50                   push eax
// 004ca179  897c2424             mov dword ptr [esp + 0x24], edi
// 004ca17d  ff150cb29800         call dword ptr [0x98b20c]
// 004ca183  8d542420             lea edx, [esp + 0x20]
// 004ca187  52                   push edx
// 004ca188  8bce                 mov ecx, esi
// 004ca18a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004ca192  e859ffffff           call 0x4ca0f0
// 004ca197  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ca19b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004ca1a3  85c0                 test eax, eax
// 004ca1a5  7456                 je 0x4ca1fd
// 004ca1a7  83c004               add eax, 4
// 004ca1aa  50                   push eax
// 004ca1ab  ff1508b29800         call dword ptr [0x98b208]
// 004ca1b1  85c0                 test eax, eax
// 004ca1b3  7548                 jne 0x4ca1fd
// 004ca1b5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004ca1b9  e8620ef8ff           call 0x44b020
// 004ca1be  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004ca1c2  85c9                 test ecx, ecx
// 004ca1c4  7437                 je 0x4ca1fd
// 004ca1c6  8b01                 mov eax, dword ptr [ecx]
// 004ca1c8  8b10                 mov edx, dword ptr [eax]
// 004ca1ca  6a01                 push 1
// 004ca1cc  ffd2                 call edx
// 004ca1ce  5f                   pop edi
// 004ca1cf  5e                   pop esi
// 004ca1d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ca1d4  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca1db  83c414               add esp, 0x14
// 004ca1de  c20400               ret 4
// 004ca1e1  6a00                 push 0
// 004ca1e3  40                   inc eax
// 004ca1e4  50                   push eax
// 004ca1e5  8bce                 mov ecx, esi
// 004ca1e7  e874fdffff           call 0x4c9f60
// 004ca1ec  8b07                 mov eax, dword ptr [edi]
// 004ca1ee  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ca1f1  8b16                 mov edx, dword ptr [esi]
// 004ca1f3  50                   push eax
// 004ca1f4  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004ca1f8  e87319f8ff           call 0x44bb70
// 004ca1fd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ca201  5f                   pop edi
// 004ca202  5e                   pop esi
// 004ca203  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca20a  83c414               add esp, 0x14
// 004ca20d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
