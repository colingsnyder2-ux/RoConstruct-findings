// roc 2007-03 004181d0  unit: seg_00410000  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004181d0
//
// 004181d0  53                   push ebx
// 004181d1  56                   push esi
// 004181d2  8bd9                 mov ebx, ecx
// 004181d4  8b4378               mov eax, dword ptr [ebx + 0x78]
// 004181d7  57                   push edi
// 004181d8  33ff                 xor edi, edi
// 004181da  3bc7                 cmp eax, edi
// 004181dc  7409                 je 0x4181e7
// 004181de  50                   push eax
// 004181df  e80c5f2000           call 0x61e0f0
// 004181e4  83c404               add esp, 4
// 004181e7  3bdf                 cmp ebx, edi
// 004181e9  897b78               mov dword ptr [ebx + 0x78], edi
// 004181ec  897b7c               mov dword ptr [ebx + 0x7c], edi
// 004181ef  89bb80000000         mov dword ptr [ebx + 0x80], edi
// 004181f5  7405                 je 0x4181fc
// 004181f7  8d7350               lea esi, [ebx + 0x50]
// 004181fa  eb02                 jmp 0x4181fe
// 004181fc  33f6                 xor esi, esi
// 004181fe  8b4614               mov eax, dword ptr [esi + 0x14]
// 00418201  3bc7                 cmp eax, edi
// 00418203  7409                 je 0x41820e
// 00418205  50                   push eax
// 00418206  e8e55e2000           call 0x61e0f0
// 0041820b  83c404               add esp, 4
// 0041820e  897e14               mov dword ptr [esi + 0x14], edi
// 00418211  897e18               mov dword ptr [esi + 0x18], edi
// 00418214  897e1c               mov dword ptr [esi + 0x1c], edi
// 00418217  8b4604               mov eax, dword ptr [esi + 4]
// 0041821a  3bc7                 cmp eax, edi
// 0041821c  7409                 je 0x418227
// 0041821e  50                   push eax
// 0041821f  e8cc5e2000           call 0x61e0f0
// 00418224  83c404               add esp, 4
// 00418227  3bdf                 cmp ebx, edi
// 00418229  897e04               mov dword ptr [esi + 4], edi
// 0041822c  897e08               mov dword ptr [esi + 8], edi
// 0041822f  897e0c               mov dword ptr [esi + 0xc], edi
// 00418232  7405                 je 0x418239
// 00418234  8d732c               lea esi, [ebx + 0x2c]
// 00418237  eb02                 jmp 0x41823b
// 00418239  33f6                 xor esi, esi
// 0041823b  8b4614               mov eax, dword ptr [esi + 0x14]
// 0041823e  3bc7                 cmp eax, edi
// 00418240  7409                 je 0x41824b
// 00418242  50                   push eax
// 00418243  e8a85e2000           call 0x61e0f0
// 00418248  83c404               add esp, 4
// 0041824b  897e14               mov dword ptr [esi + 0x14], edi
// 0041824e  897e18               mov dword ptr [esi + 0x18], edi
// 00418251  897e1c               mov dword ptr [esi + 0x1c], edi
// 00418254  8b4604               mov eax, dword ptr [esi + 4]
// 00418257  3bc7                 cmp eax, edi
// 00418259  7409                 je 0x418264
// 0041825b  50                   push eax
// 0041825c  e88f5e2000           call 0x61e0f0
// 00418261  83c404               add esp, 4
// 00418264  3bdf                 cmp ebx, edi
// 00418266  897e04               mov dword ptr [esi + 4], edi
// 00418269  897e08               mov dword ptr [esi + 8], edi
// 0041826c  897e0c               mov dword ptr [esi + 0xc], edi
// 0041826f  7405                 je 0x418276
// 00418271  8d7308               lea esi, [ebx + 8]
// 00418274  eb02                 jmp 0x418278
// 00418276  33f6                 xor esi, esi
// 00418278  8b4614               mov eax, dword ptr [esi + 0x14]
// 0041827b  3bc7                 cmp eax, edi
// 0041827d  7409                 je 0x418288
// 0041827f  50                   push eax
// 00418280  e86b5e2000           call 0x61e0f0
// 00418285  83c404               add esp, 4
// 00418288  897e14               mov dword ptr [esi + 0x14], edi
// 0041828b  897e18               mov dword ptr [esi + 0x18], edi
// 0041828e  897e1c               mov dword ptr [esi + 0x1c], edi
// 00418291  8b4604               mov eax, dword ptr [esi + 4]
// 00418294  3bc7                 cmp eax, edi
// 00418296  7409                 je 0x4182a1
// 00418298  50                   push eax
// 00418299  e8525e2000           call 0x61e0f0
// 0041829e  83c404               add esp, 4
// 004182a1  897e04               mov dword ptr [esi + 4], edi
// 004182a4  897e08               mov dword ptr [esi + 8], edi
// 004182a7  897e0c               mov dword ptr [esi + 0xc], edi
// 004182aa  5f                   pop edi
// 004182ab  5e                   pop esi
// 004182ac  c70364617800         mov dword ptr [ebx], 0x786164
// 004182b2  5b                   pop ebx
// 004182b3  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??1ClassDescriptor@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
