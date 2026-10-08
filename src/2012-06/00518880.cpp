// from server: 100% by auto
// roc 2012-06 00518880  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00518880
//
// 00518880  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00518884  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00518888  56                   push esi
// 00518889  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051888d  3bce                 cmp ecx, esi
// 0051888f  742a                 je 0x5188bb
// 00518891  57                   push edi
// 00518892  85c0                 test eax, eax
// 00518894  741a                 je 0x5188b0
// 00518896  8b11                 mov edx, dword ptr [ecx]
// 00518898  8910                 mov dword ptr [eax], edx
// 0051889a  8b5104               mov edx, dword ptr [ecx + 4]
// 0051889d  895004               mov dword ptr [eax + 4], edx
// 005188a0  85d2                 test edx, edx
// 005188a2  740c                 je 0x5188b0
// 005188a4  83c204               add edx, 4
// 005188a7  bf01000000           mov edi, 1
// 005188ac  f00fc13a             lock xadd dword ptr [edx], edi
// 005188b0  83c108               add ecx, 8
// 005188b3  83c008               add eax, 8
// 005188b6  3bce                 cmp ecx, esi
// 005188b8  75d8                 jne 0x518892
// 005188ba  5f                   pop edi
// 005188bb  5e                   pop esi
// 005188bc  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Uninit_copy@PBV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
