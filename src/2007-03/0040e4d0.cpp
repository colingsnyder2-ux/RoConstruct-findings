// roc 2007-03 0040e4d0  unit: seg_00400000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040e4d0
//
// 0040e4d0  55                   push ebp
// 0040e4d1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0040e4d5  396c2408             cmp dword ptr [esp + 8], ebp
// 0040e4d9  746b                 je 0x40e546
// 0040e4db  53                   push ebx
// 0040e4dc  56                   push esi
// 0040e4dd  57                   push edi
// 0040e4de  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0040e4e2  8b45f8               mov eax, dword ptr [ebp - 8]
// 0040e4e5  83ed08               sub ebp, 8
// 0040e4e8  83ef08               sub edi, 8
// 0040e4eb  8907                 mov dword ptr [edi], eax
// 0040e4ed  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0040e4f0  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0040e4f3  7444                 je 0x40e539
// 0040e4f5  85db                 test ebx, ebx
// 0040e4f7  740c                 je 0x40e505
// 0040e4f9  8d4b04               lea ecx, [ebx + 4]
// 0040e4fc  ba01000000           mov edx, 1
// 0040e501  f00fc111             lock xadd dword ptr [ecx], edx
// 0040e505  8b7704               mov esi, dword ptr [edi + 4]
// 0040e508  85f6                 test esi, esi
// 0040e50a  742a                 je 0x40e536
// 0040e50c  8d4604               lea eax, [esi + 4]
// 0040e50f  83c9ff               or ecx, 0xffffffff
// 0040e512  f00fc108             lock xadd dword ptr [eax], ecx
// 0040e516  751e                 jne 0x40e536
// 0040e518  8b16                 mov edx, dword ptr [esi]
// 0040e51a  8b4204               mov eax, dword ptr [edx + 4]
// 0040e51d  8bce                 mov ecx, esi
// 0040e51f  ffd0                 call eax
// 0040e521  8d4e08               lea ecx, [esi + 8]
// 0040e524  83caff               or edx, 0xffffffff
// 0040e527  f00fc111             lock xadd dword ptr [ecx], edx
// 0040e52b  7509                 jne 0x40e536
// 0040e52d  8b06                 mov eax, dword ptr [esi]
// 0040e52f  8b5008               mov edx, dword ptr [eax + 8]
// 0040e532  8bce                 mov ecx, esi
// 0040e534  ffd2                 call edx
// 0040e536  895f04               mov dword ptr [edi + 4], ebx
// 0040e539  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0040e53d  75a3                 jne 0x40e4e2
// 0040e53f  8bc7                 mov eax, edi
// 0040e541  5f                   pop edi
// 0040e542  5e                   pop esi
// 0040e543  5b                   pop ebx
// 0040e544  5d                   pop ebp
// 0040e545  c3                   ret 
// 0040e546  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040e54a  5d                   pop ebp
// 0040e54b  c3                   ret 
// library rbxgs/v8datamodel\Selection.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@VInstance@RBX@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@VInstance@RBX@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
