// roc 2009-06 0040fd90  unit: ChatEnter  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040fd90
//
// 0040fd90  55                   push ebp
// 0040fd91  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0040fd95  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 0040fd99  746b                 je 0x40fe06
// 0040fd9b  53                   push ebx
// 0040fd9c  56                   push esi
// 0040fd9d  57                   push edi
// 0040fd9e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0040fda2  8b4500               mov eax, dword ptr [ebp]
// 0040fda5  8907                 mov dword ptr [edi], eax
// 0040fda7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0040fdaa  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0040fdad  7444                 je 0x40fdf3
// 0040fdaf  85db                 test ebx, ebx
// 0040fdb1  740c                 je 0x40fdbf
// 0040fdb3  8d4b04               lea ecx, [ebx + 4]
// 0040fdb6  ba01000000           mov edx, 1
// 0040fdbb  f00fc111             lock xadd dword ptr [ecx], edx
// 0040fdbf  8b7704               mov esi, dword ptr [edi + 4]
// 0040fdc2  85f6                 test esi, esi
// 0040fdc4  742a                 je 0x40fdf0
// 0040fdc6  8d4604               lea eax, [esi + 4]
// 0040fdc9  83c9ff               or ecx, 0xffffffff
// 0040fdcc  f00fc108             lock xadd dword ptr [eax], ecx
// 0040fdd0  751e                 jne 0x40fdf0
// 0040fdd2  8b16                 mov edx, dword ptr [esi]
// 0040fdd4  8b4204               mov eax, dword ptr [edx + 4]
// 0040fdd7  8bce                 mov ecx, esi
// 0040fdd9  ffd0                 call eax
// 0040fddb  8d4e08               lea ecx, [esi + 8]
// 0040fdde  83caff               or edx, 0xffffffff
// 0040fde1  f00fc111             lock xadd dword ptr [ecx], edx
// 0040fde5  7509                 jne 0x40fdf0
// 0040fde7  8b06                 mov eax, dword ptr [esi]
// 0040fde9  8b5008               mov edx, dword ptr [eax + 8]
// 0040fdec  8bce                 mov ecx, esi
// 0040fdee  ffd2                 call edx
// 0040fdf0  895f04               mov dword ptr [edi + 4], ebx
// 0040fdf3  83c508               add ebp, 8
// 0040fdf6  83c708               add edi, 8
// 0040fdf9  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0040fdfd  75a3                 jne 0x40fda2
// 0040fdff  8bc7                 mov eax, edi
// 0040fe01  5f                   pop edi
// 0040fe02  5e                   pop esi
// 0040fe03  5b                   pop ebx
// 0040fe04  5d                   pop ebp
// 0040fe05  c3                   ret 
// 0040fe06  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040fe0a  5d                   pop ebp
// 0040fe0b  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ??$_Copy_opt@PAV?$shared_ptr@UT@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@UT@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
