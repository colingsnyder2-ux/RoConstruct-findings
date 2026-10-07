// roc 2007-08 004dd250  unit: seg_004d0000  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004dd250
//
// 004dd250  6aff                 push -1
// 004dd252  6804cd7400           push 0x74cd04
// 004dd257  64a100000000         mov eax, dword ptr fs:[0]
// 004dd25d  50                   push eax
// 004dd25e  64892500000000       mov dword ptr fs:[0], esp
// 004dd265  83ec08               sub esp, 8
// 004dd268  56                   push esi
// 004dd269  8bf1                 mov esi, ecx
// 004dd26b  8b4604               mov eax, dword ptr [esi + 4]
// 004dd26e  3b4608               cmp eax, dword ptr [esi + 8]
// 004dd271  8b0e                 mov ecx, dword ptr [esi]
// 004dd273  89742404             mov dword ptr [esp + 4], esi
// 004dd277  7d3b                 jge 0x4dd2b4
// 004dd279  8d0c81               lea ecx, [ecx + eax*4]
// 004dd27c  894c2408             mov dword ptr [esp + 8], ecx
// 004dd280  85c9                 test ecx, ecx
// 004dd282  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004dd28a  7412                 je 0x4dd29e
// 004dd28c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004dd290  c70100000000         mov dword ptr [ecx], 0
// 004dd296  8b02                 mov eax, dword ptr [edx]
// 004dd298  50                   push eax
// 004dd299  e8d27cf9ff           call 0x474f70
// 004dd29e  83460401             add dword ptr [esi + 4], 1
// 004dd2a2  5e                   pop esi
// 004dd2a3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dd2a7  64890d00000000       mov dword ptr fs:[0], ecx
// 004dd2ae  83c414               add esp, 0x14
// 004dd2b1  c20400               ret 4
// 004dd2b4  57                   push edi
// 004dd2b5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004dd2b9  3bf9                 cmp edi, ecx
// 004dd2bb  0f8281000000         jb 0x4dd342
// 004dd2c1  8d0c81               lea ecx, [ecx + eax*4]
// 004dd2c4  3bf9                 cmp edi, ecx
// 004dd2c6  737a                 jae 0x4dd342
// 004dd2c8  8b3f                 mov edi, dword ptr [edi]
// 004dd2ca  85ff                 test edi, edi
// 004dd2cc  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004dd2d4  740e                 je 0x4dd2e4
// 004dd2d6  8d4704               lea eax, [edi + 4]
// 004dd2d9  50                   push eax
// 004dd2da  897c2424             mov dword ptr [esp + 0x24], edi
// 004dd2de  ff15ecd27700         call dword ptr [0x77d2ec]
// 004dd2e4  8d542420             lea edx, [esp + 0x20]
// 004dd2e8  52                   push edx
// 004dd2e9  8bce                 mov ecx, esi
// 004dd2eb  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004dd2f3  e858ffffff           call 0x4dd250
// 004dd2f8  8b442420             mov eax, dword ptr [esp + 0x20]
// 004dd2fc  85c0                 test eax, eax
// 004dd2fe  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004dd306  7458                 je 0x4dd360
// 004dd308  83c004               add eax, 4
// 004dd30b  50                   push eax
// 004dd30c  ff15e8d27700         call dword ptr [0x77d2e8]
// 004dd312  85c0                 test eax, eax
// 004dd314  754a                 jne 0x4dd360
// 004dd316  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004dd31a  e8b1aaf7ff           call 0x457dd0
// 004dd31f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004dd323  85c9                 test ecx, ecx
// 004dd325  7439                 je 0x4dd360
// 004dd327  8b01                 mov eax, dword ptr [ecx]
// 004dd329  8b10                 mov edx, dword ptr [eax]
// 004dd32b  6a01                 push 1
// 004dd32d  ffd2                 call edx
// 004dd32f  5f                   pop edi
// 004dd330  5e                   pop esi
// 004dd331  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dd335  64890d00000000       mov dword ptr fs:[0], ecx
// 004dd33c  83c414               add esp, 0x14
// 004dd33f  c20400               ret 4
// 004dd342  6a00                 push 0
// 004dd344  83c001               add eax, 1
// 004dd347  50                   push eax
// 004dd348  8bce                 mov ecx, esi
// 004dd34a  e8c1c6ffff           call 0x4d9a10
// 004dd34f  8b07                 mov eax, dword ptr [edi]
// 004dd351  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dd354  8b16                 mov edx, dword ptr [esi]
// 004dd356  50                   push eax
// 004dd357  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004dd35b  e8107cf9ff           call 0x474f70
// 004dd360  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004dd364  5f                   pop edi
// 004dd365  5e                   pop esi
// 004dd366  64890d00000000       mov dword ptr fs:[0], ecx
// 004dd36d  83c414               add esp, 0x14
// 004dd370  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
