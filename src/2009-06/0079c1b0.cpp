// roc 2009-06 0079c1b0  unit: CXTPNewToolbarDlg  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c1b0
//
// 0079c1b0  51                   push ecx
// 0079c1b1  56                   push esi
// 0079c1b2  8bf1                 mov esi, ecx
// 0079c1b4  8b4608               mov eax, dword ptr [esi + 8]
// 0079c1b7  57                   push edi
// 0079c1b8  33ff                 xor edi, edi
// 0079c1ba  3bc7                 cmp eax, edi
// 0079c1bc  746a                 je 0x79c228
// 0079c1be  53                   push ebx
// 0079c1bf  8b1d8ce38900         mov ebx, dword ptr [0x89e38c]
// 0079c1c5  8d4c240c             lea ecx, [esp + 0xc]
// 0079c1c9  51                   push ecx
// 0079c1ca  50                   push eax
// 0079c1cb  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 0079c1d2  897c2414             mov dword ptr [esp + 0x14], edi
// 0079c1d6  ffd3                 call ebx
// 0079c1d8  85c0                 test eax, eax
// 0079c1da  743a                 je 0x79c216
// 0079c1dc  55                   push ebp
// 0079c1dd  8b2d50e38900         mov ebp, dword ptr [0x89e350]
// 0079c1e3  817c241003010000     cmp dword ptr [esp + 0x10], 0x103
// 0079c1eb  7528                 jne 0x79c215
// 0079c1ed  8b5608               mov edx, dword ptr [esi + 8]
// 0079c1f0  47                   inc edi
// 0079c1f1  83ff0a               cmp edi, 0xa
// 0079c1f4  7716                 ja 0x79c20c
// 0079c1f6  6a64                 push 0x64
// 0079c1f8  52                   push edx
// 0079c1f9  ffd5                 call ebp
// 0079c1fb  8b4e08               mov ecx, dword ptr [esi + 8]
// 0079c1fe  8d442410             lea eax, [esp + 0x10]
// 0079c202  50                   push eax
// 0079c203  51                   push ecx
// 0079c204  ffd3                 call ebx
// 0079c206  85c0                 test eax, eax
// 0079c208  75d9                 jne 0x79c1e3
// 0079c20a  eb09                 jmp 0x79c215
// 0079c20c  6a00                 push 0
// 0079c20e  52                   push edx
// 0079c20f  ff1584e38900         call dword ptr [0x89e384]
// 0079c215  5d                   pop ebp
// 0079c216  8b4608               mov eax, dword ptr [esi + 8]
// 0079c219  50                   push eax
// 0079c21a  ff1588e38900         call dword ptr [0x89e388]
// 0079c220  c7460800000000       mov dword ptr [esi + 8], 0
// 0079c227  5b                   pop ebx
// 0079c228  5f                   pop edi
// 0079c229  5e                   pop esi
// 0079c22a  59                   pop ecx
// 0079c22b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StopThread@CXTPSoundManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
