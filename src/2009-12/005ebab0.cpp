// roc 2009-12 005ebab0  unit: G3D::Shader  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ebab0
//
// 005ebab0  6aff                 push -1
// 005ebab2  68c5ee9300           push 0x93eec5
// 005ebab7  64a100000000         mov eax, dword ptr fs:[0]
// 005ebabd  50                   push eax
// 005ebabe  64892500000000       mov dword ptr fs:[0], esp
// 005ebac5  83ec24               sub esp, 0x24
// 005ebac8  56                   push esi
// 005ebac9  8bf1                 mov esi, ecx
// 005ebacb  8b4604               mov eax, dword ptr [esi + 4]
// 005ebace  3b4608               cmp eax, dword ptr [esi + 8]
// 005ebad1  89742404             mov dword ptr [esp + 4], esi
// 005ebad5  7d3e                 jge 0x5ebb15
// 005ebad7  8b16                 mov edx, dword ptr [esi]
// 005ebad9  8d0cc500000000       lea ecx, [eax*8]
// 005ebae0  2bc8                 sub ecx, eax
// 005ebae2  8d0c8a               lea ecx, [edx + ecx*4]
// 005ebae5  894c2408             mov dword ptr [esp + 8], ecx
// 005ebae9  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005ebaf1  85c9                 test ecx, ecx
// 005ebaf3  740b                 je 0x5ebb00
// 005ebaf5  8b442438             mov eax, dword ptr [esp + 0x38]
// 005ebaf9  50                   push eax
// 005ebafa  ff15f0b69800         call dword ptr [0x98b6f0]
// 005ebb00  ff4604               inc dword ptr [esi + 4]
// 005ebb03  5e                   pop esi
// 005ebb04  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ebb08  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebb0f  83c430               add esp, 0x30
// 005ebb12  c20400               ret 4
// 005ebb15  8b0e                 mov ecx, dword ptr [esi]
// 005ebb17  57                   push edi
// 005ebb18  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005ebb1c  3bf9                 cmp edi, ecx
// 005ebb1e  7254                 jb 0x5ebb74
// 005ebb20  8d14c500000000       lea edx, [eax*8]
// 005ebb27  2bd0                 sub edx, eax
// 005ebb29  8d0c91               lea ecx, [ecx + edx*4]
// 005ebb2c  3bf9                 cmp edi, ecx
// 005ebb2e  7344                 jae 0x5ebb74
// 005ebb30  57                   push edi
// 005ebb31  8d4c2414             lea ecx, [esp + 0x14]
// 005ebb35  ff15f0b69800         call dword ptr [0x98b6f0]
// 005ebb3b  8d542410             lea edx, [esp + 0x10]
// 005ebb3f  52                   push edx
// 005ebb40  8bce                 mov ecx, esi
// 005ebb42  c744243801000000     mov dword ptr [esp + 0x38], 1
// 005ebb4a  e861ffffff           call 0x5ebab0
// 005ebb4f  8d4c2410             lea ecx, [esp + 0x10]
// 005ebb53  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 005ebb5b  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ebb61  5f                   pop edi
// 005ebb62  5e                   pop esi
// 005ebb63  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ebb67  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebb6e  83c430               add esp, 0x30
// 005ebb71  c20400               ret 4
// 005ebb74  6a00                 push 0
// 005ebb76  40                   inc eax
// 005ebb77  50                   push eax
// 005ebb78  8bce                 mov ecx, esi
// 005ebb7a  e891f0ffff           call 0x5eac10
// 005ebb7f  8b4604               mov eax, dword ptr [esi + 4]
// 005ebb82  8b16                 mov edx, dword ptr [esi]
// 005ebb84  8d0cc500000000       lea ecx, [eax*8]
// 005ebb8b  2bc8                 sub ecx, eax
// 005ebb8d  57                   push edi
// 005ebb8e  8d4c8ae4             lea ecx, [edx + ecx*4 - 0x1c]
// 005ebb92  ff159cb69800         call dword ptr [0x98b69c]
// 005ebb98  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ebb9c  5f                   pop edi
// 005ebb9d  5e                   pop esi
// 005ebb9e  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebba5  83c430               add esp, 0x30
// 005ebba8  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?append@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
