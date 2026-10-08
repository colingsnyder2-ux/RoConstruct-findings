// roc 2008-06 00443ef0  unit: RBX::MergeBinder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443ef0
//
// 00443ef0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00443ef4  56                   push esi
// 00443ef5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00443ef9  39742408             cmp dword ptr [esp + 8], esi
// 00443efd  747a                 je 0x443f79
// 00443eff  53                   push ebx
// 00443f00  55                   push ebp
// 00443f01  57                   push edi
// 00443f02  8d780c               lea edi, [eax + 0xc]
// 00443f05  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 00443f08  83ee10               sub esi, 0x10
// 00443f0b  83e810               sub eax, 0x10
// 00443f0e  8908                 mov dword ptr [eax], ecx
// 00443f10  8b5604               mov edx, dword ptr [esi + 4]
// 00443f13  83ef10               sub edi, 0x10
// 00443f16  8957f8               mov dword ptr [edi - 8], edx
// 00443f19  8b4e08               mov ecx, dword ptr [esi + 8]
// 00443f1c  894ffc               mov dword ptr [edi - 4], ecx
// 00443f1f  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00443f22  8944241c             mov dword ptr [esp + 0x1c], eax
// 00443f26  3b2f                 cmp ebp, dword ptr [edi]
// 00443f28  7446                 je 0x443f70
// 00443f2a  85ed                 test ebp, ebp
// 00443f2c  740c                 je 0x443f3a
// 00443f2e  8d5504               lea edx, [ebp + 4]
// 00443f31  b801000000           mov eax, 1
// 00443f36  f00fc102             lock xadd dword ptr [edx], eax
// 00443f3a  8b1f                 mov ebx, dword ptr [edi]
// 00443f3c  85db                 test ebx, ebx
// 00443f3e  742a                 je 0x443f6a
// 00443f40  8d4b04               lea ecx, [ebx + 4]
// 00443f43  83caff               or edx, 0xffffffff
// 00443f46  f00fc111             lock xadd dword ptr [ecx], edx
// 00443f4a  751e                 jne 0x443f6a
// 00443f4c  8b03                 mov eax, dword ptr [ebx]
// 00443f4e  8b5004               mov edx, dword ptr [eax + 4]
// 00443f51  8bcb                 mov ecx, ebx
// 00443f53  ffd2                 call edx
// 00443f55  8d4308               lea eax, [ebx + 8]
// 00443f58  83c9ff               or ecx, 0xffffffff
// 00443f5b  f00fc108             lock xadd dword ptr [eax], ecx
// 00443f5f  7509                 jne 0x443f6a
// 00443f61  8b13                 mov edx, dword ptr [ebx]
// 00443f63  8b4208               mov eax, dword ptr [edx + 8]
// 00443f66  8bcb                 mov ecx, ebx
// 00443f68  ffd0                 call eax
// 00443f6a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00443f6e  892f                 mov dword ptr [edi], ebp
// 00443f70  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00443f74  758f                 jne 0x443f05
// 00443f76  5f                   pop edi
// 00443f77  5d                   pop ebp
// 00443f78  5b                   pop ebx
// 00443f79  5e                   pop esi
// 00443f7a  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_backward_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
