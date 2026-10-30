// roc 2007-03 0054d910  unit: seg_00540000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054d910
//
// 0054d910  83ec0c               sub esp, 0xc
// 0054d913  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054d917  53                   push ebx
// 0054d918  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0054d91c  55                   push ebp
// 0054d91d  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0054d921  56                   push esi
// 0054d922  8b742428             mov esi, dword ptr [esp + 0x28]
// 0054d926  57                   push edi
// 0054d927  89442414             mov dword ptr [esp + 0x14], eax
// 0054d92b  eb03                 jmp 0x54d930
// 0054d92d  8d4900               lea ecx, [ecx]
// 0054d930  3bf5                 cmp esi, ebp
// 0054d932  7422                 je 0x54d956
// 0054d934  f6c302               test bl, 2
// 0054d937  8b4604               mov eax, dword ptr [esi + 4]
// 0054d93a  8b7808               mov edi, dword ptr [eax + 8]
// 0054d93d  7408                 je 0x54d947
// 0054d93f  8bcf                 mov ecx, edi
// 0054d941  ff1558e77700         call dword ptr [0x77e758]
// 0054d947  8b17                 mov edx, dword ptr [edi]
// 0054d949  8b423c               mov eax, dword ptr [edx + 0x3c]
// 0054d94c  53                   push ebx
// 0054d94d  8bcf                 mov ecx, edi
// 0054d94f  ffd0                 call eax
// 0054d951  8b7604               mov esi, dword ptr [esi + 4]
// 0054d954  ebda                 jmp 0x54d930
// 0054d956  8b442420             mov eax, dword ptr [esp + 0x20]
// 0054d95a  5f                   pop edi
// 0054d95b  5e                   pop esi
// 0054d95c  5d                   pop ebp
// 0054d95d  8918                 mov dword ptr [eax], ebx
// 0054d95f  5b                   pop ebx
// 0054d960  83c40c               add esp, 0xc
// 0054d963  c3                   ret 
// copied from an identical function in another client (function ??$for_each@V?$reverse_iterator@V?$_Iterator@$00@?$list@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@@std@@@std@@Ucloser@?$chain_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@@std@@YA?AUcloser@?$chain_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@V?$reverse_iterator@V?$_Iterator@$00@?$list@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@@std@@@0@0U12345@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_8be15fbf9b64785c.cpp