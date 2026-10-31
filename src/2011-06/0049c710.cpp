// roc 2011-06 0049c710  unit: VCContent::?$CComObject  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049c710
//
// 0049c710  55                   push ebp
// 0049c711  8bec                 mov ebp, esp
// 0049c713  6aff                 push -1
// 0049c715  68e06f9d00           push 0x9d6fe0
// 0049c71a  64a100000000         mov eax, dword ptr fs:[0]
// 0049c720  50                   push eax
// 0049c721  64892500000000       mov dword ptr fs:[0], esp
// 0049c728  83ec10               sub esp, 0x10
// 0049c72b  8b4508               mov eax, dword ptr [ebp + 8]
// 0049c72e  53                   push ebx
// 0049c72f  56                   push esi
// 0049c730  57                   push edi
// 0049c731  33ff                 xor edi, edi
// 0049c733  8965f0               mov dword ptr [ebp - 0x10], esp
// 0049c736  3bc7                 cmp eax, edi
// 0049c738  7518                 jne 0x49c752
// 0049c73a  b803400080           mov eax, 0x80004003
// 0049c73f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049c742  64890d00000000       mov dword ptr fs:[0], ecx
// 0049c749  5f                   pop edi
// 0049c74a  5e                   pop esi
// 0049c74b  5b                   pop ebx
// 0049c74c  8be5                 mov esp, ebp
// 0049c74e  5d                   pop ebp
// 0049c74f  c20400               ret 4
// 0049c752  bb0e000780           mov ebx, 0x8007000e
// 0049c757  6894000000           push 0x94
// 0049c75c  8938                 mov dword ptr [eax], edi
// 0049c75e  895dec               mov dword ptr [ebp - 0x14], ebx
// 0049c761  897de8               mov dword ptr [ebp - 0x18], edi
// 0049c764  897dfc               mov dword ptr [ebp - 4], edi
// 0049c767  e8f2d83600           call 0x80a05e
// 0049c76c  8bf0                 mov esi, eax
// 0049c76e  83c404               add esp, 4
// 0049c771  3bf7                 cmp esi, edi
// 0049c773  743a                 je 0x49c7af
// 0049c775  6a01                 push 1
// 0049c777  6a03                 push 3
// 0049c779  8d4e0c               lea ecx, [esi + 0xc]
// 0049c77c  897e08               mov dword ptr [esi + 8], edi
// 0049c77f  ff15e804a400         call dword ptr [0xa404e8]
// 0049c785  c7063c62a700         mov dword ptr [esi], 0xa7623c
// 0049c78b  c746041862a700       mov dword ptr [esi + 4], 0xa76218
// 0049c792  8b0db415cb00         mov ecx, dword ptr [0xcb15b4]
// 0049c798  8b01                 mov eax, dword ptr [ecx]
// 0049c79a  8b5004               mov edx, dword ptr [eax + 4]
// 0049c79d  ffd2                 call edx
// 0049c79f  8bc6                 mov eax, esi
// 0049c7a1  3bc7                 cmp eax, edi
// 0049c7a3  7422                 je 0x49c7c7
// 0049c7a5  ff4008               inc dword ptr [eax + 8]
// 0049c7a8  33db                 xor ebx, ebx
// 0049c7aa  ff4808               dec dword ptr [eax + 8]
// 0049c7ad  eb18                 jmp 0x49c7c7
// 0049c7af  33c0                 xor eax, eax
// 0049c7b1  ebee                 jmp 0x49c7a1
// 0049c7b3  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0049c7b6  e87fdb3600           call 0x80a33a
// 0049c7bb  b8c1c74900           mov eax, 0x49c7c1
// 0049c7c0  c3                   ret 
// 0049c7c1  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0049c7c4  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0049c7c7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0049c7ca  8901                 mov dword ptr [ecx], eax
// 0049c7cc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049c7cf  5f                   pop edi
// 0049c7d0  5e                   pop esi
// 0049c7d1  8bc3                 mov eax, ebx
// 0049c7d3  64890d00000000       mov dword ptr fs:[0], ecx
// 0049c7da  5b                   pop ebx
// 0049c7db  8be5                 mov esp, ebp
// 0049c7dd  5d                   pop ebp
// 0049c7de  c20400               ret 4
// copied from an identical function in another client (function ?CreateInstance@?$CComObject@VCContent@@@ATL@@SGJPAPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp