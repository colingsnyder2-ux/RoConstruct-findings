// roc 2007-08 00573af0  unit: RBX::PartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573af0
//
// 00573af0  55                   push ebp
// 00573af1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00573af5  57                   push edi
// 00573af6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00573afa  3bef                 cmp ebp, edi
// 00573afc  744c                 je 0x573b4a
// 00573afe  53                   push ebx
// 00573aff  56                   push esi
// 00573b00  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00573b04  8b47f8               mov eax, dword ptr [edi - 8]
// 00573b07  83ef08               sub edi, 8
// 00573b0a  83ee08               sub esi, 8
// 00573b0d  8906                 mov dword ptr [esi], eax
// 00573b0f  8b5f04               mov ebx, dword ptr [edi + 4]
// 00573b12  85db                 test ebx, ebx
// 00573b14  740c                 je 0x573b22
// 00573b16  8d4b08               lea ecx, [ebx + 8]
// 00573b19  ba01000000           mov edx, 1
// 00573b1e  f00fc111             lock xadd dword ptr [ecx], edx
// 00573b22  8b4e04               mov ecx, dword ptr [esi + 4]
// 00573b25  85c9                 test ecx, ecx
// 00573b27  7413                 je 0x573b3c
// 00573b29  8d4108               lea eax, [ecx + 8]
// 00573b2c  83caff               or edx, 0xffffffff
// 00573b2f  f00fc110             lock xadd dword ptr [eax], edx
// 00573b33  7507                 jne 0x573b3c
// 00573b35  8b01                 mov eax, dword ptr [ecx]
// 00573b37  8b5008               mov edx, dword ptr [eax + 8]
// 00573b3a  ffd2                 call edx
// 00573b3c  3bfd                 cmp edi, ebp
// 00573b3e  895e04               mov dword ptr [esi + 4], ebx
// 00573b41  75c1                 jne 0x573b04
// 00573b43  8bc6                 mov eax, esi
// 00573b45  5e                   pop esi
// 00573b46  5b                   pop ebx
// 00573b47  5f                   pop edi
// 00573b48  5d                   pop ebp
// 00573b49  c3                   ret 
// 00573b4a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00573b4e  5f                   pop edi
// 00573b4f  5d                   pop ebp
// 00573b50  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Copy_backward_opt@PAV?$weak_ptr@UT@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$weak_ptr@UT@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
