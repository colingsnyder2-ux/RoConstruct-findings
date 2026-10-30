// from server: 100% by auto
// roc 2011-06 008a3770  unit: CXTPDockBar  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a3770
//
// 008a3770  83ec20               sub esp, 0x20
// 008a3773  894c2404             mov dword ptr [esp + 4], ecx
// 008a3777  e89c8e1200           call 0x9cc618
// 008a377c  890424               mov dword ptr [esp], eax
// 008a377f  a900000010           test eax, 0x10000000
// 008a3784  0f8440010000         je 0x8a38ca
// 008a378a  53                   push ebx
// 008a378b  55                   push ebp
// 008a378c  56                   push esi
// 008a378d  8b742434             mov esi, dword ptr [esp + 0x34]
// 008a3791  57                   push edi
// 008a3792  8d6e04               lea ebp, [esi + 4]
// 008a3795  55                   push ebp
// 008a3796  8d442424             lea eax, [esp + 0x24]
// 008a379a  50                   push eax
// 008a379b  ff15681ca400         call dword ptr [0xa41c68]
// 008a37a1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008a37a5  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008a37a9  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 008a37ad  2b5c2424             sub ebx, dword ptr [esp + 0x24]
// 008a37b1  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a37b5  8b4254               mov eax, dword ptr [edx + 0x54]
// 008a37b8  33c9                 xor ecx, ecx
// 008a37ba  394e1c               cmp dword ptr [esi + 0x1c], ecx
// 008a37bd  0f95c1               setne cl
// 008a37c0  a804                 test al, 4
// 008a37c2  7409                 je 0x8a37cd
// 008a37c4  a801                 test al, 1
// 008a37c6  7405                 je 0x8a37cd
// 008a37c8  83c906               or ecx, 6
// 008a37cb  eb12                 jmp 0x8a37df
// 008a37cd  f744241000a00000     test dword ptr [esp + 0x10], 0xa000
// 008a37d5  7405                 je 0x8a37dc
// 008a37d7  83c90a               or ecx, 0xa
// 008a37da  eb03                 jmp 0x8a37df
// 008a37dc  83c910               or ecx, 0x10
// 008a37df  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a37e3  2500a00000           and eax, 0xa000
// 008a37e8  89442438             mov dword ptr [esp + 0x38], eax
// 008a37ec  8bc7                 mov eax, edi
// 008a37ee  7502                 jne 0x8a37f2
// 008a37f0  8bc3                 mov eax, ebx
// 008a37f2  56                   push esi
// 008a37f3  51                   push ecx
// 008a37f4  50                   push eax
// 008a37f5  8d4c2424             lea ecx, [esp + 0x24]
// 008a37f9  51                   push ecx
// 008a37fa  8bca                 mov ecx, edx
// 008a37fc  e8affdffff           call 0x8a35b0
// 008a3801  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a3805  3bc7                 cmp eax, edi
// 008a3807  7c02                 jl 0x8a380b
// 008a3809  8bc7                 mov eax, edi
// 008a380b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a380f  3bcb                 cmp ecx, ebx
// 008a3811  7c02                 jl 0x8a3815
// 008a3813  8bcb                 mov ecx, ebx
// 008a3815  837c243800           cmp dword ptr [esp + 0x38], 0
// 008a381a  7437                 je 0x8a3853
// 008a381c  8b5614               mov edx, dword ptr [esi + 0x14]
// 008a381f  014e18               add dword ptr [esi + 0x18], ecx
// 008a3822  3bd0                 cmp edx, eax
// 008a3824  7f02                 jg 0x8a3828
// 008a3826  8bd0                 mov edx, eax
// 008a3828  895614               mov dword ptr [esi + 0x14], edx
// 008a382b  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a382f  f7c200200000         test edx, 0x2000
// 008a3835  7405                 je 0x8a383c
// 008a3837  014e08               add dword ptr [esi + 8], ecx
// 008a383a  eb4c                 jmp 0x8a3888
// 008a383c  f7c200800000         test edx, 0x8000
// 008a3842  7444                 je 0x8a3888
// 008a3844  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008a3848  2bd1                 sub edx, ecx
// 008a384a  294e10               sub dword ptr [esi + 0x10], ecx
// 008a384d  89542424             mov dword ptr [esp + 0x24], edx
// 008a3851  eb35                 jmp 0x8a3888
// 008a3853  8b5618               mov edx, dword ptr [esi + 0x18]
// 008a3856  014614               add dword ptr [esi + 0x14], eax
// 008a3859  3bd1                 cmp edx, ecx
// 008a385b  7f02                 jg 0x8a385f
// 008a385d  8bd1                 mov edx, ecx
// 008a385f  895618               mov dword ptr [esi + 0x18], edx
// 008a3862  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a3866  f7c200100000         test edx, 0x1000
// 008a386c  7405                 je 0x8a3873
// 008a386e  014500               add dword ptr [ebp], eax
// 008a3871  eb15                 jmp 0x8a3888
// 008a3873  f7c200400000         test edx, 0x4000
// 008a3879  740d                 je 0x8a3888
// 008a387b  8b542428             mov edx, dword ptr [esp + 0x28]
// 008a387f  2bd0                 sub edx, eax
// 008a3881  29460c               sub dword ptr [esi + 0xc], eax
// 008a3884  89542420             mov dword ptr [esp + 0x20], edx
// 008a3888  8b542420             mov edx, dword ptr [esp + 0x20]
// 008a388c  03d0                 add edx, eax
// 008a388e  8b442424             mov eax, dword ptr [esp + 0x24]
// 008a3892  03c1                 add eax, ecx
// 008a3894  833e00               cmp dword ptr [esi], 0
// 008a3897  89542428             mov dword ptr [esp + 0x28], edx
// 008a389b  8944242c             mov dword ptr [esp + 0x2c], eax
// 008a389f  7413                 je 0x8a38b4
// 008a38a1  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a38a5  8b4220               mov eax, dword ptr [edx + 0x20]
// 008a38a8  8d4c2420             lea ecx, [esp + 0x20]
// 008a38ac  51                   push ecx
// 008a38ad  50                   push eax
// 008a38ae  56                   push esi
// 008a38af  e86c8e1200           call 0x9cc720
// 008a38b4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a38b8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008a38bb  6a00                 push 0
// 008a38bd  6a00                 push 0
// 008a38bf  52                   push edx
// 008a38c0  ff15ec19a400         call dword ptr [0xa419ec]
// 008a38c6  5f                   pop edi
// 008a38c7  5e                   pop esi
// 008a38c8  5d                   pop ebp
// 008a38c9  5b                   pop ebx
// 008a38ca  33c0                 xor eax, eax
// 008a38cc  83c420               add esp, 0x20
// 008a38cf  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?OnSizeParent@CXTPDockBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
