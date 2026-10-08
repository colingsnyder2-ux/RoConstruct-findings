// from server: 100% by auto
// roc 2007-08 005e05e0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e05e0
//
// 005e05e0  55                   push ebp
// 005e05e1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005e05e5  57                   push edi
// 005e05e6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e05ea  3bfd                 cmp edi, ebp
// 005e05ec  744b                 je 0x5e0639
// 005e05ee  53                   push ebx
// 005e05ef  56                   push esi
// 005e05f0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e05f4  8b07                 mov eax, dword ptr [edi]
// 005e05f6  8906                 mov dword ptr [esi], eax
// 005e05f8  8b5f04               mov ebx, dword ptr [edi + 4]
// 005e05fb  85db                 test ebx, ebx
// 005e05fd  740c                 je 0x5e060b
// 005e05ff  8d4b08               lea ecx, [ebx + 8]
// 005e0602  ba01000000           mov edx, 1
// 005e0607  f00fc111             lock xadd dword ptr [ecx], edx
// 005e060b  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e060e  85c9                 test ecx, ecx
// 005e0610  7413                 je 0x5e0625
// 005e0612  8d4108               lea eax, [ecx + 8]
// 005e0615  83caff               or edx, 0xffffffff
// 005e0618  f00fc110             lock xadd dword ptr [eax], edx
// 005e061c  7507                 jne 0x5e0625
// 005e061e  8b01                 mov eax, dword ptr [ecx]
// 005e0620  8b5008               mov edx, dword ptr [eax + 8]
// 005e0623  ffd2                 call edx
// 005e0625  895e04               mov dword ptr [esi + 4], ebx
// 005e0628  83c708               add edi, 8
// 005e062b  83c608               add esi, 8
// 005e062e  3bfd                 cmp edi, ebp
// 005e0630  75c2                 jne 0x5e05f4
// 005e0632  8bc6                 mov eax, esi
// 005e0634  5e                   pop esi
// 005e0635  5b                   pop ebx
// 005e0636  5f                   pop edi
// 005e0637  5d                   pop ebp
// 005e0638  c3                   ret 
// 005e0639  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e063d  5f                   pop edi
// 005e063e  5d                   pop ebp
// 005e063f  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Copy_opt@PAV?$weak_ptr@UT@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$weak_ptr@UT@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
