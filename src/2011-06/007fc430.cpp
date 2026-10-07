// roc 2011-06 007fc430  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fc430
//
// 007fc430  53                   push ebx
// 007fc431  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007fc435  57                   push edi
// 007fc436  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007fc43a  3bfb                 cmp edi, ebx
// 007fc43c  743b                 je 0x7fc479
// 007fc43e  56                   push esi
// 007fc43f  90                   nop 
// 007fc440  8b7704               mov esi, dword ptr [edi + 4]
// 007fc443  85f6                 test esi, esi
// 007fc445  742a                 je 0x7fc471
// 007fc447  8d4604               lea eax, [esi + 4]
// 007fc44a  83c9ff               or ecx, 0xffffffff
// 007fc44d  f00fc108             lock xadd dword ptr [eax], ecx
// 007fc451  751e                 jne 0x7fc471
// 007fc453  8b16                 mov edx, dword ptr [esi]
// 007fc455  8b4204               mov eax, dword ptr [edx + 4]
// 007fc458  8bce                 mov ecx, esi
// 007fc45a  ffd0                 call eax
// 007fc45c  8d4e08               lea ecx, [esi + 8]
// 007fc45f  83caff               or edx, 0xffffffff
// 007fc462  f00fc111             lock xadd dword ptr [ecx], edx
// 007fc466  7509                 jne 0x7fc471
// 007fc468  8b06                 mov eax, dword ptr [esi]
// 007fc46a  8b5008               mov edx, dword ptr [eax + 8]
// 007fc46d  8bce                 mov ecx, esi
// 007fc46f  ffd2                 call edx
// 007fc471  83c708               add edi, 8
// 007fc474  3bfb                 cmp edi, ebx
// 007fc476  75c8                 jne 0x7fc440
// 007fc478  5e                   pop esi
// 007fc479  5f                   pop edi
// 007fc47a  5b                   pop ebx
// 007fc47b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Destroy_range@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
