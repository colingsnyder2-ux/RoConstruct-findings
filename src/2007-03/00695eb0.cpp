// roc 2007-03 00695eb0  unit: seg_00690000  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00695eb0
//
// 00695eb0  83ec20               sub esp, 0x20
// 00695eb3  894c2404             mov dword ptr [esp + 4], ecx
// 00695eb7  e8084d0a00           call 0x73abc4
// 00695ebc  a900000010           test eax, 0x10000000
// 00695ec1  890424               mov dword ptr [esp], eax
// 00695ec4  0f8440010000         je 0x69600a
// 00695eca  53                   push ebx
// 00695ecb  55                   push ebp
// 00695ecc  56                   push esi
// 00695ecd  8b742434             mov esi, dword ptr [esp + 0x34]
// 00695ed1  57                   push edi
// 00695ed2  8d6e04               lea ebp, [esi + 4]
// 00695ed5  55                   push ebp
// 00695ed6  8d442424             lea eax, [esp + 0x24]
// 00695eda  50                   push eax
// 00695edb  ff1550ed7700         call dword ptr [0x77ed50]
// 00695ee1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00695ee5  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00695ee9  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 00695eed  2b5c2424             sub ebx, dword ptr [esp + 0x24]
// 00695ef1  8b542414             mov edx, dword ptr [esp + 0x14]
// 00695ef5  8b4254               mov eax, dword ptr [edx + 0x54]
// 00695ef8  33c9                 xor ecx, ecx
// 00695efa  394e1c               cmp dword ptr [esi + 0x1c], ecx
// 00695efd  0f95c1               setne cl
// 00695f00  a804                 test al, 4
// 00695f02  7409                 je 0x695f0d
// 00695f04  a801                 test al, 1
// 00695f06  7405                 je 0x695f0d
// 00695f08  83c906               or ecx, 6
// 00695f0b  eb12                 jmp 0x695f1f
// 00695f0d  f744241000a00000     test dword ptr [esp + 0x10], 0xa000
// 00695f15  7405                 je 0x695f1c
// 00695f17  83c90a               or ecx, 0xa
// 00695f1a  eb03                 jmp 0x695f1f
// 00695f1c  83c910               or ecx, 0x10
// 00695f1f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00695f23  2500a00000           and eax, 0xa000
// 00695f28  89442438             mov dword ptr [esp + 0x38], eax
// 00695f2c  8bc7                 mov eax, edi
// 00695f2e  7502                 jne 0x695f32
// 00695f30  8bc3                 mov eax, ebx
// 00695f32  56                   push esi
// 00695f33  51                   push ecx
// 00695f34  50                   push eax
// 00695f35  8d4c2424             lea ecx, [esp + 0x24]
// 00695f39  51                   push ecx
// 00695f3a  8bca                 mov ecx, edx
// 00695f3c  e8affdffff           call 0x695cf0
// 00695f41  8b442418             mov eax, dword ptr [esp + 0x18]
// 00695f45  3bc7                 cmp eax, edi
// 00695f47  7c02                 jl 0x695f4b
// 00695f49  8bc7                 mov eax, edi
// 00695f4b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00695f4f  3bcb                 cmp ecx, ebx
// 00695f51  7c02                 jl 0x695f55
// 00695f53  8bcb                 mov ecx, ebx
// 00695f55  837c243800           cmp dword ptr [esp + 0x38], 0
// 00695f5a  7437                 je 0x695f93
// 00695f5c  8b5614               mov edx, dword ptr [esi + 0x14]
// 00695f5f  014e18               add dword ptr [esi + 0x18], ecx
// 00695f62  3bd0                 cmp edx, eax
// 00695f64  7f02                 jg 0x695f68
// 00695f66  8bd0                 mov edx, eax
// 00695f68  895614               mov dword ptr [esi + 0x14], edx
// 00695f6b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00695f6f  f7c200200000         test edx, 0x2000
// 00695f75  7405                 je 0x695f7c
// 00695f77  014e08               add dword ptr [esi + 8], ecx
// 00695f7a  eb4c                 jmp 0x695fc8
// 00695f7c  f7c200800000         test edx, 0x8000
// 00695f82  7444                 je 0x695fc8
// 00695f84  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00695f88  2bd1                 sub edx, ecx
// 00695f8a  294e10               sub dword ptr [esi + 0x10], ecx
// 00695f8d  89542424             mov dword ptr [esp + 0x24], edx
// 00695f91  eb35                 jmp 0x695fc8
// 00695f93  8b5618               mov edx, dword ptr [esi + 0x18]
// 00695f96  014614               add dword ptr [esi + 0x14], eax
// 00695f99  3bd1                 cmp edx, ecx
// 00695f9b  7f02                 jg 0x695f9f
// 00695f9d  8bd1                 mov edx, ecx
// 00695f9f  895618               mov dword ptr [esi + 0x18], edx
// 00695fa2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00695fa6  f7c200100000         test edx, 0x1000
// 00695fac  7405                 je 0x695fb3
// 00695fae  014500               add dword ptr [ebp], eax
// 00695fb1  eb15                 jmp 0x695fc8
// 00695fb3  f7c200400000         test edx, 0x4000
// 00695fb9  740d                 je 0x695fc8
// 00695fbb  8b542428             mov edx, dword ptr [esp + 0x28]
// 00695fbf  2bd0                 sub edx, eax
// 00695fc1  29460c               sub dword ptr [esi + 0xc], eax
// 00695fc4  89542420             mov dword ptr [esp + 0x20], edx
// 00695fc8  8b542420             mov edx, dword ptr [esp + 0x20]
// 00695fcc  03d0                 add edx, eax
// 00695fce  8b442424             mov eax, dword ptr [esp + 0x24]
// 00695fd2  03c1                 add eax, ecx
// 00695fd4  833e00               cmp dword ptr [esi], 0
// 00695fd7  89542428             mov dword ptr [esp + 0x28], edx
// 00695fdb  8944242c             mov dword ptr [esp + 0x2c], eax
// 00695fdf  7413                 je 0x695ff4
// 00695fe1  8b542414             mov edx, dword ptr [esp + 0x14]
// 00695fe5  8b4220               mov eax, dword ptr [edx + 0x20]
// 00695fe8  8d4c2420             lea ecx, [esp + 0x20]
// 00695fec  51                   push ecx
// 00695fed  50                   push eax
// 00695fee  56                   push esi
// 00695fef  e8f44b0a00           call 0x73abe8
// 00695ff4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00695ff8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00695ffb  6a00                 push 0
// 00695ffd  6a00                 push 0
// 00695fff  52                   push edx
// 00696000  ff1554ee7700         call dword ptr [0x77ee54]
// 00696006  5f                   pop edi
// 00696007  5e                   pop esi
// 00696008  5d                   pop ebp
// 00696009  5b                   pop ebx
// 0069600a  33c0                 xor eax, eax
// 0069600c  83c420               add esp, 0x20
// 0069600f  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockBar.cpp (function ?OnSizeParent@CXTPDockBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockBar.cpp
