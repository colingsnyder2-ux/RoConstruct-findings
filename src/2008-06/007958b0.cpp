// roc 2008-06 007958b0  unit: CXTPRibbonGroup  size: 486 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007958b0
//
// 007958b0  83ec0c               sub esp, 0xc
// 007958b3  53                   push ebx
// 007958b4  55                   push ebp
// 007958b5  56                   push esi
// 007958b6  57                   push edi
// 007958b7  33ed                 xor ebp, ebp
// 007958b9  8bf1                 mov esi, ecx
// 007958bb  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 007958be  55                   push ebp
// 007958bf  8d442418             lea eax, [esp + 0x18]
// 007958c3  50                   push eax
// 007958c4  e857e3f2ff           call 0x6c3c20
// 007958c9  6a14                 push 0x14
// 007958cb  e850b0f0ff           call 0x6a0920
// 007958d0  898680000000         mov dword ptr [esi + 0x80], eax
// 007958d6  8928                 mov dword ptr [eax], ebp
// 007958d8  8b16                 mov edx, dword ptr [esi]
// 007958da  8b442424             mov eax, dword ptr [esp + 0x24]
// 007958de  8b5274               mov edx, dword ptr [edx + 0x74]
// 007958e1  83c404               add esp, 4
// 007958e4  50                   push eax
// 007958e5  8bce                 mov ecx, esi
// 007958e7  ffd2                 call edx
// 007958e9  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 007958ef  894108               mov dword ptr [ecx + 8], eax
// 007958f2  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 007958f8  8b4670               mov eax, dword ptr [esi + 0x70]
// 007958fb  894210               mov dword ptr [edx + 0x10], eax
// 007958fe  33db                 xor ebx, ebx
// 00795900  33ff                 xor edi, edi
// 00795902  396e4c               cmp dword ptr [esi + 0x4c], ebp
// 00795905  7e2a                 jle 0x795931
// 00795907  3bfd                 cmp edi, ebp
// 00795909  7c0d                 jl 0x795918
// 0079590b  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 0079590e  7d08                 jge 0x795918
// 00795910  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00795913  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 00795916  eb02                 jmp 0x79591a
// 00795918  33c9                 xor ecx, ecx
// 0079591a  8b11                 mov edx, dword ptr [ecx]
// 0079591c  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00795922  6a02                 push 2
// 00795924  ffd0                 call eax
// 00795926  85c0                 test eax, eax
// 00795928  7401                 je 0x79592b
// 0079592a  43                   inc ebx
// 0079592b  47                   inc edi
// 0079592c  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 0079592f  7cd6                 jl 0x795907
// 00795931  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 00795937  895904               mov dword ptr [ecx + 4], ebx
// 0079593a  3bdd                 cmp ebx, ebp
// 0079593c  0f844a010000         je 0x795a8c
// 00795942  33c9                 xor ecx, ecx
// 00795944  8bc3                 mov eax, ebx
// 00795946  ba44000000           mov edx, 0x44
// 0079594b  f7e2                 mul edx
// 0079594d  0f90c1               seto cl
// 00795950  f7d9                 neg ecx
// 00795952  0bc8                 or ecx, eax
// 00795954  51                   push ecx
// 00795955  e8fcaff0ff           call 0x6a0956
// 0079595a  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 00795960  83c404               add esp, 4
// 00795963  8901                 mov dword ptr [ecx], eax
// 00795965  33db                 xor ebx, ebx
// 00795967  396e4c               cmp dword ptr [esi + 0x4c], ebp
// 0079596a  0f8e12010000         jle 0x795a82
// 00795970  896c2410             mov dword ptr [esp + 0x10], ebp
// 00795974  3bdd                 cmp ebx, ebp
// 00795976  7c0d                 jl 0x795985
// 00795978  3b5e4c               cmp ebx, dword ptr [esi + 0x4c]
// 0079597b  7d08                 jge 0x795985
// 0079597d  8b5648               mov edx, dword ptr [esi + 0x48]
// 00795980  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 00795983  eb02                 jmp 0x795987
// 00795985  33ff                 xor edi, edi
// 00795987  8b07                 mov eax, dword ptr [edi]
// 00795989  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0079598f  6a02                 push 2
// 00795991  8bcf                 mov ecx, edi
// 00795993  ffd2                 call edx
// 00795995  85c0                 test eax, eax
// 00795997  0f84db000000         je 0x795a78
// 0079599d  89af50010000         mov dword ptr [edi + 0x150], ebp
// 007959a3  396e24               cmp dword ptr [esi + 0x24], ebp
// 007959a6  0f85ac000000         jne 0x795a58
// 007959ac  8bcf                 mov ecx, edi
// 007959ae  e8dd55f1ff           call 0x6aaf90
// 007959b3  85c0                 test eax, eax
// 007959b5  0f859d000000         jne 0x795a58
// 007959bb  83bffc0000000a       cmp dword ptr [edi + 0xfc], 0xa
// 007959c2  0f8490000000         je 0x795a58
// 007959c8  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 007959ce  3bc5                 cmp eax, ebp
// 007959d0  7404                 je 0x7959d6
// 007959d2  8bc8                 mov ecx, eax
// 007959d4  eb26                 jmp 0x7959fc
// 007959d6  8b8f88000000         mov ecx, dword ptr [edi + 0x88]
// 007959dc  3bcd                 cmp ecx, ebp
// 007959de  7f20                 jg 0x795a00
// 007959e0  8b975c010000         mov edx, dword ptr [edi + 0x15c]
// 007959e6  3bd5                 cmp edx, ebp
// 007959e8  740c                 je 0x7959f6
// 007959ea  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 007959ed  3bcd                 cmp ecx, ebp
// 007959ef  7f0f                 jg 0x795a00
// 007959f1  8b4a28               mov ecx, dword ptr [edx + 0x28]
// 007959f4  eb06                 jmp 0x7959fc
// 007959f6  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 007959fc  3bcd                 cmp ecx, ebp
// 007959fe  7e46                 jle 0x795a46
// 00795a00  3bc5                 cmp eax, ebp
// 00795a02  7526                 jne 0x795a2a
// 00795a04  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 00795a0a  3bc5                 cmp eax, ebp
// 00795a0c  7f1c                 jg 0x795a2a
// 00795a0e  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00795a14  3bcd                 cmp ecx, ebp
// 00795a16  740c                 je 0x795a24
// 00795a18  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00795a1b  3bc5                 cmp eax, ebp
// 00795a1d  7f0b                 jg 0x795a2a
// 00795a1f  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00795a22  eb06                 jmp 0x795a2a
// 00795a24  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 00795a2a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00795a2e  51                   push ecx
// 00795a2f  50                   push eax
// 00795a30  8bcf                 mov ecx, edi
// 00795a32  e8d957f1ff           call 0x6ab210
// 00795a37  8bc8                 mov ecx, eax
// 00795a39  e8b287f2ff           call 0x6be1f0
// 00795a3e  f7d8                 neg eax
// 00795a40  1bc0                 sbb eax, eax
// 00795a42  f7d8                 neg eax
// 00795a44  eb02                 jmp 0x795a48
// 00795a46  33c0                 xor eax, eax
// 00795a48  33d2                 xor edx, edx
// 00795a4a  3bc5                 cmp eax, ebp
// 00795a4c  0f95c2               setne dl
// 00795a4f  83c203               add edx, 3
// 00795a52  899750010000         mov dword ptr [edi + 0x150], edx
// 00795a58  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 00795a5e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00795a62  8b09                 mov ecx, dword ptr [ecx]
// 00795a64  57                   push edi
// 00795a65  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00795a69  50                   push eax
// 00795a6a  03cf                 add ecx, edi
// 00795a6c  e8efefffff           call 0x794a60
// 00795a71  83c744               add edi, 0x44
// 00795a74  897c2410             mov dword ptr [esp + 0x10], edi
// 00795a78  43                   inc ebx
// 00795a79  3b5e4c               cmp ebx, dword ptr [esi + 0x4c]
// 00795a7c  0f8cf2feffff         jl 0x795974
// 00795a82  896e70               mov dword ptr [esi + 0x70], ebp
// 00795a85  c7467c02000000       mov dword ptr [esi + 0x7c], 2
// 00795a8c  5f                   pop edi
// 00795a8d  5e                   pop esi
// 00795a8e  5d                   pop ebp
// 00795a8f  5b                   pop ebx
// 00795a90  83c40c               add esp, 0xc
// 00795a93  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroups.cpp (function ?OnBeforeCalcSize@CXTPRibbonGroup@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp
