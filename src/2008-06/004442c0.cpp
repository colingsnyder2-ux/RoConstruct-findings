// roc 2008-06 004442c0  unit: RBX::MergeBinder  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004442c0
//
// 004442c0  55                   push ebp
// 004442c1  8bec                 mov ebp, esp
// 004442c3  6aff                 push -1
// 004442c5  68400d7c00           push 0x7c0d40
// 004442ca  64a100000000         mov eax, dword ptr fs:[0]
// 004442d0  50                   push eax
// 004442d1  64892500000000       mov dword ptr fs:[0], esp
// 004442d8  83ec20               sub esp, 0x20
// 004442db  53                   push ebx
// 004442dc  56                   push esi
// 004442dd  8bf1                 mov esi, ecx
// 004442df  8b560c               mov edx, dword ptr [esi + 0xc]
// 004442e2  57                   push edi
// 004442e3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004442e6  8975e8               mov dword ptr [ebp - 0x18], esi
// 004442e9  85d2                 test edx, edx
// 004442eb  7504                 jne 0x4442f1
// 004442ed  33db                 xor ebx, ebx
// 004442ef  eb08                 jmp 0x4442f9
// 004442f1  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 004442f4  2bda                 sub ebx, edx
// 004442f6  c1fb04               sar ebx, 4
// 004442f9  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004442fc  85ff                 test edi, edi
// 004442fe  0f8427020000         je 0x44452b
// 00444304  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00444307  8bc1                 mov eax, ecx
// 00444309  2bc2                 sub eax, edx
// 0044430b  c1f804               sar eax, 4
// 0044430e  baffffff0f           mov edx, 0xfffffff
// 00444313  2bd0                 sub edx, eax
// 00444315  3bd7                 cmp edx, edi
// 00444317  7305                 jae 0x44431e
// 00444319  e8222a0800           call 0x4c6d40
// 0044431e  8d1438               lea edx, [eax + edi]
// 00444321  3bda                 cmp ebx, edx
// 00444323  0f8306010000         jae 0x44442f
// 00444329  8bc3                 mov eax, ebx
// 0044432b  d1e8                 shr eax, 1
// 0044432d  b9ffffff0f           mov ecx, 0xfffffff
// 00444332  2bc8                 sub ecx, eax
// 00444334  3bcb                 cmp ecx, ebx
// 00444336  7304                 jae 0x44433c
// 00444338  33db                 xor ebx, ebx
// 0044433a  eb02                 jmp 0x44433e
// 0044433c  03d8                 add ebx, eax
// 0044433e  3bda                 cmp ebx, edx
// 00444340  7302                 jae 0x444344
// 00444342  8bda                 mov ebx, edx
// 00444344  6a00                 push 0
// 00444346  53                   push ebx
// 00444347  e894822300           call 0x67c5e0
// 0044434c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0044434f  c645e400             mov byte ptr [ebp - 0x1c], 0
// 00444353  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 00444356  52                   push edx
// 00444357  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0044435a  52                   push edx
// 0044435b  8d5608               lea edx, [esi + 8]
// 0044435e  52                   push edx
// 0044435f  50                   push eax
// 00444360  8945ec               mov dword ptr [ebp - 0x14], eax
// 00444363  894510               mov dword ptr [ebp + 0x10], eax
// 00444366  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00444369  50                   push eax
// 0044436a  51                   push ecx
// 0044436b  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00444372  e889fcffff           call 0x444000
// 00444377  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0044437a  83c420               add esp, 0x20
// 0044437d  51                   push ecx
// 0044437e  57                   push edi
// 0044437f  50                   push eax
// 00444380  8bce                 mov ecx, esi
// 00444382  894510               mov dword ptr [ebp + 0x10], eax
// 00444385  e8c6feffff           call 0x444250
// 0044438a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0044438d  c6451400             mov byte ptr [ebp + 0x14], 0
// 00444391  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00444394  52                   push edx
// 00444395  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00444398  52                   push edx
// 00444399  8d5608               lea edx, [esi + 8]
// 0044439c  52                   push edx
// 0044439d  50                   push eax
// 0044439e  894510               mov dword ptr [ebp + 0x10], eax
// 004443a1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004443a4  51                   push ecx
// 004443a5  50                   push eax
// 004443a6  e855fcffff           call 0x444000
// 004443ab  8b460c               mov eax, dword ptr [esi + 0xc]
// 004443ae  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004443b1  2bc8                 sub ecx, eax
// 004443b3  c1f904               sar ecx, 4
// 004443b6  83c418               add esp, 0x18
// 004443b9  03f9                 add edi, ecx
// 004443bb  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004443c2  85c0                 test eax, eax
// 004443c4  741e                 je 0x4443e4
// 004443c6  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004443c9  52                   push edx
// 004443ca  8d4e08               lea ecx, [esi + 8]
// 004443cd  51                   push ecx
// 004443ce  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004443d1  51                   push ecx
// 004443d2  50                   push eax
// 004443d3  e888f6ffff           call 0x443a60
// 004443d8  8b560c               mov edx, dword ptr [esi + 0xc]
// 004443db  52                   push edx
// 004443dc  e899c22500           call 0x6a067a
// 004443e1  83c414               add esp, 0x14
// 004443e4  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004443e7  c1e304               shl ebx, 4
// 004443ea  03d8                 add ebx, eax
// 004443ec  c1e704               shl edi, 4
// 004443ef  03f8                 add edi, eax
// 004443f1  895e14               mov dword ptr [esi + 0x14], ebx
// 004443f4  897e10               mov dword ptr [esi + 0x10], edi
// 004443f7  89460c               mov dword ptr [esi + 0xc], eax
// 004443fa  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004443fd  64890d00000000       mov dword ptr fs:[0], ecx
// 00444404  5f                   pop edi
// 00444405  5e                   pop esi
// 00444406  5b                   pop ebx
// 00444407  8be5                 mov esp, ebp
// 00444409  5d                   pop ebp
// 0044440a  c21000               ret 0x10
// library rbxgs/script\ScriptEvent.cpp (function ?_Insert_n@?$vector@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@2@IABUWaitingThread@YieldingThreads@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
