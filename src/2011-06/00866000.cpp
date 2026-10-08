// from server: 100% by auto
// roc 2011-06 00866000  unit: CXTPTabClientWnd::CWorkspace  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00866000
//
// 00866000  53                   push ebx
// 00866001  56                   push esi
// 00866002  57                   push edi
// 00866003  8bf9                 mov edi, ecx
// 00866005  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00866008  33f6                 xor esi, esi
// 0086600a  85c0                 test eax, eax
// 0086600c  7e2c                 jle 0x86603a
// 0086600e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00866012  85f6                 test esi, esi
// 00866014  7c11                 jl 0x866027
// 00866016  3bf0                 cmp esi, eax
// 00866018  7d0d                 jge 0x866027
// 0086601a  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 0086601d  7d23                 jge 0x866042
// 0086601f  8b4758               mov eax, dword ptr [edi + 0x58]
// 00866022  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00866025  eb02                 jmp 0x866029
// 00866027  33c9                 xor ecx, ecx
// 00866029  e8925e0000           call 0x86bec0
// 0086602e  3bc3                 cmp eax, ebx
// 00866030  7415                 je 0x866047
// 00866032  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00866035  46                   inc esi
// 00866036  3bf0                 cmp esi, eax
// 00866038  7cd8                 jl 0x866012
// 0086603a  5f                   pop edi
// 0086603b  5e                   pop esi
// 0086603c  33c0                 xor eax, eax
// 0086603e  5b                   pop ebx
// 0086603f  c20400               ret 4
// 00866042  e8c342faff           call 0x80a30a
// 00866047  85f6                 test esi, esi
// 00866049  7cef                 jl 0x86603a
// 0086604b  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 0086604e  7dea                 jge 0x86603a
// 00866050  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00866053  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00866056  5f                   pop edi
// 00866057  5e                   pop esi
// 00866058  5b                   pop ebx
// 00866059  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?FindItem@CWorkspace@CXTPTabClientWnd@@IBEPAVCXTPTabManagerItem@@QAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
