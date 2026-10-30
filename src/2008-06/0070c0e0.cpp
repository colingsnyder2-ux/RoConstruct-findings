// from server: 100% by auto
// roc 2008-06 0070c0e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070c0e0
//
// 0070c0e0  83ec18               sub esp, 0x18
// 0070c0e3  55                   push ebp
// 0070c0e4  56                   push esi
// 0070c0e5  8b35a42d8000         mov esi, dword ptr [0x802da4]
// 0070c0eb  6a01                 push 1
// 0070c0ed  8be9                 mov ebp, ecx
// 0070c0ef  ffd6                 call esi
// 0070c0f1  6685c0               test ax, ax
// 0070c0f4  0f8cf1000000         jl 0x70c1eb
// 0070c0fa  6a02                 push 2
// 0070c0fc  ffd6                 call esi
// 0070c0fe  6685c0               test ax, ax
// 0070c101  0f8ce4000000         jl 0x70c1eb
// 0070c107  6a04                 push 4
// 0070c109  ffd6                 call esi
// 0070c10b  6685c0               test ax, ax
// 0070c10e  0f8cd7000000         jl 0x70c1eb
// 0070c114  53                   push ebx
// 0070c115  57                   push edi
// 0070c116  8d442410             lea eax, [esp + 0x10]
// 0070c11a  50                   push eax
// 0070c11b  ff159c2d8000         call dword ptr [0x802d9c]
// 0070c121  33ff                 xor edi, edi
// 0070c123  397d5c               cmp dword ptr [ebp + 0x5c], edi
// 0070c126  0f8ea6000000         jle 0x70c1d2
// 0070c12c  8b1d502d8000         mov ebx, dword ptr [0x802d50]
// 0070c132  85ff                 test edi, edi
// 0070c134  0f8cac000000         jl 0x70c1e6
// 0070c13a  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 0070c13d  0f8da3000000         jge 0x70c1e6
// 0070c143  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 0070c146  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 0070c149  8b5620               mov edx, dword ptr [esi + 0x20]
// 0070c14c  52                   push edx
// 0070c14d  ffd3                 call ebx
// 0070c14f  85c0                 test eax, eax
// 0070c151  7475                 je 0x70c1c8
// 0070c153  8b4620               mov eax, dword ptr [esi + 0x20]
// 0070c156  50                   push eax
// 0070c157  e8824af9ff           call 0x6a0bde
// 0070c15c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0070c15f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0070c163  8b5610               mov edx, dword ptr [esi + 0x10]
// 0070c166  8954241c             mov dword ptr [esp + 0x1c], edx
// 0070c16a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0070c16d  894c2420             mov dword ptr [esp + 0x20], ecx
// 0070c171  8b5618               mov edx, dword ptr [esi + 0x18]
// 0070c174  89542424             mov dword ptr [esp + 0x24], edx
// 0070c178  f6460801             test byte ptr [esi + 8], 1
// 0070c17c  8d4c2418             lea ecx, [esp + 0x18]
// 0070c180  51                   push ecx
// 0070c181  740c                 je 0x70c18f
// 0070c183  8b5020               mov edx, dword ptr [eax + 0x20]
// 0070c186  52                   push edx
// 0070c187  ff15342e8000         call dword ptr [0x802e34]
// 0070c18d  eb07                 jmp 0x70c196
// 0070c18f  8bc8                 mov ecx, eax
// 0070c191  e89c4af9ff           call 0x6a0c32
// 0070c196  8b542414             mov edx, dword ptr [esp + 0x14]
// 0070c19a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070c19e  52                   push edx
// 0070c19f  50                   push eax
// 0070c1a0  8d4c2420             lea ecx, [esp + 0x20]
// 0070c1a4  51                   push ecx
// 0070c1a5  ff152c2d8000         call dword ptr [0x802d2c]
// 0070c1ab  85c0                 test eax, eax
// 0070c1ad  7419                 je 0x70c1c8
// 0070c1af  f6460801             test byte ptr [esi + 8], 1
// 0070c1b3  7527                 jne 0x70c1dc
// 0070c1b5  8d542410             lea edx, [esp + 0x10]
// 0070c1b9  52                   push edx
// 0070c1ba  6a00                 push 0
// 0070c1bc  8bcd                 mov ecx, ebp
// 0070c1be  e8ddd9ffff           call 0x709ba0
// 0070c1c3  3b4620               cmp eax, dword ptr [esi + 0x20]
// 0070c1c6  7414                 je 0x70c1dc
// 0070c1c8  47                   inc edi
// 0070c1c9  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 0070c1cc  0f8c60ffffff         jl 0x70c132
// 0070c1d2  5f                   pop edi
// 0070c1d3  5b                   pop ebx
// 0070c1d4  5e                   pop esi
// 0070c1d5  33c0                 xor eax, eax
// 0070c1d7  5d                   pop ebp
// 0070c1d8  83c418               add esp, 0x18
// 0070c1db  c3                   ret 
// 0070c1dc  5f                   pop edi
// 0070c1dd  5b                   pop ebx
// 0070c1de  8bc6                 mov eax, esi
// 0070c1e0  5e                   pop esi
// 0070c1e1  5d                   pop ebp
// 0070c1e2  83c418               add esp, 0x18
// 0070c1e5  c3                   ret 
// 0070c1e6  e85947f9ff           call 0x6a0944
// 0070c1eb  5e                   pop esi
// 0070c1ec  33c0                 xor eax, eax
// 0070c1ee  5d                   pop ebp
// 0070c1ef  83c418               add esp, 0x18
// 0070c1f2  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?FindTool@CXTPToolTipContextToolTip@@IAEPAUTOOLITEM@1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
