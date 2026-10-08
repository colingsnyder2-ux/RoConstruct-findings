// from server: 100% by auto
// roc 2011-06 0053f760  unit: G3D::MemoryManager  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053f760
//
// 0053f760  6aff                 push -1
// 0053f762  68a5ec9d00           push 0x9deca5
// 0053f767  64a100000000         mov eax, dword ptr fs:[0]
// 0053f76d  50                   push eax
// 0053f76e  64892500000000       mov dword ptr fs:[0], esp
// 0053f775  83ec24               sub esp, 0x24
// 0053f778  56                   push esi
// 0053f779  8bf1                 mov esi, ecx
// 0053f77b  8b4604               mov eax, dword ptr [esi + 4]
// 0053f77e  3b4608               cmp eax, dword ptr [esi + 8]
// 0053f781  89742404             mov dword ptr [esp + 4], esi
// 0053f785  7d3e                 jge 0x53f7c5
// 0053f787  8b16                 mov edx, dword ptr [esi]
// 0053f789  8d0cc500000000       lea ecx, [eax*8]
// 0053f790  2bc8                 sub ecx, eax
// 0053f792  8d0c8a               lea ecx, [edx + ecx*4]
// 0053f795  894c2408             mov dword ptr [esp + 8], ecx
// 0053f799  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0053f7a1  85c9                 test ecx, ecx
// 0053f7a3  740b                 je 0x53f7b0
// 0053f7a5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0053f7a9  50                   push eax
// 0053f7aa  ff15c804a400         call dword ptr [0xa404c8]
// 0053f7b0  ff4604               inc dword ptr [esi + 4]
// 0053f7b3  5e                   pop esi
// 0053f7b4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053f7b8  64890d00000000       mov dword ptr fs:[0], ecx
// 0053f7bf  83c430               add esp, 0x30
// 0053f7c2  c20400               ret 4
// 0053f7c5  8b0e                 mov ecx, dword ptr [esi]
// 0053f7c7  57                   push edi
// 0053f7c8  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0053f7cc  3bf9                 cmp edi, ecx
// 0053f7ce  7254                 jb 0x53f824
// 0053f7d0  8d14c500000000       lea edx, [eax*8]
// 0053f7d7  2bd0                 sub edx, eax
// 0053f7d9  8d0c91               lea ecx, [ecx + edx*4]
// 0053f7dc  3bf9                 cmp edi, ecx
// 0053f7de  7344                 jae 0x53f824
// 0053f7e0  57                   push edi
// 0053f7e1  8d4c2414             lea ecx, [esp + 0x14]
// 0053f7e5  ff15c804a400         call dword ptr [0xa404c8]
// 0053f7eb  8d542410             lea edx, [esp + 0x10]
// 0053f7ef  52                   push edx
// 0053f7f0  8bce                 mov ecx, esi
// 0053f7f2  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0053f7fa  e861ffffff           call 0x53f760
// 0053f7ff  8d4c2410             lea ecx, [esp + 0x10]
// 0053f803  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0053f80b  ff15d004a400         call dword ptr [0xa404d0]
// 0053f811  5f                   pop edi
// 0053f812  5e                   pop esi
// 0053f813  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053f817  64890d00000000       mov dword ptr fs:[0], ecx
// 0053f81e  83c430               add esp, 0x30
// 0053f821  c20400               ret 4
// 0053f824  6a00                 push 0
// 0053f826  40                   inc eax
// 0053f827  50                   push eax
// 0053f828  8bce                 mov ecx, esi
// 0053f82a  e801fdffff           call 0x53f530
// 0053f82f  8b4604               mov eax, dword ptr [esi + 4]
// 0053f832  8b16                 mov edx, dword ptr [esi]
// 0053f834  8d0cc500000000       lea ecx, [eax*8]
// 0053f83b  2bc8                 sub ecx, eax
// 0053f83d  57                   push edi
// 0053f83e  8d4c8ae4             lea ecx, [edx + ecx*4 - 0x1c]
// 0053f842  ff15a804a400         call dword ptr [0xa404a8]
// 0053f848  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053f84c  5f                   pop edi
// 0053f84d  5e                   pop esi
// 0053f84e  64890d00000000       mov dword ptr fs:[0], ecx
// 0053f855  83c430               add esp, 0x30
// 0053f858  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?append@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
