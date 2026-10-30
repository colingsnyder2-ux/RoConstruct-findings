// roc 2012-06 00a57f80  unit: VCEdit::?$CXTMaskEditT  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a57f80
//
// 00a57f80  51                   push ecx
// 00a57f81  53                   push ebx
// 00a57f82  55                   push ebp
// 00a57f83  8be9                 mov ebp, ecx
// 00a57f85  56                   push esi
// 00a57f86  8d9d84000000         lea ebx, [ebp + 0x84]
// 00a57f8c  57                   push edi
// 00a57f8d  8bcb                 mov ecx, ebx
// 00a57f8f  ff155846b200         call dword ptr [0xb24658]
// 00a57f95  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a57f99  8b3e                 mov edi, dword ptr [esi]
// 00a57f9b  89442410             mov dword ptr [esp + 0x10], eax
// 00a57f9f  85ff                 test edi, edi
// 00a57fa1  7c27                 jl 0xa57fca
// 00a57fa3  8bcb                 mov ecx, ebx
// 00a57fa5  ff155846b200         call dword ptr [0xb24658]
// 00a57fab  3bf8                 cmp edi, eax
// 00a57fad  7d1b                 jge 0xa57fca
// 00a57faf  57                   push edi
// 00a57fb0  8bcb                 mov ecx, ebx
// 00a57fb2  ff15e844b200         call dword ptr [0xb244e8]
// 00a57fb8  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 00a57fbb  750d                 jne 0xa57fca
// 00a57fbd  5f                   pop edi
// 00a57fbe  5e                   pop esi
// 00a57fbf  5d                   pop ebp
// 00a57fc0  b801000000           mov eax, 1
// 00a57fc5  5b                   pop ebx
// 00a57fc6  59                   pop ecx
// 00a57fc7  c20800               ret 8
// 00a57fca  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00a57fcf  7474                 je 0xa58045
// 00a57fd1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a57fd5  3906                 cmp dword ptr [esi], eax
// 00a57fd7  7d31                 jge 0xa5800a
// 00a57fd9  8da42400000000       lea esp, [esp]
// 00a57fe0  8b3e                 mov edi, dword ptr [esi]
// 00a57fe2  85ff                 test edi, edi
// 00a57fe4  7c1a                 jl 0xa58000
// 00a57fe6  8bcb                 mov ecx, ebx
// 00a57fe8  ff155846b200         call dword ptr [0xb24658]
// 00a57fee  3bf8                 cmp edi, eax
// 00a57ff0  7d0e                 jge 0xa58000
// 00a57ff2  57                   push edi
// 00a57ff3  8bcb                 mov ecx, ebx
// 00a57ff5  ff15e844b200         call dword ptr [0xb244e8]
// 00a57ffb  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 00a57ffe  74bd                 je 0xa57fbd
// 00a58000  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a58004  ff06                 inc dword ptr [esi]
// 00a58006  390e                 cmp dword ptr [esi], ecx
// 00a58008  7cd6                 jl 0xa57fe0
// 00a5800a  833e00               cmp dword ptr [esi], 0
// 00a5800d  0f8c9a000000         jl 0xa580ad
// 00a58013  8b3e                 mov edi, dword ptr [esi]
// 00a58015  83ef01               sub edi, 1
// 00a58018  781a                 js 0xa58034
// 00a5801a  8bcb                 mov ecx, ebx
// 00a5801c  ff155846b200         call dword ptr [0xb24658]
// 00a58022  3bf8                 cmp edi, eax
// 00a58024  7d0e                 jge 0xa58034
// 00a58026  57                   push edi
// 00a58027  8bcb                 mov ecx, ebx
// 00a58029  ff15e844b200         call dword ptr [0xb244e8]
// 00a5802f  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 00a58032  7479                 je 0xa580ad
// 00a58034  ff0e                 dec dword ptr [esi]
// 00a58036  833e00               cmp dword ptr [esi], 0
// 00a58039  7dd8                 jge 0xa58013
// 00a5803b  5f                   pop edi
// 00a5803c  5e                   pop esi
// 00a5803d  5d                   pop ebp
// 00a5803e  33c0                 xor eax, eax
// 00a58040  5b                   pop ebx
// 00a58041  59                   pop ecx
// 00a58042  c20800               ret 8
// 00a58045  833e00               cmp dword ptr [esi], 0
// 00a58048  7c31                 jl 0xa5807b
// 00a5804a  8d9b00000000         lea ebx, [ebx]
// 00a58050  8b3e                 mov edi, dword ptr [esi]
// 00a58052  85ff                 test edi, edi
// 00a58054  7c1e                 jl 0xa58074
// 00a58056  8bcb                 mov ecx, ebx
// 00a58058  ff155846b200         call dword ptr [0xb24658]
// 00a5805e  3bf8                 cmp edi, eax
// 00a58060  7d12                 jge 0xa58074
// 00a58062  57                   push edi
// 00a58063  8bcb                 mov ecx, ebx
// 00a58065  ff15e844b200         call dword ptr [0xb244e8]
// 00a5806b  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 00a5806e  0f8449ffffff         je 0xa57fbd
// 00a58074  ff0e                 dec dword ptr [esi]
// 00a58076  833e00               cmp dword ptr [esi], 0
// 00a58079  7dd5                 jge 0xa58050
// 00a5807b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5807f  3916                 cmp dword ptr [esi], edx
// 00a58081  7d2a                 jge 0xa580ad
// 00a58083  8b3e                 mov edi, dword ptr [esi]
// 00a58085  85ff                 test edi, edi
// 00a58087  7c1a                 jl 0xa580a3
// 00a58089  8bcb                 mov ecx, ebx
// 00a5808b  ff155846b200         call dword ptr [0xb24658]
// 00a58091  3bf8                 cmp edi, eax
// 00a58093  7d0e                 jge 0xa580a3
// 00a58095  57                   push edi
// 00a58096  8bcb                 mov ecx, ebx
// 00a58098  ff15e844b200         call dword ptr [0xb244e8]
// 00a5809e  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 00a580a1  740a                 je 0xa580ad
// 00a580a3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a580a7  ff06                 inc dword ptr [esi]
// 00a580a9  3906                 cmp dword ptr [esi], eax
// 00a580ab  7cd6                 jl 0xa58083
// 00a580ad  5f                   pop edi
// 00a580ae  5e                   pop esi
// 00a580af  5d                   pop ebp
// 00a580b0  33c0                 xor eax, eax
// 00a580b2  5b                   pop ebx
// 00a580b3  59                   pop ecx
// 00a580b4  c20800               ret 8
// copied from an identical function in another client (function ?CorrectPosition@?$CXTMaskEditT@VCEdit@@@@IAEHAAHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp