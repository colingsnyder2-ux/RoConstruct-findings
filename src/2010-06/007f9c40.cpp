// roc 2010-06 007f9c40  unit: CXTPControls  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f9c40
//
// 007f9c40  83ec20               sub esp, 0x20
// 007f9c43  f644242c20           test byte ptr [esp + 0x2c], 0x20
// 007f9c48  53                   push ebx
// 007f9c49  55                   push ebp
// 007f9c4a  56                   push esi
// 007f9c4b  57                   push edi
// 007f9c4c  8bf1                 mov esi, ecx
// 007f9c4e  0f85ce000000         jne 0x7f9d22
// 007f9c54  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 007f9c58  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 007f9c5c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007f9c60  53                   push ebx
// 007f9c61  8d442440             lea eax, [esp + 0x40]
// 007f9c65  50                   push eax
// 007f9c66  57                   push edi
// 007f9c67  55                   push ebp
// 007f9c68  897c2448             mov dword ptr [esp + 0x48], edi
// 007f9c6c  e80ffdffff           call 0x7f9980
// 007f9c71  53                   push ebx
// 007f9c72  8d4c2440             lea ecx, [esp + 0x40]
// 007f9c76  51                   push ecx
// 007f9c77  6a00                 push 0
// 007f9c79  55                   push ebp
// 007f9c7a  8bce                 mov ecx, esi
// 007f9c7c  89442444             mov dword ptr [esp + 0x44], eax
// 007f9c80  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007f9c88  e8f3fcffff           call 0x7f9980
// 007f9c8d  3b442434             cmp eax, dword ptr [esp + 0x34]
// 007f9c91  7462                 je 0x7f9cf5
// 007f9c93  85ff                 test edi, edi
// 007f9c95  7e5e                 jle 0x7f9cf5
// 007f9c97  eb07                 jmp 0x7f9ca0
// 007f9c99  8da42400000000       lea esp, [esp]
// 007f9ca0  8b542440             mov edx, dword ptr [esp + 0x40]
// 007f9ca4  8b442438             mov eax, dword ptr [esp + 0x38]
// 007f9ca8  03c2                 add eax, edx
// 007f9caa  99                   cdq 
// 007f9cab  2bc2                 sub eax, edx
// 007f9cad  53                   push ebx
// 007f9cae  8bf8                 mov edi, eax
// 007f9cb0  8d4c2440             lea ecx, [esp + 0x40]
// 007f9cb4  51                   push ecx
// 007f9cb5  d1ff                 sar edi, 1
// 007f9cb7  57                   push edi
// 007f9cb8  55                   push ebp
// 007f9cb9  8bce                 mov ecx, esi
// 007f9cbb  e8c0fcffff           call 0x7f9980
// 007f9cc0  3b442434             cmp eax, dword ptr [esp + 0x34]
// 007f9cc4  7506                 jne 0x7f9ccc
// 007f9cc6  897c2438             mov dword ptr [esp + 0x38], edi
// 007f9cca  eb0a                 jmp 0x7f9cd6
// 007f9ccc  397c2440             cmp dword ptr [esp + 0x40], edi
// 007f9cd0  7410                 je 0x7f9ce2
// 007f9cd2  897c2440             mov dword ptr [esp + 0x40], edi
// 007f9cd6  8b542438             mov edx, dword ptr [esp + 0x38]
// 007f9cda  39542440             cmp dword ptr [esp + 0x40], edx
// 007f9cde  7cc0                 jl 0x7f9ca0
// 007f9ce0  eb13                 jmp 0x7f9cf5
// 007f9ce2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007f9ce6  53                   push ebx
// 007f9ce7  8d442440             lea eax, [esp + 0x40]
// 007f9ceb  50                   push eax
// 007f9cec  51                   push ecx
// 007f9ced  55                   push ebp
// 007f9cee  8bce                 mov ecx, esi
// 007f9cf0  e88bfcffff           call 0x7f9980
// 007f9cf5  6a00                 push 0
// 007f9cf7  53                   push ebx
// 007f9cf8  55                   push ebp
// 007f9cf9  8d542424             lea edx, [esp + 0x24]
// 007f9cfd  52                   push edx
// 007f9cfe  8bce                 mov ecx, esi
// 007f9d00  e8dbfaffff           call 0x7f97e0
// 007f9d05  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f9d09  53                   push ebx
// 007f9d0a  8d442440             lea eax, [esp + 0x40]
// 007f9d0e  50                   push eax
// 007f9d0f  51                   push ecx
// 007f9d10  55                   push ebp
// 007f9d11  8bce                 mov ecx, esi
// 007f9d13  e868fcffff           call 0x7f9980
// 007f9d18  5f                   pop edi
// 007f9d19  5e                   pop esi
// 007f9d1a  5d                   pop ebp
// 007f9d1b  5b                   pop ebx
// 007f9d1c  83c420               add esp, 0x20
// 007f9d1f  c21000               ret 0x10
// 007f9d22  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 007f9d26  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007f9d2a  57                   push edi
// 007f9d2b  8d542440             lea edx, [esp + 0x40]
// 007f9d2f  52                   push edx
// 007f9d30  6a00                 push 0
// 007f9d32  53                   push ebx
// 007f9d33  e848fcffff           call 0x7f9980
// 007f9d38  6a00                 push 0
// 007f9d3a  57                   push edi
// 007f9d3b  53                   push ebx
// 007f9d3c  8d442424             lea eax, [esp + 0x24]
// 007f9d40  50                   push eax
// 007f9d41  8bce                 mov ecx, esi
// 007f9d43  e898faffff           call 0x7f97e0
// 007f9d48  8b4804               mov ecx, dword ptr [eax + 4]
// 007f9d4b  8b28                 mov ebp, dword ptr [eax]
// 007f9d4d  57                   push edi
// 007f9d4e  8d542440             lea edx, [esp + 0x40]
// 007f9d52  52                   push edx
// 007f9d53  68ff7f0000           push 0x7fff
// 007f9d58  894c2428             mov dword ptr [esp + 0x28], ecx
// 007f9d5c  53                   push ebx
// 007f9d5d  8bce                 mov ecx, esi
// 007f9d5f  e81cfcffff           call 0x7f9980
// 007f9d64  6a00                 push 0
// 007f9d66  57                   push edi
// 007f9d67  53                   push ebx
// 007f9d68  8d44242c             lea eax, [esp + 0x2c]
// 007f9d6c  50                   push eax
// 007f9d6d  8bce                 mov ecx, esi
// 007f9d6f  e86cfaffff           call 0x7f97e0
// 007f9d74  8b08                 mov ecx, dword ptr [eax]
// 007f9d76  3be9                 cmp ebp, ecx
// 007f9d78  8b5004               mov edx, dword ptr [eax + 4]
// 007f9d7b  894c2410             mov dword ptr [esp + 0x10], ecx
// 007f9d7f  89542414             mov dword ptr [esp + 0x14], edx
// 007f9d83  7d7f                 jge 0x7f9e04
// 007f9d85  57                   push edi
// 007f9d86  8d442440             lea eax, [esp + 0x40]
// 007f9d8a  50                   push eax
// 007f9d8b  8d0429               lea eax, [ecx + ebp]
// 007f9d8e  99                   cdq 
// 007f9d8f  2bc2                 sub eax, edx
// 007f9d91  d1f8                 sar eax, 1
// 007f9d93  50                   push eax
// 007f9d94  53                   push ebx
// 007f9d95  8bce                 mov ecx, esi
// 007f9d97  e8e4fbffff           call 0x7f9980
// 007f9d9c  6a00                 push 0
// 007f9d9e  57                   push edi
// 007f9d9f  53                   push ebx
// 007f9da0  8d4c242c             lea ecx, [esp + 0x2c]
// 007f9da4  51                   push ecx
// 007f9da5  8bce                 mov ecx, esi
// 007f9da7  e834faffff           call 0x7f97e0
// 007f9dac  8b10                 mov edx, dword ptr [eax]
// 007f9dae  8b4804               mov ecx, dword ptr [eax + 4]
// 007f9db1  89542428             mov dword ptr [esp + 0x28], edx
// 007f9db5  8b542438             mov edx, dword ptr [esp + 0x38]
// 007f9db9  3bd1                 cmp edx, ecx
// 007f9dbb  7d19                 jge 0x7f9dd6
// 007f9dbd  8b08                 mov ecx, dword ptr [eax]
// 007f9dbf  8b5004               mov edx, dword ptr [eax + 4]
// 007f9dc2  3be9                 cmp ebp, ecx
// 007f9dc4  7506                 jne 0x7f9dcc
// 007f9dc6  3954241c             cmp dword ptr [esp + 0x1c], edx
// 007f9dca  7425                 je 0x7f9df1
// 007f9dcc  8bc2                 mov eax, edx
// 007f9dce  8be9                 mov ebp, ecx
// 007f9dd0  8944241c             mov dword ptr [esp + 0x1c], eax
// 007f9dd4  eb0f                 jmp 0x7f9de5
// 007f9dd6  7e2c                 jle 0x7f9e04
// 007f9dd8  8b08                 mov ecx, dword ptr [eax]
// 007f9dda  8b5004               mov edx, dword ptr [eax + 4]
// 007f9ddd  894c2410             mov dword ptr [esp + 0x10], ecx
// 007f9de1  89542414             mov dword ptr [esp + 0x14], edx
// 007f9de5  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 007f9de9  7d19                 jge 0x7f9e04
// 007f9deb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f9def  eb94                 jmp 0x7f9d85
// 007f9df1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f9df5  57                   push edi
// 007f9df6  8d442440             lea eax, [esp + 0x40]
// 007f9dfa  50                   push eax
// 007f9dfb  51                   push ecx
// 007f9dfc  53                   push ebx
// 007f9dfd  8bce                 mov ecx, esi
// 007f9dff  e87cfbffff           call 0x7f9980
// 007f9e04  5f                   pop edi
// 007f9e05  5e                   pop esi
// 007f9e06  5d                   pop ebp
// 007f9e07  5b                   pop ebx
// 007f9e08  83c420               add esp, 0x20
// 007f9e0b  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizeFloatableBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
