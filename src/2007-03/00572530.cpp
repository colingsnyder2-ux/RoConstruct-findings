// roc 2007-03 00572530  unit: seg_00570000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572530
//
// 00572530  55                   push ebp
// 00572531  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00572535  57                   push edi
// 00572536  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0057253a  3bef                 cmp ebp, edi
// 0057253c  744c                 je 0x57258a
// 0057253e  53                   push ebx
// 0057253f  56                   push esi
// 00572540  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00572544  8b47f8               mov eax, dword ptr [edi - 8]
// 00572547  83ef08               sub edi, 8
// 0057254a  83ee08               sub esi, 8
// 0057254d  8906                 mov dword ptr [esi], eax
// 0057254f  8b5f04               mov ebx, dword ptr [edi + 4]
// 00572552  85db                 test ebx, ebx
// 00572554  740c                 je 0x572562
// 00572556  8d4b08               lea ecx, [ebx + 8]
// 00572559  ba01000000           mov edx, 1
// 0057255e  f00fc111             lock xadd dword ptr [ecx], edx
// 00572562  8b4e04               mov ecx, dword ptr [esi + 4]
// 00572565  85c9                 test ecx, ecx
// 00572567  7413                 je 0x57257c
// 00572569  8d4108               lea eax, [ecx + 8]
// 0057256c  83caff               or edx, 0xffffffff
// 0057256f  f00fc110             lock xadd dword ptr [eax], edx
// 00572573  7507                 jne 0x57257c
// 00572575  8b01                 mov eax, dword ptr [ecx]
// 00572577  8b5008               mov edx, dword ptr [eax + 8]
// 0057257a  ffd2                 call edx
// 0057257c  3bfd                 cmp edi, ebp
// 0057257e  895e04               mov dword ptr [esi + 4], ebx
// 00572581  75c1                 jne 0x572544
// 00572583  8bc6                 mov eax, esi
// 00572585  5e                   pop esi
// 00572586  5b                   pop ebx
// 00572587  5f                   pop edi
// 00572588  5d                   pop ebp
// 00572589  c3                   ret 
// 0057258a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057258e  5f                   pop edi
// 0057258f  5d                   pop ebp
// 00572590  c3                   ret 
// library rbxgs/v8datamodel\ICameraOwner.cpp (function ??$_Copy_backward_opt@PAV?$weak_ptr@VPartInstance@RBX@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$weak_ptr@VPartInstance@RBX@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICameraOwner.cpp
