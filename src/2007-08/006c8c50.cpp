// from server: 100% by auto
// roc 2007-08 006c8c50  unit: CXTPControlEditCtrl  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c8c50
//
// 006c8c50  53                   push ebx
// 006c8c51  56                   push esi
// 006c8c52  57                   push edi
// 006c8c53  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006c8c57  33db                 xor ebx, ebx
// 006c8c59  3bfb                 cmp edi, ebx
// 006c8c5b  8bf1                 mov esi, ecx
// 006c8c5d  7d05                 jge 0x6c8c64
// 006c8c5f  e8bc72f6ff           call 0x62ff20
// 006c8c64  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c8c68  3bc3                 cmp eax, ebx
// 006c8c6a  7c03                 jl 0x6c8c6f
// 006c8c6c  894610               mov dword ptr [esi + 0x10], eax
// 006c8c6f  3bfb                 cmp edi, ebx
// 006c8c71  751f                 jne 0x6c8c92
// 006c8c73  8b4604               mov eax, dword ptr [esi + 4]
// 006c8c76  3bc3                 cmp eax, ebx
// 006c8c78  740c                 je 0x6c8c86
// 006c8c7a  50                   push eax
// 006c8c7b  e8a672f6ff           call 0x62ff26
// 006c8c80  83c404               add esp, 4
// 006c8c83  895e04               mov dword ptr [esi + 4], ebx
// 006c8c86  5f                   pop edi
// 006c8c87  895e0c               mov dword ptr [esi + 0xc], ebx
// 006c8c8a  895e08               mov dword ptr [esi + 8], ebx
// 006c8c8d  5e                   pop esi
// 006c8c8e  5b                   pop ebx
// 006c8c8f  c20800               ret 8
// 006c8c92  8b4e04               mov ecx, dword ptr [esi + 4]
// 006c8c95  3bcb                 cmp ecx, ebx
// 006c8c97  55                   push ebp
// 006c8c98  7530                 jne 0x6c8cca
// 006c8c9a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 006c8c9d  3bfd                 cmp edi, ebp
// 006c8c9f  7e02                 jle 0x6c8ca3
// 006c8ca1  8bef                 mov ebp, edi
// 006c8ca3  8bdd                 mov ebx, ebp
// 006c8ca5  c1e304               shl ebx, 4
// 006c8ca8  53                   push ebx
// 006c8ca9  e88472f6ff           call 0x62ff32
// 006c8cae  53                   push ebx
// 006c8caf  6a00                 push 0
// 006c8cb1  50                   push eax
// 006c8cb2  894604               mov dword ptr [esi + 4], eax
// 006c8cb5  e8d27ef6ff           call 0x630b8c
// 006c8cba  83c410               add esp, 0x10
// 006c8cbd  896e0c               mov dword ptr [esi + 0xc], ebp
// 006c8cc0  5d                   pop ebp
// 006c8cc1  897e08               mov dword ptr [esi + 8], edi
// 006c8cc4  5f                   pop edi
// 006c8cc5  5e                   pop esi
// 006c8cc6  5b                   pop ebx
// 006c8cc7  c20800               ret 8
// 006c8cca  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 006c8ccd  3bfd                 cmp edi, ebp
// 006c8ccf  7f2c                 jg 0x6c8cfd
// 006c8cd1  8b4608               mov eax, dword ptr [esi + 8]
// 006c8cd4  3bf8                 cmp edi, eax
// 006c8cd6  0f8eb3000000         jle 0x6c8d8f
// 006c8cdc  8bd7                 mov edx, edi
// 006c8cde  2bd0                 sub edx, eax
// 006c8ce0  c1e204               shl edx, 4
// 006c8ce3  52                   push edx
// 006c8ce4  c1e004               shl eax, 4
// 006c8ce7  03c1                 add eax, ecx
// 006c8ce9  53                   push ebx
// 006c8cea  50                   push eax
// 006c8ceb  e89c7ef6ff           call 0x630b8c
// 006c8cf0  83c40c               add esp, 0xc
// 006c8cf3  5d                   pop ebp
// 006c8cf4  897e08               mov dword ptr [esi + 8], edi
// 006c8cf7  5f                   pop edi
// 006c8cf8  5e                   pop esi
// 006c8cf9  5b                   pop ebx
// 006c8cfa  c20800               ret 8
// 006c8cfd  8b4610               mov eax, dword ptr [esi + 0x10]
// 006c8d00  3bc3                 cmp eax, ebx
// 006c8d02  7524                 jne 0x6c8d28
// 006c8d04  8b4608               mov eax, dword ptr [esi + 8]
// 006c8d07  99                   cdq 
// 006c8d08  83e207               and edx, 7
// 006c8d0b  03c2                 add eax, edx
// 006c8d0d  c1f803               sar eax, 3
// 006c8d10  83f804               cmp eax, 4
// 006c8d13  7d07                 jge 0x6c8d1c
// 006c8d15  b804000000           mov eax, 4
// 006c8d1a  eb0c                 jmp 0x6c8d28
// 006c8d1c  3d00040000           cmp eax, 0x400
// 006c8d21  7e05                 jle 0x6c8d28
// 006c8d23  b800040000           mov eax, 0x400
// 006c8d28  8d1c28               lea ebx, [eax + ebp]
// 006c8d2b  3bfb                 cmp edi, ebx
// 006c8d2d  7d06                 jge 0x6c8d35
// 006c8d2f  895c2414             mov dword ptr [esp + 0x14], ebx
// 006c8d33  eb06                 jmp 0x6c8d3b
// 006c8d35  897c2414             mov dword ptr [esp + 0x14], edi
// 006c8d39  8bdf                 mov ebx, edi
// 006c8d3b  3bdd                 cmp ebx, ebp
// 006c8d3d  7d05                 jge 0x6c8d44
// 006c8d3f  e8dc71f6ff           call 0x62ff20
// 006c8d44  c1e304               shl ebx, 4
// 006c8d47  53                   push ebx
// 006c8d48  e8e571f6ff           call 0x62ff32
// 006c8d4d  8b4e04               mov ecx, dword ptr [esi + 4]
// 006c8d50  8be8                 mov ebp, eax
// 006c8d52  8b4608               mov eax, dword ptr [esi + 8]
// 006c8d55  c1e004               shl eax, 4
// 006c8d58  50                   push eax
// 006c8d59  51                   push ecx
// 006c8d5a  53                   push ebx
// 006c8d5b  55                   push ebp
// 006c8d5c  e81f8bd3ff           call 0x401880
// 006c8d61  8b4608               mov eax, dword ptr [esi + 8]
// 006c8d64  8bd7                 mov edx, edi
// 006c8d66  2bd0                 sub edx, eax
// 006c8d68  c1e204               shl edx, 4
// 006c8d6b  52                   push edx
// 006c8d6c  c1e004               shl eax, 4
// 006c8d6f  03c5                 add eax, ebp
// 006c8d71  6a00                 push 0
// 006c8d73  50                   push eax
// 006c8d74  e8137ef6ff           call 0x630b8c
// 006c8d79  8b4604               mov eax, dword ptr [esi + 4]
// 006c8d7c  50                   push eax
// 006c8d7d  e8a471f6ff           call 0x62ff26
// 006c8d82  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006c8d86  83c424               add esp, 0x24
// 006c8d89  896e04               mov dword ptr [esi + 4], ebp
// 006c8d8c  894e0c               mov dword ptr [esi + 0xc], ecx
// 006c8d8f  5d                   pop ebp
// 006c8d90  897e08               mov dword ptr [esi + 8], edi
// 006c8d93  5f                   pop edi
// 006c8d94  5e                   pop esi
// 006c8d95  5b                   pop ebx
// 006c8d96  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?SetSize@?$CArray@UtagRECT@@AAU1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBarAnimation.cpp
