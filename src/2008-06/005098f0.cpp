// roc 2008-06 005098f0  unit: G3D::Shader  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005098f0
//
// 005098f0  6aff                 push -1
// 005098f2  6825bd7c00           push 0x7cbd25
// 005098f7  64a100000000         mov eax, dword ptr fs:[0]
// 005098fd  50                   push eax
// 005098fe  64892500000000       mov dword ptr fs:[0], esp
// 00509905  83ec24               sub esp, 0x24
// 00509908  56                   push esi
// 00509909  8bf1                 mov esi, ecx
// 0050990b  8b4604               mov eax, dword ptr [esi + 4]
// 0050990e  3b4608               cmp eax, dword ptr [esi + 8]
// 00509911  89742404             mov dword ptr [esp + 4], esi
// 00509915  7d3e                 jge 0x509955
// 00509917  8b16                 mov edx, dword ptr [esi]
// 00509919  8d0cc500000000       lea ecx, [eax*8]
// 00509920  2bc8                 sub ecx, eax
// 00509922  8d0c8a               lea ecx, [edx + ecx*4]
// 00509925  894c2408             mov dword ptr [esp + 8], ecx
// 00509929  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00509931  85c9                 test ecx, ecx
// 00509933  740b                 je 0x509940
// 00509935  8b442438             mov eax, dword ptr [esp + 0x38]
// 00509939  50                   push eax
// 0050993a  ff155c248000         call dword ptr [0x80245c]
// 00509940  ff4604               inc dword ptr [esi + 4]
// 00509943  5e                   pop esi
// 00509944  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00509948  64890d00000000       mov dword ptr fs:[0], ecx
// 0050994f  83c430               add esp, 0x30
// 00509952  c20400               ret 4
// 00509955  8b0e                 mov ecx, dword ptr [esi]
// 00509957  57                   push edi
// 00509958  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0050995c  3bf9                 cmp edi, ecx
// 0050995e  7254                 jb 0x5099b4
// 00509960  8d14c500000000       lea edx, [eax*8]
// 00509967  2bd0                 sub edx, eax
// 00509969  8d0c91               lea ecx, [ecx + edx*4]
// 0050996c  3bf9                 cmp edi, ecx
// 0050996e  7344                 jae 0x5099b4
// 00509970  57                   push edi
// 00509971  8d4c2414             lea ecx, [esp + 0x14]
// 00509975  ff155c248000         call dword ptr [0x80245c]
// 0050997b  8d542410             lea edx, [esp + 0x10]
// 0050997f  52                   push edx
// 00509980  8bce                 mov ecx, esi
// 00509982  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0050998a  e861ffffff           call 0x5098f0
// 0050998f  8d4c2410             lea ecx, [esp + 0x10]
// 00509993  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0050999b  ff1568248000         call dword ptr [0x802468]
// 005099a1  5f                   pop edi
// 005099a2  5e                   pop esi
// 005099a3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005099a7  64890d00000000       mov dword ptr fs:[0], ecx
// 005099ae  83c430               add esp, 0x30
// 005099b1  c20400               ret 4
// 005099b4  6a00                 push 0
// 005099b6  40                   inc eax
// 005099b7  50                   push eax
// 005099b8  8bce                 mov ecx, esi
// 005099ba  e8f1fcffff           call 0x5096b0
// 005099bf  8b4604               mov eax, dword ptr [esi + 4]
// 005099c2  8b16                 mov edx, dword ptr [esi]
// 005099c4  8d0cc500000000       lea ecx, [eax*8]
// 005099cb  2bc8                 sub ecx, eax
// 005099cd  57                   push edi
// 005099ce  8d4c8ae4             lea ecx, [edx + ecx*4 - 0x1c]
// 005099d2  ff150c248000         call dword ptr [0x80240c]
// 005099d8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005099dc  5f                   pop edi
// 005099dd  5e                   pop esi
// 005099de  64890d00000000       mov dword ptr fs:[0], ecx
// 005099e5  83c430               add esp, 0x30
// 005099e8  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?append@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
