// from server: 100% by auto
// roc 2010-06 006035b0  unit: RBX::ArrowTool  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006035b0
//
// 006035b0  53                   push ebx
// 006035b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006035b5  57                   push edi
// 006035b6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006035ba  3bfb                 cmp edi, ebx
// 006035bc  743b                 je 0x6035f9
// 006035be  56                   push esi
// 006035bf  90                   nop 
// 006035c0  8b7704               mov esi, dword ptr [edi + 4]
// 006035c3  85f6                 test esi, esi
// 006035c5  742a                 je 0x6035f1
// 006035c7  8d4604               lea eax, [esi + 4]
// 006035ca  83c9ff               or ecx, 0xffffffff
// 006035cd  f00fc108             lock xadd dword ptr [eax], ecx
// 006035d1  751e                 jne 0x6035f1
// 006035d3  8b16                 mov edx, dword ptr [esi]
// 006035d5  8b4204               mov eax, dword ptr [edx + 4]
// 006035d8  8bce                 mov ecx, esi
// 006035da  ffd0                 call eax
// 006035dc  8d4e08               lea ecx, [esi + 8]
// 006035df  83caff               or edx, 0xffffffff
// 006035e2  f00fc111             lock xadd dword ptr [ecx], edx
// 006035e6  7509                 jne 0x6035f1
// 006035e8  8b06                 mov eax, dword ptr [esi]
// 006035ea  8b5008               mov edx, dword ptr [eax + 8]
// 006035ed  8bce                 mov ecx, esi
// 006035ef  ffd2                 call edx
// 006035f1  83c708               add edi, 8
// 006035f4  3bfb                 cmp edi, ebx
// 006035f6  75c8                 jne 0x6035c0
// 006035f8  5e                   pop esi
// 006035f9  5f                   pop edi
// 006035fa  5b                   pop ebx
// 006035fb  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Destroy_range@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
