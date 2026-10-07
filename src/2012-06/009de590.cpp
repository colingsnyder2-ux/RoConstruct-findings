// roc 2012-06 009de590  unit: CXTPTabClientWnd::CWorkspace  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009de590
//
// 009de590  53                   push ebx
// 009de591  56                   push esi
// 009de592  57                   push edi
// 009de593  8bf9                 mov edi, ecx
// 009de595  8b475c               mov eax, dword ptr [edi + 0x5c]
// 009de598  33f6                 xor esi, esi
// 009de59a  85c0                 test eax, eax
// 009de59c  7e2c                 jle 0x9de5ca
// 009de59e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009de5a2  85f6                 test esi, esi
// 009de5a4  7c11                 jl 0x9de5b7
// 009de5a6  3bf0                 cmp esi, eax
// 009de5a8  7d0d                 jge 0x9de5b7
// 009de5aa  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 009de5ad  7d23                 jge 0x9de5d2
// 009de5af  8b4758               mov eax, dword ptr [edi + 0x58]
// 009de5b2  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009de5b5  eb02                 jmp 0x9de5b9
// 009de5b7  33c9                 xor ecx, ecx
// 009de5b9  e8f25cfdff           call 0x9b42b0
// 009de5be  3bc3                 cmp eax, ebx
// 009de5c0  7415                 je 0x9de5d7
// 009de5c2  8b475c               mov eax, dword ptr [edi + 0x5c]
// 009de5c5  46                   inc esi
// 009de5c6  3bf0                 cmp esi, eax
// 009de5c8  7cd8                 jl 0x9de5a2
// 009de5ca  5f                   pop edi
// 009de5cb  5e                   pop esi
// 009de5cc  33c0                 xor eax, eax
// 009de5ce  5b                   pop ebx
// 009de5cf  c20400               ret 4
// 009de5d2  e8e93dfaff           call 0x9823c0
// 009de5d7  85f6                 test esi, esi
// 009de5d9  7cef                 jl 0x9de5ca
// 009de5db  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 009de5de  7dea                 jge 0x9de5ca
// 009de5e0  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 009de5e3  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 009de5e6  5f                   pop edi
// 009de5e7  5e                   pop esi
// 009de5e8  5b                   pop ebx
// 009de5e9  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?FindItem@CWorkspace@CXTPTabClientWnd@@IBEPAVCXTPTabManagerItem@@QAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
