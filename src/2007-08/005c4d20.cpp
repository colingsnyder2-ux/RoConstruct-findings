// roc 2007-08 005c4d20  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4d20
//
// 005c4d20  56                   push esi
// 005c4d21  8b742408             mov esi, dword ptr [esp + 8]
// 005c4d25  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 005c4d29  7470                 je 0x5c4d9b
// 005c4d2b  53                   push ebx
// 005c4d2c  55                   push ebp
// 005c4d2d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005c4d31  57                   push edi
// 005c4d32  8b4500               mov eax, dword ptr [ebp]
// 005c4d35  8906                 mov dword ptr [esi], eax
// 005c4d37  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005c4d3a  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005c4d3d  7444                 je 0x5c4d83
// 005c4d3f  85db                 test ebx, ebx
// 005c4d41  740c                 je 0x5c4d4f
// 005c4d43  8d4b04               lea ecx, [ebx + 4]
// 005c4d46  ba01000000           mov edx, 1
// 005c4d4b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c4d4f  8b7e04               mov edi, dword ptr [esi + 4]
// 005c4d52  85ff                 test edi, edi
// 005c4d54  742a                 je 0x5c4d80
// 005c4d56  8d4704               lea eax, [edi + 4]
// 005c4d59  83c9ff               or ecx, 0xffffffff
// 005c4d5c  f00fc108             lock xadd dword ptr [eax], ecx
// 005c4d60  751e                 jne 0x5c4d80
// 005c4d62  8b17                 mov edx, dword ptr [edi]
// 005c4d64  8b4204               mov eax, dword ptr [edx + 4]
// 005c4d67  8bcf                 mov ecx, edi
// 005c4d69  ffd0                 call eax
// 005c4d6b  8d4f08               lea ecx, [edi + 8]
// 005c4d6e  83caff               or edx, 0xffffffff
// 005c4d71  f00fc111             lock xadd dword ptr [ecx], edx
// 005c4d75  7509                 jne 0x5c4d80
// 005c4d77  8b07                 mov eax, dword ptr [edi]
// 005c4d79  8b5008               mov edx, dword ptr [eax + 8]
// 005c4d7c  8bcf                 mov ecx, edi
// 005c4d7e  ffd2                 call edx
// 005c4d80  895e04               mov dword ptr [esi + 4], ebx
// 005c4d83  d94508               fld dword ptr [ebp + 8]
// 005c4d86  83c610               add esi, 0x10
// 005c4d89  3b742418             cmp esi, dword ptr [esp + 0x18]
// 005c4d8d  d95ef8               fstp dword ptr [esi - 8]
// 005c4d90  d9450c               fld dword ptr [ebp + 0xc]
// 005c4d93  d95efc               fstp dword ptr [esi - 4]
// 005c4d96  759a                 jne 0x5c4d32
// 005c4d98  5f                   pop edi
// 005c4d99  5d                   pop ebp
// 005c4d9a  5b                   pop ebx
// 005c4d9b  5e                   pop esi
// 005c4d9c  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Fill@PAUWaitingThread@YieldingThreads@Lua@RBX@@U1234@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
