// roc 2009-12 008c7e00  unit: VCEdit::?$CXTMaskEditT  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7e00
//
// 008c7e00  51                   push ecx
// 008c7e01  53                   push ebx
// 008c7e02  55                   push ebp
// 008c7e03  8be9                 mov ebp, ecx
// 008c7e05  56                   push esi
// 008c7e06  8d9d84000000         lea ebx, [ebp + 0x84]
// 008c7e0c  57                   push edi
// 008c7e0d  8bcb                 mov ecx, ebx
// 008c7e0f  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7e15  8b742418             mov esi, dword ptr [esp + 0x18]
// 008c7e19  8b3e                 mov edi, dword ptr [esi]
// 008c7e1b  89442410             mov dword ptr [esp + 0x10], eax
// 008c7e1f  85ff                 test edi, edi
// 008c7e21  7c27                 jl 0x8c7e4a
// 008c7e23  8bcb                 mov ecx, ebx
// 008c7e25  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7e2b  3bf8                 cmp edi, eax
// 008c7e2d  7d1b                 jge 0x8c7e4a
// 008c7e2f  57                   push edi
// 008c7e30  8bcb                 mov ecx, ebx
// 008c7e32  ff1510d59800         call dword ptr [0x98d510]
// 008c7e38  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 008c7e3b  750d                 jne 0x8c7e4a
// 008c7e3d  5f                   pop edi
// 008c7e3e  5e                   pop esi
// 008c7e3f  5d                   pop ebp
// 008c7e40  b801000000           mov eax, 1
// 008c7e45  5b                   pop ebx
// 008c7e46  59                   pop ecx
// 008c7e47  c20800               ret 8
// 008c7e4a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008c7e4f  7474                 je 0x8c7ec5
// 008c7e51  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c7e55  3906                 cmp dword ptr [esi], eax
// 008c7e57  7d31                 jge 0x8c7e8a
// 008c7e59  8da42400000000       lea esp, [esp]
// 008c7e60  8b3e                 mov edi, dword ptr [esi]
// 008c7e62  85ff                 test edi, edi
// 008c7e64  7c1a                 jl 0x8c7e80
// 008c7e66  8bcb                 mov ecx, ebx
// 008c7e68  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7e6e  3bf8                 cmp edi, eax
// 008c7e70  7d0e                 jge 0x8c7e80
// 008c7e72  57                   push edi
// 008c7e73  8bcb                 mov ecx, ebx
// 008c7e75  ff1510d59800         call dword ptr [0x98d510]
// 008c7e7b  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 008c7e7e  74bd                 je 0x8c7e3d
// 008c7e80  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c7e84  ff06                 inc dword ptr [esi]
// 008c7e86  390e                 cmp dword ptr [esi], ecx
// 008c7e88  7cd6                 jl 0x8c7e60
// 008c7e8a  833e00               cmp dword ptr [esi], 0
// 008c7e8d  0f8c9a000000         jl 0x8c7f2d
// 008c7e93  8b3e                 mov edi, dword ptr [esi]
// 008c7e95  83ef01               sub edi, 1
// 008c7e98  781a                 js 0x8c7eb4
// 008c7e9a  8bcb                 mov ecx, ebx
// 008c7e9c  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7ea2  3bf8                 cmp edi, eax
// 008c7ea4  7d0e                 jge 0x8c7eb4
// 008c7ea6  57                   push edi
// 008c7ea7  8bcb                 mov ecx, ebx
// 008c7ea9  ff1510d59800         call dword ptr [0x98d510]
// 008c7eaf  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 008c7eb2  7479                 je 0x8c7f2d
// 008c7eb4  ff0e                 dec dword ptr [esi]
// 008c7eb6  833e00               cmp dword ptr [esi], 0
// 008c7eb9  7dd8                 jge 0x8c7e93
// 008c7ebb  5f                   pop edi
// 008c7ebc  5e                   pop esi
// 008c7ebd  5d                   pop ebp
// 008c7ebe  33c0                 xor eax, eax
// 008c7ec0  5b                   pop ebx
// 008c7ec1  59                   pop ecx
// 008c7ec2  c20800               ret 8
// 008c7ec5  833e00               cmp dword ptr [esi], 0
// 008c7ec8  7c31                 jl 0x8c7efb
// 008c7eca  8d9b00000000         lea ebx, [ebx]
// 008c7ed0  8b3e                 mov edi, dword ptr [esi]
// 008c7ed2  85ff                 test edi, edi
// 008c7ed4  7c1e                 jl 0x8c7ef4
// 008c7ed6  8bcb                 mov ecx, ebx
// 008c7ed8  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7ede  3bf8                 cmp edi, eax
// 008c7ee0  7d12                 jge 0x8c7ef4
// 008c7ee2  57                   push edi
// 008c7ee3  8bcb                 mov ecx, ebx
// 008c7ee5  ff1510d59800         call dword ptr [0x98d510]
// 008c7eeb  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 008c7eee  0f8449ffffff         je 0x8c7e3d
// 008c7ef4  ff0e                 dec dword ptr [esi]
// 008c7ef6  833e00               cmp dword ptr [esi], 0
// 008c7ef9  7dd5                 jge 0x8c7ed0
// 008c7efb  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c7eff  3916                 cmp dword ptr [esi], edx
// 008c7f01  7d2a                 jge 0x8c7f2d
// 008c7f03  8b3e                 mov edi, dword ptr [esi]
// 008c7f05  85ff                 test edi, edi
// 008c7f07  7c1a                 jl 0x8c7f23
// 008c7f09  8bcb                 mov ecx, ebx
// 008c7f0b  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7f11  3bf8                 cmp edi, eax
// 008c7f13  7d0e                 jge 0x8c7f23
// 008c7f15  57                   push edi
// 008c7f16  8bcb                 mov ecx, ebx
// 008c7f18  ff1510d59800         call dword ptr [0x98d510]
// 008c7f1e  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 008c7f21  740a                 je 0x8c7f2d
// 008c7f23  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c7f27  ff06                 inc dword ptr [esi]
// 008c7f29  3906                 cmp dword ptr [esi], eax
// 008c7f2b  7cd6                 jl 0x8c7f03
// 008c7f2d  5f                   pop edi
// 008c7f2e  5e                   pop esi
// 008c7f2f  5d                   pop ebp
// 008c7f30  33c0                 xor eax, eax
// 008c7f32  5b                   pop ebx
// 008c7f33  59                   pop ecx
// 008c7f34  c20800               ret 8
// copied from an identical function in another client (function ?CorrectPosition@?$CXTMaskEditT@VCEdit@@@@IAEHAAHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp