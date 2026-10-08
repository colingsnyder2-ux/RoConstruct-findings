// from server: 100% by auto
// roc 2009-06 0056c980  unit: G3D::Shader  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056c980
//
// 0056c980  6aff                 push -1
// 0056c982  68b5ff8500           push 0x85ffb5
// 0056c987  64a100000000         mov eax, dword ptr fs:[0]
// 0056c98d  50                   push eax
// 0056c98e  64892500000000       mov dword ptr fs:[0], esp
// 0056c995  83ec24               sub esp, 0x24
// 0056c998  56                   push esi
// 0056c999  8bf1                 mov esi, ecx
// 0056c99b  8b4604               mov eax, dword ptr [esi + 4]
// 0056c99e  3b4608               cmp eax, dword ptr [esi + 8]
// 0056c9a1  89742404             mov dword ptr [esp + 4], esi
// 0056c9a5  7d3e                 jge 0x56c9e5
// 0056c9a7  8b16                 mov edx, dword ptr [esi]
// 0056c9a9  8d0cc500000000       lea ecx, [eax*8]
// 0056c9b0  2bc8                 sub ecx, eax
// 0056c9b2  8d0c8a               lea ecx, [edx + ecx*4]
// 0056c9b5  894c2408             mov dword ptr [esp + 8], ecx
// 0056c9b9  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0056c9c1  85c9                 test ecx, ecx
// 0056c9c3  740b                 je 0x56c9d0
// 0056c9c5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0056c9c9  50                   push eax
// 0056c9ca  ff15b8e48900         call dword ptr [0x89e4b8]
// 0056c9d0  ff4604               inc dword ptr [esi + 4]
// 0056c9d3  5e                   pop esi
// 0056c9d4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0056c9d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c9df  83c430               add esp, 0x30
// 0056c9e2  c20400               ret 4
// 0056c9e5  8b0e                 mov ecx, dword ptr [esi]
// 0056c9e7  57                   push edi
// 0056c9e8  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0056c9ec  3bf9                 cmp edi, ecx
// 0056c9ee  7254                 jb 0x56ca44
// 0056c9f0  8d14c500000000       lea edx, [eax*8]
// 0056c9f7  2bd0                 sub edx, eax
// 0056c9f9  8d0c91               lea ecx, [ecx + edx*4]
// 0056c9fc  3bf9                 cmp edi, ecx
// 0056c9fe  7344                 jae 0x56ca44
// 0056ca00  57                   push edi
// 0056ca01  8d4c2414             lea ecx, [esp + 0x14]
// 0056ca05  ff15b8e48900         call dword ptr [0x89e4b8]
// 0056ca0b  8d542410             lea edx, [esp + 0x10]
// 0056ca0f  52                   push edx
// 0056ca10  8bce                 mov ecx, esi
// 0056ca12  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0056ca1a  e861ffffff           call 0x56c980
// 0056ca1f  8d4c2410             lea ecx, [esp + 0x10]
// 0056ca23  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0056ca2b  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056ca31  5f                   pop edi
// 0056ca32  5e                   pop esi
// 0056ca33  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0056ca37  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ca3e  83c430               add esp, 0x30
// 0056ca41  c20400               ret 4
// 0056ca44  6a00                 push 0
// 0056ca46  40                   inc eax
// 0056ca47  50                   push eax
// 0056ca48  8bce                 mov ecx, esi
// 0056ca4a  e891f0ffff           call 0x56bae0
// 0056ca4f  8b4604               mov eax, dword ptr [esi + 4]
// 0056ca52  8b16                 mov edx, dword ptr [esi]
// 0056ca54  8d0cc500000000       lea ecx, [eax*8]
// 0056ca5b  2bc8                 sub ecx, eax
// 0056ca5d  57                   push edi
// 0056ca5e  8d4c8ae4             lea ecx, [edx + ecx*4 - 0x1c]
// 0056ca62  ff1564e48900         call dword ptr [0x89e464]
// 0056ca68  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0056ca6c  5f                   pop edi
// 0056ca6d  5e                   pop esi
// 0056ca6e  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ca75  83c430               add esp, 0x30
// 0056ca78  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?append@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
