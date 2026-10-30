// roc 2010-06 0083efe0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083efe0
//
// 0083efe0  83ec30               sub esp, 0x30
// 0083efe3  56                   push esi
// 0083efe4  8bf1                 mov esi, ecx
// 0083efe6  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0083efec  83f8ff               cmp eax, -1
// 0083efef  750f                 jne 0x83f000
// 0083eff1  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0083eff7  85c9                 test ecx, ecx
// 0083eff9  7405                 je 0x83f000
// 0083effb  e890b6f6ff           call 0x7aa690
// 0083f000  85c0                 test eax, eax
// 0083f002  0f8410010000         je 0x83f118
// 0083f008  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 0083f00f  0f8403010000         je 0x83f118
// 0083f015  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 0083f01c  0f84f6000000         je 0x83f118
// 0083f022  53                   push ebx
// 0083f023  57                   push edi
// 0083f024  8d44240c             lea eax, [esp + 0xc]
// 0083f028  50                   push eax
// 0083f029  8bce                 mov ecx, esi
// 0083f02b  e850ffffff           call 0x83ef80
// 0083f030  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083f034  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0083f038  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083f03c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0083f040  89442420             mov dword ptr [esp + 0x20], eax
// 0083f044  03c3                 add eax, ebx
// 0083f046  99                   cdq 
// 0083f047  2bc2                 sub eax, edx
// 0083f049  8b542440             mov edx, dword ptr [esp + 0x40]
// 0083f04d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0083f051  d1f8                 sar eax, 1
// 0083f053  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0083f057  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0083f05b  51                   push ecx
// 0083f05c  8944242c             mov dword ptr [esp + 0x2c], eax
// 0083f060  89442434             mov dword ptr [esp + 0x34], eax
// 0083f064  52                   push edx
// 0083f065  8d442424             lea eax, [esp + 0x24]
// 0083f069  897c242c             mov dword ptr [esp + 0x2c], edi
// 0083f06d  897c243c             mov dword ptr [esp + 0x3c], edi
// 0083f071  8b3de0bb9e00         mov edi, dword ptr [0x9ebbe0]
// 0083f077  50                   push eax
// 0083f078  895c2444             mov dword ptr [esp + 0x44], ebx
// 0083f07c  ffd7                 call edi
// 0083f07e  bb03000000           mov ebx, 3
// 0083f083  85c0                 test eax, eax
// 0083f085  7420                 je 0x83f0a7
// 0083f087  399ea4000000         cmp dword ptr [esi + 0xa4], ebx
// 0083f08d  7418                 je 0x83f0a7
// 0083f08f  6a00                 push 0
// 0083f091  8bce                 mov ecx, esi
// 0083f093  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 0083f099  e802b7f6ff           call 0x7aa7a0
// 0083f09e  5f                   pop edi
// 0083f09f  5b                   pop ebx
// 0083f0a0  5e                   pop esi
// 0083f0a1  83c430               add esp, 0x30
// 0083f0a4  c20800               ret 8
// 0083f0a7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0083f0ab  8b542440             mov edx, dword ptr [esp + 0x40]
// 0083f0af  51                   push ecx
// 0083f0b0  52                   push edx
// 0083f0b1  8d442434             lea eax, [esp + 0x34]
// 0083f0b5  50                   push eax
// 0083f0b6  ffd7                 call edi
// 0083f0b8  b904000000           mov ecx, 4
// 0083f0bd  85c0                 test eax, eax
// 0083f0bf  7420                 je 0x83f0e1
// 0083f0c1  398ea4000000         cmp dword ptr [esi + 0xa4], ecx
// 0083f0c7  7418                 je 0x83f0e1
// 0083f0c9  898ea4000000         mov dword ptr [esi + 0xa4], ecx
// 0083f0cf  6a00                 push 0
// 0083f0d1  8bce                 mov ecx, esi
// 0083f0d3  e8c8b6f6ff           call 0x7aa7a0
// 0083f0d8  5f                   pop edi
// 0083f0d9  5b                   pop ebx
// 0083f0da  5e                   pop esi
// 0083f0db  83c430               add esp, 0x30
// 0083f0de  c20800               ret 8
// 0083f0e1  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0083f0e7  3bc3                 cmp eax, ebx
// 0083f0e9  7404                 je 0x83f0ef
// 0083f0eb  3bc1                 cmp eax, ecx
// 0083f0ed  7527                 jne 0x83f116
// 0083f0ef  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0083f0f3  8b542440             mov edx, dword ptr [esp + 0x40]
// 0083f0f7  51                   push ecx
// 0083f0f8  52                   push edx
// 0083f0f9  8d442414             lea eax, [esp + 0x14]
// 0083f0fd  50                   push eax
// 0083f0fe  ffd7                 call edi
// 0083f100  85c0                 test eax, eax
// 0083f102  7512                 jne 0x83f116
// 0083f104  50                   push eax
// 0083f105  8bce                 mov ecx, esi
// 0083f107  c786a400000001000000 mov dword ptr [esi + 0xa4], 1
// 0083f111  e88ab6f6ff           call 0x7aa7a0
// 0083f116  5f                   pop edi
// 0083f117  5b                   pop ebx
// 0083f118  5e                   pop esi
// 0083f119  83c430               add esp, 0x30
// 0083f11c  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnMouseMove@CXTPControlEdit@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
