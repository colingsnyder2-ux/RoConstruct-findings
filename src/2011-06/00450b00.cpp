// roc 2011-06 00450b00  unit: VAuthoringSettings::?$BoundPropGetSet  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00450b00
//
// 00450b00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00450b04  56                   push esi
// 00450b05  8b742408             mov esi, dword ptr [esp + 8]
// 00450b09  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 00450b0d  7479                 je 0x450b88
// 00450b0f  53                   push ebx
// 00450b10  55                   push ebp
// 00450b11  57                   push edi
// 00450b12  8d780c               lea edi, [eax + 0xc]
// 00450b15  8b0e                 mov ecx, dword ptr [esi]
// 00450b17  8908                 mov dword ptr [eax], ecx
// 00450b19  8b5604               mov edx, dword ptr [esi + 4]
// 00450b1c  8957f8               mov dword ptr [edi - 8], edx
// 00450b1f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00450b22  894ffc               mov dword ptr [edi - 4], ecx
// 00450b25  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00450b28  3b2f                 cmp ebp, dword ptr [edi]
// 00450b2a  7446                 je 0x450b72
// 00450b2c  85ed                 test ebp, ebp
// 00450b2e  740c                 je 0x450b3c
// 00450b30  8d5504               lea edx, [ebp + 4]
// 00450b33  b801000000           mov eax, 1
// 00450b38  f00fc102             lock xadd dword ptr [edx], eax
// 00450b3c  8b1f                 mov ebx, dword ptr [edi]
// 00450b3e  85db                 test ebx, ebx
// 00450b40  742a                 je 0x450b6c
// 00450b42  8d4b04               lea ecx, [ebx + 4]
// 00450b45  83caff               or edx, 0xffffffff
// 00450b48  f00fc111             lock xadd dword ptr [ecx], edx
// 00450b4c  751e                 jne 0x450b6c
// 00450b4e  8b03                 mov eax, dword ptr [ebx]
// 00450b50  8b5004               mov edx, dword ptr [eax + 4]
// 00450b53  8bcb                 mov ecx, ebx
// 00450b55  ffd2                 call edx
// 00450b57  8d4308               lea eax, [ebx + 8]
// 00450b5a  83c9ff               or ecx, 0xffffffff
// 00450b5d  f00fc108             lock xadd dword ptr [eax], ecx
// 00450b61  7509                 jne 0x450b6c
// 00450b63  8b13                 mov edx, dword ptr [ebx]
// 00450b65  8b4208               mov eax, dword ptr [edx + 8]
// 00450b68  8bcb                 mov ecx, ebx
// 00450b6a  ffd0                 call eax
// 00450b6c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00450b70  892f                 mov dword ptr [edi], ebp
// 00450b72  83c010               add eax, 0x10
// 00450b75  83c610               add esi, 0x10
// 00450b78  83c710               add edi, 0x10
// 00450b7b  8944241c             mov dword ptr [esp + 0x1c], eax
// 00450b7f  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00450b83  7590                 jne 0x450b15
// 00450b85  5f                   pop edi
// 00450b86  5d                   pop ebp
// 00450b87  5b                   pop ebx
// 00450b88  5e                   pop esi
// 00450b89  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
