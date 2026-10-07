// roc 2011-06 00966fe0  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00966fe0
//
// 00966fe0  8b542408             mov edx, dword ptr [esp + 8]
// 00966fe4  85d2                 test edx, edx
// 00966fe6  7632                 jbe 0x96701a
// 00966fe8  8b442404             mov eax, dword ptr [esp + 4]
// 00966fec  56                   push esi
// 00966fed  8b742410             mov esi, dword ptr [esp + 0x10]
// 00966ff1  57                   push edi
// 00966ff2  85c0                 test eax, eax
// 00966ff4  741a                 je 0x967010
// 00966ff6  8b0e                 mov ecx, dword ptr [esi]
// 00966ff8  8908                 mov dword ptr [eax], ecx
// 00966ffa  8b4e04               mov ecx, dword ptr [esi + 4]
// 00966ffd  894804               mov dword ptr [eax + 4], ecx
// 00967000  85c9                 test ecx, ecx
// 00967002  740c                 je 0x967010
// 00967004  83c104               add ecx, 4
// 00967007  bf01000000           mov edi, 1
// 0096700c  f00fc139             lock xadd dword ptr [ecx], edi
// 00967010  4a                   dec edx
// 00967011  83c008               add eax, 8
// 00967014  85d2                 test edx, edx
// 00967016  77da                 ja 0x966ff2
// 00967018  5f                   pop edi
// 00967019  5e                   pop esi
// 0096701a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_fill_n@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@IABV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
