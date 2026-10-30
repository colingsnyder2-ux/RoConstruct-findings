// roc 2007-03 006ccff0  unit: seg_006c0000  size: 576 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ccff0
//
// 006ccff0  83ec38               sub esp, 0x38
// 006ccff3  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 006ccff7  53                   push ebx
// 006ccff8  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 006ccffc  55                   push ebp
// 006ccffd  56                   push esi
// 006ccffe  8b742448             mov esi, dword ptr [esp + 0x48]
// 006cd002  57                   push edi
// 006cd003  c70000000000         mov dword ptr [eax], 0
// 006cd009  8bce                 mov ecx, esi
// 006cd00b  c70300000000         mov dword ptr [ebx], 0
// 006cd011  33ff                 xor edi, edi
// 006cd013  e818d1f8ff           call 0x65a130
// 006cd018  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 006cd01e  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006cd021  8954241c             mov dword ptr [esp + 0x1c], edx
// 006cd025  8b542450             mov edx, dword ptr [esp + 0x50]
// 006cd029  8b6a04               mov ebp, dword ptr [edx + 4]
// 006cd02c  85ed                 test ebp, ebp
// 006cd02e  89442418             mov dword ptr [esp + 0x18], eax
// 006cd032  0f84d8000000         je 0x6cd110
// 006cd038  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 006cd03c  8d442420             lea eax, [esp + 0x20]
// 006cd040  53                   push ebx
// 006cd041  50                   push eax
// 006cd042  e8f9f3ffff           call 0x6cc440
// 006cd047  8d4c2428             lea ecx, [esp + 0x28]
// 006cd04b  53                   push ebx
// 006cd04c  51                   push ecx
// 006cd04d  89442424             mov dword ptr [esp + 0x24], eax
// 006cd051  e80af4ffff           call 0x6cc460
// 006cd056  83c410               add esp, 0x10
// 006cd059  89442410             mov dword ptr [esp + 0x10], eax
// 006cd05d  eb05                 jmp 0x6cd064
// 006cd05f  90                   nop 
// 006cd060  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 006cd064  85db                 test ebx, ebx
// 006cd066  8bc5                 mov eax, ebp
// 006cd068  8b6d00               mov ebp, dword ptr [ebp]
// 006cd06b  8b7008               mov esi, dword ptr [eax + 8]
// 006cd06e  7405                 je 0x6cd075
// 006cd070  8b4604               mov eax, dword ptr [esi + 4]
// 006cd073  eb03                 jmp 0x6cd078
// 006cd075  8b4608               mov eax, dword ptr [esi + 8]
// 006cd078  8b16                 mov edx, dword ptr [esi]
// 006cd07a  8b5210               mov edx, dword ptr [edx + 0x10]
// 006cd07d  894630               mov dword ptr [esi + 0x30], eax
// 006cd080  8d442420             lea eax, [esp + 0x20]
// 006cd084  50                   push eax
// 006cd085  8bce                 mov ecx, esi
// 006cd087  ffd2                 call edx
// 006cd089  8b442410             mov eax, dword ptr [esp + 0x10]
// 006cd08d  8b00                 mov eax, dword ptr [eax]
// 006cd08f  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006cd092  3bc1                 cmp eax, ecx
// 006cd094  8bd8                 mov ebx, eax
// 006cd096  7c02                 jl 0x6cd09a
// 006cd098  8bd9                 mov ebx, ecx
// 006cd09a  8b542414             mov edx, dword ptr [esp + 0x14]
// 006cd09e  8b12                 mov edx, dword ptr [edx]
// 006cd0a0  3bd3                 cmp edx, ebx
// 006cd0a2  7e04                 jle 0x6cd0a8
// 006cd0a4  8bc2                 mov eax, edx
// 006cd0a6  eb06                 jmp 0x6cd0ae
// 006cd0a8  3bc1                 cmp eax, ecx
// 006cd0aa  7c02                 jl 0x6cd0ae
// 006cd0ac  8bc1                 mov eax, ecx
// 006cd0ae  85ff                 test edi, edi
// 006cd0b0  894630               mov dword ptr [esi + 0x30], eax
// 006cd0b3  7542                 jne 0x6cd0f7
// 006cd0b5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006cd0b9  8b06                 mov eax, dword ptr [esi]
// 006cd0bb  8b5008               mov edx, dword ptr [eax + 8]
// 006cd0be  51                   push ecx
// 006cd0bf  8bce                 mov ecx, esi
// 006cd0c1  ffd2                 call edx
// 006cd0c3  85c0                 test eax, eax
// 006cd0c5  7430                 je 0x6cd0f7
// 006cd0c7  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006cd0cb  39b8e8000000         cmp dword ptr [eax + 0xe8], edi
// 006cd0d1  740a                 je 0x6cd0dd
// 006cd0d3  397e04               cmp dword ptr [esi + 4], edi
// 006cd0d6  751f                 jne 0x6cd0f7
// 006cd0d8  397e08               cmp dword ptr [esi + 8], edi
// 006cd0db  751a                 jne 0x6cd0f7
// 006cd0dd  837c246800           cmp dword ptr [esp + 0x68], 0
// 006cd0e2  8bfe                 mov edi, esi
// 006cd0e4  740a                 je 0x6cd0f0
// 006cd0e6  33c0                 xor eax, eax
// 006cd0e8  33c9                 xor ecx, ecx
// 006cd0ea  894604               mov dword ptr [esi + 4], eax
// 006cd0ed  894e08               mov dword ptr [esi + 8], ecx
// 006cd0f0  c7463000000000       mov dword ptr [esi + 0x30], 0
// 006cd0f7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006cd0fa  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 006cd0fe  0108                 add dword ptr [eax], ecx
// 006cd100  85ed                 test ebp, ebp
// 006cd102  0f8558ffffff         jne 0x6cd060
// 006cd108  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 006cd10c  8b542450             mov edx, dword ptr [esp + 0x50]
// 006cd110  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 006cd114  85ed                 test ebp, ebp
// 006cd116  740a                 je 0x6cd122
// 006cd118  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 006cd11c  2b442454             sub eax, dword ptr [esp + 0x54]
// 006cd120  eb08                 jmp 0x6cd12a
// 006cd122  8b442460             mov eax, dword ptr [esp + 0x60]
// 006cd126  2b442458             sub eax, dword ptr [esp + 0x58]
// 006cd12a  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 006cd12d  83e901               sub ecx, 1
// 006cd130  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 006cd135  2bc1                 sub eax, ecx
// 006cd137  85ff                 test edi, edi
// 006cd139  8903                 mov dword ptr [ebx], eax
// 006cd13b  7426                 je 0x6cd163
// 006cd13d  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006cd141  8b0e                 mov ecx, dword ptr [esi]
// 006cd143  3bc8                 cmp ecx, eax
// 006cd145  7d1c                 jge 0x6cd163
// 006cd147  2bc1                 sub eax, ecx
// 006cd149  837c246800           cmp dword ptr [esp + 0x68], 0
// 006cd14e  894730               mov dword ptr [edi + 0x30], eax
// 006cd151  740c                 je 0x6cd15f
// 006cd153  85ed                 test ebp, ebp
// 006cd155  7405                 je 0x6cd15c
// 006cd157  894704               mov dword ptr [edi + 4], eax
// 006cd15a  eb03                 jmp 0x6cd15f
// 006cd15c  894708               mov dword ptr [edi + 8], eax
// 006cd15f  8b03                 mov eax, dword ptr [ebx]
// 006cd161  8906                 mov dword ptr [esi], eax
// 006cd163  833b00               cmp dword ptr [ebx], 0
// 006cd166  0f8ebc000000         jle 0x6cd228
// 006cd16c  8b6a04               mov ebp, dword ptr [edx + 4]
// 006cd16f  85ed                 test ebp, ebp
// 006cd171  0f84b1000000         je 0x6cd228
// 006cd177  8bc5                 mov eax, ebp
// 006cd179  8b7008               mov esi, dword ptr [eax + 8]
// 006cd17c  837e3000             cmp dword ptr [esi + 0x30], 0
// 006cd180  8b6d00               mov ebp, dword ptr [ebp]
// 006cd183  0f8c84000000         jl 0x6cd20d
// 006cd189  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 006cd18d  833900               cmp dword ptr [ecx], 0
// 006cd190  0f8477000000         je 0x6cd20d
// 006cd196  8b16                 mov edx, dword ptr [esi]
// 006cd198  8b5210               mov edx, dword ptr [edx + 0x10]
// 006cd19b  8d442420             lea eax, [esp + 0x20]
// 006cd19f  50                   push eax
// 006cd1a0  8bce                 mov ecx, esi
// 006cd1a2  ffd2                 call edx
// 006cd1a4  8b442470             mov eax, dword ptr [esp + 0x70]
// 006cd1a8  8b00                 mov eax, dword ptr [eax]
// 006cd1aa  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 006cd1ad  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 006cd1b1  0fafc3               imul eax, ebx
// 006cd1b4  99                   cdq 
// 006cd1b5  f739                 idiv dword ptr [ecx]
// 006cd1b7  8b542464             mov edx, dword ptr [esp + 0x64]
// 006cd1bb  52                   push edx
// 006cd1bc  8bf8                 mov edi, eax
// 006cd1be  8d442424             lea eax, [esp + 0x24]
// 006cd1c2  50                   push eax
// 006cd1c3  e878f2ffff           call 0x6cc440
// 006cd1c8  8b00                 mov eax, dword ptr [eax]
// 006cd1ca  83c408               add esp, 8
// 006cd1cd  3bf8                 cmp edi, eax
// 006cd1cf  7c18                 jl 0x6cd1e9
// 006cd1d1  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006cd1d5  51                   push ecx
// 006cd1d6  8d542424             lea edx, [esp + 0x24]
// 006cd1da  52                   push edx
// 006cd1db  e880f2ffff           call 0x6cc460
// 006cd1e0  8b00                 mov eax, dword ptr [eax]
// 006cd1e2  83c408               add esp, 8
// 006cd1e5  3bf8                 cmp edi, eax
// 006cd1e7  7e05                 jle 0x6cd1ee
// 006cd1e9  f7d8                 neg eax
// 006cd1eb  894630               mov dword ptr [esi + 0x30], eax
// 006cd1ee  8b4630               mov eax, dword ptr [esi + 0x30]
// 006cd1f1  85c0                 test eax, eax
// 006cd1f3  7d18                 jge 0x6cd20d
// 006cd1f5  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 006cd1f9  0101                 add dword ptr [ecx], eax
// 006cd1fb  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 006cd1ff  2918                 sub dword ptr [eax], ebx
// 006cd201  833900               cmp dword ptr [ecx], 0
// 006cd204  7c17                 jl 0x6cd21d
// 006cd206  8b442450             mov eax, dword ptr [esp + 0x50]
// 006cd20a  8b6804               mov ebp, dword ptr [eax + 4]
// 006cd20d  85ed                 test ebp, ebp
// 006cd20f  0f8562ffffff         jne 0x6cd177
// 006cd215  5f                   pop edi
// 006cd216  5e                   pop esi
// 006cd217  5d                   pop ebp
// 006cd218  5b                   pop ebx
// 006cd219  83c438               add esp, 0x38
// 006cd21c  c3                   ret 
// 006cd21d  8b11                 mov edx, dword ptr [ecx]
// 006cd21f  295630               sub dword ptr [esi + 0x30], edx
// 006cd222  c70100000000         mov dword ptr [ecx], 0
// 006cd228  5f                   pop edi
// 006cd229  5e                   pop esi
// 006cd22a  5d                   pop ebp
// 006cd22b  5b                   pop ebx
// 006cd22c  83c438               add esp, 0x38
// 006cd22f  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_AdjustPanesLength@CXTPDockingPaneSplitterContainer@@CAXPAVCXTPDockingPaneManager@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@VCRect@@HHAAH3@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
