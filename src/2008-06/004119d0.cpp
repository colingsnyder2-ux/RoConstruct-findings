// roc 2008-06 004119d0  unit: ChatEnter  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004119d0
//
// 004119d0  55                   push ebp
// 004119d1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004119d5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 004119d9  746b                 je 0x411a46
// 004119db  53                   push ebx
// 004119dc  56                   push esi
// 004119dd  57                   push edi
// 004119de  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004119e2  8b4500               mov eax, dword ptr [ebp]
// 004119e5  8907                 mov dword ptr [edi], eax
// 004119e7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 004119ea  3b5f04               cmp ebx, dword ptr [edi + 4]
// 004119ed  7444                 je 0x411a33
// 004119ef  85db                 test ebx, ebx
// 004119f1  740c                 je 0x4119ff
// 004119f3  8d4b04               lea ecx, [ebx + 4]
// 004119f6  ba01000000           mov edx, 1
// 004119fb  f00fc111             lock xadd dword ptr [ecx], edx
// 004119ff  8b7704               mov esi, dword ptr [edi + 4]
// 00411a02  85f6                 test esi, esi
// 00411a04  742a                 je 0x411a30
// 00411a06  8d4604               lea eax, [esi + 4]
// 00411a09  83c9ff               or ecx, 0xffffffff
// 00411a0c  f00fc108             lock xadd dword ptr [eax], ecx
// 00411a10  751e                 jne 0x411a30
// 00411a12  8b16                 mov edx, dword ptr [esi]
// 00411a14  8b4204               mov eax, dword ptr [edx + 4]
// 00411a17  8bce                 mov ecx, esi
// 00411a19  ffd0                 call eax
// 00411a1b  8d4e08               lea ecx, [esi + 8]
// 00411a1e  83caff               or edx, 0xffffffff
// 00411a21  f00fc111             lock xadd dword ptr [ecx], edx
// 00411a25  7509                 jne 0x411a30
// 00411a27  8b06                 mov eax, dword ptr [esi]
// 00411a29  8b5008               mov edx, dword ptr [eax + 8]
// 00411a2c  8bce                 mov ecx, esi
// 00411a2e  ffd2                 call edx
// 00411a30  895f04               mov dword ptr [edi + 4], ebx
// 00411a33  83c508               add ebp, 8
// 00411a36  83c708               add edi, 8
// 00411a39  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00411a3d  75a3                 jne 0x4119e2
// 00411a3f  8bc7                 mov eax, edi
// 00411a41  5f                   pop edi
// 00411a42  5e                   pop esi
// 00411a43  5b                   pop ebx
// 00411a44  5d                   pop ebp
// 00411a45  c3                   ret 
// 00411a46  8b442410             mov eax, dword ptr [esp + 0x10]
// 00411a4a  5d                   pop ebp
// 00411a4b  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ??$_Copy_opt@PAV?$shared_ptr@UT@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@UT@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
