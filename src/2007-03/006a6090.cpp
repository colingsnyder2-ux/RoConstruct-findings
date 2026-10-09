// roc 2007-03 006a6090  unit: seg_006a0000  size: 393 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a6090
//
// 006a6090  837c242c02           cmp dword ptr [esp + 0x2c], 2
// 006a6095  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a6099  53                   push ebx
// 006a609a  55                   push ebp
// 006a609b  56                   push esi
// 006a609c  57                   push edi
// 006a609d  8bf1                 mov esi, ecx
// 006a609f  754b                 jne 0x6a60ec
// 006a60a1  85c0                 test eax, eax
// 006a60a3  7547                 jne 0x6a60ec
// 006a60a5  39442428             cmp dword ptr [esp + 0x28], eax
// 006a60a9  750a                 jne 0x6a60b5
// 006a60ab  3944242c             cmp dword ptr [esp + 0x2c], eax
// 006a60af  0f8453010000         je 0x6a6208
// 006a60b5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a60b9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a60bd  6a0d                 push 0xd
// 006a60bf  6a0d                 push 0xd
// 006a60c1  83ec10               sub esp, 0x10
// 006a60c4  8bc4                 mov eax, esp
// 006a60c6  8908                 mov dword ptr [eax], ecx
// 006a60c8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006a60cc  895004               mov dword ptr [eax + 4], edx
// 006a60cf  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006a60d3  894808               mov dword ptr [eax + 8], ecx
// 006a60d6  89500c               mov dword ptr [eax + 0xc], edx
// 006a60d9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006a60dd  50                   push eax
// 006a60de  8bce                 mov ecx, esi
// 006a60e0  e8dbcff8ff           call 0x6330c0
// 006a60e5  5f                   pop edi
// 006a60e6  5e                   pop esi
// 006a60e7  5d                   pop ebp
// 006a60e8  5b                   pop ebx
// 006a60e9  c23000               ret 0x30
// 006a60ec  837c243000           cmp dword ptr [esp + 0x30], 0
// 006a60f1  7571                 jne 0x6a6164
// 006a60f3  85c0                 test eax, eax
// 006a60f5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006a60f9  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006a60fd  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006a6101  7424                 je 0x6a6127
// 006a6103  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a6107  8b542414             mov edx, dword ptr [esp + 0x14]
// 006a610b  6a14                 push 0x14
// 006a610d  6a10                 push 0x10
// 006a610f  83ec10               sub esp, 0x10
// 006a6112  8bc4                 mov eax, esp
// 006a6114  8908                 mov dword ptr [eax], ecx
// 006a6116  896804               mov dword ptr [eax + 4], ebp
// 006a6119  895808               mov dword ptr [eax + 8], ebx
// 006a611c  52                   push edx
// 006a611d  8bce                 mov ecx, esi
// 006a611f  89780c               mov dword ptr [eax + 0xc], edi
// 006a6122  e869c2f8ff           call 0x632390
// 006a6127  8b442428             mov eax, dword ptr [esp + 0x28]
// 006a612b  83f802               cmp eax, 2
// 006a612e  7409                 je 0x6a6139
// 006a6130  83f803               cmp eax, 3
// 006a6133  0f85cf000000         jne 0x6a6208
// 006a6139  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a613d  8b542414             mov edx, dword ptr [esp + 0x14]
// 006a6141  6a14                 push 0x14
// 006a6143  6a10                 push 0x10
// 006a6145  83ec10               sub esp, 0x10
// 006a6148  8bc4                 mov eax, esp
// 006a614a  8908                 mov dword ptr [eax], ecx
// 006a614c  896804               mov dword ptr [eax + 4], ebp
// 006a614f  895808               mov dword ptr [eax + 8], ebx
// 006a6152  52                   push edx
// 006a6153  8bce                 mov ecx, esi
// 006a6155  89780c               mov dword ptr [eax + 0xc], edi
// 006a6158  e833c2f8ff           call 0x632390
// 006a615d  5f                   pop edi
// 006a615e  5e                   pop esi
// 006a615f  5d                   pop ebp
// 006a6160  5b                   pop ebx
// 006a6161  c23000               ret 0x30
// 006a6164  85c0                 test eax, eax
// 006a6166  7450                 je 0x6a61b8
// 006a6168  837c242800           cmp dword ptr [esp + 0x28], 0
// 006a616d  7569                 jne 0x6a61d8
// 006a616f  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 006a6174  7562                 jne 0x6a61d8
// 006a6176  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006a617a  8d442418             lea eax, [esp + 0x18]
// 006a617e  50                   push eax
// 006a617f  57                   push edi
// 006a6180  e8abedffff           call 0x6a4f30
// 006a6185  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a6189  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a618d  6a14                 push 0x14
// 006a618f  6a10                 push 0x10
// 006a6191  83ec10               sub esp, 0x10
// 006a6194  8bc4                 mov eax, esp
// 006a6196  8908                 mov dword ptr [eax], ecx
// 006a6198  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006a619c  895004               mov dword ptr [eax + 4], edx
// 006a619f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006a61a3  894808               mov dword ptr [eax + 8], ecx
// 006a61a6  57                   push edi
// 006a61a7  8bce                 mov ecx, esi
// 006a61a9  89500c               mov dword ptr [eax + 0xc], edx
// 006a61ac  e8dfc1f8ff           call 0x632390
// 006a61b1  5f                   pop edi
// 006a61b2  5e                   pop esi
// 006a61b3  5d                   pop ebp
// 006a61b4  5b                   pop ebx
// 006a61b5  c23000               ret 0x30
// 006a61b8  837c243800           cmp dword ptr [esp + 0x38], 0
// 006a61bd  7519                 jne 0x6a61d8
// 006a61bf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006a61c3  83f802               cmp eax, 2
// 006a61c6  7410                 je 0x6a61d8
// 006a61c8  83f803               cmp eax, 3
// 006a61cb  740b                 je 0x6a61d8
// 006a61cd  837c242800           cmp dword ptr [esp + 0x28], 0
// 006a61d2  743b                 je 0x6a620f
// 006a61d4  85c0                 test eax, eax
// 006a61d6  743b                 je 0x6a6213
// 006a61d8  6a14                 push 0x14
// 006a61da  6a10                 push 0x10
// 006a61dc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006a61e0  8b542424             mov edx, dword ptr [esp + 0x24]
// 006a61e4  83ec10               sub esp, 0x10
// 006a61e7  8bc4                 mov eax, esp
// 006a61e9  8908                 mov dword ptr [eax], ecx
// 006a61eb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006a61ef  895004               mov dword ptr [eax + 4], edx
// 006a61f2  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006a61f6  894808               mov dword ptr [eax + 8], ecx
// 006a61f9  89500c               mov dword ptr [eax + 0xc], edx
// 006a61fc  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006a6200  50                   push eax
// 006a6201  8bce                 mov ecx, esi
// 006a6203  e888c1f8ff           call 0x632390
// 006a6208  5f                   pop edi
// 006a6209  5e                   pop esi
// 006a620a  5d                   pop ebp
// 006a620b  5b                   pop ebx
// 006a620c  c23000               ret 0x30
// 006a620f  85c0                 test eax, eax
// 006a6211  74f5                 je 0x6a6208
// 006a6213  6a10                 push 0x10
// 006a6215  6a14                 push 0x14
// 006a6217  ebc3                 jmp 0x6a61dc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawRectangle@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDefaultTheme.cpp
