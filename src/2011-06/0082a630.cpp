// roc 2011-06 0082a630  unit: PAVCXTPCommandBarKeyboardTip::?$CArray  size: 382 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082a630
//
// 0082a630  83ec14               sub esp, 0x14
// 0082a633  53                   push ebx
// 0082a634  55                   push ebp
// 0082a635  8b2d5c1ca400         mov ebp, dword ptr [0xa41c5c]
// 0082a63b  56                   push esi
// 0082a63c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0082a640  57                   push edi
// 0082a641  894c2410             mov dword ptr [esp + 0x10], ecx
// 0082a645  85f6                 test esi, esi
// 0082a647  0f8486000000         je 0x82a6d3
// 0082a64d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082a650  8d442414             lea eax, [esp + 0x14]
// 0082a654  50                   push eax
// 0082a655  51                   push ecx
// 0082a656  ffd5                 call ebp
// 0082a658  8b4654               mov eax, dword ptr [esi + 0x54]
// 0082a65b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0082a65f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0082a663  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0082a667  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082a66b  a900a00000           test eax, 0xa000
// 0082a670  7436                 je 0x82a6a8
// 0082a672  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0082a676  83c5ec               add ebp, -0x14
// 0082a679  3bea                 cmp ebp, edx
// 0082a67b  7d25                 jge 0x82a6a2
// 0082a67d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0082a681  83c514               add ebp, 0x14
// 0082a684  3bea                 cmp ebp, edx
// 0082a686  7e1a                 jle 0x82a6a2
// 0082a688  8d6fec               lea ebp, [edi - 0x14]
// 0082a68b  3be9                 cmp ebp, ecx
// 0082a68d  7d13                 jge 0x82a6a2
// 0082a68f  8d6b14               lea ebp, [ebx + 0x14]
// 0082a692  3be9                 cmp ebp, ecx
// 0082a694  7e0c                 jle 0x82a6a2
// 0082a696  5f                   pop edi
// 0082a697  8bc6                 mov eax, esi
// 0082a699  5e                   pop esi
// 0082a69a  5d                   pop ebp
// 0082a69b  5b                   pop ebx
// 0082a69c  83c414               add esp, 0x14
// 0082a69f  c20c00               ret 0xc
// 0082a6a2  8b2d5c1ca400         mov ebp, dword ptr [0xa41c5c]
// 0082a6a8  a900500000           test eax, 0x5000
// 0082a6ad  7424                 je 0x82a6d3
// 0082a6af  83c7ec               add edi, -0x14
// 0082a6b2  3bf9                 cmp edi, ecx
// 0082a6b4  7d1d                 jge 0x82a6d3
// 0082a6b6  83c314               add ebx, 0x14
// 0082a6b9  3bd9                 cmp ebx, ecx
// 0082a6bb  7e16                 jle 0x82a6d3
// 0082a6bd  8b442418             mov eax, dword ptr [esp + 0x18]
// 0082a6c1  83c0ec               add eax, -0x14
// 0082a6c4  3bc2                 cmp eax, edx
// 0082a6c6  7d0b                 jge 0x82a6d3
// 0082a6c8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082a6cc  83c114               add ecx, 0x14
// 0082a6cf  3bca                 cmp ecx, edx
// 0082a6d1  7fc3                 jg 0x82a696
// 0082a6d3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0082a6d7  33db                 xor ebx, ebx
// 0082a6d9  895c2430             mov dword ptr [esp + 0x30], ebx
// 0082a6dd  81c690000000         add esi, 0x90
// 0082a6e3  8b06                 mov eax, dword ptr [esi]
// 0082a6e5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0082a6e8  8d542414             lea edx, [esp + 0x14]
// 0082a6ec  52                   push edx
// 0082a6ed  51                   push ecx
// 0082a6ee  ffd5                 call ebp
// 0082a6f0  8b16                 mov edx, dword ptr [esi]
// 0082a6f2  8b4254               mov eax, dword ptr [edx + 0x54]
// 0082a6f5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0082a6f9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0082a6fd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082a701  a900a00000           test eax, 0xa000
// 0082a706  742c                 je 0x82a734
// 0082a708  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0082a70c  83c3ec               add ebx, -0x14
// 0082a70f  3bda                 cmp ebx, edx
// 0082a711  7d1d                 jge 0x82a730
// 0082a713  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0082a717  83c314               add ebx, 0x14
// 0082a71a  3bda                 cmp ebx, edx
// 0082a71c  7e12                 jle 0x82a730
// 0082a71e  8d5fec               lea ebx, [edi - 0x14]
// 0082a721  3bd9                 cmp ebx, ecx
// 0082a723  7d0b                 jge 0x82a730
// 0082a725  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0082a729  83c314               add ebx, 0x14
// 0082a72c  3bd9                 cmp ebx, ecx
// 0082a72e  7f50                 jg 0x82a780
// 0082a730  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0082a734  a900500000           test eax, 0x5000
// 0082a739  7428                 je 0x82a763
// 0082a73b  83c7ec               add edi, -0x14
// 0082a73e  3bf9                 cmp edi, ecx
// 0082a740  7d21                 jge 0x82a763
// 0082a742  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0082a746  83c014               add eax, 0x14
// 0082a749  3bc1                 cmp eax, ecx
// 0082a74b  7e16                 jle 0x82a763
// 0082a74d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082a751  83c1ec               add ecx, -0x14
// 0082a754  3bca                 cmp ecx, edx
// 0082a756  7d0b                 jge 0x82a763
// 0082a758  8b442420             mov eax, dword ptr [esp + 0x20]
// 0082a75c  83c014               add eax, 0x14
// 0082a75f  3bc2                 cmp eax, edx
// 0082a761  7f36                 jg 0x82a799
// 0082a763  43                   inc ebx
// 0082a764  83c604               add esi, 4
// 0082a767  83fb04               cmp ebx, 4
// 0082a76a  895c2430             mov dword ptr [esp + 0x30], ebx
// 0082a76e  0f8c6fffffff         jl 0x82a6e3
// 0082a774  5f                   pop edi
// 0082a775  5e                   pop esi
// 0082a776  5d                   pop ebp
// 0082a777  33c0                 xor eax, eax
// 0082a779  5b                   pop ebx
// 0082a77a  83c414               add esp, 0x14
// 0082a77d  c20c00               ret 0xc
// 0082a780  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082a784  8b542430             mov edx, dword ptr [esp + 0x30]
// 0082a788  8b849190000000       mov eax, dword ptr [ecx + edx*4 + 0x90]
// 0082a78f  5f                   pop edi
// 0082a790  5e                   pop esi
// 0082a791  5d                   pop ebp
// 0082a792  5b                   pop ebx
// 0082a793  83c414               add esp, 0x14
// 0082a796  c20c00               ret 0xc
// 0082a799  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082a79d  8b849890000000       mov eax, dword ptr [eax + ebx*4 + 0x90]
// 0082a7a4  5f                   pop edi
// 0082a7a5  5e                   pop esi
// 0082a7a6  5d                   pop ebp
// 0082a7a7  5b                   pop ebx
// 0082a7a8  83c414               add esp, 0x14
// 0082a7ab  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?CanDock@CXTPCommandBars@@QBEPAVCXTPDockBar@@VCPoint@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
