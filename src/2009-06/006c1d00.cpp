// roc 2009-06 006c1d00  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c1d00
//
// 006c1d00  53                   push ebx
// 006c1d01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006c1d05  395c2408             cmp dword ptr [esp + 8], ebx
// 006c1d09  7477                 je 0x6c1d82
// 006c1d0b  55                   push ebp
// 006c1d0c  56                   push esi
// 006c1d0d  8b742418             mov esi, dword ptr [esp + 0x18]
// 006c1d11  57                   push edi
// 006c1d12  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 006c1d15  83eb18               sub ebx, 0x18
// 006c1d18  83ee18               sub esi, 0x18
// 006c1d1b  8906                 mov dword ptr [esi], eax
// 006c1d1d  8b6b04               mov ebp, dword ptr [ebx + 4]
// 006c1d20  3b6e04               cmp ebp, dword ptr [esi + 4]
// 006c1d23  7444                 je 0x6c1d69
// 006c1d25  85ed                 test ebp, ebp
// 006c1d27  740c                 je 0x6c1d35
// 006c1d29  8d4d04               lea ecx, [ebp + 4]
// 006c1d2c  ba01000000           mov edx, 1
// 006c1d31  f00fc111             lock xadd dword ptr [ecx], edx
// 006c1d35  8b7e04               mov edi, dword ptr [esi + 4]
// 006c1d38  85ff                 test edi, edi
// 006c1d3a  742a                 je 0x6c1d66
// 006c1d3c  8d4704               lea eax, [edi + 4]
// 006c1d3f  83c9ff               or ecx, 0xffffffff
// 006c1d42  f00fc108             lock xadd dword ptr [eax], ecx
// 006c1d46  751e                 jne 0x6c1d66
// 006c1d48  8b17                 mov edx, dword ptr [edi]
// 006c1d4a  8b4204               mov eax, dword ptr [edx + 4]
// 006c1d4d  8bcf                 mov ecx, edi
// 006c1d4f  ffd0                 call eax
// 006c1d51  8d4f08               lea ecx, [edi + 8]
// 006c1d54  83caff               or edx, 0xffffffff
// 006c1d57  f00fc111             lock xadd dword ptr [ecx], edx
// 006c1d5b  7509                 jne 0x6c1d66
// 006c1d5d  8b07                 mov eax, dword ptr [edi]
// 006c1d5f  8b5008               mov edx, dword ptr [eax + 8]
// 006c1d62  8bcf                 mov ecx, edi
// 006c1d64  ffd2                 call edx
// 006c1d66  896e04               mov dword ptr [esi + 4], ebp
// 006c1d69  dd4308               fld qword ptr [ebx + 8]
// 006c1d6c  dd5e08               fstp qword ptr [esi + 8]
// 006c1d6f  dd4310               fld qword ptr [ebx + 0x10]
// 006c1d72  dd5e10               fstp qword ptr [esi + 0x10]
// 006c1d75  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 006c1d79  7597                 jne 0x6c1d12
// 006c1d7b  5f                   pop edi
// 006c1d7c  8bc6                 mov eax, esi
// 006c1d7e  5e                   pop esi
// 006c1d7f  5d                   pop ebp
// 006c1d80  5b                   pop ebx
// 006c1d81  c3                   ret 
// 006c1d82  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c1d86  5b                   pop ebx
// 006c1d87  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Copy_backward_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@Uforward_iterator_tag@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
