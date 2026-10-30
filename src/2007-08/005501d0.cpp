// roc 2007-08 005501d0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005501d0
//
// 005501d0  83ec0c               sub esp, 0xc
// 005501d3  8b442418             mov eax, dword ptr [esp + 0x18]
// 005501d7  53                   push ebx
// 005501d8  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005501dc  55                   push ebp
// 005501dd  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 005501e1  56                   push esi
// 005501e2  8b742428             mov esi, dword ptr [esp + 0x28]
// 005501e6  57                   push edi
// 005501e7  89442414             mov dword ptr [esp + 0x14], eax
// 005501eb  eb03                 jmp 0x5501f0
// 005501ed  8d4900               lea ecx, [ecx]
// 005501f0  3bf5                 cmp esi, ebp
// 005501f2  7422                 je 0x550216
// 005501f4  f6c302               test bl, 2
// 005501f7  8b4604               mov eax, dword ptr [esi + 4]
// 005501fa  8b7808               mov edi, dword ptr [eax + 8]
// 005501fd  7408                 je 0x550207
// 005501ff  8bcf                 mov ecx, edi
// 00550201  ff1504e67700         call dword ptr [0x77e604]
// 00550207  8b17                 mov edx, dword ptr [edi]
// 00550209  8b423c               mov eax, dword ptr [edx + 0x3c]
// 0055020c  53                   push ebx
// 0055020d  8bcf                 mov ecx, edi
// 0055020f  ffd0                 call eax
// 00550211  8b7604               mov esi, dword ptr [esi + 4]
// 00550214  ebda                 jmp 0x5501f0
// 00550216  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055021a  5f                   pop edi
// 0055021b  5e                   pop esi
// 0055021c  5d                   pop ebp
// 0055021d  8918                 mov dword ptr [eax], ebx
// 0055021f  5b                   pop ebx
// 00550220  83c40c               add esp, 0xc
// 00550223  c3                   ret 
// copied from an identical function in another client (function ??$for_each@V?$reverse_iterator@V?$_Iterator@$00@?$list@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@@std@@@std@@Ucloser@?$chain_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@@std@@YA?AUcloser@?$chain_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@V?$reverse_iterator@V?$_Iterator@$00@?$list@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@@std@@@0@0U12345@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_8be15fbf9b64785c.cpp