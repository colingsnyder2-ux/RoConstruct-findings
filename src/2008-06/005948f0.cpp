// roc 2008-06 005948f0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 338 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005948f0
//
// 005948f0  6aff                 push -1
// 005948f2  6868917d00           push 0x7d9168
// 005948f7  64a100000000         mov eax, dword ptr fs:[0]
// 005948fd  50                   push eax
// 005948fe  64892500000000       mov dword ptr fs:[0], esp
// 00594905  83ec08               sub esp, 8
// 00594908  53                   push ebx
// 00594909  56                   push esi
// 0059490a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0059490e  57                   push edi
// 0059490f  6a4e                 push 0x4e
// 00594911  56                   push esi
// 00594912  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059491a  e8f1da0700           call 0x612410
// 0059491f  6a08                 push 8
// 00594921  56                   push esi
// 00594922  e819e30700           call 0x612c40
// 00594927  8bf8                 mov edi, eax
// 00594929  83c410               add esp, 0x10
// 0059492c  85ff                 test edi, edi
// 0059492e  740d                 je 0x59493d
// 00594930  c70700000000         mov dword ptr [edi], 0
// 00594936  c7470400000000       mov dword ptr [edi + 4], 0
// 0059493d  a130979400           mov eax, dword ptr [0x949730]
// 00594942  50                   push eax
// 00594943  68f0d8ffff           push 0xffffd8f0
// 00594948  56                   push esi
// 00594949  e842db0700           call 0x612490
// 0059494e  6afe                 push -2
// 00594950  56                   push esi
// 00594951  e89ade0700           call 0x6127f0
// 00594956  68eed8ffff           push 0xffffd8ee
// 0059495b  56                   push esi
// 0059495c  e81fdd0700           call 0x612680
// 00594961  6a0c                 push 0xc
// 00594963  e8b8bf1000           call 0x6a0920
// 00594968  83c420               add esp, 0x20
// 0059496b  85c0                 test eax, eax
// 0059496d  742e                 je 0x59499d
// 0059496f  c70000000000         mov dword ptr [eax], 0
// 00594975  8b0d6c5c9700         mov ecx, dword ptr [0x975c6c]
// 0059497b  894804               mov dword ptr [eax + 4], ecx
// 0059497e  8b15705c9700         mov edx, dword ptr [0x975c70]
// 00594984  8bca                 mov ecx, edx
// 00594986  895008               mov dword ptr [eax + 8], edx
// 00594989  85c9                 test ecx, ecx
// 0059498b  740c                 je 0x594999
// 0059498d  83c104               add ecx, 4
// 00594990  ba01000000           mov edx, 1
// 00594995  f00fc111             lock xadd dword ptr [ecx], edx
// 00594999  8bf0                 mov esi, eax
// 0059499b  eb02                 jmp 0x59499f
// 0059499d  33f6                 xor esi, esi
// 0059499f  56                   push esi
// 005949a0  8d4c2414             lea ecx, [esp + 0x14]
// 005949a4  89742410             mov dword ptr [esp + 0x10], esi
// 005949a8  e893fdffff           call 0x594740
// 005949ad  56                   push esi
// 005949ae  8d442414             lea eax, [esp + 0x14]
// 005949b2  56                   push esi
// 005949b3  50                   push eax
// 005949b4  e8578aeeff           call 0x47d410
// 005949b9  83c40c               add esp, 0xc
// 005949bc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005949c0  8d542410             lea edx, [esp + 0x10]
// 005949c4  890f                 mov dword ptr [edi], ecx
// 005949c6  8d5f04               lea ebx, [edi + 4]
// 005949c9  52                   push edx
// 005949ca  8bcb                 mov ecx, ebx
// 005949cc  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005949d4  e8d7dbe6ff           call 0x4025b0
// 005949d9  8b742410             mov esi, dword ptr [esp + 0x10]
// 005949dd  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005949e5  85f6                 test esi, esi
// 005949e7  742a                 je 0x594a13
// 005949e9  8d4604               lea eax, [esi + 4]
// 005949ec  83c9ff               or ecx, 0xffffffff
// 005949ef  f00fc108             lock xadd dword ptr [eax], ecx
// 005949f3  751e                 jne 0x594a13
// 005949f5  8b16                 mov edx, dword ptr [esi]
// 005949f7  8b4204               mov eax, dword ptr [edx + 4]
// 005949fa  8bce                 mov ecx, esi
// 005949fc  ffd0                 call eax
// 005949fe  8d4e08               lea ecx, [esi + 8]
// 00594a01  83caff               or edx, 0xffffffff
// 00594a04  f00fc111             lock xadd dword ptr [ecx], edx
// 00594a08  7509                 jne 0x594a13
// 00594a0a  8b06                 mov eax, dword ptr [esi]
// 00594a0c  8b5008               mov edx, dword ptr [eax + 8]
// 00594a0f  8bce                 mov ecx, esi
// 00594a11  ffd2                 call edx
// 00594a13  8b0f                 mov ecx, dword ptr [edi]
// 00594a15  8b442424             mov eax, dword ptr [esp + 0x24]
// 00594a19  8908                 mov dword ptr [eax], ecx
// 00594a1b  8b0b                 mov ecx, dword ptr [ebx]
// 00594a1d  5f                   pop edi
// 00594a1e  5e                   pop esi
// 00594a1f  894804               mov dword ptr [eax + 4], ecx
// 00594a22  5b                   pop ebx
// 00594a23  85c9                 test ecx, ecx
// 00594a25  740c                 je 0x594a33
// 00594a27  83c104               add ecx, 4
// 00594a2a  ba01000000           mov edx, 1
// 00594a2f  f00fc111             lock xadd dword ptr [ecx], edx
// 00594a33  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00594a37  64890d00000000       mov dword ptr fs:[0], ecx
// 00594a3e  83c414               add esp, 0x14
// 00594a41  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?create@Node@ThreadRef@Lua@RBX@@SA?AV?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
