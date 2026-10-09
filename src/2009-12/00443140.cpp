// roc 2009-12 00443140  unit: RBX::MergeBinder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00443140
//
// 00443140  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00443144  56                   push esi
// 00443145  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00443149  39742408             cmp dword ptr [esp + 8], esi
// 0044314d  747a                 je 0x4431c9
// 0044314f  53                   push ebx
// 00443150  55                   push ebp
// 00443151  57                   push edi
// 00443152  8d780c               lea edi, [eax + 0xc]
// 00443155  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 00443158  83ee10               sub esi, 0x10
// 0044315b  83e810               sub eax, 0x10
// 0044315e  8908                 mov dword ptr [eax], ecx
// 00443160  8b5604               mov edx, dword ptr [esi + 4]
// 00443163  83ef10               sub edi, 0x10
// 00443166  8957f8               mov dword ptr [edi - 8], edx
// 00443169  8b4e08               mov ecx, dword ptr [esi + 8]
// 0044316c  894ffc               mov dword ptr [edi - 4], ecx
// 0044316f  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00443172  8944241c             mov dword ptr [esp + 0x1c], eax
// 00443176  3b2f                 cmp ebp, dword ptr [edi]
// 00443178  7446                 je 0x4431c0
// 0044317a  85ed                 test ebp, ebp
// 0044317c  740c                 je 0x44318a
// 0044317e  8d5504               lea edx, [ebp + 4]
// 00443181  b801000000           mov eax, 1
// 00443186  f00fc102             lock xadd dword ptr [edx], eax
// 0044318a  8b1f                 mov ebx, dword ptr [edi]
// 0044318c  85db                 test ebx, ebx
// 0044318e  742a                 je 0x4431ba
// 00443190  8d4b04               lea ecx, [ebx + 4]
// 00443193  83caff               or edx, 0xffffffff
// 00443196  f00fc111             lock xadd dword ptr [ecx], edx
// 0044319a  751e                 jne 0x4431ba
// 0044319c  8b03                 mov eax, dword ptr [ebx]
// 0044319e  8b5004               mov edx, dword ptr [eax + 4]
// 004431a1  8bcb                 mov ecx, ebx
// 004431a3  ffd2                 call edx
// 004431a5  8d4308               lea eax, [ebx + 8]
// 004431a8  83c9ff               or ecx, 0xffffffff
// 004431ab  f00fc108             lock xadd dword ptr [eax], ecx
// 004431af  7509                 jne 0x4431ba
// 004431b1  8b13                 mov edx, dword ptr [ebx]
// 004431b3  8b4208               mov eax, dword ptr [edx + 8]
// 004431b6  8bcb                 mov ecx, ebx
// 004431b8  ffd0                 call eax
// 004431ba  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004431be  892f                 mov dword ptr [edi], ebp
// 004431c0  3b742414             cmp esi, dword ptr [esp + 0x14]
// 004431c4  758f                 jne 0x443155
// 004431c6  5f                   pop edi
// 004431c7  5d                   pop ebp
// 004431c8  5b                   pop ebx
// 004431c9  5e                   pop esi
// 004431ca  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_backward_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
