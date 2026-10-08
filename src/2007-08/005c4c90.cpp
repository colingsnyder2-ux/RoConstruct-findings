// roc 2007-08 005c4c90  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4c90
//
// 005c4c90  53                   push ebx
// 005c4c91  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005c4c95  395c2408             cmp dword ptr [esp + 8], ebx
// 005c4c99  7477                 je 0x5c4d12
// 005c4c9b  55                   push ebp
// 005c4c9c  56                   push esi
// 005c4c9d  8b742418             mov esi, dword ptr [esp + 0x18]
// 005c4ca1  57                   push edi
// 005c4ca2  8b43f0               mov eax, dword ptr [ebx - 0x10]
// 005c4ca5  83eb10               sub ebx, 0x10
// 005c4ca8  83ee10               sub esi, 0x10
// 005c4cab  8906                 mov dword ptr [esi], eax
// 005c4cad  8b6b04               mov ebp, dword ptr [ebx + 4]
// 005c4cb0  3b6e04               cmp ebp, dword ptr [esi + 4]
// 005c4cb3  7444                 je 0x5c4cf9
// 005c4cb5  85ed                 test ebp, ebp
// 005c4cb7  740c                 je 0x5c4cc5
// 005c4cb9  8d4d04               lea ecx, [ebp + 4]
// 005c4cbc  ba01000000           mov edx, 1
// 005c4cc1  f00fc111             lock xadd dword ptr [ecx], edx
// 005c4cc5  8b7e04               mov edi, dword ptr [esi + 4]
// 005c4cc8  85ff                 test edi, edi
// 005c4cca  742a                 je 0x5c4cf6
// 005c4ccc  8d4704               lea eax, [edi + 4]
// 005c4ccf  83c9ff               or ecx, 0xffffffff
// 005c4cd2  f00fc108             lock xadd dword ptr [eax], ecx
// 005c4cd6  751e                 jne 0x5c4cf6
// 005c4cd8  8b17                 mov edx, dword ptr [edi]
// 005c4cda  8b4204               mov eax, dword ptr [edx + 4]
// 005c4cdd  8bcf                 mov ecx, edi
// 005c4cdf  ffd0                 call eax
// 005c4ce1  8d4f08               lea ecx, [edi + 8]
// 005c4ce4  83caff               or edx, 0xffffffff
// 005c4ce7  f00fc111             lock xadd dword ptr [ecx], edx
// 005c4ceb  7509                 jne 0x5c4cf6
// 005c4ced  8b07                 mov eax, dword ptr [edi]
// 005c4cef  8b5008               mov edx, dword ptr [eax + 8]
// 005c4cf2  8bcf                 mov ecx, edi
// 005c4cf4  ffd2                 call edx
// 005c4cf6  896e04               mov dword ptr [esi + 4], ebp
// 005c4cf9  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 005c4cfd  d94308               fld dword ptr [ebx + 8]
// 005c4d00  d95e08               fstp dword ptr [esi + 8]
// 005c4d03  d9430c               fld dword ptr [ebx + 0xc]
// 005c4d06  d95e0c               fstp dword ptr [esi + 0xc]
// 005c4d09  7597                 jne 0x5c4ca2
// 005c4d0b  5f                   pop edi
// 005c4d0c  8bc6                 mov eax, esi
// 005c4d0e  5e                   pop esi
// 005c4d0f  5d                   pop ebp
// 005c4d10  5b                   pop ebx
// 005c4d11  c3                   ret 
// 005c4d12  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c4d16  5b                   pop ebx
// 005c4d17  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_backward_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@Uforward_iterator_tag@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
