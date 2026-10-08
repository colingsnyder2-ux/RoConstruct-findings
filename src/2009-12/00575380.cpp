// roc 2009-12 00575380  unit: RBX::ViewRbxGfx  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00575380
//
// 00575380  6aff                 push -1
// 00575382  68f4bc9300           push 0x93bcf4
// 00575387  64a100000000         mov eax, dword ptr fs:[0]
// 0057538d  50                   push eax
// 0057538e  64892500000000       mov dword ptr fs:[0], esp
// 00575395  83ec08               sub esp, 8
// 00575398  56                   push esi
// 00575399  8bf1                 mov esi, ecx
// 0057539b  8b4604               mov eax, dword ptr [esi + 4]
// 0057539e  3b4608               cmp eax, dword ptr [esi + 8]
// 005753a1  8b0e                 mov ecx, dword ptr [esi]
// 005753a3  89742404             mov dword ptr [esp + 4], esi
// 005753a7  7d3a                 jge 0x5753e3
// 005753a9  8d0c81               lea ecx, [ecx + eax*4]
// 005753ac  894c2408             mov dword ptr [esp + 8], ecx
// 005753b0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005753b8  85c9                 test ecx, ecx
// 005753ba  7412                 je 0x5753ce
// 005753bc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005753c0  c70100000000         mov dword ptr [ecx], 0
// 005753c6  8b02                 mov eax, dword ptr [edx]
// 005753c8  50                   push eax
// 005753c9  e8a267edff           call 0x44bb70
// 005753ce  ff4604               inc dword ptr [esi + 4]
// 005753d1  5e                   pop esi
// 005753d2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005753d6  64890d00000000       mov dword ptr fs:[0], ecx
// 005753dd  83c414               add esp, 0x14
// 005753e0  c20400               ret 4
// 005753e3  57                   push edi
// 005753e4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005753e8  3bf9                 cmp edi, ecx
// 005753ea  0f8281000000         jb 0x575471
// 005753f0  8d0c81               lea ecx, [ecx + eax*4]
// 005753f3  3bf9                 cmp edi, ecx
// 005753f5  737a                 jae 0x575471
// 005753f7  8b3f                 mov edi, dword ptr [edi]
// 005753f9  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00575401  85ff                 test edi, edi
// 00575403  740e                 je 0x575413
// 00575405  8d4704               lea eax, [edi + 4]
// 00575408  50                   push eax
// 00575409  897c2424             mov dword ptr [esp + 0x24], edi
// 0057540d  ff150cb29800         call dword ptr [0x98b20c]
// 00575413  8d542420             lea edx, [esp + 0x20]
// 00575417  52                   push edx
// 00575418  8bce                 mov ecx, esi
// 0057541a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00575422  e859ffffff           call 0x575380
// 00575427  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057542b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00575433  85c0                 test eax, eax
// 00575435  7456                 je 0x57548d
// 00575437  83c004               add eax, 4
// 0057543a  50                   push eax
// 0057543b  ff1508b29800         call dword ptr [0x98b208]
// 00575441  85c0                 test eax, eax
// 00575443  7548                 jne 0x57548d
// 00575445  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00575449  e8d25bedff           call 0x44b020
// 0057544e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00575452  85c9                 test ecx, ecx
// 00575454  7437                 je 0x57548d
// 00575456  8b01                 mov eax, dword ptr [ecx]
// 00575458  8b10                 mov edx, dword ptr [eax]
// 0057545a  6a01                 push 1
// 0057545c  ffd2                 call edx
// 0057545e  5f                   pop edi
// 0057545f  5e                   pop esi
// 00575460  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00575464  64890d00000000       mov dword ptr fs:[0], ecx
// 0057546b  83c414               add esp, 0x14
// 0057546e  c20400               ret 4
// 00575471  6a00                 push 0
// 00575473  40                   inc eax
// 00575474  50                   push eax
// 00575475  8bce                 mov ecx, esi
// 00575477  e864fdffff           call 0x5751e0
// 0057547c  8b07                 mov eax, dword ptr [edi]
// 0057547e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00575481  8b16                 mov edx, dword ptr [esi]
// 00575483  50                   push eax
// 00575484  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 00575488  e8e366edff           call 0x44bb70
// 0057548d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00575491  5f                   pop edi
// 00575492  5e                   pop esi
// 00575493  64890d00000000       mov dword ptr fs:[0], ecx
// 0057549a  83c414               add esp, 0x14
// 0057549d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
