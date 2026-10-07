// roc 2012-06 0062b660  unit: G3D::MemoryManager  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062b660
//
// 0062b660  6aff                 push -1
// 0062b662  687546ab00           push 0xab4675
// 0062b667  64a100000000         mov eax, dword ptr fs:[0]
// 0062b66d  50                   push eax
// 0062b66e  64892500000000       mov dword ptr fs:[0], esp
// 0062b675  83ec24               sub esp, 0x24
// 0062b678  56                   push esi
// 0062b679  8bf1                 mov esi, ecx
// 0062b67b  8b4604               mov eax, dword ptr [esi + 4]
// 0062b67e  3b4608               cmp eax, dword ptr [esi + 8]
// 0062b681  89742404             mov dword ptr [esp + 4], esi
// 0062b685  7d3e                 jge 0x62b6c5
// 0062b687  8b16                 mov edx, dword ptr [esi]
// 0062b689  8d0cc500000000       lea ecx, [eax*8]
// 0062b690  2bc8                 sub ecx, eax
// 0062b692  8d0c8a               lea ecx, [edx + ecx*4]
// 0062b695  894c2408             mov dword ptr [esp + 8], ecx
// 0062b699  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0062b6a1  85c9                 test ecx, ecx
// 0062b6a3  740b                 je 0x62b6b0
// 0062b6a5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0062b6a9  50                   push eax
// 0062b6aa  ff154426b200         call dword ptr [0xb22644]
// 0062b6b0  ff4604               inc dword ptr [esi + 4]
// 0062b6b3  5e                   pop esi
// 0062b6b4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062b6b8  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b6bf  83c430               add esp, 0x30
// 0062b6c2  c20400               ret 4
// 0062b6c5  8b0e                 mov ecx, dword ptr [esi]
// 0062b6c7  57                   push edi
// 0062b6c8  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0062b6cc  3bf9                 cmp edi, ecx
// 0062b6ce  7254                 jb 0x62b724
// 0062b6d0  8d14c500000000       lea edx, [eax*8]
// 0062b6d7  2bd0                 sub edx, eax
// 0062b6d9  8d0c91               lea ecx, [ecx + edx*4]
// 0062b6dc  3bf9                 cmp edi, ecx
// 0062b6de  7344                 jae 0x62b724
// 0062b6e0  57                   push edi
// 0062b6e1  8d4c2414             lea ecx, [esp + 0x14]
// 0062b6e5  ff154426b200         call dword ptr [0xb22644]
// 0062b6eb  8d542410             lea edx, [esp + 0x10]
// 0062b6ef  52                   push edx
// 0062b6f0  8bce                 mov ecx, esi
// 0062b6f2  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0062b6fa  e861ffffff           call 0x62b660
// 0062b6ff  8d4c2410             lea ecx, [esp + 0x10]
// 0062b703  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0062b70b  ff153c26b200         call dword ptr [0xb2263c]
// 0062b711  5f                   pop edi
// 0062b712  5e                   pop esi
// 0062b713  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062b717  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b71e  83c430               add esp, 0x30
// 0062b721  c20400               ret 4
// 0062b724  6a00                 push 0
// 0062b726  40                   inc eax
// 0062b727  50                   push eax
// 0062b728  8bce                 mov ecx, esi
// 0062b72a  e801fdffff           call 0x62b430
// 0062b72f  8b4604               mov eax, dword ptr [esi + 4]
// 0062b732  8b16                 mov edx, dword ptr [esi]
// 0062b734  8d0cc500000000       lea ecx, [eax*8]
// 0062b73b  2bc8                 sub ecx, eax
// 0062b73d  57                   push edi
// 0062b73e  8d4c8ae4             lea ecx, [edx + ecx*4 - 0x1c]
// 0062b742  ff155826b200         call dword ptr [0xb22658]
// 0062b748  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0062b74c  5f                   pop edi
// 0062b74d  5e                   pop esi
// 0062b74e  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b755  83c430               add esp, 0x30
// 0062b758  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?append@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
