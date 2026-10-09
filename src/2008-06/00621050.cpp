// roc 2008-06 00621050  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00621050
//
// 00621050  55                   push ebp
// 00621051  8bec                 mov ebp, esp
// 00621053  6aff                 push -1
// 00621055  6830977d00           push 0x7d9730
// 0062105a  64a100000000         mov eax, dword ptr fs:[0]
// 00621060  50                   push eax
// 00621061  64892500000000       mov dword ptr fs:[0], esp
// 00621068  83ec28               sub esp, 0x28
// 0062106b  53                   push ebx
// 0062106c  56                   push esi
// 0062106d  8bf1                 mov esi, ecx
// 0062106f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00621072  57                   push edi
// 00621073  8965f0               mov dword ptr [ebp - 0x10], esp
// 00621076  8975e8               mov dword ptr [ebp - 0x18], esi
// 00621079  85c0                 test eax, eax
// 0062107b  7504                 jne 0x621081
// 0062107d  33db                 xor ebx, ebx
// 0062107f  eb16                 jmp 0x621097
// 00621081  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00621084  2bc8                 sub ecx, eax
// 00621086  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0062108b  f7e9                 imul ecx
// 0062108d  c1fa02               sar edx, 2
// 00621090  8bda                 mov ebx, edx
// 00621092  c1eb1f               shr ebx, 0x1f
// 00621095  03da                 add ebx, edx
// 00621097  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0062109a  85ff                 test edi, edi
// 0062109c  0f846e020000         je 0x621310
// 006210a2  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006210a5  8bd1                 mov edx, ecx
// 006210a7  2b560c               sub edx, dword ptr [esi + 0xc]
// 006210aa  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006210af  f7ea                 imul edx
// 006210b1  c1fa02               sar edx, 2
// 006210b4  8bc2                 mov eax, edx
// 006210b6  c1e81f               shr eax, 0x1f
// 006210b9  03c2                 add eax, edx
// 006210bb  baaaaaaa0a           mov edx, 0xaaaaaaa
// 006210c0  2bd0                 sub edx, eax
// 006210c2  3bd7                 cmp edx, edi
// 006210c4  7305                 jae 0x6210cb
// 006210c6  e8755ceaff           call 0x4c6d40
// 006210cb  03c7                 add eax, edi
// 006210cd  3bd8                 cmp ebx, eax
// 006210cf  0f8316010000         jae 0x6211eb
// 006210d5  8bcb                 mov ecx, ebx
// 006210d7  d1e9                 shr ecx, 1
// 006210d9  baaaaaaa0a           mov edx, 0xaaaaaaa
// 006210de  2bd1                 sub edx, ecx
// 006210e0  3bd3                 cmp edx, ebx
// 006210e2  7304                 jae 0x6210e8
// 006210e4  33db                 xor ebx, ebx
// 006210e6  eb02                 jmp 0x6210ea
// 006210e8  03d9                 add ebx, ecx
// 006210ea  3bd8                 cmp ebx, eax
// 006210ec  7302                 jae 0x6210f0
// 006210ee  8bd8                 mov ebx, eax
// 006210f0  6a00                 push 0
// 006210f2  53                   push ebx
// 006210f3  e818f8ffff           call 0x620910
// 006210f8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006210fb  c645e400             mov byte ptr [ebp - 0x1c], 0
// 006210ff  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 00621102  52                   push edx
// 00621103  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00621106  52                   push edx
// 00621107  8d5608               lea edx, [esi + 8]
// 0062110a  52                   push edx
// 0062110b  50                   push eax
// 0062110c  8945ec               mov dword ptr [ebp - 0x14], eax
// 0062110f  894510               mov dword ptr [ebp + 0x10], eax
// 00621112  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00621115  50                   push eax
// 00621116  51                   push ecx
// 00621117  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0062111e  e85dfbffff           call 0x620c80
// 00621123  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00621126  83c420               add esp, 0x20
// 00621129  51                   push ecx
// 0062112a  57                   push edi
// 0062112b  50                   push eax
// 0062112c  8bce                 mov ecx, esi
// 0062112e  894510               mov dword ptr [ebp + 0x10], eax
// 00621131  e80afdffff           call 0x620e40
// 00621136  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00621139  c6451400             mov byte ptr [ebp + 0x14], 0
// 0062113d  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00621140  52                   push edx
// 00621141  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00621144  52                   push edx
// 00621145  8d5608               lea edx, [esi + 8]
// 00621148  52                   push edx
// 00621149  50                   push eax
// 0062114a  894510               mov dword ptr [ebp + 0x10], eax
// 0062114d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00621150  51                   push ecx
// 00621151  50                   push eax
// 00621152  e829fbffff           call 0x620c80
// 00621157  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0062115a  8b5610               mov edx, dword ptr [esi + 0x10]
// 0062115d  2bd1                 sub edx, ecx
// 0062115f  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00621164  f7ea                 imul edx
// 00621166  c1fa02               sar edx, 2
// 00621169  8bc2                 mov eax, edx
// 0062116b  c1e81f               shr eax, 0x1f
// 0062116e  03c2                 add eax, edx
// 00621170  83c418               add esp, 0x18
// 00621173  03f8                 add edi, eax
// 00621175  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0062117c  85c9                 test ecx, ecx
// 0062117e  741e                 je 0x62119e
// 00621180  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00621183  52                   push edx
// 00621184  8d4608               lea eax, [esi + 8]
// 00621187  50                   push eax
// 00621188  8b4610               mov eax, dword ptr [esi + 0x10]
// 0062118b  50                   push eax
// 0062118c  51                   push ecx
// 0062118d  e86eb8f8ff           call 0x5aca00
// 00621192  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00621195  51                   push ecx
// 00621196  e8dff40700           call 0x6a067a
// 0062119b  83c414               add esp, 0x14
// 0062119e  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 006211a1  8d145b               lea edx, [ebx + ebx*2]
// 006211a4  8d0cd0               lea ecx, [eax + edx*8]
// 006211a7  8d147f               lea edx, [edi + edi*2]
// 006211aa  894e14               mov dword ptr [esi + 0x14], ecx
// 006211ad  8d0cd0               lea ecx, [eax + edx*8]
// 006211b0  894e10               mov dword ptr [esi + 0x10], ecx
// 006211b3  89460c               mov dword ptr [esi + 0xc], eax
// 006211b6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006211b9  64890d00000000       mov dword ptr fs:[0], ecx
// 006211c0  5f                   pop edi
// 006211c1  5e                   pop esi
// 006211c2  5b                   pop ebx
// 006211c3  8be5                 mov esp, ebp
// 006211c5  5d                   pop ebp
// 006211c6  c21000               ret 0x10
// library openrbx-client/App\script\ScriptEvent.cpp (function ?_Insert_n@?$vector@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@2@IABUWaitingThread@YieldingThreads@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
