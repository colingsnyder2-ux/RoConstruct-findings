// roc 2007-03 005878c0  unit: seg_00580000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005878c0
//
// 005878c0  6aff                 push -1
// 005878c2  680c737500           push 0x75730c
// 005878c7  64a100000000         mov eax, dword ptr fs:[0]
// 005878cd  50                   push eax
// 005878ce  64892500000000       mov dword ptr fs:[0], esp
// 005878d5  83ec20               sub esp, 0x20
// 005878d8  53                   push ebx
// 005878d9  56                   push esi
// 005878da  57                   push edi
// 005878db  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005878df  33db                 xor ebx, ebx
// 005878e1  895c240c             mov dword ptr [esp + 0xc], ebx
// 005878e5  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005878e9  57                   push edi
// 005878ea  56                   push esi
// 005878eb  895c243c             mov dword ptr [esp + 0x3c], ebx
// 005878ef  e82c7effff           call 0x57f720
// 005878f4  83c408               add esp, 8
// 005878f7  6890bc7800           push 0x78bc90
// 005878fc  8bce                 mov ecx, esi
// 005878fe  895c2438             mov dword ptr [esp + 0x38], ebx
// 00587902  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0058790a  ff153ce77700         call dword ptr [0x77e73c]
// 00587910  8d4704               lea eax, [edi + 4]
// 00587913  50                   push eax
// 00587914  8d4c2414             lea ecx, [esp + 0x14]
// 00587918  51                   push ecx
// 00587919  e8027effff           call 0x57f720
// 0058791e  83c408               add esp, 8
// 00587921  50                   push eax
// 00587922  8bce                 mov ecx, esi
// 00587924  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0058792c  ff1540e77700         call dword ptr [0x77e740]
// 00587932  8d4c2410             lea ecx, [esp + 0x10]
// 00587936  885c2434             mov byte ptr [esp + 0x34], bl
// 0058793a  ff158ce77700         call dword ptr [0x77e78c]
// 00587940  6890bc7800           push 0x78bc90
// 00587945  8bce                 mov ecx, esi
// 00587947  ff153ce77700         call dword ptr [0x77e73c]
// 0058794d  83c708               add edi, 8
// 00587950  8d542410             lea edx, [esp + 0x10]
// 00587954  57                   push edi
// 00587955  52                   push edx
// 00587956  e8c57dffff           call 0x57f720
// 0058795b  83c408               add esp, 8
// 0058795e  50                   push eax
// 0058795f  8bce                 mov ecx, esi
// 00587961  c744243802000000     mov dword ptr [esp + 0x38], 2
// 00587969  ff1540e77700         call dword ptr [0x77e740]
// 0058796f  8d4c2410             lea ecx, [esp + 0x10]
// 00587973  885c2434             mov byte ptr [esp + 0x34], bl
// 00587977  ff158ce77700         call dword ptr [0x77e78c]
// 0058797d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00587981  5f                   pop edi
// 00587982  8bc6                 mov eax, esi
// 00587984  5e                   pop esi
// 00587985  5b                   pop ebx
// 00587986  64890d00000000       mov dword ptr fs:[0], ecx
// 0058798d  83c42c               add esp, 0x2c
// 00587990  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@VVector3@G3D@@@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
