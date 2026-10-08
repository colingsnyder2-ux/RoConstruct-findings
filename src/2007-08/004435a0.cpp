// roc 2007-08 004435a0  unit: RBX::MergeBinder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004435a0
//
// 004435a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004435a4  56                   push esi
// 004435a5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004435a9  39742408             cmp dword ptr [esp + 8], esi
// 004435ad  747a                 je 0x443629
// 004435af  53                   push ebx
// 004435b0  55                   push ebp
// 004435b1  57                   push edi
// 004435b2  8d780c               lea edi, [eax + 0xc]
// 004435b5  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 004435b8  83ee10               sub esi, 0x10
// 004435bb  83e810               sub eax, 0x10
// 004435be  8908                 mov dword ptr [eax], ecx
// 004435c0  8b5604               mov edx, dword ptr [esi + 4]
// 004435c3  83ef10               sub edi, 0x10
// 004435c6  8957f8               mov dword ptr [edi - 8], edx
// 004435c9  8b4e08               mov ecx, dword ptr [esi + 8]
// 004435cc  894ffc               mov dword ptr [edi - 4], ecx
// 004435cf  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 004435d2  3b2f                 cmp ebp, dword ptr [edi]
// 004435d4  8944241c             mov dword ptr [esp + 0x1c], eax
// 004435d8  7446                 je 0x443620
// 004435da  85ed                 test ebp, ebp
// 004435dc  740c                 je 0x4435ea
// 004435de  8d5504               lea edx, [ebp + 4]
// 004435e1  b801000000           mov eax, 1
// 004435e6  f00fc102             lock xadd dword ptr [edx], eax
// 004435ea  8b1f                 mov ebx, dword ptr [edi]
// 004435ec  85db                 test ebx, ebx
// 004435ee  742a                 je 0x44361a
// 004435f0  8d4b04               lea ecx, [ebx + 4]
// 004435f3  83caff               or edx, 0xffffffff
// 004435f6  f00fc111             lock xadd dword ptr [ecx], edx
// 004435fa  751e                 jne 0x44361a
// 004435fc  8b03                 mov eax, dword ptr [ebx]
// 004435fe  8b5004               mov edx, dword ptr [eax + 4]
// 00443601  8bcb                 mov ecx, ebx
// 00443603  ffd2                 call edx
// 00443605  8d4308               lea eax, [ebx + 8]
// 00443608  83c9ff               or ecx, 0xffffffff
// 0044360b  f00fc108             lock xadd dword ptr [eax], ecx
// 0044360f  7509                 jne 0x44361a
// 00443611  8b13                 mov edx, dword ptr [ebx]
// 00443613  8b4208               mov eax, dword ptr [edx + 8]
// 00443616  8bcb                 mov ecx, ebx
// 00443618  ffd0                 call eax
// 0044361a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044361e  892f                 mov dword ptr [edi], ebp
// 00443620  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00443624  758f                 jne 0x4435b5
// 00443626  5f                   pop edi
// 00443627  5d                   pop ebp
// 00443628  5b                   pop ebx
// 00443629  5e                   pop esi
// 0044362a  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_backward_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
