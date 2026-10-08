// roc 2007-03 005c09f0  unit: seg_005c0000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c09f0
//
// 005c09f0  56                   push esi
// 005c09f1  8b742408             mov esi, dword ptr [esp + 8]
// 005c09f5  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 005c09f9  7470                 je 0x5c0a6b
// 005c09fb  53                   push ebx
// 005c09fc  55                   push ebp
// 005c09fd  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005c0a01  57                   push edi
// 005c0a02  8b4500               mov eax, dword ptr [ebp]
// 005c0a05  8906                 mov dword ptr [esi], eax
// 005c0a07  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005c0a0a  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005c0a0d  7444                 je 0x5c0a53
// 005c0a0f  85db                 test ebx, ebx
// 005c0a11  740c                 je 0x5c0a1f
// 005c0a13  8d4b04               lea ecx, [ebx + 4]
// 005c0a16  ba01000000           mov edx, 1
// 005c0a1b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0a1f  8b7e04               mov edi, dword ptr [esi + 4]
// 005c0a22  85ff                 test edi, edi
// 005c0a24  742a                 je 0x5c0a50
// 005c0a26  8d4704               lea eax, [edi + 4]
// 005c0a29  83c9ff               or ecx, 0xffffffff
// 005c0a2c  f00fc108             lock xadd dword ptr [eax], ecx
// 005c0a30  751e                 jne 0x5c0a50
// 005c0a32  8b17                 mov edx, dword ptr [edi]
// 005c0a34  8b4204               mov eax, dword ptr [edx + 4]
// 005c0a37  8bcf                 mov ecx, edi
// 005c0a39  ffd0                 call eax
// 005c0a3b  8d4f08               lea ecx, [edi + 8]
// 005c0a3e  83caff               or edx, 0xffffffff
// 005c0a41  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0a45  7509                 jne 0x5c0a50
// 005c0a47  8b07                 mov eax, dword ptr [edi]
// 005c0a49  8b5008               mov edx, dword ptr [eax + 8]
// 005c0a4c  8bcf                 mov ecx, edi
// 005c0a4e  ffd2                 call edx
// 005c0a50  895e04               mov dword ptr [esi + 4], ebx
// 005c0a53  d94508               fld dword ptr [ebp + 8]
// 005c0a56  83c610               add esi, 0x10
// 005c0a59  3b742418             cmp esi, dword ptr [esp + 0x18]
// 005c0a5d  d95ef8               fstp dword ptr [esi - 8]
// 005c0a60  d9450c               fld dword ptr [ebp + 0xc]
// 005c0a63  d95efc               fstp dword ptr [esi - 4]
// 005c0a66  759a                 jne 0x5c0a02
// 005c0a68  5f                   pop edi
// 005c0a69  5d                   pop ebp
// 005c0a6a  5b                   pop ebx
// 005c0a6b  5e                   pop esi
// 005c0a6c  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Fill@PAUWaitingThread@YieldingThreads@Lua@RBX@@U1234@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
