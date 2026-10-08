// from server: 100% by auto
// roc 2008-06 005990d0  unit: RBX::PartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005990d0
//
// 005990d0  55                   push ebp
// 005990d1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 005990d5  57                   push edi
// 005990d6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005990da  3bef                 cmp ebp, edi
// 005990dc  744c                 je 0x59912a
// 005990de  53                   push ebx
// 005990df  56                   push esi
// 005990e0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005990e4  8b47f8               mov eax, dword ptr [edi - 8]
// 005990e7  83ef08               sub edi, 8
// 005990ea  83ee08               sub esi, 8
// 005990ed  8906                 mov dword ptr [esi], eax
// 005990ef  8b5f04               mov ebx, dword ptr [edi + 4]
// 005990f2  85db                 test ebx, ebx
// 005990f4  740c                 je 0x599102
// 005990f6  8d4b08               lea ecx, [ebx + 8]
// 005990f9  ba01000000           mov edx, 1
// 005990fe  f00fc111             lock xadd dword ptr [ecx], edx
// 00599102  8b4e04               mov ecx, dword ptr [esi + 4]
// 00599105  85c9                 test ecx, ecx
// 00599107  7413                 je 0x59911c
// 00599109  8d4108               lea eax, [ecx + 8]
// 0059910c  83caff               or edx, 0xffffffff
// 0059910f  f00fc110             lock xadd dword ptr [eax], edx
// 00599113  7507                 jne 0x59911c
// 00599115  8b01                 mov eax, dword ptr [ecx]
// 00599117  8b5008               mov edx, dword ptr [eax + 8]
// 0059911a  ffd2                 call edx
// 0059911c  895e04               mov dword ptr [esi + 4], ebx
// 0059911f  3bfd                 cmp edi, ebp
// 00599121  75c1                 jne 0x5990e4
// 00599123  8bc6                 mov eax, esi
// 00599125  5e                   pop esi
// 00599126  5b                   pop ebx
// 00599127  5f                   pop edi
// 00599128  5d                   pop ebp
// 00599129  c3                   ret 
// 0059912a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059912e  5f                   pop edi
// 0059912f  5d                   pop ebp
// 00599130  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Copy_backward_opt@PAV?$weak_ptr@UT@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$weak_ptr@UT@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
