// roc 2007-03 005c08d0  unit: seg_005c0000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c08d0
//
// 005c08d0  53                   push ebx
// 005c08d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005c08d5  3b5c240c             cmp ebx, dword ptr [esp + 0xc]
// 005c08d9  7476                 je 0x5c0951
// 005c08db  55                   push ebp
// 005c08dc  56                   push esi
// 005c08dd  8b742418             mov esi, dword ptr [esp + 0x18]
// 005c08e1  57                   push edi
// 005c08e2  8b03                 mov eax, dword ptr [ebx]
// 005c08e4  8906                 mov dword ptr [esi], eax
// 005c08e6  8b6b04               mov ebp, dword ptr [ebx + 4]
// 005c08e9  3b6e04               cmp ebp, dword ptr [esi + 4]
// 005c08ec  7444                 je 0x5c0932
// 005c08ee  85ed                 test ebp, ebp
// 005c08f0  740c                 je 0x5c08fe
// 005c08f2  8d4d04               lea ecx, [ebp + 4]
// 005c08f5  ba01000000           mov edx, 1
// 005c08fa  f00fc111             lock xadd dword ptr [ecx], edx
// 005c08fe  8b7e04               mov edi, dword ptr [esi + 4]
// 005c0901  85ff                 test edi, edi
// 005c0903  742a                 je 0x5c092f
// 005c0905  8d4704               lea eax, [edi + 4]
// 005c0908  83c9ff               or ecx, 0xffffffff
// 005c090b  f00fc108             lock xadd dword ptr [eax], ecx
// 005c090f  751e                 jne 0x5c092f
// 005c0911  8b17                 mov edx, dword ptr [edi]
// 005c0913  8b4204               mov eax, dword ptr [edx + 4]
// 005c0916  8bcf                 mov ecx, edi
// 005c0918  ffd0                 call eax
// 005c091a  8d4f08               lea ecx, [edi + 8]
// 005c091d  83caff               or edx, 0xffffffff
// 005c0920  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0924  7509                 jne 0x5c092f
// 005c0926  8b07                 mov eax, dword ptr [edi]
// 005c0928  8b5008               mov edx, dword ptr [eax + 8]
// 005c092b  8bcf                 mov ecx, edi
// 005c092d  ffd2                 call edx
// 005c092f  896e04               mov dword ptr [esi + 4], ebp
// 005c0932  d94308               fld dword ptr [ebx + 8]
// 005c0935  83c310               add ebx, 0x10
// 005c0938  d95e08               fstp dword ptr [esi + 8]
// 005c093b  83c610               add esi, 0x10
// 005c093e  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 005c0942  d943fc               fld dword ptr [ebx - 4]
// 005c0945  d95efc               fstp dword ptr [esi - 4]
// 005c0948  7598                 jne 0x5c08e2
// 005c094a  5f                   pop edi
// 005c094b  8bc6                 mov eax, esi
// 005c094d  5e                   pop esi
// 005c094e  5d                   pop ebp
// 005c094f  5b                   pop ebx
// 005c0950  c3                   ret 
// 005c0951  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c0955  5b                   pop ebx
// 005c0956  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@Uforward_iterator_tag@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
