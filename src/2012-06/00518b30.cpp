// roc 2012-06 00518b30  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00518b30
//
// 00518b30  53                   push ebx
// 00518b31  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00518b35  57                   push edi
// 00518b36  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00518b3a  3bfb                 cmp edi, ebx
// 00518b3c  743b                 je 0x518b79
// 00518b3e  56                   push esi
// 00518b3f  90                   nop 
// 00518b40  8b7704               mov esi, dword ptr [edi + 4]
// 00518b43  85f6                 test esi, esi
// 00518b45  742a                 je 0x518b71
// 00518b47  8d4604               lea eax, [esi + 4]
// 00518b4a  83c9ff               or ecx, 0xffffffff
// 00518b4d  f00fc108             lock xadd dword ptr [eax], ecx
// 00518b51  751e                 jne 0x518b71
// 00518b53  8b16                 mov edx, dword ptr [esi]
// 00518b55  8b4204               mov eax, dword ptr [edx + 4]
// 00518b58  8bce                 mov ecx, esi
// 00518b5a  ffd0                 call eax
// 00518b5c  8d4e08               lea ecx, [esi + 8]
// 00518b5f  83caff               or edx, 0xffffffff
// 00518b62  f00fc111             lock xadd dword ptr [ecx], edx
// 00518b66  7509                 jne 0x518b71
// 00518b68  8b06                 mov eax, dword ptr [esi]
// 00518b6a  8b5008               mov edx, dword ptr [eax + 8]
// 00518b6d  8bce                 mov ecx, esi
// 00518b6f  ffd2                 call edx
// 00518b71  83c708               add edi, 8
// 00518b74  3bfb                 cmp edi, ebx
// 00518b76  75c8                 jne 0x518b40
// 00518b78  5e                   pop esi
// 00518b79  5f                   pop edi
// 00518b7a  5b                   pop ebx
// 00518b7b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Destroy_range@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
