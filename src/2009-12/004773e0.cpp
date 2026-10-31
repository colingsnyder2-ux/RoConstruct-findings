// roc 2009-12 004773e0  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004773e0
//
// 004773e0  55                   push ebp
// 004773e1  8bec                 mov ebp, esp
// 004773e3  6aff                 push -1
// 004773e5  6820e09200           push 0x92e020
// 004773ea  64a100000000         mov eax, dword ptr fs:[0]
// 004773f0  50                   push eax
// 004773f1  64892500000000       mov dword ptr fs:[0], esp
// 004773f8  83ec10               sub esp, 0x10
// 004773fb  8b4508               mov eax, dword ptr [ebp + 8]
// 004773fe  53                   push ebx
// 004773ff  56                   push esi
// 00477400  57                   push edi
// 00477401  33ff                 xor edi, edi
// 00477403  8965f0               mov dword ptr [ebp - 0x10], esp
// 00477406  3bc7                 cmp eax, edi
// 00477408  7518                 jne 0x477422
// 0047740a  b803400080           mov eax, 0x80004003
// 0047740f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00477412  64890d00000000       mov dword ptr fs:[0], ecx
// 00477419  5f                   pop edi
// 0047741a  5e                   pop esi
// 0047741b  5b                   pop ebx
// 0047741c  8be5                 mov esp, ebp
// 0047741e  5d                   pop ebp
// 0047741f  c20400               ret 4
// 00477422  bb0e000780           mov ebx, 0x8007000e
// 00477427  6894000000           push 0x94
// 0047742c  8938                 mov dword ptr [eax], edi
// 0047742e  895dec               mov dword ptr [ebp - 0x14], ebx
// 00477431  897de8               mov dword ptr [ebp - 0x18], edi
// 00477434  897dfc               mov dword ptr [ebp - 4], edi
// 00477437  e824c43700           call 0x7f3860
// 0047743c  8bf0                 mov esi, eax
// 0047743e  83c404               add esp, 4
// 00477441  3bf7                 cmp esi, edi
// 00477443  743a                 je 0x47747f
// 00477445  6a01                 push 1
// 00477447  6a03                 push 3
// 00477449  8d4e0c               lea ecx, [esi + 0xc]
// 0047744c  897e08               mov dword ptr [esi + 8], edi
// 0047744f  ff150cb69800         call dword ptr [0x98b60c]
// 00477455  c7066c1b9b00         mov dword ptr [esi], 0x9b1b6c
// 0047745b  c74604481b9b00       mov dword ptr [esi + 4], 0x9b1b48
// 00477462  8b0d0095b700         mov ecx, dword ptr [0xb79500]
// 00477468  8b01                 mov eax, dword ptr [ecx]
// 0047746a  8b5004               mov edx, dword ptr [eax + 4]
// 0047746d  ffd2                 call edx
// 0047746f  8bc6                 mov eax, esi
// 00477471  3bc7                 cmp eax, edi
// 00477473  7422                 je 0x477497
// 00477475  ff4008               inc dword ptr [eax + 8]
// 00477478  33db                 xor ebx, ebx
// 0047747a  ff4808               dec dword ptr [eax + 8]
// 0047747d  eb18                 jmp 0x477497
// 0047747f  33c0                 xor eax, eax
// 00477481  ebee                 jmp 0x477471
// 00477483  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 00477486  e8b1c63700           call 0x7f3b3c
// 0047748b  b891744700           mov eax, 0x477491
// 00477490  c3                   ret 
// 00477491  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 00477494  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00477497  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0047749a  8901                 mov dword ptr [ecx], eax
// 0047749c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0047749f  5f                   pop edi
// 004774a0  5e                   pop esi
// 004774a1  8bc3                 mov eax, ebx
// 004774a3  64890d00000000       mov dword ptr fs:[0], ecx
// 004774aa  5b                   pop ebx
// 004774ab  8be5                 mov esp, ebp
// 004774ad  5d                   pop ebp
// 004774ae  c20400               ret 4
// copied from an identical function in another client (function ?CreateInstance@?$CComObject@VCContent@@@ATL@@SGJPAPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp