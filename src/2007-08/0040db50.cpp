// roc 2007-08 0040db50  unit: CChatPrompt  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040db50
//
// 0040db50  53                   push ebx
// 0040db51  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0040db55  57                   push edi
// 0040db56  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0040db5a  3bfb                 cmp edi, ebx
// 0040db5c  743b                 je 0x40db99
// 0040db5e  56                   push esi
// 0040db5f  90                   nop 
// 0040db60  8b7704               mov esi, dword ptr [edi + 4]
// 0040db63  85f6                 test esi, esi
// 0040db65  742a                 je 0x40db91
// 0040db67  8d4604               lea eax, [esi + 4]
// 0040db6a  83c9ff               or ecx, 0xffffffff
// 0040db6d  f00fc108             lock xadd dword ptr [eax], ecx
// 0040db71  751e                 jne 0x40db91
// 0040db73  8b16                 mov edx, dword ptr [esi]
// 0040db75  8b4204               mov eax, dword ptr [edx + 4]
// 0040db78  8bce                 mov ecx, esi
// 0040db7a  ffd0                 call eax
// 0040db7c  8d4e08               lea ecx, [esi + 8]
// 0040db7f  83caff               or edx, 0xffffffff
// 0040db82  f00fc111             lock xadd dword ptr [ecx], edx
// 0040db86  7509                 jne 0x40db91
// 0040db88  8b06                 mov eax, dword ptr [esi]
// 0040db8a  8b5008               mov edx, dword ptr [eax + 8]
// 0040db8d  8bce                 mov ecx, esi
// 0040db8f  ffd2                 call edx
// 0040db91  83c708               add edi, 8
// 0040db94  3bfb                 cmp edi, ebx
// 0040db96  75c8                 jne 0x40db60
// 0040db98  5e                   pop esi
// 0040db99  5f                   pop edi
// 0040db9a  5b                   pop ebx
// 0040db9b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Destroy_range@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
