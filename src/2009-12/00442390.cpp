// roc 2009-12 00442390  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00442390
//
// 00442390  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00442394  56                   push esi
// 00442395  8b742408             mov esi, dword ptr [esp + 8]
// 00442399  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 0044239d  7479                 je 0x442418
// 0044239f  53                   push ebx
// 004423a0  55                   push ebp
// 004423a1  57                   push edi
// 004423a2  8d780c               lea edi, [eax + 0xc]
// 004423a5  8b0e                 mov ecx, dword ptr [esi]
// 004423a7  8908                 mov dword ptr [eax], ecx
// 004423a9  8b5604               mov edx, dword ptr [esi + 4]
// 004423ac  8957f8               mov dword ptr [edi - 8], edx
// 004423af  8b4e08               mov ecx, dword ptr [esi + 8]
// 004423b2  894ffc               mov dword ptr [edi - 4], ecx
// 004423b5  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 004423b8  3b2f                 cmp ebp, dword ptr [edi]
// 004423ba  7446                 je 0x442402
// 004423bc  85ed                 test ebp, ebp
// 004423be  740c                 je 0x4423cc
// 004423c0  8d5504               lea edx, [ebp + 4]
// 004423c3  b801000000           mov eax, 1
// 004423c8  f00fc102             lock xadd dword ptr [edx], eax
// 004423cc  8b1f                 mov ebx, dword ptr [edi]
// 004423ce  85db                 test ebx, ebx
// 004423d0  742a                 je 0x4423fc
// 004423d2  8d4b04               lea ecx, [ebx + 4]
// 004423d5  83caff               or edx, 0xffffffff
// 004423d8  f00fc111             lock xadd dword ptr [ecx], edx
// 004423dc  751e                 jne 0x4423fc
// 004423de  8b03                 mov eax, dword ptr [ebx]
// 004423e0  8b5004               mov edx, dword ptr [eax + 4]
// 004423e3  8bcb                 mov ecx, ebx
// 004423e5  ffd2                 call edx
// 004423e7  8d4308               lea eax, [ebx + 8]
// 004423ea  83c9ff               or ecx, 0xffffffff
// 004423ed  f00fc108             lock xadd dword ptr [eax], ecx
// 004423f1  7509                 jne 0x4423fc
// 004423f3  8b13                 mov edx, dword ptr [ebx]
// 004423f5  8b4208               mov eax, dword ptr [edx + 8]
// 004423f8  8bcb                 mov ecx, ebx
// 004423fa  ffd0                 call eax
// 004423fc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00442400  892f                 mov dword ptr [edi], ebp
// 00442402  83c010               add eax, 0x10
// 00442405  83c610               add esi, 0x10
// 00442408  83c710               add edi, 0x10
// 0044240b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0044240f  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00442413  7590                 jne 0x4423a5
// 00442415  5f                   pop edi
// 00442416  5d                   pop ebp
// 00442417  5b                   pop ebx
// 00442418  5e                   pop esi
// 00442419  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
