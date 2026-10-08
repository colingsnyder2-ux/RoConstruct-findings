// roc 2012-06 00462a70  unit: RBX::MergeBinder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462a70
//
// 00462a70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00462a74  56                   push esi
// 00462a75  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00462a79  39742408             cmp dword ptr [esp + 8], esi
// 00462a7d  747a                 je 0x462af9
// 00462a7f  53                   push ebx
// 00462a80  55                   push ebp
// 00462a81  57                   push edi
// 00462a82  8d780c               lea edi, [eax + 0xc]
// 00462a85  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 00462a88  83ee10               sub esi, 0x10
// 00462a8b  83e810               sub eax, 0x10
// 00462a8e  8908                 mov dword ptr [eax], ecx
// 00462a90  8b5604               mov edx, dword ptr [esi + 4]
// 00462a93  83ef10               sub edi, 0x10
// 00462a96  8957f8               mov dword ptr [edi - 8], edx
// 00462a99  8b4e08               mov ecx, dword ptr [esi + 8]
// 00462a9c  894ffc               mov dword ptr [edi - 4], ecx
// 00462a9f  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00462aa2  8944241c             mov dword ptr [esp + 0x1c], eax
// 00462aa6  3b2f                 cmp ebp, dword ptr [edi]
// 00462aa8  7446                 je 0x462af0
// 00462aaa  85ed                 test ebp, ebp
// 00462aac  740c                 je 0x462aba
// 00462aae  8d5504               lea edx, [ebp + 4]
// 00462ab1  b801000000           mov eax, 1
// 00462ab6  f00fc102             lock xadd dword ptr [edx], eax
// 00462aba  8b1f                 mov ebx, dword ptr [edi]
// 00462abc  85db                 test ebx, ebx
// 00462abe  742a                 je 0x462aea
// 00462ac0  8d4b04               lea ecx, [ebx + 4]
// 00462ac3  83caff               or edx, 0xffffffff
// 00462ac6  f00fc111             lock xadd dword ptr [ecx], edx
// 00462aca  751e                 jne 0x462aea
// 00462acc  8b03                 mov eax, dword ptr [ebx]
// 00462ace  8b5004               mov edx, dword ptr [eax + 4]
// 00462ad1  8bcb                 mov ecx, ebx
// 00462ad3  ffd2                 call edx
// 00462ad5  8d4308               lea eax, [ebx + 8]
// 00462ad8  83c9ff               or ecx, 0xffffffff
// 00462adb  f00fc108             lock xadd dword ptr [eax], ecx
// 00462adf  7509                 jne 0x462aea
// 00462ae1  8b13                 mov edx, dword ptr [ebx]
// 00462ae3  8b4208               mov eax, dword ptr [edx + 8]
// 00462ae6  8bcb                 mov ecx, ebx
// 00462ae8  ffd0                 call eax
// 00462aea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00462aee  892f                 mov dword ptr [edi], ebp
// 00462af0  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00462af4  758f                 jne 0x462a85
// 00462af6  5f                   pop edi
// 00462af7  5d                   pop ebp
// 00462af8  5b                   pop ebx
// 00462af9  5e                   pop esi
// 00462afa  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_backward_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
