// roc 2012-06 004627c0  unit: RBXImage  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004627c0
//
// 004627c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004627c4  56                   push esi
// 004627c5  8b742408             mov esi, dword ptr [esp + 8]
// 004627c9  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 004627cd  7479                 je 0x462848
// 004627cf  53                   push ebx
// 004627d0  55                   push ebp
// 004627d1  57                   push edi
// 004627d2  8d780c               lea edi, [eax + 0xc]
// 004627d5  8b0e                 mov ecx, dword ptr [esi]
// 004627d7  8908                 mov dword ptr [eax], ecx
// 004627d9  8b5604               mov edx, dword ptr [esi + 4]
// 004627dc  8957f8               mov dword ptr [edi - 8], edx
// 004627df  8b4e08               mov ecx, dword ptr [esi + 8]
// 004627e2  894ffc               mov dword ptr [edi - 4], ecx
// 004627e5  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 004627e8  3b2f                 cmp ebp, dword ptr [edi]
// 004627ea  7446                 je 0x462832
// 004627ec  85ed                 test ebp, ebp
// 004627ee  740c                 je 0x4627fc
// 004627f0  8d5504               lea edx, [ebp + 4]
// 004627f3  b801000000           mov eax, 1
// 004627f8  f00fc102             lock xadd dword ptr [edx], eax
// 004627fc  8b1f                 mov ebx, dword ptr [edi]
// 004627fe  85db                 test ebx, ebx
// 00462800  742a                 je 0x46282c
// 00462802  8d4b04               lea ecx, [ebx + 4]
// 00462805  83caff               or edx, 0xffffffff
// 00462808  f00fc111             lock xadd dword ptr [ecx], edx
// 0046280c  751e                 jne 0x46282c
// 0046280e  8b03                 mov eax, dword ptr [ebx]
// 00462810  8b5004               mov edx, dword ptr [eax + 4]
// 00462813  8bcb                 mov ecx, ebx
// 00462815  ffd2                 call edx
// 00462817  8d4308               lea eax, [ebx + 8]
// 0046281a  83c9ff               or ecx, 0xffffffff
// 0046281d  f00fc108             lock xadd dword ptr [eax], ecx
// 00462821  7509                 jne 0x46282c
// 00462823  8b13                 mov edx, dword ptr [ebx]
// 00462825  8b4208               mov eax, dword ptr [edx + 8]
// 00462828  8bcb                 mov ecx, ebx
// 0046282a  ffd0                 call eax
// 0046282c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00462830  892f                 mov dword ptr [edi], ebp
// 00462832  83c010               add eax, 0x10
// 00462835  83c610               add esi, 0x10
// 00462838  83c710               add edi, 0x10
// 0046283b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0046283f  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00462843  7590                 jne 0x4627d5
// 00462845  5f                   pop edi
// 00462846  5d                   pop ebp
// 00462847  5b                   pop ebx
// 00462848  5e                   pop esi
// 00462849  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
