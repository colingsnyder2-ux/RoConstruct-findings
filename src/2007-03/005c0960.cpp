// roc 2007-03 005c0960  unit: seg_005c0000  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c0960
//
// 005c0960  53                   push ebx
// 005c0961  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005c0965  395c2408             cmp dword ptr [esp + 8], ebx
// 005c0969  7477                 je 0x5c09e2
// 005c096b  55                   push ebp
// 005c096c  56                   push esi
// 005c096d  8b742418             mov esi, dword ptr [esp + 0x18]
// 005c0971  57                   push edi
// 005c0972  8b43f0               mov eax, dword ptr [ebx - 0x10]
// 005c0975  83eb10               sub ebx, 0x10
// 005c0978  83ee10               sub esi, 0x10
// 005c097b  8906                 mov dword ptr [esi], eax
// 005c097d  8b6b04               mov ebp, dword ptr [ebx + 4]
// 005c0980  3b6e04               cmp ebp, dword ptr [esi + 4]
// 005c0983  7444                 je 0x5c09c9
// 005c0985  85ed                 test ebp, ebp
// 005c0987  740c                 je 0x5c0995
// 005c0989  8d4d04               lea ecx, [ebp + 4]
// 005c098c  ba01000000           mov edx, 1
// 005c0991  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0995  8b7e04               mov edi, dword ptr [esi + 4]
// 005c0998  85ff                 test edi, edi
// 005c099a  742a                 je 0x5c09c6
// 005c099c  8d4704               lea eax, [edi + 4]
// 005c099f  83c9ff               or ecx, 0xffffffff
// 005c09a2  f00fc108             lock xadd dword ptr [eax], ecx
// 005c09a6  751e                 jne 0x5c09c6
// 005c09a8  8b17                 mov edx, dword ptr [edi]
// 005c09aa  8b4204               mov eax, dword ptr [edx + 4]
// 005c09ad  8bcf                 mov ecx, edi
// 005c09af  ffd0                 call eax
// 005c09b1  8d4f08               lea ecx, [edi + 8]
// 005c09b4  83caff               or edx, 0xffffffff
// 005c09b7  f00fc111             lock xadd dword ptr [ecx], edx
// 005c09bb  7509                 jne 0x5c09c6
// 005c09bd  8b07                 mov eax, dword ptr [edi]
// 005c09bf  8b5008               mov edx, dword ptr [eax + 8]
// 005c09c2  8bcf                 mov ecx, edi
// 005c09c4  ffd2                 call edx
// 005c09c6  896e04               mov dword ptr [esi + 4], ebp
// 005c09c9  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 005c09cd  d94308               fld dword ptr [ebx + 8]
// 005c09d0  d95e08               fstp dword ptr [esi + 8]
// 005c09d3  d9430c               fld dword ptr [ebx + 0xc]
// 005c09d6  d95e0c               fstp dword ptr [esi + 0xc]
// 005c09d9  7597                 jne 0x5c0972
// 005c09db  5f                   pop edi
// 005c09dc  8bc6                 mov eax, esi
// 005c09de  5e                   pop esi
// 005c09df  5d                   pop ebp
// 005c09e0  5b                   pop ebx
// 005c09e1  c3                   ret 
// 005c09e2  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c09e6  5b                   pop ebx
// 005c09e7  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_backward_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@Uforward_iterator_tag@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
