// roc 2009-12 008130c0  unit: CXTPToolBar  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008130c0
//
// 008130c0  83ec18               sub esp, 0x18
// 008130c3  55                   push ebp
// 008130c4  8be9                 mov ebp, ecx
// 008130c6  e8a7331100           call 0x926472
// 008130cb  a900000010           test eax, 0x10000000
// 008130d0  0f84cd000000         je 0x8131a3
// 008130d6  53                   push ebx
// 008130d7  56                   push esi
// 008130d8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008130dc  57                   push edi
// 008130dd  8d4604               lea eax, [esi + 4]
// 008130e0  50                   push eax
// 008130e1  8d4c241c             lea ecx, [esp + 0x1c]
// 008130e5  51                   push ecx
// 008130e6  ff1564cc9800         call dword ptr [0x98cc64]
// 008130ec  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008130f0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008130f4  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 008130fa  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 008130fe  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 00813102  b84a000000           mov eax, 0x4a
// 00813107  f6c140               test cl, 0x40
// 0081310a  7405                 je 0x813111
// 0081310c  b84b000000           mov eax, 0x4b
// 00813111  f6c120               test cl, 0x20
// 00813114  7405                 je 0x81311b
// 00813116  0d80000000           or eax, 0x80
// 0081311b  833e00               cmp dword ptr [esi], 0
// 0081311e  7503                 jne 0x813123
// 00813120  83e0bf               and eax, 0xffffffbf
// 00813123  8b5500               mov edx, dword ptr [ebp]
// 00813126  8b9204020000         mov edx, dword ptr [edx + 0x204]
// 0081312c  6a00                 push 0
// 0081312e  50                   push eax
// 0081312f  57                   push edi
// 00813130  8d44241c             lea eax, [esp + 0x1c]
// 00813134  50                   push eax
// 00813135  8bcd                 mov ecx, ebp
// 00813137  ffd2                 call edx
// 00813139  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081313d  3bcf                 cmp ecx, edi
// 0081313f  7c06                 jl 0x813147
// 00813141  8bcf                 mov ecx, edi
// 00813143  894c2410             mov dword ptr [esp + 0x10], ecx
// 00813147  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081314b  3bc3                 cmp eax, ebx
// 0081314d  7c06                 jl 0x813155
// 0081314f  8bc3                 mov eax, ebx
// 00813151  89442414             mov dword ptr [esp + 0x14], eax
// 00813155  8b5614               mov edx, dword ptr [esi + 0x14]
// 00813158  014618               add dword ptr [esi + 0x18], eax
// 0081315b  3bd1                 cmp edx, ecx
// 0081315d  7f02                 jg 0x813161
// 0081315f  8bd1                 mov edx, ecx
// 00813161  014608               add dword ptr [esi + 8], eax
// 00813164  895614               mov dword ptr [esi + 0x14], edx
// 00813167  8b542418             mov edx, dword ptr [esp + 0x18]
// 0081316b  03d1                 add edx, ecx
// 0081316d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00813171  03c8                 add ecx, eax
// 00813173  833e00               cmp dword ptr [esi], 0
// 00813176  89542420             mov dword ptr [esp + 0x20], edx
// 0081317a  894c2424             mov dword ptr [esp + 0x24], ecx
// 0081317e  740f                 je 0x81318f
// 00813180  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00813183  8d542418             lea edx, [esp + 0x18]
// 00813187  52                   push edx
// 00813188  50                   push eax
// 00813189  56                   push esi
// 0081318a  e833341100           call 0x9265c2
// 0081318f  8b5500               mov edx, dword ptr [ebp]
// 00813192  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00813198  6a01                 push 1
// 0081319a  6a00                 push 0
// 0081319c  8bcd                 mov ecx, ebp
// 0081319e  ffd0                 call eax
// 008131a0  5f                   pop edi
// 008131a1  5e                   pop esi
// 008131a2  5b                   pop ebx
// 008131a3  33c0                 xor eax, eax
// 008131a5  5d                   pop ebp
// 008131a6  83c418               add esp, 0x18
// 008131a9  c20800               ret 8
// copied from an identical function in another client (function ?OnSizeParent@CXTPToolBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp