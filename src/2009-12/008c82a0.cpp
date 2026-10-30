// roc 2009-12 008c82a0  unit: VCEdit::?$CXTMaskEditT  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c82a0
//
// 008c82a0  8b442404             mov eax, dword ptr [esp + 4]
// 008c82a4  53                   push ebx
// 008c82a5  55                   push ebp
// 008c82a6  56                   push esi
// 008c82a7  8bf1                 mov esi, ecx
// 008c82a9  57                   push edi
// 008c82aa  8d7e70               lea edi, [esi + 0x70]
// 008c82ad  50                   push eax
// 008c82ae  8bcf                 mov ecx, edi
// 008c82b0  ff155cde9800         call dword ptr [0x98de5c]
// 008c82b6  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008c82ba  8dae84000000         lea ebp, [esi + 0x84]
// 008c82c0  53                   push ebx
// 008c82c1  8bcd                 mov ecx, ebp
// 008c82c3  ff155cde9800         call dword ptr [0x98de5c]
// 008c82c9  8bcd                 mov ecx, ebp
// 008c82cb  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c82d1  8bcf                 mov ecx, edi
// 008c82d3  89442414             mov dword ptr [esp + 0x14], eax
// 008c82d7  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c82dd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c82e1  3bc1                 cmp eax, ecx
// 008c82e3  7409                 je 0x8c82ee
// 008c82e5  5f                   pop edi
// 008c82e6  5e                   pop esi
// 008c82e7  5d                   pop ebp
// 008c82e8  33c0                 xor eax, eax
// 008c82ea  5b                   pop ebx
// 008c82eb  c20c00               ret 0xc
// 008c82ee  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008c82f2  8dbe80000000         lea edi, [esi + 0x80]
// 008c82f8  85c0                 test eax, eax
// 008c82fa  750f                 jne 0x8c830b
// 008c82fc  53                   push ebx
// 008c82fd  8d4e74               lea ecx, [esi + 0x74]
// 008c8300  ff155cde9800         call dword ptr [0x98de5c]
// 008c8306  50                   push eax
// 008c8307  8bcf                 mov ecx, edi
// 008c8309  eb48                 jmp 0x8c8353
// 008c830b  8d5e74               lea ebx, [esi + 0x74]
// 008c830e  50                   push eax
// 008c830f  8bcb                 mov ecx, ebx
// 008c8311  ff155cde9800         call dword ptr [0x98de5c]
// 008c8317  50                   push eax
// 008c8318  8bcf                 mov ecx, edi
// 008c831a  ff1538d59800         call dword ptr [0x98d538]
// 008c8320  8bcb                 mov ecx, ebx
// 008c8322  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c8328  8bcd                 mov ecx, ebp
// 008c832a  89442414             mov dword ptr [esp + 0x14], eax
// 008c832e  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c8334  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c8338  3bc8                 cmp ecx, eax
// 008c833a  741d                 je 0x8c8359
// 008c833c  6a00                 push 0
// 008c833e  6a00                 push 0
// 008c8340  8bcb                 mov ecx, ebx
// 008c8342  ff1580de9800         call dword ptr [0x98de80]
// 008c8348  50                   push eax
// 008c8349  8bce                 mov ecx, esi
// 008c834b  e870f8ffff           call 0x8c7bc0
// 008c8350  57                   push edi
// 008c8351  8bcb                 mov ecx, ebx
// 008c8353  ff1538d59800         call dword ptr [0x98d538]
// 008c8359  33c0                 xor eax, eax
// 008c835b  8bcf                 mov ecx, edi
// 008c835d  894664               mov dword ptr [esi + 0x64], eax
// 008c8360  894668               mov dword ptr [esi + 0x68], eax
// 008c8363  ff1580de9800         call dword ptr [0x98de80]
// 008c8369  50                   push eax
// 008c836a  8bce                 mov ecx, esi
// 008c836c  e8a3b8f2ff           call 0x7f3c14
// 008c8371  57                   push edi
// 008c8372  8d4e78               lea ecx, [esi + 0x78]
// 008c8375  ff1538d59800         call dword ptr [0x98d538]
// 008c837b  5f                   pop edi
// 008c837c  5e                   pop esi
// 008c837d  5d                   pop ebp
// 008c837e  b801000000           mov eax, 1
// 008c8383  5b                   pop ebx
// 008c8384  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetEditMask@?$CXTMaskEditT@VCEdit@@@@UAEHPBD00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp