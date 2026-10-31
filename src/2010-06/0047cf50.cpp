// roc 2010-06 0047cf50  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047cf50
//
// 0047cf50  55                   push ebp
// 0047cf51  8bec                 mov ebp, esp
// 0047cf53  6aff                 push -1
// 0047cf55  6810529800           push 0x985210
// 0047cf5a  64a100000000         mov eax, dword ptr fs:[0]
// 0047cf60  50                   push eax
// 0047cf61  64892500000000       mov dword ptr fs:[0], esp
// 0047cf68  83ec10               sub esp, 0x10
// 0047cf6b  8b4508               mov eax, dword ptr [ebp + 8]
// 0047cf6e  53                   push ebx
// 0047cf6f  56                   push esi
// 0047cf70  57                   push edi
// 0047cf71  33ff                 xor edi, edi
// 0047cf73  8965f0               mov dword ptr [ebp - 0x10], esp
// 0047cf76  3bc7                 cmp eax, edi
// 0047cf78  7518                 jne 0x47cf92
// 0047cf7a  b803400080           mov eax, 0x80004003
// 0047cf7f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0047cf82  64890d00000000       mov dword ptr fs:[0], ecx
// 0047cf89  5f                   pop edi
// 0047cf8a  5e                   pop esi
// 0047cf8b  5b                   pop ebx
// 0047cf8c  8be5                 mov esp, ebp
// 0047cf8e  5d                   pop ebp
// 0047cf8f  c20400               ret 4
// 0047cf92  bb0e000780           mov ebx, 0x8007000e
// 0047cf97  6894000000           push 0x94
// 0047cf9c  8938                 mov dword ptr [eax], edi
// 0047cf9e  895dec               mov dword ptr [ebp - 0x14], ebx
// 0047cfa1  897de8               mov dword ptr [ebp - 0x18], edi
// 0047cfa4  897dfc               mov dword ptr [ebp - 4], edi
// 0047cfa7  e8f4a93200           call 0x7a79a0
// 0047cfac  8bf0                 mov esi, eax
// 0047cfae  83c404               add esp, 4
// 0047cfb1  3bf7                 cmp esi, edi
// 0047cfb3  743a                 je 0x47cfef
// 0047cfb5  6a01                 push 1
// 0047cfb7  6a03                 push 3
// 0047cfb9  8d4e0c               lea ecx, [esi + 0xc]
// 0047cfbc  897e08               mov dword ptr [esi + 8], edi
// 0047cfbf  ff15fca49e00         call dword ptr [0x9ea4fc]
// 0047cfc5  c706ac2ca100         mov dword ptr [esi], 0xa12cac
// 0047cfcb  c74604882ca100       mov dword ptr [esi + 4], 0xa12c88
// 0047cfd2  8b0db0fabf00         mov ecx, dword ptr [0xbffab0]
// 0047cfd8  8b01                 mov eax, dword ptr [ecx]
// 0047cfda  8b5004               mov edx, dword ptr [eax + 4]
// 0047cfdd  ffd2                 call edx
// 0047cfdf  8bc6                 mov eax, esi
// 0047cfe1  3bc7                 cmp eax, edi
// 0047cfe3  7422                 je 0x47d007
// 0047cfe5  ff4008               inc dword ptr [eax + 8]
// 0047cfe8  33db                 xor ebx, ebx
// 0047cfea  ff4808               dec dword ptr [eax + 8]
// 0047cfed  eb18                 jmp 0x47d007
// 0047cfef  33c0                 xor eax, eax
// 0047cff1  ebee                 jmp 0x47cfe1
// 0047cff3  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0047cff6  e881ac3200           call 0x7a7c7c
// 0047cffb  b801d04700           mov eax, 0x47d001
// 0047d000  c3                   ret 
// 0047d001  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0047d004  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0047d007  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0047d00a  8901                 mov dword ptr [ecx], eax
// 0047d00c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0047d00f  5f                   pop edi
// 0047d010  5e                   pop esi
// 0047d011  8bc3                 mov eax, ebx
// 0047d013  64890d00000000       mov dword ptr fs:[0], ecx
// 0047d01a  5b                   pop ebx
// 0047d01b  8be5                 mov esp, ebp
// 0047d01d  5d                   pop ebp
// 0047d01e  c20400               ret 4
// copied from an identical function in another client (function ?CreateInstance@?$CComObject@VCContent@@@ATL@@SGJPAPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp