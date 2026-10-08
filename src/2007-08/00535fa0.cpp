// from server: 100% by auto
// roc 2007-08 00535fa0  unit: RBX::Lua::VFunctionRef::?$holder  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535fa0
//
// 00535fa0  55                   push ebp
// 00535fa1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00535fa5  396c2408             cmp dword ptr [esp + 8], ebp
// 00535fa9  746b                 je 0x536016
// 00535fab  53                   push ebx
// 00535fac  56                   push esi
// 00535fad  57                   push edi
// 00535fae  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00535fb2  8b45f8               mov eax, dword ptr [ebp - 8]
// 00535fb5  83ed08               sub ebp, 8
// 00535fb8  83ef08               sub edi, 8
// 00535fbb  8907                 mov dword ptr [edi], eax
// 00535fbd  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00535fc0  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00535fc3  7444                 je 0x536009
// 00535fc5  85db                 test ebx, ebx
// 00535fc7  740c                 je 0x535fd5
// 00535fc9  8d4b04               lea ecx, [ebx + 4]
// 00535fcc  ba01000000           mov edx, 1
// 00535fd1  f00fc111             lock xadd dword ptr [ecx], edx
// 00535fd5  8b7704               mov esi, dword ptr [edi + 4]
// 00535fd8  85f6                 test esi, esi
// 00535fda  742a                 je 0x536006
// 00535fdc  8d4604               lea eax, [esi + 4]
// 00535fdf  83c9ff               or ecx, 0xffffffff
// 00535fe2  f00fc108             lock xadd dword ptr [eax], ecx
// 00535fe6  751e                 jne 0x536006
// 00535fe8  8b16                 mov edx, dword ptr [esi]
// 00535fea  8b4204               mov eax, dword ptr [edx + 4]
// 00535fed  8bce                 mov ecx, esi
// 00535fef  ffd0                 call eax
// 00535ff1  8d4e08               lea ecx, [esi + 8]
// 00535ff4  83caff               or edx, 0xffffffff
// 00535ff7  f00fc111             lock xadd dword ptr [ecx], edx
// 00535ffb  7509                 jne 0x536006
// 00535ffd  8b06                 mov eax, dword ptr [esi]
// 00535fff  8b5008               mov edx, dword ptr [eax + 8]
// 00536002  8bce                 mov ecx, esi
// 00536004  ffd2                 call edx
// 00536006  895f04               mov dword ptr [edi + 4], ebx
// 00536009  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0053600d  75a3                 jne 0x535fb2
// 0053600f  8bc7                 mov eax, edi
// 00536011  5f                   pop edi
// 00536012  5e                   pop esi
// 00536013  5b                   pop ebx
// 00536014  5d                   pop ebp
// 00536015  c3                   ret 
// 00536016  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053601a  5d                   pop ebp
// 0053601b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
