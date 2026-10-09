// roc 2009-12 00845ba0  unit: CXTPControls  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845ba0
//
// 00845ba0  83ec20               sub esp, 0x20
// 00845ba3  f644242c20           test byte ptr [esp + 0x2c], 0x20
// 00845ba8  53                   push ebx
// 00845ba9  55                   push ebp
// 00845baa  56                   push esi
// 00845bab  57                   push edi
// 00845bac  8bf1                 mov esi, ecx
// 00845bae  0f85ce000000         jne 0x845c82
// 00845bb4  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00845bb8  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00845bbc  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00845bc0  53                   push ebx
// 00845bc1  8d442440             lea eax, [esp + 0x40]
// 00845bc5  50                   push eax
// 00845bc6  57                   push edi
// 00845bc7  55                   push ebp
// 00845bc8  897c2448             mov dword ptr [esp + 0x48], edi
// 00845bcc  e80ffdffff           call 0x8458e0
// 00845bd1  53                   push ebx
// 00845bd2  8d4c2440             lea ecx, [esp + 0x40]
// 00845bd6  51                   push ecx
// 00845bd7  6a00                 push 0
// 00845bd9  55                   push ebp
// 00845bda  8bce                 mov ecx, esi
// 00845bdc  89442444             mov dword ptr [esp + 0x44], eax
// 00845be0  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00845be8  e8f3fcffff           call 0x8458e0
// 00845bed  3b442434             cmp eax, dword ptr [esp + 0x34]
// 00845bf1  7462                 je 0x845c55
// 00845bf3  85ff                 test edi, edi
// 00845bf5  7e5e                 jle 0x845c55
// 00845bf7  eb07                 jmp 0x845c00
// 00845bf9  8da42400000000       lea esp, [esp]
// 00845c00  8b542440             mov edx, dword ptr [esp + 0x40]
// 00845c04  8b442438             mov eax, dword ptr [esp + 0x38]
// 00845c08  03c2                 add eax, edx
// 00845c0a  99                   cdq 
// 00845c0b  2bc2                 sub eax, edx
// 00845c0d  53                   push ebx
// 00845c0e  8bf8                 mov edi, eax
// 00845c10  8d4c2440             lea ecx, [esp + 0x40]
// 00845c14  51                   push ecx
// 00845c15  d1ff                 sar edi, 1
// 00845c17  57                   push edi
// 00845c18  55                   push ebp
// 00845c19  8bce                 mov ecx, esi
// 00845c1b  e8c0fcffff           call 0x8458e0
// 00845c20  3b442434             cmp eax, dword ptr [esp + 0x34]
// 00845c24  7506                 jne 0x845c2c
// 00845c26  897c2438             mov dword ptr [esp + 0x38], edi
// 00845c2a  eb0a                 jmp 0x845c36
// 00845c2c  397c2440             cmp dword ptr [esp + 0x40], edi
// 00845c30  7410                 je 0x845c42
// 00845c32  897c2440             mov dword ptr [esp + 0x40], edi
// 00845c36  8b542438             mov edx, dword ptr [esp + 0x38]
// 00845c3a  39542440             cmp dword ptr [esp + 0x40], edx
// 00845c3e  7cc0                 jl 0x845c00
// 00845c40  eb13                 jmp 0x845c55
// 00845c42  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00845c46  53                   push ebx
// 00845c47  8d442440             lea eax, [esp + 0x40]
// 00845c4b  50                   push eax
// 00845c4c  51                   push ecx
// 00845c4d  55                   push ebp
// 00845c4e  8bce                 mov ecx, esi
// 00845c50  e88bfcffff           call 0x8458e0
// 00845c55  6a00                 push 0
// 00845c57  53                   push ebx
// 00845c58  55                   push ebp
// 00845c59  8d542424             lea edx, [esp + 0x24]
// 00845c5d  52                   push edx
// 00845c5e  8bce                 mov ecx, esi
// 00845c60  e8dbfaffff           call 0x845740
// 00845c65  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00845c69  53                   push ebx
// 00845c6a  8d442440             lea eax, [esp + 0x40]
// 00845c6e  50                   push eax
// 00845c6f  51                   push ecx
// 00845c70  55                   push ebp
// 00845c71  8bce                 mov ecx, esi
// 00845c73  e868fcffff           call 0x8458e0
// 00845c78  5f                   pop edi
// 00845c79  5e                   pop esi
// 00845c7a  5d                   pop ebp
// 00845c7b  5b                   pop ebx
// 00845c7c  83c420               add esp, 0x20
// 00845c7f  c21000               ret 0x10
// 00845c82  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00845c86  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00845c8a  57                   push edi
// 00845c8b  8d542440             lea edx, [esp + 0x40]
// 00845c8f  52                   push edx
// 00845c90  6a00                 push 0
// 00845c92  53                   push ebx
// 00845c93  e848fcffff           call 0x8458e0
// 00845c98  6a00                 push 0
// 00845c9a  57                   push edi
// 00845c9b  53                   push ebx
// 00845c9c  8d442424             lea eax, [esp + 0x24]
// 00845ca0  50                   push eax
// 00845ca1  8bce                 mov ecx, esi
// 00845ca3  e898faffff           call 0x845740
// 00845ca8  8b4804               mov ecx, dword ptr [eax + 4]
// 00845cab  8b28                 mov ebp, dword ptr [eax]
// 00845cad  57                   push edi
// 00845cae  8d542440             lea edx, [esp + 0x40]
// 00845cb2  52                   push edx
// 00845cb3  68ff7f0000           push 0x7fff
// 00845cb8  894c2428             mov dword ptr [esp + 0x28], ecx
// 00845cbc  53                   push ebx
// 00845cbd  8bce                 mov ecx, esi
// 00845cbf  e81cfcffff           call 0x8458e0
// 00845cc4  6a00                 push 0
// 00845cc6  57                   push edi
// 00845cc7  53                   push ebx
// 00845cc8  8d44242c             lea eax, [esp + 0x2c]
// 00845ccc  50                   push eax
// 00845ccd  8bce                 mov ecx, esi
// 00845ccf  e86cfaffff           call 0x845740
// 00845cd4  8b08                 mov ecx, dword ptr [eax]
// 00845cd6  3be9                 cmp ebp, ecx
// 00845cd8  8b5004               mov edx, dword ptr [eax + 4]
// 00845cdb  894c2410             mov dword ptr [esp + 0x10], ecx
// 00845cdf  89542414             mov dword ptr [esp + 0x14], edx
// 00845ce3  7d7f                 jge 0x845d64
// 00845ce5  57                   push edi
// 00845ce6  8d442440             lea eax, [esp + 0x40]
// 00845cea  50                   push eax
// 00845ceb  8d0429               lea eax, [ecx + ebp]
// 00845cee  99                   cdq 
// 00845cef  2bc2                 sub eax, edx
// 00845cf1  d1f8                 sar eax, 1
// 00845cf3  50                   push eax
// 00845cf4  53                   push ebx
// 00845cf5  8bce                 mov ecx, esi
// 00845cf7  e8e4fbffff           call 0x8458e0
// 00845cfc  6a00                 push 0
// 00845cfe  57                   push edi
// 00845cff  53                   push ebx
// 00845d00  8d4c242c             lea ecx, [esp + 0x2c]
// 00845d04  51                   push ecx
// 00845d05  8bce                 mov ecx, esi
// 00845d07  e834faffff           call 0x845740
// 00845d0c  8b10                 mov edx, dword ptr [eax]
// 00845d0e  8b4804               mov ecx, dword ptr [eax + 4]
// 00845d11  89542428             mov dword ptr [esp + 0x28], edx
// 00845d15  8b542438             mov edx, dword ptr [esp + 0x38]
// 00845d19  3bd1                 cmp edx, ecx
// 00845d1b  7d19                 jge 0x845d36
// 00845d1d  8b08                 mov ecx, dword ptr [eax]
// 00845d1f  8b5004               mov edx, dword ptr [eax + 4]
// 00845d22  3be9                 cmp ebp, ecx
// 00845d24  7506                 jne 0x845d2c
// 00845d26  3954241c             cmp dword ptr [esp + 0x1c], edx
// 00845d2a  7425                 je 0x845d51
// 00845d2c  8bc2                 mov eax, edx
// 00845d2e  8be9                 mov ebp, ecx
// 00845d30  8944241c             mov dword ptr [esp + 0x1c], eax
// 00845d34  eb0f                 jmp 0x845d45
// 00845d36  7e2c                 jle 0x845d64
// 00845d38  8b08                 mov ecx, dword ptr [eax]
// 00845d3a  8b5004               mov edx, dword ptr [eax + 4]
// 00845d3d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00845d41  89542414             mov dword ptr [esp + 0x14], edx
// 00845d45  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 00845d49  7d19                 jge 0x845d64
// 00845d4b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00845d4f  eb94                 jmp 0x845ce5
// 00845d51  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00845d55  57                   push edi
// 00845d56  8d442440             lea eax, [esp + 0x40]
// 00845d5a  50                   push eax
// 00845d5b  51                   push ecx
// 00845d5c  53                   push ebx
// 00845d5d  8bce                 mov ecx, esi
// 00845d5f  e87cfbffff           call 0x8458e0
// 00845d64  5f                   pop edi
// 00845d65  5e                   pop esi
// 00845d66  5d                   pop ebp
// 00845d67  5b                   pop ebx
// 00845d68  83c420               add esp, 0x20
// 00845d6b  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizeFloatableBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
