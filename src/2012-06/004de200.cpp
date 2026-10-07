// roc 2012-06 004de200  unit: Ogre::VertexStreamer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004de200
//
// 004de200  55                   push ebp
// 004de201  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004de205  396c2408             cmp dword ptr [esp + 8], ebp
// 004de209  746b                 je 0x4de276
// 004de20b  53                   push ebx
// 004de20c  56                   push esi
// 004de20d  57                   push edi
// 004de20e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004de212  8b45f8               mov eax, dword ptr [ebp - 8]
// 004de215  83ed08               sub ebp, 8
// 004de218  83ef08               sub edi, 8
// 004de21b  8907                 mov dword ptr [edi], eax
// 004de21d  8b5d04               mov ebx, dword ptr [ebp + 4]
// 004de220  3b5f04               cmp ebx, dword ptr [edi + 4]
// 004de223  7444                 je 0x4de269
// 004de225  85db                 test ebx, ebx
// 004de227  740c                 je 0x4de235
// 004de229  8d4b04               lea ecx, [ebx + 4]
// 004de22c  ba01000000           mov edx, 1
// 004de231  f00fc111             lock xadd dword ptr [ecx], edx
// 004de235  8b7704               mov esi, dword ptr [edi + 4]
// 004de238  85f6                 test esi, esi
// 004de23a  742a                 je 0x4de266
// 004de23c  8d4604               lea eax, [esi + 4]
// 004de23f  83c9ff               or ecx, 0xffffffff
// 004de242  f00fc108             lock xadd dword ptr [eax], ecx
// 004de246  751e                 jne 0x4de266
// 004de248  8b16                 mov edx, dword ptr [esi]
// 004de24a  8b4204               mov eax, dword ptr [edx + 4]
// 004de24d  8bce                 mov ecx, esi
// 004de24f  ffd0                 call eax
// 004de251  8d4e08               lea ecx, [esi + 8]
// 004de254  83caff               or edx, 0xffffffff
// 004de257  f00fc111             lock xadd dword ptr [ecx], edx
// 004de25b  7509                 jne 0x4de266
// 004de25d  8b06                 mov eax, dword ptr [esi]
// 004de25f  8b5008               mov edx, dword ptr [eax + 8]
// 004de262  8bce                 mov ecx, esi
// 004de264  ffd2                 call edx
// 004de266  895f04               mov dword ptr [edi + 4], ebx
// 004de269  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 004de26d  75a3                 jne 0x4de212
// 004de26f  8bc7                 mov eax, edi
// 004de271  5f                   pop edi
// 004de272  5e                   pop esi
// 004de273  5b                   pop ebx
// 004de274  5d                   pop ebp
// 004de275  c3                   ret 
// 004de276  8b442410             mov eax, dword ptr [esp + 0x10]
// 004de27a  5d                   pop ebp
// 004de27b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
