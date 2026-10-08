// roc 2010-06 00444630  unit: RBX::MergeBinder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00444630
//
// 00444630  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00444634  56                   push esi
// 00444635  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00444639  39742408             cmp dword ptr [esp + 8], esi
// 0044463d  747a                 je 0x4446b9
// 0044463f  53                   push ebx
// 00444640  55                   push ebp
// 00444641  57                   push edi
// 00444642  8d780c               lea edi, [eax + 0xc]
// 00444645  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 00444648  83ee10               sub esi, 0x10
// 0044464b  83e810               sub eax, 0x10
// 0044464e  8908                 mov dword ptr [eax], ecx
// 00444650  8b5604               mov edx, dword ptr [esi + 4]
// 00444653  83ef10               sub edi, 0x10
// 00444656  8957f8               mov dword ptr [edi - 8], edx
// 00444659  8b4e08               mov ecx, dword ptr [esi + 8]
// 0044465c  894ffc               mov dword ptr [edi - 4], ecx
// 0044465f  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00444662  8944241c             mov dword ptr [esp + 0x1c], eax
// 00444666  3b2f                 cmp ebp, dword ptr [edi]
// 00444668  7446                 je 0x4446b0
// 0044466a  85ed                 test ebp, ebp
// 0044466c  740c                 je 0x44467a
// 0044466e  8d5504               lea edx, [ebp + 4]
// 00444671  b801000000           mov eax, 1
// 00444676  f00fc102             lock xadd dword ptr [edx], eax
// 0044467a  8b1f                 mov ebx, dword ptr [edi]
// 0044467c  85db                 test ebx, ebx
// 0044467e  742a                 je 0x4446aa
// 00444680  8d4b04               lea ecx, [ebx + 4]
// 00444683  83caff               or edx, 0xffffffff
// 00444686  f00fc111             lock xadd dword ptr [ecx], edx
// 0044468a  751e                 jne 0x4446aa
// 0044468c  8b03                 mov eax, dword ptr [ebx]
// 0044468e  8b5004               mov edx, dword ptr [eax + 4]
// 00444691  8bcb                 mov ecx, ebx
// 00444693  ffd2                 call edx
// 00444695  8d4308               lea eax, [ebx + 8]
// 00444698  83c9ff               or ecx, 0xffffffff
// 0044469b  f00fc108             lock xadd dword ptr [eax], ecx
// 0044469f  7509                 jne 0x4446aa
// 004446a1  8b13                 mov edx, dword ptr [ebx]
// 004446a3  8b4208               mov eax, dword ptr [edx + 8]
// 004446a6  8bcb                 mov ecx, ebx
// 004446a8  ffd0                 call eax
// 004446aa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004446ae  892f                 mov dword ptr [edi], ebp
// 004446b0  3b742414             cmp esi, dword ptr [esp + 0x14]
// 004446b4  758f                 jne 0x444645
// 004446b6  5f                   pop edi
// 004446b7  5d                   pop ebp
// 004446b8  5b                   pop ebx
// 004446b9  5e                   pop esi
// 004446ba  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_backward_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
