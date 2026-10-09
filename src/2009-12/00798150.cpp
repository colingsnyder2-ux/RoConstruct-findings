// roc 2009-12 00798150  unit: lua_exception  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00798150
//
// 00798150  53                   push ebx
// 00798151  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00798155  395c2408             cmp dword ptr [esp + 8], ebx
// 00798159  7477                 je 0x7981d2
// 0079815b  55                   push ebp
// 0079815c  56                   push esi
// 0079815d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00798161  57                   push edi
// 00798162  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 00798165  83eb18               sub ebx, 0x18
// 00798168  83ee18               sub esi, 0x18
// 0079816b  8906                 mov dword ptr [esi], eax
// 0079816d  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00798170  3b6e04               cmp ebp, dword ptr [esi + 4]
// 00798173  7444                 je 0x7981b9
// 00798175  85ed                 test ebp, ebp
// 00798177  740c                 je 0x798185
// 00798179  8d4d04               lea ecx, [ebp + 4]
// 0079817c  ba01000000           mov edx, 1
// 00798181  f00fc111             lock xadd dword ptr [ecx], edx
// 00798185  8b7e04               mov edi, dword ptr [esi + 4]
// 00798188  85ff                 test edi, edi
// 0079818a  742a                 je 0x7981b6
// 0079818c  8d4704               lea eax, [edi + 4]
// 0079818f  83c9ff               or ecx, 0xffffffff
// 00798192  f00fc108             lock xadd dword ptr [eax], ecx
// 00798196  751e                 jne 0x7981b6
// 00798198  8b17                 mov edx, dword ptr [edi]
// 0079819a  8b4204               mov eax, dword ptr [edx + 4]
// 0079819d  8bcf                 mov ecx, edi
// 0079819f  ffd0                 call eax
// 007981a1  8d4f08               lea ecx, [edi + 8]
// 007981a4  83caff               or edx, 0xffffffff
// 007981a7  f00fc111             lock xadd dword ptr [ecx], edx
// 007981ab  7509                 jne 0x7981b6
// 007981ad  8b07                 mov eax, dword ptr [edi]
// 007981af  8b5008               mov edx, dword ptr [eax + 8]
// 007981b2  8bcf                 mov ecx, edi
// 007981b4  ffd2                 call edx
// 007981b6  896e04               mov dword ptr [esi + 4], ebp
// 007981b9  dd4308               fld qword ptr [ebx + 8]
// 007981bc  dd5e08               fstp qword ptr [esi + 8]
// 007981bf  dd4310               fld qword ptr [ebx + 0x10]
// 007981c2  dd5e10               fstp qword ptr [esi + 0x10]
// 007981c5  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 007981c9  7597                 jne 0x798162
// 007981cb  5f                   pop edi
// 007981cc  8bc6                 mov eax, esi
// 007981ce  5e                   pop esi
// 007981cf  5d                   pop ebp
// 007981d0  5b                   pop ebx
// 007981d1  c3                   ret 
// 007981d2  8b442410             mov eax, dword ptr [esp + 0x10]
// 007981d6  5b                   pop ebx
// 007981d7  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Copy_backward_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@Uforward_iterator_tag@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
