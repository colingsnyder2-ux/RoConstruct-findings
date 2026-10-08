// roc 2009-12 004c36a0  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c36a0
//
// 004c36a0  53                   push ebx
// 004c36a1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004c36a5  57                   push edi
// 004c36a6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004c36aa  3bfb                 cmp edi, ebx
// 004c36ac  743b                 je 0x4c36e9
// 004c36ae  56                   push esi
// 004c36af  90                   nop 
// 004c36b0  8b7704               mov esi, dword ptr [edi + 4]
// 004c36b3  85f6                 test esi, esi
// 004c36b5  742a                 je 0x4c36e1
// 004c36b7  8d4604               lea eax, [esi + 4]
// 004c36ba  83c9ff               or ecx, 0xffffffff
// 004c36bd  f00fc108             lock xadd dword ptr [eax], ecx
// 004c36c1  751e                 jne 0x4c36e1
// 004c36c3  8b16                 mov edx, dword ptr [esi]
// 004c36c5  8b4204               mov eax, dword ptr [edx + 4]
// 004c36c8  8bce                 mov ecx, esi
// 004c36ca  ffd0                 call eax
// 004c36cc  8d4e08               lea ecx, [esi + 8]
// 004c36cf  83caff               or edx, 0xffffffff
// 004c36d2  f00fc111             lock xadd dword ptr [ecx], edx
// 004c36d6  7509                 jne 0x4c36e1
// 004c36d8  8b06                 mov eax, dword ptr [esi]
// 004c36da  8b5008               mov edx, dword ptr [eax + 8]
// 004c36dd  8bce                 mov ecx, esi
// 004c36df  ffd2                 call edx
// 004c36e1  83c708               add edi, 8
// 004c36e4  3bfb                 cmp edi, ebx
// 004c36e6  75c8                 jne 0x4c36b0
// 004c36e8  5e                   pop esi
// 004c36e9  5f                   pop edi
// 004c36ea  5b                   pop ebx
// 004c36eb  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Destroy_range@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
