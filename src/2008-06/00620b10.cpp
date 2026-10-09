// roc 2008-06 00620b10  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620b10
//
// 00620b10  53                   push ebx
// 00620b11  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00620b15  395c2408             cmp dword ptr [esp + 8], ebx
// 00620b19  7477                 je 0x620b92
// 00620b1b  55                   push ebp
// 00620b1c  56                   push esi
// 00620b1d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00620b21  57                   push edi
// 00620b22  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 00620b25  83eb18               sub ebx, 0x18
// 00620b28  83ee18               sub esi, 0x18
// 00620b2b  8906                 mov dword ptr [esi], eax
// 00620b2d  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00620b30  3b6e04               cmp ebp, dword ptr [esi + 4]
// 00620b33  7444                 je 0x620b79
// 00620b35  85ed                 test ebp, ebp
// 00620b37  740c                 je 0x620b45
// 00620b39  8d4d04               lea ecx, [ebp + 4]
// 00620b3c  ba01000000           mov edx, 1
// 00620b41  f00fc111             lock xadd dword ptr [ecx], edx
// 00620b45  8b7e04               mov edi, dword ptr [esi + 4]
// 00620b48  85ff                 test edi, edi
// 00620b4a  742a                 je 0x620b76
// 00620b4c  8d4704               lea eax, [edi + 4]
// 00620b4f  83c9ff               or ecx, 0xffffffff
// 00620b52  f00fc108             lock xadd dword ptr [eax], ecx
// 00620b56  751e                 jne 0x620b76
// 00620b58  8b17                 mov edx, dword ptr [edi]
// 00620b5a  8b4204               mov eax, dword ptr [edx + 4]
// 00620b5d  8bcf                 mov ecx, edi
// 00620b5f  ffd0                 call eax
// 00620b61  8d4f08               lea ecx, [edi + 8]
// 00620b64  83caff               or edx, 0xffffffff
// 00620b67  f00fc111             lock xadd dword ptr [ecx], edx
// 00620b6b  7509                 jne 0x620b76
// 00620b6d  8b07                 mov eax, dword ptr [edi]
// 00620b6f  8b5008               mov edx, dword ptr [eax + 8]
// 00620b72  8bcf                 mov ecx, edi
// 00620b74  ffd2                 call edx
// 00620b76  896e04               mov dword ptr [esi + 4], ebp
// 00620b79  dd4308               fld qword ptr [ebx + 8]
// 00620b7c  dd5e08               fstp qword ptr [esi + 8]
// 00620b7f  dd4310               fld qword ptr [ebx + 0x10]
// 00620b82  dd5e10               fstp qword ptr [esi + 0x10]
// 00620b85  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 00620b89  7597                 jne 0x620b22
// 00620b8b  5f                   pop edi
// 00620b8c  8bc6                 mov eax, esi
// 00620b8e  5e                   pop esi
// 00620b8f  5d                   pop ebp
// 00620b90  5b                   pop ebx
// 00620b91  c3                   ret 
// 00620b92  8b442410             mov eax, dword ptr [esp + 0x10]
// 00620b96  5b                   pop ebx
// 00620b97  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Copy_backward_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@Uforward_iterator_tag@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
