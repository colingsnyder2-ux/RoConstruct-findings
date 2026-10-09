// roc 2009-06 005644a0  unit: boost::bad_lexical_cast  size: 558 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005644a0
//
// 005644a0  6aff                 push -1
// 005644a2  6851f58500           push 0x85f551
// 005644a7  64a100000000         mov eax, dword ptr fs:[0]
// 005644ad  50                   push eax
// 005644ae  64892500000000       mov dword ptr fs:[0], esp
// 005644b5  83ec5c               sub esp, 0x5c
// 005644b8  56                   push esi
// 005644b9  33f6                 xor esi, esi
// 005644bb  89742408             mov dword ptr [esp + 8], esi
// 005644bf  803d1ac9a30000       cmp byte ptr [0xa3c91a], 0
// 005644c6  7409                 je 0x5644d1
// 005644c8  803d1bc9a30000       cmp byte ptr [0xa3c91b], 0
// 005644cf  7512                 jne 0x5644e3
// 005644d1  803d18c9a30000       cmp byte ptr [0xa3c918], 0
// 005644d8  741f                 je 0x5644f9
// 005644da  803d19c9a30000       cmp byte ptr [0xa3c919], 0
// 005644e1  7416                 je 0x5644f9
// 005644e3  d90544d08b00         fld dword ptr [0x8bd044]
// 005644e9  5e                   pop esi
// 005644ea  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005644ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005644f5  83c468               add esp, 0x68
// 005644f8  c3                   ret 
// 005644f9  53                   push ebx
// 005644fa  6878a88c00           push 0x8ca878
// 005644ff  8d4c2430             lea ecx, [esp + 0x30]
// 00564503  ff15b4e48900         call dword ptr [0x89e4b4]
// 00564509  8d44242c             lea eax, [esp + 0x2c]
// 0056450d  bb01000000           mov ebx, 1
// 00564512  50                   push eax
// 00564513  89742470             mov dword ptr [esp + 0x70], esi
// 00564517  895c2410             mov dword ptr [esp + 0x10], ebx
// 0056451b  e8302ef4ff           call 0x4a7350
// 00564520  83c404               add esp, 4
// 00564523  84c0                 test al, al
// 00564525  7532                 jne 0x564559
// 00564527  6860a88c00           push 0x8ca860
// 0056452c  8d4c2414             lea ecx, [esp + 0x14]
// 00564530  ff15b4e48900         call dword ptr [0x89e4b4]
// 00564536  895c246c             mov dword ptr [esp + 0x6c], ebx
// 0056453a  8d4c2410             lea ecx, [esp + 0x10]
// 0056453e  bb03000000           mov ebx, 3
// 00564543  51                   push ecx
// 00564544  895c2410             mov dword ptr [esp + 0x10], ebx
// 00564548  e8032ef4ff           call 0x4a7350
// 0056454d  83c404               add esp, 4
// 00564550  c644240b00           mov byte ptr [esp + 0xb], 0
// 00564555  84c0                 test al, al
// 00564557  7405                 je 0x56455e
// 00564559  c644240b01           mov byte ptr [esp + 0xb], 1
// 0056455e  8974246c             mov dword ptr [esp + 0x6c], esi
// 00564562  f6c302               test bl, 2
// 00564565  7411                 je 0x564578
// 00564567  83e3fd               and ebx, 0xfffffffd
// 0056456a  8d4c2410             lea ecx, [esp + 0x10]
// 0056456e  895c240c             mov dword ptr [esp + 0xc], ebx
// 00564572  ff15c4e48900         call dword ptr [0x89e4c4]
// 00564578  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 00564580  f6c301               test bl, 1
// 00564583  740d                 je 0x564592
// 00564585  8d4c242c             lea ecx, [esp + 0x2c]
// 00564589  83e3fe               and ebx, 0xfffffffe
// 0056458c  ff15c4e48900         call dword ptr [0x89e4c4]
// 00564592  807c240b00           cmp byte ptr [esp + 0xb], 0
// 00564597  7417                 je 0x5645b0
// 00564599  d90544d08b00         fld dword ptr [0x8bd044]
// 0056459f  5b                   pop ebx
// 005645a0  5e                   pop esi
// 005645a1  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005645a5  64890d00000000       mov dword ptr fs:[0], ecx
// 005645ac  83c468               add esp, 0x68
// 005645af  c3                   ret 
// 005645b0  6844a88c00           push 0x8ca844
// 005645b5  8d4c2414             lea ecx, [esp + 0x14]
// 005645b9  ff15b4e48900         call dword ptr [0x89e4b4]
// 005645bf  8d542410             lea edx, [esp + 0x10]
// 005645c3  be02000000           mov esi, 2
// 005645c8  83cb04               or ebx, 4
// 005645cb  52                   push edx
// 005645cc  89742470             mov dword ptr [esp + 0x70], esi
// 005645d0  895c2410             mov dword ptr [esp + 0x10], ebx
// 005645d4  e8772df4ff           call 0x4a7350
// 005645d9  83c404               add esp, 4
// 005645dc  84c0                 test al, al
// 005645de  7534                 jne 0x564614
// 005645e0  682ca88c00           push 0x8ca82c
// 005645e5  8d4c2430             lea ecx, [esp + 0x30]
// 005645e9  ff15b4e48900         call dword ptr [0x89e4b4]
// 005645ef  8d44242c             lea eax, [esp + 0x2c]
// 005645f3  83cb08               or ebx, 8
// 005645f6  50                   push eax
// 005645f7  c744247003000000     mov dword ptr [esp + 0x70], 3
// 005645ff  895c2410             mov dword ptr [esp + 0x10], ebx
// 00564603  e8482df4ff           call 0x4a7350
// 00564608  83c404               add esp, 4
// 0056460b  c644240b00           mov byte ptr [esp + 0xb], 0
// 00564610  84c0                 test al, al
// 00564612  7405                 je 0x564619
// 00564614  c644240b01           mov byte ptr [esp + 0xb], 1
// 00564619  8974246c             mov dword ptr [esp + 0x6c], esi
// 0056461d  f6c308               test bl, 8
// 00564620  7411                 je 0x564633
// 00564622  83e3f7               and ebx, 0xfffffff7
// 00564625  8d4c242c             lea ecx, [esp + 0x2c]
// 00564629  895c240c             mov dword ptr [esp + 0xc], ebx
// 0056462d  ff15c4e48900         call dword ptr [0x89e4c4]
// 00564633  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 0056463b  f6c304               test bl, 4
// 0056463e  740a                 je 0x56464a
// 00564640  8d4c2410             lea ecx, [esp + 0x10]
// 00564644  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056464a  807c240b00           cmp byte ptr [esp + 0xb], 0
// 0056464f  7417                 je 0x564668
// 00564651  d90528a88c00         fld dword ptr [0x8ca828]
// 00564657  5b                   pop ebx
// 00564658  5e                   pop esi
// 00564659  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0056465d  64890d00000000       mov dword ptr fs:[0], ecx
// 00564664  83c468               add esp, 0x68
// 00564667  c3                   ret 
// 00564668  680ca88c00           push 0x8ca80c
// 0056466d  8d4c244c             lea ecx, [esp + 0x4c]
// 00564671  ff15b4e48900         call dword ptr [0x89e4b4]
// 00564677  8d4c2448             lea ecx, [esp + 0x48]
// 0056467b  51                   push ecx
// 0056467c  c744247004000000     mov dword ptr [esp + 0x70], 4
// 00564684  e8c72cf4ff           call 0x4a7350
// 00564689  83c404               add esp, 4
// 0056468c  8d4c2448             lea ecx, [esp + 0x48]
// 00564690  8ad8                 mov bl, al
// 00564692  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 0056469a  ff15c4e48900         call dword ptr [0x89e4c4]
// 005646a0  84db                 test bl, bl
// 005646a2  7417                 je 0x5646bb
// 005646a4  d90508a88c00         fld dword ptr [0x8ca808]
// 005646aa  5b                   pop ebx
// 005646ab  5e                   pop esi
// 005646ac  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005646b0  64890d00000000       mov dword ptr fs:[0], ecx
// 005646b7  83c468               add esp, 0x68
// 005646ba  c3                   ret 
// 005646bb  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005646bf  d9e8                 fld1 
// 005646c1  5b                   pop ebx
// 005646c2  5e                   pop esi
// 005646c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005646ca  83c468               add esp, 0x68
// 005646cd  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getShaderModel@Render@RBX@@YAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
