// roc 2009-12 007f6bd0  unit: CRobloxControlColorSelector  size: 977 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6bd0
//
// 007f6bd0  8b442408             mov eax, dword ptr [esp + 8]
// 007f6bd4  83ec44               sub esp, 0x44
// 007f6bd7  53                   push ebx
// 007f6bd8  55                   push ebp
// 007f6bd9  56                   push esi
// 007f6bda  57                   push edi
// 007f6bdb  8bf1                 mov esi, ecx
// 007f6bdd  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007f6be1  50                   push eax
// 007f6be2  51                   push ecx
// 007f6be3  8dbec0000000         lea edi, [esi + 0xc0]
// 007f6be9  57                   push edi
// 007f6bea  ff155cca9800         call dword ptr [0x98ca5c]
// 007f6bf0  85c0                 test eax, eax
// 007f6bf2  0f849d030000         je 0x7f6f95
// 007f6bf8  8b442458             mov eax, dword ptr [esp + 0x58]
// 007f6bfc  8bd0                 mov edx, eax
// 007f6bfe  2b17                 sub edx, dword ptr [edi]
// 007f6c00  83fa02               cmp edx, 2
// 007f6c03  7e11                 jle 0x7f6c16
// 007f6c05  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 007f6c0b  2bc8                 sub ecx, eax
// 007f6c0d  83f902               cmp ecx, 2
// 007f6c10  0f8f7f030000         jg 0x7f6f95
// 007f6c16  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f6c1c  e8afd80000           call 0x8044d0
// 007f6c21  c7405800000000       mov dword ptr [eax + 0x58], 0
// 007f6c28  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f6c2e  8b11                 mov edx, dword ptr [ecx]
// 007f6c30  6a01                 push 1
// 007f6c32  89442428             mov dword ptr [esp + 0x28], eax
// 007f6c36  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 007f6c3c  6a00                 push 0
// 007f6c3e  ffd0                 call eax
// 007f6c40  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f6c46  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007f6c49  52                   push edx
// 007f6c4a  ff15a4ca9800         call dword ptr [0x98caa4]
// 007f6c50  8b4f04               mov ecx, dword ptr [edi + 4]
// 007f6c53  8b07                 mov eax, dword ptr [edi]
// 007f6c55  8b5708               mov edx, dword ptr [edi + 8]
// 007f6c58  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007f6c5c  8d4c2428             lea ecx, [esp + 0x28]
// 007f6c60  89442428             mov dword ptr [esp + 0x28], eax
// 007f6c64  8b470c               mov eax, dword ptr [edi + 0xc]
// 007f6c67  51                   push ecx
// 007f6c68  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f6c6e  89542434             mov dword ptr [esp + 0x34], edx
// 007f6c72  89442438             mov dword ptr [esp + 0x38], eax
// 007f6c76  e87fd1ffff           call 0x7f3dfa
// 007f6c7b  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007f6c81  8b5020               mov edx, dword ptr [eax + 0x20]
// 007f6c84  52                   push edx
// 007f6c85  ff152ccc9800         call dword ptr [0x98cc2c]
// 007f6c8b  50                   push eax
// 007f6c8c  e899ceffff           call 0x7f3b2a
// 007f6c91  e80a7c0700           call 0x86e8a0
// 007f6c96  8b10                 mov edx, dword ptr [eax]
// 007f6c98  8bc8                 mov ecx, eax
// 007f6c9a  8b4218               mov eax, dword ptr [edx + 0x18]
// 007f6c9d  68f4260000           push 0x26f4
// 007f6ca2  ffd0                 call eax
// 007f6ca4  50                   push eax
// 007f6ca5  ff1520ca9800         call dword ptr [0x98ca20]
// 007f6cab  ff15e4cb9800         call dword ptr [0x98cbe4]
// 007f6cb1  50                   push eax
// 007f6cb2  e873ceffff           call 0x7f3b2a
// 007f6cb7  8bd8                 mov ebx, eax
// 007f6cb9  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007f6cbc  51                   push ecx
// 007f6cbd  895c2424             mov dword ptr [esp + 0x24], ebx
// 007f6cc1  ff15acca9800         call dword ptr [0x98caac]
// 007f6cc7  85c0                 test eax, eax
// 007f6cc9  740d                 je 0x7f6cd8
// 007f6ccb  8b5320               mov edx, dword ptr [ebx + 0x20]
// 007f6cce  6803040000           push 0x403
// 007f6cd3  6a00                 push 0
// 007f6cd5  52                   push edx
// 007f6cd6  eb08                 jmp 0x7f6ce0
// 007f6cd8  8b4320               mov eax, dword ptr [ebx + 0x20]
// 007f6cdb  6a03                 push 3
// 007f6cdd  6a00                 push 0
// 007f6cdf  50                   push eax
// 007f6ce0  ff15a8ca9800         call dword ptr [0x98caa8]
// 007f6ce6  50                   push eax
// 007f6ce7  e844f71200           call 0x926430
// 007f6cec  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007f6cf0  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007f6cf4  83ec10               sub esp, 0x10
// 007f6cf7  8be8                 mov ebp, eax
// 007f6cf9  8bc4                 mov eax, esp
// 007f6cfb  8908                 mov dword ptr [eax], ecx
// 007f6cfd  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007f6d01  895004               mov dword ptr [eax + 4], edx
// 007f6d04  8b542444             mov edx, dword ptr [esp + 0x44]
// 007f6d08  894808               mov dword ptr [eax + 8], ecx
// 007f6d0b  55                   push ebp
// 007f6d0c  8bce                 mov ecx, esi
// 007f6d0e  89500c               mov dword ptr [eax + 0xc], edx
// 007f6d11  e87afdffff           call 0x7f6a90
// 007f6d16  8b06                 mov eax, dword ptr [esi]
// 007f6d18  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 007f6d1e  8bce                 mov ecx, esi
// 007f6d20  ffd2                 call edx
// 007f6d22  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007f6d26  89442418             mov dword ptr [esp + 0x18], eax
// 007f6d2a  8b07                 mov eax, dword ptr [edi]
// 007f6d2c  8bd1                 mov edx, ecx
// 007f6d2e  2bd0                 sub edx, eax
// 007f6d30  33db                 xor ebx, ebx
// 007f6d32  83fa02               cmp edx, 2
// 007f6d35  0f9ec3               setle bl
// 007f6d38  85db                 test ebx, ebx
// 007f6d3a  740a                 je 0x7f6d46
// 007f6d3c  8d542428             lea edx, [esp + 0x28]
// 007f6d40  89542410             mov dword ptr [esp + 0x10], edx
// 007f6d44  eb0e                 jmp 0x7f6d54
// 007f6d46  8d442430             lea eax, [esp + 0x30]
// 007f6d4a  89442410             mov dword ptr [esp + 0x10], eax
// 007f6d4e  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007f6d54  8b3d28cc9800         mov edi, dword ptr [0x98cc28]
// 007f6d5a  2bc1                 sub eax, ecx
// 007f6d5c  89442414             mov dword ptr [esp + 0x14], eax
// 007f6d60  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007f6d68  ffd7                 call edi
// 007f6d6a  50                   push eax
// 007f6d6b  e8bacdffff           call 0x7f3b2a
// 007f6d70  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 007f6d76  0f852a010000         jne 0x7f6ea6
// 007f6d7c  8d642400             lea esp, [esp]
// 007f6d80  6a00                 push 0
// 007f6d82  6a00                 push 0
// 007f6d84  6a00                 push 0
// 007f6d86  8d4c2444             lea ecx, [esp + 0x44]
// 007f6d8a  51                   push ecx
// 007f6d8b  ff15b0ca9800         call dword ptr [0x98cab0]
// 007f6d91  85c0                 test eax, eax
// 007f6d93  0f840d010000         je 0x7f6ea6
// 007f6d99  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007f6d9d  3d00020000           cmp eax, 0x200
// 007f6da2  0f85b8000000         jne 0x7f6e60
// 007f6da8  8b442444             mov eax, dword ptr [esp + 0x44]
// 007f6dac  0fbfc8               movsx ecx, ax
// 007f6daf  c1e810               shr eax, 0x10
// 007f6db2  98                   cwde 
// 007f6db3  8944245c             mov dword ptr [esp + 0x5c], eax
// 007f6db7  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007f6dbd  8d542458             lea edx, [esp + 0x58]
// 007f6dc1  894c2458             mov dword ptr [esp + 0x58], ecx
// 007f6dc5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007f6dc8  52                   push edx
// 007f6dc9  51                   push ecx
// 007f6dca  ff1554cc9800         call dword ptr [0x98cc54]
// 007f6dd0  8b442458             mov eax, dword ptr [esp + 0x58]
// 007f6dd4  03442414             add eax, dword ptr [esp + 0x14]
// 007f6dd8  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f6ddc  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007f6de0  89442458             mov dword ptr [esp + 0x58], eax
// 007f6de4  85db                 test ebx, ebx
// 007f6de6  740c                 je 0x7f6df4
// 007f6de8  8bcf                 mov ecx, edi
// 007f6dea  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 007f6dee  3bc1                 cmp eax, ecx
// 007f6df0  7c12                 jl 0x7f6e04
// 007f6df2  eb0a                 jmp 0x7f6dfe
// 007f6df4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f6df8  03ca                 add ecx, edx
// 007f6dfa  3bc1                 cmp eax, ecx
// 007f6dfc  7f06                 jg 0x7f6e04
// 007f6dfe  8bc1                 mov eax, ecx
// 007f6e00  89442458             mov dword ptr [esp + 0x58], eax
// 007f6e04  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f6e08  3901                 cmp dword ptr [ecx], eax
// 007f6e0a  7476                 je 0x7f6e82
// 007f6e0c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007f6e10  83ec10               sub esp, 0x10
// 007f6e13  8bc4                 mov eax, esp
// 007f6e15  8910                 mov dword ptr [eax], edx
// 007f6e17  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007f6e1b  895004               mov dword ptr [eax + 4], edx
// 007f6e1e  897808               mov dword ptr [eax + 8], edi
// 007f6e21  89480c               mov dword ptr [eax + 0xc], ecx
// 007f6e24  55                   push ebp
// 007f6e25  8bce                 mov ecx, esi
// 007f6e27  e864fcffff           call 0x7f6a90
// 007f6e2c  8b542458             mov edx, dword ptr [esp + 0x58]
// 007f6e30  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f6e34  8910                 mov dword ptr [eax], edx
// 007f6e36  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007f6e3a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007f6e3e  83ec10               sub esp, 0x10
// 007f6e41  8bc4                 mov eax, esp
// 007f6e43  8908                 mov dword ptr [eax], ecx
// 007f6e45  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007f6e49  895004               mov dword ptr [eax + 4], edx
// 007f6e4c  8b542444             mov edx, dword ptr [esp + 0x44]
// 007f6e50  894808               mov dword ptr [eax + 8], ecx
// 007f6e53  55                   push ebp
// 007f6e54  8bce                 mov ecx, esi
// 007f6e56  89500c               mov dword ptr [eax + 0xc], edx
// 007f6e59  e832fcffff           call 0x7f6a90
// 007f6e5e  eb22                 jmp 0x7f6e82
// 007f6e60  3d00010000           cmp eax, 0x100
// 007f6e65  7509                 jne 0x7f6e70
// 007f6e67  837c24401b           cmp dword ptr [esp + 0x40], 0x1b
// 007f6e6c  7438                 je 0x7f6ea6
// 007f6e6e  eb07                 jmp 0x7f6e77
// 007f6e70  3d02020000           cmp eax, 0x202
// 007f6e75  7427                 je 0x7f6e9e
// 007f6e77  8d442438             lea eax, [esp + 0x38]
// 007f6e7b  50                   push eax
// 007f6e7c  ff1594ca9800         call dword ptr [0x98ca94]
// 007f6e82  8b3d28cc9800         mov edi, dword ptr [0x98cc28]
// 007f6e88  ffd7                 call edi
// 007f6e8a  50                   push eax
// 007f6e8b  e89accffff           call 0x7f3b2a
// 007f6e90  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 007f6e96  0f84e4feffff         je 0x7f6d80
// 007f6e9c  eb08                 jmp 0x7f6ea6
// 007f6e9e  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 007f6ea6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007f6eaa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007f6eae  83ec10               sub esp, 0x10
// 007f6eb1  8bc4                 mov eax, esp
// 007f6eb3  8908                 mov dword ptr [eax], ecx
// 007f6eb5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007f6eb9  895004               mov dword ptr [eax + 4], edx
// 007f6ebc  8b542444             mov edx, dword ptr [esp + 0x44]
// 007f6ec0  894808               mov dword ptr [eax + 8], ecx
// 007f6ec3  55                   push ebp
// 007f6ec4  8bce                 mov ecx, esi
// 007f6ec6  89500c               mov dword ptr [eax + 0xc], edx
// 007f6ec9  e8c2fbffff           call 0x7f6a90
// 007f6ece  ffd7                 call edi
// 007f6ed0  50                   push eax
// 007f6ed1  e854ccffff           call 0x7f3b2a
// 007f6ed6  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 007f6edc  7506                 jne 0x7f6ee4
// 007f6ede  ff1520cc9800         call dword ptr [0x98cc20]
// 007f6ee4  6a00                 push 0
// 007f6ee6  ff15acca9800         call dword ptr [0x98caac]
// 007f6eec  85ed                 test ebp, ebp
// 007f6eee  7412                 je 0x7f6f02
// 007f6ef0  8b4504               mov eax, dword ptr [ebp + 4]
// 007f6ef3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007f6ef7  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007f6efa  50                   push eax
// 007f6efb  52                   push edx
// 007f6efc  ff15d8cb9800         call dword ptr [0x98cbd8]
// 007f6f02  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f6f06  897058               mov dword ptr [eax + 0x58], esi
// 007f6f09  8b442430             mov eax, dword ptr [esp + 0x30]
// 007f6f0d  2b442428             sub eax, dword ptr [esp + 0x28]
// 007f6f11  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007f6f16  8bf8                 mov edi, eax
// 007f6f18  7458                 je 0x7f6f72
// 007f6f1a  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 007f6f20  2b8ec0000000         sub ecx, dword ptr [esi + 0xc0]
// 007f6f26  3bc1                 cmp eax, ecx
// 007f6f28  7448                 je 0x7f6f72
// 007f6f2a  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 007f6f30  83baf800000002       cmp dword ptr [edx + 0xf8], 2
// 007f6f37  751c                 jne 0x7f6f55
// 007f6f39  8bce                 mov ecx, esi
// 007f6f3b  e800f0ffff           call 0x7f5f40
// 007f6f40  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f6f46  8b10                 mov edx, dword ptr [eax]
// 007f6f48  51                   push ecx
// 007f6f49  8bc8                 mov ecx, eax
// 007f6f4b  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 007f6f51  ffd0                 call eax
// 007f6f53  2bf8                 sub edi, eax
// 007f6f55  8b16                 mov edx, dword ptr [esi]
// 007f6f57  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 007f6f5d  57                   push edi
// 007f6f5e  8bce                 mov ecx, esi
// 007f6f60  ffd0                 call eax
// 007f6f62  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f6f68  8b11                 mov edx, dword ptr [ecx]
// 007f6f6a  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 007f6f70  ffd0                 call eax
// 007f6f72  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f6f78  8b11                 mov edx, dword ptr [ecx]
// 007f6f7a  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 007f6f80  6a01                 push 1
// 007f6f82  6a00                 push 0
// 007f6f84  ffd0                 call eax
// 007f6f86  b801000000           mov eax, 1
// 007f6f8b  5f                   pop edi
// 007f6f8c  5e                   pop esi
// 007f6f8d  5d                   pop ebp
// 007f6f8e  5b                   pop ebx
// 007f6f8f  83c444               add esp, 0x44
// 007f6f92  c20800               ret 8
// 007f6f95  5f                   pop edi
// 007f6f96  5e                   pop esi
// 007f6f97  5d                   pop ebp
// 007f6f98  33c0                 xor eax, eax
// 007f6f9a  5b                   pop ebx
// 007f6f9b  83c444               add esp, 0x44
// 007f6f9e  c20800               ret 8
// copied from an identical function in another client (function ?CustomizeStartResize@CXTPControl@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp