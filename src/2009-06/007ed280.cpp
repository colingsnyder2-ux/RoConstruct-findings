// roc 2009-06 007ed280  unit: VCEdit::?$CXTMaskEditT  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ed280
//
// 007ed280  51                   push ecx
// 007ed281  53                   push ebx
// 007ed282  55                   push ebp
// 007ed283  8be9                 mov ebp, ecx
// 007ed285  56                   push esi
// 007ed286  8d9d84000000         lea ebx, [ebp + 0x84]
// 007ed28c  57                   push edi
// 007ed28d  8bcb                 mov ecx, ebx
// 007ed28f  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed295  8b742418             mov esi, dword ptr [esp + 0x18]
// 007ed299  8b3e                 mov edi, dword ptr [esi]
// 007ed29b  89442410             mov dword ptr [esp + 0x10], eax
// 007ed29f  85ff                 test edi, edi
// 007ed2a1  7c27                 jl 0x7ed2ca
// 007ed2a3  8bcb                 mov ecx, ebx
// 007ed2a5  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed2ab  3bf8                 cmp edi, eax
// 007ed2ad  7d1b                 jge 0x7ed2ca
// 007ed2af  57                   push edi
// 007ed2b0  8bcb                 mov ecx, ebx
// 007ed2b2  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ed2b8  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 007ed2bb  750d                 jne 0x7ed2ca
// 007ed2bd  5f                   pop edi
// 007ed2be  5e                   pop esi
// 007ed2bf  5d                   pop ebp
// 007ed2c0  b801000000           mov eax, 1
// 007ed2c5  5b                   pop ebx
// 007ed2c6  59                   pop ecx
// 007ed2c7  c20800               ret 8
// 007ed2ca  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007ed2cf  7474                 je 0x7ed345
// 007ed2d1  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ed2d5  3906                 cmp dword ptr [esi], eax
// 007ed2d7  7d31                 jge 0x7ed30a
// 007ed2d9  8da42400000000       lea esp, [esp]
// 007ed2e0  8b3e                 mov edi, dword ptr [esi]
// 007ed2e2  85ff                 test edi, edi
// 007ed2e4  7c1a                 jl 0x7ed300
// 007ed2e6  8bcb                 mov ecx, ebx
// 007ed2e8  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed2ee  3bf8                 cmp edi, eax
// 007ed2f0  7d0e                 jge 0x7ed300
// 007ed2f2  57                   push edi
// 007ed2f3  8bcb                 mov ecx, ebx
// 007ed2f5  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ed2fb  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 007ed2fe  74bd                 je 0x7ed2bd
// 007ed300  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ed304  ff06                 inc dword ptr [esi]
// 007ed306  390e                 cmp dword ptr [esi], ecx
// 007ed308  7cd6                 jl 0x7ed2e0
// 007ed30a  833e00               cmp dword ptr [esi], 0
// 007ed30d  0f8c9a000000         jl 0x7ed3ad
// 007ed313  8b3e                 mov edi, dword ptr [esi]
// 007ed315  83ef01               sub edi, 1
// 007ed318  781a                 js 0x7ed334
// 007ed31a  8bcb                 mov ecx, ebx
// 007ed31c  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed322  3bf8                 cmp edi, eax
// 007ed324  7d0e                 jge 0x7ed334
// 007ed326  57                   push edi
// 007ed327  8bcb                 mov ecx, ebx
// 007ed329  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ed32f  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 007ed332  7479                 je 0x7ed3ad
// 007ed334  ff0e                 dec dword ptr [esi]
// 007ed336  833e00               cmp dword ptr [esi], 0
// 007ed339  7dd8                 jge 0x7ed313
// 007ed33b  5f                   pop edi
// 007ed33c  5e                   pop esi
// 007ed33d  5d                   pop ebp
// 007ed33e  33c0                 xor eax, eax
// 007ed340  5b                   pop ebx
// 007ed341  59                   pop ecx
// 007ed342  c20800               ret 8
// 007ed345  833e00               cmp dword ptr [esi], 0
// 007ed348  7c31                 jl 0x7ed37b
// 007ed34a  8d9b00000000         lea ebx, [ebx]
// 007ed350  8b3e                 mov edi, dword ptr [esi]
// 007ed352  85ff                 test edi, edi
// 007ed354  7c1e                 jl 0x7ed374
// 007ed356  8bcb                 mov ecx, ebx
// 007ed358  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed35e  3bf8                 cmp edi, eax
// 007ed360  7d12                 jge 0x7ed374
// 007ed362  57                   push edi
// 007ed363  8bcb                 mov ecx, ebx
// 007ed365  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ed36b  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 007ed36e  0f8449ffffff         je 0x7ed2bd
// 007ed374  ff0e                 dec dword ptr [esi]
// 007ed376  833e00               cmp dword ptr [esi], 0
// 007ed379  7dd5                 jge 0x7ed350
// 007ed37b  8b542410             mov edx, dword ptr [esp + 0x10]
// 007ed37f  3916                 cmp dword ptr [esi], edx
// 007ed381  7d2a                 jge 0x7ed3ad
// 007ed383  8b3e                 mov edi, dword ptr [esi]
// 007ed385  85ff                 test edi, edi
// 007ed387  7c1a                 jl 0x7ed3a3
// 007ed389  8bcb                 mov ecx, ebx
// 007ed38b  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed391  3bf8                 cmp edi, eax
// 007ed393  7d0e                 jge 0x7ed3a3
// 007ed395  57                   push edi
// 007ed396  8bcb                 mov ecx, ebx
// 007ed398  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ed39e  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 007ed3a1  740a                 je 0x7ed3ad
// 007ed3a3  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ed3a7  ff06                 inc dword ptr [esi]
// 007ed3a9  3906                 cmp dword ptr [esi], eax
// 007ed3ab  7cd6                 jl 0x7ed383
// 007ed3ad  5f                   pop edi
// 007ed3ae  5e                   pop esi
// 007ed3af  5d                   pop ebp
// 007ed3b0  33c0                 xor eax, eax
// 007ed3b2  5b                   pop ebx
// 007ed3b3  59                   pop ecx
// 007ed3b4  c20800               ret 8
// copied from an identical function in another client (function ?CorrectPosition@?$CXTMaskEditT@VCEdit@@@@IAEHAAHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp