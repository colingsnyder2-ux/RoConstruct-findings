// from server: 100% by auto
// roc 2012-06 009a2c00  unit: PAVCXTPCommandBarKeyboardTip::?$CArray  size: 382 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2c00
//
// 009a2c00  83ec14               sub esp, 0x14
// 009a2c03  53                   push ebx
// 009a2c04  55                   push ebp
// 009a2c05  8b2df83ab200         mov ebp, dword ptr [0xb23af8]
// 009a2c0b  56                   push esi
// 009a2c0c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009a2c10  57                   push edi
// 009a2c11  894c2410             mov dword ptr [esp + 0x10], ecx
// 009a2c15  85f6                 test esi, esi
// 009a2c17  0f8486000000         je 0x9a2ca3
// 009a2c1d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009a2c20  8d442414             lea eax, [esp + 0x14]
// 009a2c24  50                   push eax
// 009a2c25  51                   push ecx
// 009a2c26  ffd5                 call ebp
// 009a2c28  8b4654               mov eax, dword ptr [esi + 0x54]
// 009a2c2b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 009a2c2f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009a2c33  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 009a2c37  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009a2c3b  a900a00000           test eax, 0xa000
// 009a2c40  7436                 je 0x9a2c78
// 009a2c42  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 009a2c46  83c5ec               add ebp, -0x14
// 009a2c49  3bea                 cmp ebp, edx
// 009a2c4b  7d25                 jge 0x9a2c72
// 009a2c4d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 009a2c51  83c514               add ebp, 0x14
// 009a2c54  3bea                 cmp ebp, edx
// 009a2c56  7e1a                 jle 0x9a2c72
// 009a2c58  8d6fec               lea ebp, [edi - 0x14]
// 009a2c5b  3be9                 cmp ebp, ecx
// 009a2c5d  7d13                 jge 0x9a2c72
// 009a2c5f  8d6b14               lea ebp, [ebx + 0x14]
// 009a2c62  3be9                 cmp ebp, ecx
// 009a2c64  7e0c                 jle 0x9a2c72
// 009a2c66  5f                   pop edi
// 009a2c67  8bc6                 mov eax, esi
// 009a2c69  5e                   pop esi
// 009a2c6a  5d                   pop ebp
// 009a2c6b  5b                   pop ebx
// 009a2c6c  83c414               add esp, 0x14
// 009a2c6f  c20c00               ret 0xc
// 009a2c72  8b2df83ab200         mov ebp, dword ptr [0xb23af8]
// 009a2c78  a900500000           test eax, 0x5000
// 009a2c7d  7424                 je 0x9a2ca3
// 009a2c7f  83c7ec               add edi, -0x14
// 009a2c82  3bf9                 cmp edi, ecx
// 009a2c84  7d1d                 jge 0x9a2ca3
// 009a2c86  83c314               add ebx, 0x14
// 009a2c89  3bd9                 cmp ebx, ecx
// 009a2c8b  7e16                 jle 0x9a2ca3
// 009a2c8d  8b442418             mov eax, dword ptr [esp + 0x18]
// 009a2c91  83c0ec               add eax, -0x14
// 009a2c94  3bc2                 cmp eax, edx
// 009a2c96  7d0b                 jge 0x9a2ca3
// 009a2c98  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009a2c9c  83c114               add ecx, 0x14
// 009a2c9f  3bca                 cmp ecx, edx
// 009a2ca1  7fc3                 jg 0x9a2c66
// 009a2ca3  8b742410             mov esi, dword ptr [esp + 0x10]
// 009a2ca7  33db                 xor ebx, ebx
// 009a2ca9  895c2430             mov dword ptr [esp + 0x30], ebx
// 009a2cad  81c690000000         add esi, 0x90
// 009a2cb3  8b06                 mov eax, dword ptr [esi]
// 009a2cb5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009a2cb8  8d542414             lea edx, [esp + 0x14]
// 009a2cbc  52                   push edx
// 009a2cbd  51                   push ecx
// 009a2cbe  ffd5                 call ebp
// 009a2cc0  8b16                 mov edx, dword ptr [esi]
// 009a2cc2  8b4254               mov eax, dword ptr [edx + 0x54]
// 009a2cc5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 009a2cc9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009a2ccd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009a2cd1  a900a00000           test eax, 0xa000
// 009a2cd6  742c                 je 0x9a2d04
// 009a2cd8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009a2cdc  83c3ec               add ebx, -0x14
// 009a2cdf  3bda                 cmp ebx, edx
// 009a2ce1  7d1d                 jge 0x9a2d00
// 009a2ce3  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 009a2ce7  83c314               add ebx, 0x14
// 009a2cea  3bda                 cmp ebx, edx
// 009a2cec  7e12                 jle 0x9a2d00
// 009a2cee  8d5fec               lea ebx, [edi - 0x14]
// 009a2cf1  3bd9                 cmp ebx, ecx
// 009a2cf3  7d0b                 jge 0x9a2d00
// 009a2cf5  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 009a2cf9  83c314               add ebx, 0x14
// 009a2cfc  3bd9                 cmp ebx, ecx
// 009a2cfe  7f50                 jg 0x9a2d50
// 009a2d00  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 009a2d04  a900500000           test eax, 0x5000
// 009a2d09  7428                 je 0x9a2d33
// 009a2d0b  83c7ec               add edi, -0x14
// 009a2d0e  3bf9                 cmp edi, ecx
// 009a2d10  7d21                 jge 0x9a2d33
// 009a2d12  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009a2d16  83c014               add eax, 0x14
// 009a2d19  3bc1                 cmp eax, ecx
// 009a2d1b  7e16                 jle 0x9a2d33
// 009a2d1d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009a2d21  83c1ec               add ecx, -0x14
// 009a2d24  3bca                 cmp ecx, edx
// 009a2d26  7d0b                 jge 0x9a2d33
// 009a2d28  8b442420             mov eax, dword ptr [esp + 0x20]
// 009a2d2c  83c014               add eax, 0x14
// 009a2d2f  3bc2                 cmp eax, edx
// 009a2d31  7f36                 jg 0x9a2d69
// 009a2d33  43                   inc ebx
// 009a2d34  83c604               add esi, 4
// 009a2d37  83fb04               cmp ebx, 4
// 009a2d3a  895c2430             mov dword ptr [esp + 0x30], ebx
// 009a2d3e  0f8c6fffffff         jl 0x9a2cb3
// 009a2d44  5f                   pop edi
// 009a2d45  5e                   pop esi
// 009a2d46  5d                   pop ebp
// 009a2d47  33c0                 xor eax, eax
// 009a2d49  5b                   pop ebx
// 009a2d4a  83c414               add esp, 0x14
// 009a2d4d  c20c00               ret 0xc
// 009a2d50  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009a2d54  8b542430             mov edx, dword ptr [esp + 0x30]
// 009a2d58  8b849190000000       mov eax, dword ptr [ecx + edx*4 + 0x90]
// 009a2d5f  5f                   pop edi
// 009a2d60  5e                   pop esi
// 009a2d61  5d                   pop ebp
// 009a2d62  5b                   pop ebx
// 009a2d63  83c414               add esp, 0x14
// 009a2d66  c20c00               ret 0xc
// 009a2d69  8b442410             mov eax, dword ptr [esp + 0x10]
// 009a2d6d  8b849890000000       mov eax, dword ptr [eax + ebx*4 + 0x90]
// 009a2d74  5f                   pop edi
// 009a2d75  5e                   pop esi
// 009a2d76  5d                   pop ebp
// 009a2d77  5b                   pop ebx
// 009a2d78  83c414               add esp, 0x14
// 009a2d7b  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?CanDock@CXTPCommandBars@@QBEPAVCXTPDockBar@@VCPoint@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
