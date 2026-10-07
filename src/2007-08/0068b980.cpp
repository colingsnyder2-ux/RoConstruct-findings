// roc 2007-08 0068b980  unit: CXTPTabClientWnd::CWorkspace  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b980
//
// 0068b980  53                   push ebx
// 0068b981  56                   push esi
// 0068b982  57                   push edi
// 0068b983  8bf9                 mov edi, ecx
// 0068b985  8b475c               mov eax, dword ptr [edi + 0x5c]
// 0068b988  33f6                 xor esi, esi
// 0068b98a  85c0                 test eax, eax
// 0068b98c  7e2e                 jle 0x68b9bc
// 0068b98e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0068b992  85f6                 test esi, esi
// 0068b994  7c11                 jl 0x68b9a7
// 0068b996  3bf0                 cmp esi, eax
// 0068b998  7d0d                 jge 0x68b9a7
// 0068b99a  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 0068b99d  7d25                 jge 0x68b9c4
// 0068b99f  8b4758               mov eax, dword ptr [edi + 0x58]
// 0068b9a2  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0068b9a5  eb02                 jmp 0x68b9a9
// 0068b9a7  33c9                 xor ecx, ecx
// 0068b9a9  e8c2170700           call 0x6fd170
// 0068b9ae  3bc3                 cmp eax, ebx
// 0068b9b0  7417                 je 0x68b9c9
// 0068b9b2  8b475c               mov eax, dword ptr [edi + 0x5c]
// 0068b9b5  83c601               add esi, 1
// 0068b9b8  3bf0                 cmp esi, eax
// 0068b9ba  7cd6                 jl 0x68b992
// 0068b9bc  5f                   pop edi
// 0068b9bd  5e                   pop esi
// 0068b9be  33c0                 xor eax, eax
// 0068b9c0  5b                   pop ebx
// 0068b9c1  c20400               ret 4
// 0068b9c4  e85745faff           call 0x62ff20
// 0068b9c9  85f6                 test esi, esi
// 0068b9cb  7cef                 jl 0x68b9bc
// 0068b9cd  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 0068b9d0  7dea                 jge 0x68b9bc
// 0068b9d2  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 0068b9d5  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 0068b9d8  5f                   pop edi
// 0068b9d9  5e                   pop esi
// 0068b9da  5b                   pop ebx
// 0068b9db  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?FindItem@CWorkspace@CXTPTabClientWnd@@IBEPAVCXTPTabManagerItem@@QAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
