// roc 2009-06 0043eb00  unit: RBX::MergeBinder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043eb00
//
// 0043eb00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043eb04  56                   push esi
// 0043eb05  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043eb09  39742408             cmp dword ptr [esp + 8], esi
// 0043eb0d  747a                 je 0x43eb89
// 0043eb0f  53                   push ebx
// 0043eb10  55                   push ebp
// 0043eb11  57                   push edi
// 0043eb12  8d780c               lea edi, [eax + 0xc]
// 0043eb15  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 0043eb18  83ee10               sub esi, 0x10
// 0043eb1b  83e810               sub eax, 0x10
// 0043eb1e  8908                 mov dword ptr [eax], ecx
// 0043eb20  8b5604               mov edx, dword ptr [esi + 4]
// 0043eb23  83ef10               sub edi, 0x10
// 0043eb26  8957f8               mov dword ptr [edi - 8], edx
// 0043eb29  8b4e08               mov ecx, dword ptr [esi + 8]
// 0043eb2c  894ffc               mov dword ptr [edi - 4], ecx
// 0043eb2f  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0043eb32  8944241c             mov dword ptr [esp + 0x1c], eax
// 0043eb36  3b2f                 cmp ebp, dword ptr [edi]
// 0043eb38  7446                 je 0x43eb80
// 0043eb3a  85ed                 test ebp, ebp
// 0043eb3c  740c                 je 0x43eb4a
// 0043eb3e  8d5504               lea edx, [ebp + 4]
// 0043eb41  b801000000           mov eax, 1
// 0043eb46  f00fc102             lock xadd dword ptr [edx], eax
// 0043eb4a  8b1f                 mov ebx, dword ptr [edi]
// 0043eb4c  85db                 test ebx, ebx
// 0043eb4e  742a                 je 0x43eb7a
// 0043eb50  8d4b04               lea ecx, [ebx + 4]
// 0043eb53  83caff               or edx, 0xffffffff
// 0043eb56  f00fc111             lock xadd dword ptr [ecx], edx
// 0043eb5a  751e                 jne 0x43eb7a
// 0043eb5c  8b03                 mov eax, dword ptr [ebx]
// 0043eb5e  8b5004               mov edx, dword ptr [eax + 4]
// 0043eb61  8bcb                 mov ecx, ebx
// 0043eb63  ffd2                 call edx
// 0043eb65  8d4308               lea eax, [ebx + 8]
// 0043eb68  83c9ff               or ecx, 0xffffffff
// 0043eb6b  f00fc108             lock xadd dword ptr [eax], ecx
// 0043eb6f  7509                 jne 0x43eb7a
// 0043eb71  8b13                 mov edx, dword ptr [ebx]
// 0043eb73  8b4208               mov eax, dword ptr [edx + 8]
// 0043eb76  8bcb                 mov ecx, ebx
// 0043eb78  ffd0                 call eax
// 0043eb7a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0043eb7e  892f                 mov dword ptr [edi], ebp
// 0043eb80  3b742414             cmp esi, dword ptr [esp + 0x14]
// 0043eb84  758f                 jne 0x43eb15
// 0043eb86  5f                   pop edi
// 0043eb87  5d                   pop ebp
// 0043eb88  5b                   pop ebx
// 0043eb89  5e                   pop esi
// 0043eb8a  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_backward_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
