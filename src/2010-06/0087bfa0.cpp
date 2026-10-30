// roc 2010-06 0087bfa0  unit: VCEdit::?$CXTMaskEditT  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087bfa0
//
// 0087bfa0  51                   push ecx
// 0087bfa1  53                   push ebx
// 0087bfa2  55                   push ebp
// 0087bfa3  8be9                 mov ebp, ecx
// 0087bfa5  56                   push esi
// 0087bfa6  8d9d84000000         lea ebx, [ebp + 0x84]
// 0087bfac  57                   push edi
// 0087bfad  8bcb                 mov ecx, ebx
// 0087bfaf  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087bfb5  8b742418             mov esi, dword ptr [esp + 0x18]
// 0087bfb9  8b3e                 mov edi, dword ptr [esi]
// 0087bfbb  89442410             mov dword ptr [esp + 0x10], eax
// 0087bfbf  85ff                 test edi, edi
// 0087bfc1  7c27                 jl 0x87bfea
// 0087bfc3  8bcb                 mov ecx, ebx
// 0087bfc5  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087bfcb  3bf8                 cmp edi, eax
// 0087bfcd  7d1b                 jge 0x87bfea
// 0087bfcf  57                   push edi
// 0087bfd0  8bcb                 mov ecx, ebx
// 0087bfd2  ff1558c59e00         call dword ptr [0x9ec558]
// 0087bfd8  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 0087bfdb  750d                 jne 0x87bfea
// 0087bfdd  5f                   pop edi
// 0087bfde  5e                   pop esi
// 0087bfdf  5d                   pop ebp
// 0087bfe0  b801000000           mov eax, 1
// 0087bfe5  5b                   pop ebx
// 0087bfe6  59                   pop ecx
// 0087bfe7  c20800               ret 8
// 0087bfea  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0087bfef  7474                 je 0x87c065
// 0087bff1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087bff5  3906                 cmp dword ptr [esi], eax
// 0087bff7  7d31                 jge 0x87c02a
// 0087bff9  8da42400000000       lea esp, [esp]
// 0087c000  8b3e                 mov edi, dword ptr [esi]
// 0087c002  85ff                 test edi, edi
// 0087c004  7c1a                 jl 0x87c020
// 0087c006  8bcb                 mov ecx, ebx
// 0087c008  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087c00e  3bf8                 cmp edi, eax
// 0087c010  7d0e                 jge 0x87c020
// 0087c012  57                   push edi
// 0087c013  8bcb                 mov ecx, ebx
// 0087c015  ff1558c59e00         call dword ptr [0x9ec558]
// 0087c01b  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 0087c01e  74bd                 je 0x87bfdd
// 0087c020  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087c024  ff06                 inc dword ptr [esi]
// 0087c026  390e                 cmp dword ptr [esi], ecx
// 0087c028  7cd6                 jl 0x87c000
// 0087c02a  833e00               cmp dword ptr [esi], 0
// 0087c02d  0f8c9a000000         jl 0x87c0cd
// 0087c033  8b3e                 mov edi, dword ptr [esi]
// 0087c035  83ef01               sub edi, 1
// 0087c038  781a                 js 0x87c054
// 0087c03a  8bcb                 mov ecx, ebx
// 0087c03c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087c042  3bf8                 cmp edi, eax
// 0087c044  7d0e                 jge 0x87c054
// 0087c046  57                   push edi
// 0087c047  8bcb                 mov ecx, ebx
// 0087c049  ff1558c59e00         call dword ptr [0x9ec558]
// 0087c04f  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 0087c052  7479                 je 0x87c0cd
// 0087c054  ff0e                 dec dword ptr [esi]
// 0087c056  833e00               cmp dword ptr [esi], 0
// 0087c059  7dd8                 jge 0x87c033
// 0087c05b  5f                   pop edi
// 0087c05c  5e                   pop esi
// 0087c05d  5d                   pop ebp
// 0087c05e  33c0                 xor eax, eax
// 0087c060  5b                   pop ebx
// 0087c061  59                   pop ecx
// 0087c062  c20800               ret 8
// 0087c065  833e00               cmp dword ptr [esi], 0
// 0087c068  7c31                 jl 0x87c09b
// 0087c06a  8d9b00000000         lea ebx, [ebx]
// 0087c070  8b3e                 mov edi, dword ptr [esi]
// 0087c072  85ff                 test edi, edi
// 0087c074  7c1e                 jl 0x87c094
// 0087c076  8bcb                 mov ecx, ebx
// 0087c078  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087c07e  3bf8                 cmp edi, eax
// 0087c080  7d12                 jge 0x87c094
// 0087c082  57                   push edi
// 0087c083  8bcb                 mov ecx, ebx
// 0087c085  ff1558c59e00         call dword ptr [0x9ec558]
// 0087c08b  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 0087c08e  0f8449ffffff         je 0x87bfdd
// 0087c094  ff0e                 dec dword ptr [esi]
// 0087c096  833e00               cmp dword ptr [esi], 0
// 0087c099  7dd5                 jge 0x87c070
// 0087c09b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087c09f  3916                 cmp dword ptr [esi], edx
// 0087c0a1  7d2a                 jge 0x87c0cd
// 0087c0a3  8b3e                 mov edi, dword ptr [esi]
// 0087c0a5  85ff                 test edi, edi
// 0087c0a7  7c1a                 jl 0x87c0c3
// 0087c0a9  8bcb                 mov ecx, ebx
// 0087c0ab  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087c0b1  3bf8                 cmp edi, eax
// 0087c0b3  7d0e                 jge 0x87c0c3
// 0087c0b5  57                   push edi
// 0087c0b6  8bcb                 mov ecx, ebx
// 0087c0b8  ff1558c59e00         call dword ptr [0x9ec558]
// 0087c0be  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 0087c0c1  740a                 je 0x87c0cd
// 0087c0c3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087c0c7  ff06                 inc dword ptr [esi]
// 0087c0c9  3906                 cmp dword ptr [esi], eax
// 0087c0cb  7cd6                 jl 0x87c0a3
// 0087c0cd  5f                   pop edi
// 0087c0ce  5e                   pop esi
// 0087c0cf  5d                   pop ebp
// 0087c0d0  33c0                 xor eax, eax
// 0087c0d2  5b                   pop ebx
// 0087c0d3  59                   pop ecx
// 0087c0d4  c20800               ret 8
// copied from an identical function in another client (function ?CorrectPosition@?$CXTMaskEditT@VCEdit@@@@IAEHAAHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp