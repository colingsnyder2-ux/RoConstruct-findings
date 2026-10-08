// roc 2007-08 005db240  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005db240
//
// 005db240  55                   push ebp
// 005db241  8bec                 mov ebp, esp
// 005db243  6aff                 push -1
// 005db245  6890a67500           push 0x75a690
// 005db24a  64a100000000         mov eax, dword ptr fs:[0]
// 005db250  50                   push eax
// 005db251  64892500000000       mov dword ptr fs:[0], esp
// 005db258  83ec0c               sub esp, 0xc
// 005db25b  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005db25e  53                   push ebx
// 005db25f  56                   push esi
// 005db260  8bf1                 mov esi, ecx
// 005db262  8b08                 mov ecx, dword ptr [eax]
// 005db264  894d14               mov dword ptr [ebp + 0x14], ecx
// 005db267  8b4e04               mov ecx, dword ptr [esi + 4]
// 005db26a  85c9                 test ecx, ecx
// 005db26c  57                   push edi
// 005db26d  8965f0               mov dword ptr [ebp - 0x10], esp
// 005db270  7504                 jne 0x5db276
// 005db272  33ff                 xor edi, edi
// 005db274  eb08                 jmp 0x5db27e
// 005db276  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005db279  2bf9                 sub edi, ecx
// 005db27b  c1ff02               sar edi, 2
// 005db27e  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005db281  85d2                 test edx, edx
// 005db283  0f84e7010000         je 0x5db470
// 005db289  85c9                 test ecx, ecx
// 005db28b  7504                 jne 0x5db291
// 005db28d  33c0                 xor eax, eax
// 005db28f  eb08                 jmp 0x5db299
// 005db291  8b4608               mov eax, dword ptr [esi + 8]
// 005db294  2bc1                 sub eax, ecx
// 005db296  c1f802               sar eax, 2
// 005db299  bbffffff3f           mov ebx, 0x3fffffff
// 005db29e  2bd8                 sub ebx, eax
// 005db2a0  3bda                 cmp ebx, edx
// 005db2a2  7305                 jae 0x5db2a9
// 005db2a4  e8871affff           call 0x5ccd30
// 005db2a9  85c9                 test ecx, ecx
// 005db2ab  7504                 jne 0x5db2b1
// 005db2ad  33c0                 xor eax, eax
// 005db2af  eb08                 jmp 0x5db2b9
// 005db2b1  8b4608               mov eax, dword ptr [esi + 8]
// 005db2b4  2bc1                 sub eax, ecx
// 005db2b6  c1f802               sar eax, 2
// 005db2b9  03c2                 add eax, edx
// 005db2bb  3bf8                 cmp edi, eax
// 005db2bd  0f83fb000000         jae 0x5db3be
// 005db2c3  8bc7                 mov eax, edi
// 005db2c5  d1e8                 shr eax, 1
// 005db2c7  bbffffff3f           mov ebx, 0x3fffffff
// 005db2cc  2bd8                 sub ebx, eax
// 005db2ce  3bdf                 cmp ebx, edi
// 005db2d0  7304                 jae 0x5db2d6
// 005db2d2  33ff                 xor edi, edi
// 005db2d4  eb02                 jmp 0x5db2d8
// 005db2d6  03f8                 add edi, eax
// 005db2d8  85c9                 test ecx, ecx
// 005db2da  7504                 jne 0x5db2e0
// 005db2dc  33c0                 xor eax, eax
// 005db2de  eb08                 jmp 0x5db2e8
// 005db2e0  8b4608               mov eax, dword ptr [esi + 8]
// 005db2e3  2bc1                 sub eax, ecx
// 005db2e5  c1f802               sar eax, 2
// 005db2e8  03c2                 add eax, edx
// 005db2ea  3bf8                 cmp edi, eax
// 005db2ec  7313                 jae 0x5db301
// 005db2ee  85c9                 test ecx, ecx
// 005db2f0  7504                 jne 0x5db2f6
// 005db2f2  33c0                 xor eax, eax
// 005db2f4  eb08                 jmp 0x5db2fe
// 005db2f6  8b4608               mov eax, dword ptr [esi + 8]
// 005db2f9  2bc1                 sub eax, ecx
// 005db2fb  c1f802               sar eax, 2
// 005db2fe  8d3c10               lea edi, [eax + edx]
// 005db301  6a00                 push 0
// 005db303  57                   push edi
// 005db304  e8574afdff           call 0x5afd60
// 005db309  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005db30c  c645ec00             mov byte ptr [ebp - 0x14], 0
// 005db310  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005db313  52                   push edx
// 005db314  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005db317  51                   push ecx
// 005db318  8bd8                 mov ebx, eax
// 005db31a  8b4604               mov eax, dword ptr [esi + 4]
// 005db31d  56                   push esi
// 005db31e  53                   push ebx
// 005db31f  52                   push edx
// 005db320  50                   push eax
// 005db321  895de8               mov dword ptr [ebp - 0x18], ebx
// 005db324  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005db32b  e85094f9ff           call 0x574780
// 005db330  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005db333  83c420               add esp, 0x20
// 005db336  8d4d14               lea ecx, [ebp + 0x14]
// 005db339  51                   push ecx
// 005db33a  52                   push edx
// 005db33b  50                   push eax
// 005db33c  8bce                 mov ecx, esi
// 005db33e  e81d23fcff           call 0x59d660
// 005db343  8b4e08               mov ecx, dword ptr [esi + 8]
// 005db346  c6451400             mov byte ptr [ebp + 0x14], 0
// 005db34a  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005db34d  52                   push edx
// 005db34e  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005db351  52                   push edx
// 005db352  56                   push esi
// 005db353  50                   push eax
// 005db354  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005db357  51                   push ecx
// 005db358  50                   push eax
// 005db359  e82294f9ff           call 0x574780
// 005db35e  8b4e04               mov ecx, dword ptr [esi + 4]
// 005db361  83c418               add esp, 0x18
// 005db364  85c9                 test ecx, ecx
// 005db366  7504                 jne 0x5db36c
// 005db368  33c0                 xor eax, eax
// 005db36a  eb08                 jmp 0x5db374
// 005db36c  8b4608               mov eax, dword ptr [esi + 8]
// 005db36f  2bc1                 sub eax, ecx
// 005db371  c1f802               sar eax, 2
// 005db374  014510               add dword ptr [ebp + 0x10], eax
// 005db377  85c9                 test ecx, ecx
// 005db379  7409                 je 0x5db384
// 005db37b  51                   push ecx
// 005db37c  e8e1480500           call 0x62fc62
// 005db381  83c404               add esp, 4
// 005db384  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005db387  8d0cbb               lea ecx, [ebx + edi*4]
// 005db38a  8d0493               lea eax, [ebx + edx*4]
// 005db38d  894e0c               mov dword ptr [esi + 0xc], ecx
// 005db390  894608               mov dword ptr [esi + 8], eax
// 005db393  895e04               mov dword ptr [esi + 4], ebx
// 005db396  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005db399  64890d00000000       mov dword ptr fs:[0], ecx
// 005db3a0  5f                   pop edi
// 005db3a1  5e                   pop esi
// 005db3a2  5b                   pop ebx
// 005db3a3  8be5                 mov esp, ebp
// 005db3a5  5d                   pop ebp
// 005db3a6  c21000               ret 0x10
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Insert_n@?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@IAEXV?$_Vector_iterator@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@2@IABVBrickColor@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
