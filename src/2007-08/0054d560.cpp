// roc 2007-08 0054d560  unit: boost::iostreams::Uinput::?$filtering_stream  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d560
//
// 0054d560  6aff                 push -1
// 0054d562  6828277500           push 0x752728
// 0054d567  64a100000000         mov eax, dword ptr fs:[0]
// 0054d56d  50                   push eax
// 0054d56e  64892500000000       mov dword ptr fs:[0], esp
// 0054d575  83ec0c               sub esp, 0xc
// 0054d578  55                   push ebp
// 0054d579  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0054d57d  56                   push esi
// 0054d57e  57                   push edi
// 0054d57f  33f6                 xor esi, esi
// 0054d581  56                   push esi
// 0054d582  55                   push ebp
// 0054d583  8d4c2438             lea ecx, [esp + 0x38]
// 0054d587  ff1518e67700         call dword ptr [0x77e618]
// 0054d58d  8bf8                 mov edi, eax
// 0054d58f  897c2410             mov dword ptr [esp + 0x10], edi
// 0054d593  896c2414             mov dword ptr [esp + 0x14], ebp
// 0054d597  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0054d59b  89742420             mov dword ptr [esp + 0x20], esi
// 0054d59f  8944242c             mov dword ptr [esp + 0x2c], eax
// 0054d5a3  8974240c             mov dword ptr [esp + 0xc], esi
// 0054d5a7  53                   push ebx
// 0054d5a8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0054d5ac  8b01                 mov eax, dword ptr [ecx]
// 0054d5ae  8b10                 mov edx, dword ptr [eax]
// 0054d5b0  8b4a04               mov ecx, dword ptr [edx + 4]
// 0054d5b3  8b440128             mov eax, dword ptr [ecx + eax + 0x28]
// 0054d5b7  55                   push ebp
// 0054d5b8  57                   push edi
// 0054d5b9  8bc8                 mov ecx, eax
// 0054d5bb  ff150ce67700         call dword ptr [0x77e60c]
// 0054d5c1  85c0                 test eax, eax
// 0054d5c3  7404                 je 0x54d5c9
// 0054d5c5  8bf0                 mov esi, eax
// 0054d5c7  eb03                 jmp 0x54d5cc
// 0054d5c9  83ceff               or esi, 0xffffffff
// 0054d5cc  83feff               cmp esi, -1
// 0054d5cf  0f94c3               sete bl
// 0054d5d2  83feff               cmp esi, -1
// 0054d5d5  740f                 je 0x54d5e6
// 0054d5d7  56                   push esi
// 0054d5d8  57                   push edi
// 0054d5d9  8d4c2438             lea ecx, [esp + 0x38]
// 0054d5dd  e82ee2ffff           call 0x54b810
// 0054d5e2  01742410             add dword ptr [esp + 0x10], esi
// 0054d5e6  84db                 test bl, bl
// 0054d5e8  74be                 je 0x54d5a8
// 0054d5ea  85ff                 test edi, edi
// 0054d5ec  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0054d5f4  5b                   pop ebx
// 0054d5f5  740c                 je 0x54d603
// 0054d5f7  55                   push ebp
// 0054d5f8  57                   push edi
// 0054d5f9  8d4c2434             lea ecx, [esp + 0x34]
// 0054d5fd  ff1510e67700         call dword ptr [0x77e610]
// 0054d603  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0054d607  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054d60b  5f                   pop edi
// 0054d60c  5e                   pop esi
// 0054d60d  5d                   pop ebp
// 0054d60e  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d615  83c418               add esp, 0x18
// 0054d618  c3                   ret 
// copied from an identical function in another client (function ??$copy_impl@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@2@@detail@iostreams@boost@@YAHAAV?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@2@AAV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@HU?$bool_@$0A@@mpl@2@2@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_ca18cb6bd8223514.cpp