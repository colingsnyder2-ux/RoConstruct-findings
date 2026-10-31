// roc 2009-06 0046df10  unit: VCContent::?$CComObject  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046df10
//
// 0046df10  55                   push ebp
// 0046df11  8bec                 mov ebp, esp
// 0046df13  6aff                 push -1
// 0046df15  6870368500           push 0x853670
// 0046df1a  64a100000000         mov eax, dword ptr fs:[0]
// 0046df20  50                   push eax
// 0046df21  64892500000000       mov dword ptr fs:[0], esp
// 0046df28  83ec10               sub esp, 0x10
// 0046df2b  8b4508               mov eax, dword ptr [ebp + 8]
// 0046df2e  53                   push ebx
// 0046df2f  56                   push esi
// 0046df30  57                   push edi
// 0046df31  33ff                 xor edi, edi
// 0046df33  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046df36  3bc7                 cmp eax, edi
// 0046df38  7518                 jne 0x46df52
// 0046df3a  b803400080           mov eax, 0x80004003
// 0046df3f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046df42  64890d00000000       mov dword ptr fs:[0], ecx
// 0046df49  5f                   pop edi
// 0046df4a  5e                   pop esi
// 0046df4b  5b                   pop ebx
// 0046df4c  8be5                 mov esp, ebp
// 0046df4e  5d                   pop ebp
// 0046df4f  c20400               ret 4
// 0046df52  bb0e000780           mov ebx, 0x8007000e
// 0046df57  6894000000           push 0x94
// 0046df5c  8938                 mov dword ptr [eax], edi
// 0046df5e  895dec               mov dword ptr [ebp - 0x14], ebx
// 0046df61  897de8               mov dword ptr [ebp - 0x18], edi
// 0046df64  897dfc               mov dword ptr [ebp - 4], edi
// 0046df67  e8ccaa2a00           call 0x718a38
// 0046df6c  8bf0                 mov esi, eax
// 0046df6e  83c404               add esp, 4
// 0046df71  3bf7                 cmp esi, edi
// 0046df73  743a                 je 0x46dfaf
// 0046df75  6a01                 push 1
// 0046df77  6a03                 push 3
// 0046df79  8d4e0c               lea ecx, [esi + 0xc]
// 0046df7c  897e08               mov dword ptr [esi + 8], edi
// 0046df7f  ff15cce38900         call dword ptr [0x89e3cc]
// 0046df85  c706ecd48b00         mov dword ptr [esi], 0x8bd4ec
// 0046df8b  c74604c8d48b00       mov dword ptr [esi + 4], 0x8bd4c8
// 0046df92  8b0d1897a300         mov ecx, dword ptr [0xa39718]
// 0046df98  8b01                 mov eax, dword ptr [ecx]
// 0046df9a  8b5004               mov edx, dword ptr [eax + 4]
// 0046df9d  ffd2                 call edx
// 0046df9f  8bc6                 mov eax, esi
// 0046dfa1  3bc7                 cmp eax, edi
// 0046dfa3  7422                 je 0x46dfc7
// 0046dfa5  ff4008               inc dword ptr [eax + 8]
// 0046dfa8  33db                 xor ebx, ebx
// 0046dfaa  ff4808               dec dword ptr [eax + 8]
// 0046dfad  eb18                 jmp 0x46dfc7
// 0046dfaf  33c0                 xor eax, eax
// 0046dfb1  ebee                 jmp 0x46dfa1
// 0046dfb3  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0046dfb6  e859ad2a00           call 0x718d14
// 0046dfbb  b8c1df4600           mov eax, 0x46dfc1
// 0046dfc0  c3                   ret 
// 0046dfc1  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0046dfc4  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0046dfc7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0046dfca  8901                 mov dword ptr [ecx], eax
// 0046dfcc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046dfcf  5f                   pop edi
// 0046dfd0  5e                   pop esi
// 0046dfd1  8bc3                 mov eax, ebx
// 0046dfd3  64890d00000000       mov dword ptr fs:[0], ecx
// 0046dfda  5b                   pop ebx
// 0046dfdb  8be5                 mov esp, ebp
// 0046dfdd  5d                   pop ebp
// 0046dfde  c20400               ret 4
// copied from an identical function in another client (function ?CreateInstance@?$CComObject@VCContent@@@ATL@@SGJPAPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp