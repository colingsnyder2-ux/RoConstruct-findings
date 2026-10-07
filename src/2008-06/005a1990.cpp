// roc 2008-06 005a1990  unit: RBX::ArrowTool  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1990
//
// 005a1990  53                   push ebx
// 005a1991  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005a1995  57                   push edi
// 005a1996  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a199a  3bfb                 cmp edi, ebx
// 005a199c  743b                 je 0x5a19d9
// 005a199e  56                   push esi
// 005a199f  90                   nop 
// 005a19a0  8b7704               mov esi, dword ptr [edi + 4]
// 005a19a3  85f6                 test esi, esi
// 005a19a5  742a                 je 0x5a19d1
// 005a19a7  8d4604               lea eax, [esi + 4]
// 005a19aa  83c9ff               or ecx, 0xffffffff
// 005a19ad  f00fc108             lock xadd dword ptr [eax], ecx
// 005a19b1  751e                 jne 0x5a19d1
// 005a19b3  8b16                 mov edx, dword ptr [esi]
// 005a19b5  8b4204               mov eax, dword ptr [edx + 4]
// 005a19b8  8bce                 mov ecx, esi
// 005a19ba  ffd0                 call eax
// 005a19bc  8d4e08               lea ecx, [esi + 8]
// 005a19bf  83caff               or edx, 0xffffffff
// 005a19c2  f00fc111             lock xadd dword ptr [ecx], edx
// 005a19c6  7509                 jne 0x5a19d1
// 005a19c8  8b06                 mov eax, dword ptr [esi]
// 005a19ca  8b5008               mov edx, dword ptr [eax + 8]
// 005a19cd  8bce                 mov ecx, esi
// 005a19cf  ffd2                 call edx
// 005a19d1  83c708               add edi, 8
// 005a19d4  3bfb                 cmp edi, ebx
// 005a19d6  75c8                 jne 0x5a19a0
// 005a19d8  5e                   pop esi
// 005a19d9  5f                   pop edi
// 005a19da  5b                   pop ebx
// 005a19db  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Destroy_range@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
