// from server: 100% by auto
// roc 2010-06 0079dbb0  unit: RBX::Tasks::Barrier  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079dbb0
//
// 0079dbb0  55                   push ebp
// 0079dbb1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0079dbb5  396c2408             cmp dword ptr [esp + 8], ebp
// 0079dbb9  746b                 je 0x79dc26
// 0079dbbb  53                   push ebx
// 0079dbbc  56                   push esi
// 0079dbbd  57                   push edi
// 0079dbbe  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0079dbc2  8b45f8               mov eax, dword ptr [ebp - 8]
// 0079dbc5  83ed08               sub ebp, 8
// 0079dbc8  83ef08               sub edi, 8
// 0079dbcb  8907                 mov dword ptr [edi], eax
// 0079dbcd  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0079dbd0  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0079dbd3  7444                 je 0x79dc19
// 0079dbd5  85db                 test ebx, ebx
// 0079dbd7  740c                 je 0x79dbe5
// 0079dbd9  8d4b04               lea ecx, [ebx + 4]
// 0079dbdc  ba01000000           mov edx, 1
// 0079dbe1  f00fc111             lock xadd dword ptr [ecx], edx
// 0079dbe5  8b7704               mov esi, dword ptr [edi + 4]
// 0079dbe8  85f6                 test esi, esi
// 0079dbea  742a                 je 0x79dc16
// 0079dbec  8d4604               lea eax, [esi + 4]
// 0079dbef  83c9ff               or ecx, 0xffffffff
// 0079dbf2  f00fc108             lock xadd dword ptr [eax], ecx
// 0079dbf6  751e                 jne 0x79dc16
// 0079dbf8  8b16                 mov edx, dword ptr [esi]
// 0079dbfa  8b4204               mov eax, dword ptr [edx + 4]
// 0079dbfd  8bce                 mov ecx, esi
// 0079dbff  ffd0                 call eax
// 0079dc01  8d4e08               lea ecx, [esi + 8]
// 0079dc04  83caff               or edx, 0xffffffff
// 0079dc07  f00fc111             lock xadd dword ptr [ecx], edx
// 0079dc0b  7509                 jne 0x79dc16
// 0079dc0d  8b06                 mov eax, dword ptr [esi]
// 0079dc0f  8b5008               mov edx, dword ptr [eax + 8]
// 0079dc12  8bce                 mov ecx, esi
// 0079dc14  ffd2                 call edx
// 0079dc16  895f04               mov dword ptr [edi + 4], ebx
// 0079dc19  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0079dc1d  75a3                 jne 0x79dbc2
// 0079dc1f  8bc7                 mov eax, edi
// 0079dc21  5f                   pop edi
// 0079dc22  5e                   pop esi
// 0079dc23  5b                   pop ebx
// 0079dc24  5d                   pop ebp
// 0079dc25  c3                   ret 
// 0079dc26  8b442410             mov eax, dword ptr [esp + 0x10]
// 0079dc2a  5d                   pop ebp
// 0079dc2b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
