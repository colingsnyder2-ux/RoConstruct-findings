// roc 2007-03 0040e450  unit: seg_00400000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040e450
//
// 0040e450  55                   push ebp
// 0040e451  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0040e455  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 0040e459  746b                 je 0x40e4c6
// 0040e45b  53                   push ebx
// 0040e45c  56                   push esi
// 0040e45d  57                   push edi
// 0040e45e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0040e462  8b4500               mov eax, dword ptr [ebp]
// 0040e465  8907                 mov dword ptr [edi], eax
// 0040e467  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0040e46a  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0040e46d  7444                 je 0x40e4b3
// 0040e46f  85db                 test ebx, ebx
// 0040e471  740c                 je 0x40e47f
// 0040e473  8d4b04               lea ecx, [ebx + 4]
// 0040e476  ba01000000           mov edx, 1
// 0040e47b  f00fc111             lock xadd dword ptr [ecx], edx
// 0040e47f  8b7704               mov esi, dword ptr [edi + 4]
// 0040e482  85f6                 test esi, esi
// 0040e484  742a                 je 0x40e4b0
// 0040e486  8d4604               lea eax, [esi + 4]
// 0040e489  83c9ff               or ecx, 0xffffffff
// 0040e48c  f00fc108             lock xadd dword ptr [eax], ecx
// 0040e490  751e                 jne 0x40e4b0
// 0040e492  8b16                 mov edx, dword ptr [esi]
// 0040e494  8b4204               mov eax, dword ptr [edx + 4]
// 0040e497  8bce                 mov ecx, esi
// 0040e499  ffd0                 call eax
// 0040e49b  8d4e08               lea ecx, [esi + 8]
// 0040e49e  83caff               or edx, 0xffffffff
// 0040e4a1  f00fc111             lock xadd dword ptr [ecx], edx
// 0040e4a5  7509                 jne 0x40e4b0
// 0040e4a7  8b06                 mov eax, dword ptr [esi]
// 0040e4a9  8b5008               mov edx, dword ptr [eax + 8]
// 0040e4ac  8bce                 mov ecx, esi
// 0040e4ae  ffd2                 call edx
// 0040e4b0  895f04               mov dword ptr [edi + 4], ebx
// 0040e4b3  83c508               add ebp, 8
// 0040e4b6  83c708               add edi, 8
// 0040e4b9  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0040e4bd  75a3                 jne 0x40e462
// 0040e4bf  8bc7                 mov eax, edi
// 0040e4c1  5f                   pop edi
// 0040e4c2  5e                   pop esi
// 0040e4c3  5b                   pop ebx
// 0040e4c4  5d                   pop ebp
// 0040e4c5  c3                   ret 
// 0040e4c6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040e4ca  5d                   pop ebp
// 0040e4cb  c3                   ret 
// library rbxgs/v8datamodel\Selection.cpp (function ??$_Copy_opt@PAV?$shared_ptr@VInstance@RBX@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@VInstance@RBX@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
