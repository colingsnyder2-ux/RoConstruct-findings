// roc 2007-08 005c4c00  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4c00
//
// 005c4c00  53                   push ebx
// 005c4c01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005c4c05  3b5c240c             cmp ebx, dword ptr [esp + 0xc]
// 005c4c09  7476                 je 0x5c4c81
// 005c4c0b  55                   push ebp
// 005c4c0c  56                   push esi
// 005c4c0d  8b742418             mov esi, dword ptr [esp + 0x18]
// 005c4c11  57                   push edi
// 005c4c12  8b03                 mov eax, dword ptr [ebx]
// 005c4c14  8906                 mov dword ptr [esi], eax
// 005c4c16  8b6b04               mov ebp, dword ptr [ebx + 4]
// 005c4c19  3b6e04               cmp ebp, dword ptr [esi + 4]
// 005c4c1c  7444                 je 0x5c4c62
// 005c4c1e  85ed                 test ebp, ebp
// 005c4c20  740c                 je 0x5c4c2e
// 005c4c22  8d4d04               lea ecx, [ebp + 4]
// 005c4c25  ba01000000           mov edx, 1
// 005c4c2a  f00fc111             lock xadd dword ptr [ecx], edx
// 005c4c2e  8b7e04               mov edi, dword ptr [esi + 4]
// 005c4c31  85ff                 test edi, edi
// 005c4c33  742a                 je 0x5c4c5f
// 005c4c35  8d4704               lea eax, [edi + 4]
// 005c4c38  83c9ff               or ecx, 0xffffffff
// 005c4c3b  f00fc108             lock xadd dword ptr [eax], ecx
// 005c4c3f  751e                 jne 0x5c4c5f
// 005c4c41  8b17                 mov edx, dword ptr [edi]
// 005c4c43  8b4204               mov eax, dword ptr [edx + 4]
// 005c4c46  8bcf                 mov ecx, edi
// 005c4c48  ffd0                 call eax
// 005c4c4a  8d4f08               lea ecx, [edi + 8]
// 005c4c4d  83caff               or edx, 0xffffffff
// 005c4c50  f00fc111             lock xadd dword ptr [ecx], edx
// 005c4c54  7509                 jne 0x5c4c5f
// 005c4c56  8b07                 mov eax, dword ptr [edi]
// 005c4c58  8b5008               mov edx, dword ptr [eax + 8]
// 005c4c5b  8bcf                 mov ecx, edi
// 005c4c5d  ffd2                 call edx
// 005c4c5f  896e04               mov dword ptr [esi + 4], ebp
// 005c4c62  d94308               fld dword ptr [ebx + 8]
// 005c4c65  83c310               add ebx, 0x10
// 005c4c68  d95e08               fstp dword ptr [esi + 8]
// 005c4c6b  83c610               add esi, 0x10
// 005c4c6e  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 005c4c72  d943fc               fld dword ptr [ebx - 4]
// 005c4c75  d95efc               fstp dword ptr [esi - 4]
// 005c4c78  7598                 jne 0x5c4c12
// 005c4c7a  5f                   pop edi
// 005c4c7b  8bc6                 mov eax, esi
// 005c4c7d  5e                   pop esi
// 005c4c7e  5d                   pop ebp
// 005c4c7f  5b                   pop ebx
// 005c4c80  c3                   ret 
// 005c4c81  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c4c85  5b                   pop ebx
// 005c4c86  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@Uforward_iterator_tag@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
