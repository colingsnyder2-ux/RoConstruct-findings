// roc 2012-06 00a34ad0  unit: CXTPDockingPaneAutoHidePanel::PAVCAutoHidePanelTabManager::?$CArray  size: 852 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a34ad0
//
// 00a34ad0  6aff                 push -1
// 00a34ad2  68f856ae00           push 0xae56f8
// 00a34ad7  64a100000000         mov eax, dword ptr fs:[0]
// 00a34add  50                   push eax
// 00a34ade  83ec5c               sub esp, 0x5c
// 00a34ae1  53                   push ebx
// 00a34ae2  55                   push ebp
// 00a34ae3  56                   push esi
// 00a34ae4  57                   push edi
// 00a34ae5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a34aea  33c4                 xor eax, esp
// 00a34aec  50                   push eax
// 00a34aed  8d442470             lea eax, [esp + 0x70]
// 00a34af1  64a300000000         mov dword ptr fs:[0], eax
// 00a34af7  8bf1                 mov esi, ecx
// 00a34af9  89742414             mov dword ptr [esp + 0x14], esi
// 00a34afd  e80e520600           call 0xa99d10
// 00a34b02  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 00a34b09  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00a34b10  33c9                 xor ecx, ecx
// 00a34b12  894c2478             mov dword ptr [esp + 0x78], ecx
// 00a34b16  c7069409c200         mov dword ptr [esi], 0xc20994
// 00a34b1c  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 00a34b22  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 00a34b28  3bd9                 cmp ebx, ecx
// 00a34b2a  0f84cc020000         je 0xa34dfc
// 00a34b30  398ba4010000         cmp dword ptr [ebx + 0x1a4], ecx
// 00a34b36  0f84c0020000         je 0xa34dfc
// 00a34b3c  898e28010000         mov dword ptr [esi + 0x128], ecx
// 00a34b42  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 00a34b48  898600010000         mov dword ptr [esi + 0x100], eax
// 00a34b4e  83f802               cmp eax, 2
// 00a34b51  7409                 je 0xa34b5c
// 00a34b53  83f803               cmp eax, 3
// 00a34b56  7404                 je 0xa34b5c
// 00a34b58  33c0                 xor eax, eax
// 00a34b5a  eb05                 jmp 0xa34b61
// 00a34b5c  b801000000           mov eax, 1
// 00a34b61  8bce                 mov ecx, esi
// 00a34b63  898604010000         mov dword ptr [esi + 0x104], eax
// 00a34b69  e842e8ffff           call 0xa333b0
// 00a34b6e  8bf8                 mov edi, eax
// 00a34b70  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 00a34b76  8bcf                 mov ecx, edi
// 00a34b78  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a34b7f  e81c1af9ff           call 0x9c65a0
// 00a34b84  8d4c2418             lea ecx, [esp + 0x18]
// 00a34b88  51                   push ecx
// 00a34b89  8bc8                 mov ecx, eax
// 00a34b8b  e840550000           call 0xa3a0d0
// 00a34b90  6a01                 push 1
// 00a34b92  8d54244c             lea edx, [esp + 0x4c]
// 00a34b96  52                   push edx
// 00a34b97  8bce                 mov ecx, esi
// 00a34b99  e8d2e9ffff           call 0xa33570
// 00a34b9e  8b8ba4010000         mov ecx, dword ptr [ebx + 0x1a4]
// 00a34ba4  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00a34ba7  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00a34bab  83c004               add eax, 4
// 00a34bae  3bd0                 cmp edx, eax
// 00a34bb0  8bda                 mov ebx, edx
// 00a34bb2  7c02                 jl 0xa34bb6
// 00a34bb4  8bd8                 mov ebx, eax
// 00a34bb6  395c2464             cmp dword ptr [esp + 0x64], ebx
// 00a34bba  7e06                 jle 0xa34bc2
// 00a34bbc  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 00a34bc0  eb08                 jmp 0xa34bca
// 00a34bc2  3bd0                 cmp edx, eax
// 00a34bc4  8bea                 mov ebp, edx
// 00a34bc6  7c02                 jl 0xa34bca
// 00a34bc8  8be8                 mov ebp, eax
// 00a34bca  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00a34bcd  8d4104               lea eax, [ecx + 4]
// 00a34bd0  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a34bd4  3bc8                 cmp ecx, eax
// 00a34bd6  8bd1                 mov edx, ecx
// 00a34bd8  7c02                 jl 0xa34bdc
// 00a34bda  8bd0                 mov edx, eax
// 00a34bdc  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 00a34be0  3bda                 cmp ebx, edx
// 00a34be2  7f08                 jg 0xa34bec
// 00a34be4  3bc8                 cmp ecx, eax
// 00a34be6  8bd9                 mov ebx, ecx
// 00a34be8  7c02                 jl 0xa34bec
// 00a34bea  8bd8                 mov ebx, eax
// 00a34bec  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00a34bf2  50                   push eax
// 00a34bf3  8bcf                 mov ecx, edi
// 00a34bf5  e8f619f9ff           call 0x9c65f0
// 00a34bfa  83f803               cmp eax, 3
// 00a34bfd  7735                 ja 0xa34c34
// 00a34bff  ff2485144ea300       jmp dword ptr [eax*4 + 0xa34e14]
// 00a34c06  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a34c0a  03d9                 add ebx, ecx
// 00a34c0c  895c2420             mov dword ptr [esp + 0x20], ebx
// 00a34c10  eb22                 jmp 0xa34c34
// 00a34c12  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a34c16  2bd3                 sub edx, ebx
// 00a34c18  89542418             mov dword ptr [esp + 0x18], edx
// 00a34c1c  eb16                 jmp 0xa34c34
// 00a34c1e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a34c22  03e8                 add ebp, eax
// 00a34c24  896c2424             mov dword ptr [esp + 0x24], ebp
// 00a34c28  eb0a                 jmp 0xa34c34
// 00a34c2a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a34c2e  2bcd                 sub ecx, ebp
// 00a34c30  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a34c34  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 00a34c3b  8d542418             lea edx, [esp + 0x18]
// 00a34c3f  52                   push edx
// 00a34c40  8bcb                 mov ecx, ebx
// 00a34c42  e857e4f4ff           call 0x98309e
// 00a34c47  8d442428             lea eax, [esp + 0x28]
// 00a34c4b  50                   push eax
// 00a34c4c  8d4c243c             lea ecx, [esp + 0x3c]
// 00a34c50  51                   push ecx
// 00a34c51  8bce                 mov ecx, esi
// 00a34c53  e868f2ffff           call 0xa33ec0
// 00a34c58  85c0                 test eax, eax
// 00a34c5a  742b                 je 0xa34c87
// 00a34c5c  83bff400000000       cmp dword ptr [edi + 0xf4], 0
// 00a34c63  7522                 jne 0xa34c87
// 00a34c65  e88638fcff           call 0x9f84f0
// 00a34c6a  8b10                 mov edx, dword ptr [eax]
// 00a34c6c  8b5218               mov edx, dword ptr [edx + 0x18]
// 00a34c6f  33c9                 xor ecx, ecx
// 00a34c71  398e04010000         cmp dword ptr [esi + 0x104], ecx
// 00a34c77  0f95c1               setne cl
// 00a34c7a  81c1f2260000         add ecx, 0x26f2
// 00a34c80  51                   push ecx
// 00a34c81  8bc8                 mov ecx, eax
// 00a34c83  ffd2                 call edx
// 00a34c85  eb12                 jmp 0xa34c99
// 00a34c87  e846d7f4ff           call 0x9823d2
// 00a34c8c  68007f0000           push 0x7f00
// 00a34c91  6a00                 push 0
// 00a34c93  ff159c3ab200         call dword ptr [0xb23a9c]
// 00a34c99  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a34c9d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a34ca1  6a00                 push 0
// 00a34ca3  898e14010000         mov dword ptr [esi + 0x114], ecx
// 00a34ca9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a34cad  53                   push ebx
// 00a34cae  899618010000         mov dword ptr [esi + 0x118], edx
// 00a34cb4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a34cb8  898e1c010000         mov dword ptr [esi + 0x11c], ecx
// 00a34cbe  8d4c2420             lea ecx, [esp + 0x20]
// 00a34cc2  51                   push ecx
// 00a34cc3  6800000046           push 0x46000000
// 00a34cc8  68e83bb400           push 0xb43be8
// 00a34ccd  6a00                 push 0
// 00a34ccf  6a00                 push 0
// 00a34cd1  50                   push eax
// 00a34cd2  6a00                 push 0
// 00a34cd4  899620010000         mov dword ptr [esi + 0x120], edx
// 00a34cda  e8d1ddf4ff           call 0x982ab0
// 00a34cdf  50                   push eax
// 00a34ce0  8bcb                 mov ecx, ebx
// 00a34ce2  e8f1480600           call 0xa995d8
// 00a34ce7  2500004000           and eax, 0x400000
// 00a34cec  50                   push eax
// 00a34ced  8bce                 mov ecx, esi
// 00a34cef  e816500600           call 0xa99d0a
// 00a34cf4  d9ee                 fldz 
// 00a34cf6  bb01000000           mov ebx, 1
// 00a34cfb  d9c0                 fld st(0)
// 00a34cfd  c7860801000000000000 mov dword ptr [esi + 0x108], 0
// 00a34d07  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 00a34d0d  dd05f862e000         fld qword ptr [0xe062f8]
// 00a34d13  dde1                 fucom st(1)
// 00a34d15  dfe0                 fnstsw ax
// 00a34d17  ddd9                 fstp st(1)
// 00a34d19  f6c444               test ah, 0x44
// 00a34d1c  7b76                 jnp 0xa34d94
// 00a34d1e  8b0d0063e000         mov ecx, dword ptr [0xe06300]
// 00a34d24  85c9                 test ecx, ecx
// 00a34d26  746c                 je 0xa34d94
// 00a34d28  d8d1                 fcom st(1)
// 00a34d2a  dfe0                 fnstsw ax
// 00a34d2c  ddd9                 fstp st(1)
// 00a34d2e  f6c441               test ah, 0x41
// 00a34d31  7551                 jne 0xa34d84
// 00a34d33  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 00a34d3a  7415                 je 0xa34d51
// 00a34d3c  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 00a34d42  2b9614010000         sub edx, dword ptr [esi + 0x114]
// 00a34d48  89942484000000       mov dword ptr [esp + 0x84], edx
// 00a34d4f  eb13                 jmp 0xa34d64
// 00a34d51  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 00a34d57  2b8618010000         sub eax, dword ptr [esi + 0x118]
// 00a34d5d  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a34d64  da8c2484000000       fimul dword ptr [esp + 0x84]
// 00a34d6b  dc0db0cab800         fmul qword ptr [0xb8cab0]
// 00a34d71  da350063e000         fidiv dword ptr [0xe06300]
// 00a34d77  e834e8f4ff           call 0x9835b0
// 00a34d7c  89860c010000         mov dword ptr [esi + 0x10c], eax
// 00a34d82  eb14                 jmp 0xa34d98
// 00a34d84  a10463e000           mov eax, dword ptr [0xe06304]
// 00a34d89  99                   cdq 
// 00a34d8a  f7f9                 idiv ecx
// 00a34d8c  89860c010000         mov dword ptr [esi + 0x10c], eax
// 00a34d92  eb02                 jmp 0xa34d96
// 00a34d94  ddd8                 fstp st(0)
// 00a34d96  ddd8                 fstp st(0)
// 00a34d98  399e0c010000         cmp dword ptr [esi + 0x10c], ebx
// 00a34d9e  7d06                 jge 0xa34da6
// 00a34da0  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 00a34da6  399e0c010000         cmp dword ptr [esi + 0x10c], ebx
// 00a34dac  8b3de03ab200         mov edi, dword ptr [0xb23ae0]
// 00a34db2  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 00a34dbc  7e11                 jle 0xa34dcf
// 00a34dbe  8b0d0063e000         mov ecx, dword ptr [0xe06300]
// 00a34dc4  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a34dc7  6a00                 push 0
// 00a34dc9  51                   push ecx
// 00a34dca  6a02                 push 2
// 00a34dcc  52                   push edx
// 00a34dcd  ffd7                 call edi
// 00a34dcf  8bce                 mov ecx, esi
// 00a34dd1  e83ae8ffff           call 0xa33610
// 00a34dd6  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00a34ddc  6a05                 push 5
// 00a34dde  e8c1dcf4ff           call 0x982aa4
// 00a34de3  a11063e000           mov eax, dword ptr [0xe06310]
// 00a34de8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a34deb  6a00                 push 0
// 00a34ded  50                   push eax
// 00a34dee  53                   push ebx
// 00a34def  51                   push ecx
// 00a34df0  ffd7                 call edi
// 00a34df2  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 00a34dfc  8bc6                 mov eax, esi
// 00a34dfe  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a34e02  64890d00000000       mov dword ptr fs:[0], ecx
// 00a34e09  59                   pop ecx
// 00a34e0a  5f                   pop edi
// 00a34e0b  5e                   pop esi
// 00a34e0c  5d                   pop ebp
// 00a34e0d  5b                   pop ebx
// 00a34e0e  83c468               add esp, 0x68
// 00a34e11  c20800               ret 8
// 00a34e14  06                   push es
// 00a34e15  4c                   dec esp
// 00a34e16  a300124ca3           mov dword ptr [0xa34c1200], eax
// 00a34e1b  001e                 add byte ptr [esi], bl
// 00a34e1d  4c                   dec esp
// 00a34e1e  a3002a4ca3           mov dword ptr [0xa34c2a00], eax
// copied from an identical function in another client (function ??0CXTPDockingPaneAutoHideWnd@@AAE@PAVCXTPDockingPaneAutoHidePanel@@PAVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp