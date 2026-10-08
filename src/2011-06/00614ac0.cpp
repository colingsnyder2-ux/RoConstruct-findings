// roc 2011-06 00614ac0  unit: RBX::MergeBinder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614ac0
//
// 00614ac0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00614ac4  56                   push esi
// 00614ac5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00614ac9  39742408             cmp dword ptr [esp + 8], esi
// 00614acd  747a                 je 0x614b49
// 00614acf  53                   push ebx
// 00614ad0  55                   push ebp
// 00614ad1  57                   push edi
// 00614ad2  8d780c               lea edi, [eax + 0xc]
// 00614ad5  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 00614ad8  83ee10               sub esi, 0x10
// 00614adb  83e810               sub eax, 0x10
// 00614ade  8908                 mov dword ptr [eax], ecx
// 00614ae0  8b5604               mov edx, dword ptr [esi + 4]
// 00614ae3  83ef10               sub edi, 0x10
// 00614ae6  8957f8               mov dword ptr [edi - 8], edx
// 00614ae9  8b4e08               mov ecx, dword ptr [esi + 8]
// 00614aec  894ffc               mov dword ptr [edi - 4], ecx
// 00614aef  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00614af2  8944241c             mov dword ptr [esp + 0x1c], eax
// 00614af6  3b2f                 cmp ebp, dword ptr [edi]
// 00614af8  7446                 je 0x614b40
// 00614afa  85ed                 test ebp, ebp
// 00614afc  740c                 je 0x614b0a
// 00614afe  8d5504               lea edx, [ebp + 4]
// 00614b01  b801000000           mov eax, 1
// 00614b06  f00fc102             lock xadd dword ptr [edx], eax
// 00614b0a  8b1f                 mov ebx, dword ptr [edi]
// 00614b0c  85db                 test ebx, ebx
// 00614b0e  742a                 je 0x614b3a
// 00614b10  8d4b04               lea ecx, [ebx + 4]
// 00614b13  83caff               or edx, 0xffffffff
// 00614b16  f00fc111             lock xadd dword ptr [ecx], edx
// 00614b1a  751e                 jne 0x614b3a
// 00614b1c  8b03                 mov eax, dword ptr [ebx]
// 00614b1e  8b5004               mov edx, dword ptr [eax + 4]
// 00614b21  8bcb                 mov ecx, ebx
// 00614b23  ffd2                 call edx
// 00614b25  8d4308               lea eax, [ebx + 8]
// 00614b28  83c9ff               or ecx, 0xffffffff
// 00614b2b  f00fc108             lock xadd dword ptr [eax], ecx
// 00614b2f  7509                 jne 0x614b3a
// 00614b31  8b13                 mov edx, dword ptr [ebx]
// 00614b33  8b4208               mov eax, dword ptr [edx + 8]
// 00614b36  8bcb                 mov ecx, ebx
// 00614b38  ffd0                 call eax
// 00614b3a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00614b3e  892f                 mov dword ptr [edi], ebp
// 00614b40  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00614b44  758f                 jne 0x614ad5
// 00614b46  5f                   pop edi
// 00614b47  5d                   pop ebp
// 00614b48  5b                   pop ebx
// 00614b49  5e                   pop esi
// 00614b4a  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_backward_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
