// roc 2012-06 00a1bba0  unit: CXTPDockBar  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1bba0
//
// 00a1bba0  83ec20               sub esp, 0x20
// 00a1bba3  894c2404             mov dword ptr [esp + 4], ecx
// 00a1bba7  e826da0700           call 0xa995d2
// 00a1bbac  890424               mov dword ptr [esp], eax
// 00a1bbaf  a900000010           test eax, 0x10000000
// 00a1bbb4  0f8440010000         je 0xa1bcfa
// 00a1bbba  53                   push ebx
// 00a1bbbb  55                   push ebp
// 00a1bbbc  56                   push esi
// 00a1bbbd  8b742434             mov esi, dword ptr [esp + 0x34]
// 00a1bbc1  57                   push edi
// 00a1bbc2  8d6e04               lea ebp, [esi + 4]
// 00a1bbc5  55                   push ebp
// 00a1bbc6  8d442424             lea eax, [esp + 0x24]
// 00a1bbca  50                   push eax
// 00a1bbcb  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a1bbd1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a1bbd5  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00a1bbd9  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 00a1bbdd  2b5c2424             sub ebx, dword ptr [esp + 0x24]
// 00a1bbe1  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a1bbe5  8b4254               mov eax, dword ptr [edx + 0x54]
// 00a1bbe8  33c9                 xor ecx, ecx
// 00a1bbea  394e1c               cmp dword ptr [esi + 0x1c], ecx
// 00a1bbed  0f95c1               setne cl
// 00a1bbf0  a804                 test al, 4
// 00a1bbf2  7409                 je 0xa1bbfd
// 00a1bbf4  a801                 test al, 1
// 00a1bbf6  7405                 je 0xa1bbfd
// 00a1bbf8  83c906               or ecx, 6
// 00a1bbfb  eb12                 jmp 0xa1bc0f
// 00a1bbfd  f744241000a00000     test dword ptr [esp + 0x10], 0xa000
// 00a1bc05  7405                 je 0xa1bc0c
// 00a1bc07  83c90a               or ecx, 0xa
// 00a1bc0a  eb03                 jmp 0xa1bc0f
// 00a1bc0c  83c910               or ecx, 0x10
// 00a1bc0f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a1bc13  2500a00000           and eax, 0xa000
// 00a1bc18  89442438             mov dword ptr [esp + 0x38], eax
// 00a1bc1c  8bc7                 mov eax, edi
// 00a1bc1e  7502                 jne 0xa1bc22
// 00a1bc20  8bc3                 mov eax, ebx
// 00a1bc22  56                   push esi
// 00a1bc23  51                   push ecx
// 00a1bc24  50                   push eax
// 00a1bc25  8d4c2424             lea ecx, [esp + 0x24]
// 00a1bc29  51                   push ecx
// 00a1bc2a  8bca                 mov ecx, edx
// 00a1bc2c  e8affdffff           call 0xa1b9e0
// 00a1bc31  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a1bc35  3bc7                 cmp eax, edi
// 00a1bc37  7c02                 jl 0xa1bc3b
// 00a1bc39  8bc7                 mov eax, edi
// 00a1bc3b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a1bc3f  3bcb                 cmp ecx, ebx
// 00a1bc41  7c02                 jl 0xa1bc45
// 00a1bc43  8bcb                 mov ecx, ebx
// 00a1bc45  837c243800           cmp dword ptr [esp + 0x38], 0
// 00a1bc4a  7437                 je 0xa1bc83
// 00a1bc4c  8b5614               mov edx, dword ptr [esi + 0x14]
// 00a1bc4f  014e18               add dword ptr [esi + 0x18], ecx
// 00a1bc52  3bd0                 cmp edx, eax
// 00a1bc54  7f02                 jg 0xa1bc58
// 00a1bc56  8bd0                 mov edx, eax
// 00a1bc58  895614               mov dword ptr [esi + 0x14], edx
// 00a1bc5b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a1bc5f  f7c200200000         test edx, 0x2000
// 00a1bc65  7405                 je 0xa1bc6c
// 00a1bc67  014e08               add dword ptr [esi + 8], ecx
// 00a1bc6a  eb4c                 jmp 0xa1bcb8
// 00a1bc6c  f7c200800000         test edx, 0x8000
// 00a1bc72  7444                 je 0xa1bcb8
// 00a1bc74  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a1bc78  2bd1                 sub edx, ecx
// 00a1bc7a  294e10               sub dword ptr [esi + 0x10], ecx
// 00a1bc7d  89542424             mov dword ptr [esp + 0x24], edx
// 00a1bc81  eb35                 jmp 0xa1bcb8
// 00a1bc83  8b5618               mov edx, dword ptr [esi + 0x18]
// 00a1bc86  014614               add dword ptr [esi + 0x14], eax
// 00a1bc89  3bd1                 cmp edx, ecx
// 00a1bc8b  7f02                 jg 0xa1bc8f
// 00a1bc8d  8bd1                 mov edx, ecx
// 00a1bc8f  895618               mov dword ptr [esi + 0x18], edx
// 00a1bc92  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a1bc96  f7c200100000         test edx, 0x1000
// 00a1bc9c  7405                 je 0xa1bca3
// 00a1bc9e  014500               add dword ptr [ebp], eax
// 00a1bca1  eb15                 jmp 0xa1bcb8
// 00a1bca3  f7c200400000         test edx, 0x4000
// 00a1bca9  740d                 je 0xa1bcb8
// 00a1bcab  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a1bcaf  2bd0                 sub edx, eax
// 00a1bcb1  29460c               sub dword ptr [esi + 0xc], eax
// 00a1bcb4  89542420             mov dword ptr [esp + 0x20], edx
// 00a1bcb8  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a1bcbc  03d0                 add edx, eax
// 00a1bcbe  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a1bcc2  03c1                 add eax, ecx
// 00a1bcc4  833e00               cmp dword ptr [esi], 0
// 00a1bcc7  89542428             mov dword ptr [esp + 0x28], edx
// 00a1bccb  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a1bccf  7413                 je 0xa1bce4
// 00a1bcd1  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a1bcd5  8b4220               mov eax, dword ptr [edx + 0x20]
// 00a1bcd8  8d4c2420             lea ecx, [esp + 0x20]
// 00a1bcdc  51                   push ecx
// 00a1bcdd  50                   push eax
// 00a1bcde  56                   push esi
// 00a1bcdf  e8f6d90700           call 0xa996da
// 00a1bce4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a1bce8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a1bceb  6a00                 push 0
// 00a1bced  6a00                 push 0
// 00a1bcef  52                   push edx
// 00a1bcf0  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a1bcf6  5f                   pop edi
// 00a1bcf7  5e                   pop esi
// 00a1bcf8  5d                   pop ebp
// 00a1bcf9  5b                   pop ebx
// 00a1bcfa  33c0                 xor eax, eax
// 00a1bcfc  83c420               add esp, 0x20
// 00a1bcff  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?OnSizeParent@CXTPDockBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
