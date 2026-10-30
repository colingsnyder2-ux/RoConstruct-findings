// roc 2009-06 007b0af0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b0af0
//
// 007b0af0  83ec30               sub esp, 0x30
// 007b0af3  56                   push esi
// 007b0af4  8bf1                 mov esi, ecx
// 007b0af6  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007b0afc  83f8ff               cmp eax, -1
// 007b0aff  750f                 jne 0x7b0b10
// 007b0b01  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007b0b07  85c9                 test ecx, ecx
// 007b0b09  7405                 je 0x7b0b10
// 007b0b0b  e890f3f6ff           call 0x71fea0
// 007b0b10  85c0                 test eax, eax
// 007b0b12  0f8410010000         je 0x7b0c28
// 007b0b18  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 007b0b1f  0f8403010000         je 0x7b0c28
// 007b0b25  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 007b0b2c  0f84f6000000         je 0x7b0c28
// 007b0b32  53                   push ebx
// 007b0b33  57                   push edi
// 007b0b34  8d44240c             lea eax, [esp + 0xc]
// 007b0b38  50                   push eax
// 007b0b39  8bce                 mov ecx, esi
// 007b0b3b  e850ffffff           call 0x7b0a90
// 007b0b40  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b0b44  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007b0b48  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b0b4c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007b0b50  89442420             mov dword ptr [esp + 0x20], eax
// 007b0b54  03c3                 add eax, ebx
// 007b0b56  99                   cdq 
// 007b0b57  2bc2                 sub eax, edx
// 007b0b59  8b542440             mov edx, dword ptr [esp + 0x40]
// 007b0b5d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007b0b61  d1f8                 sar eax, 1
// 007b0b63  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007b0b67  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b0b6b  51                   push ecx
// 007b0b6c  8944242c             mov dword ptr [esp + 0x2c], eax
// 007b0b70  89442434             mov dword ptr [esp + 0x34], eax
// 007b0b74  52                   push edx
// 007b0b75  8d442424             lea eax, [esp + 0x24]
// 007b0b79  897c242c             mov dword ptr [esp + 0x2c], edi
// 007b0b7d  897c243c             mov dword ptr [esp + 0x3c], edi
// 007b0b81  8b3dc0ed8900         mov edi, dword ptr [0x89edc0]
// 007b0b87  50                   push eax
// 007b0b88  895c2444             mov dword ptr [esp + 0x44], ebx
// 007b0b8c  ffd7                 call edi
// 007b0b8e  bb03000000           mov ebx, 3
// 007b0b93  85c0                 test eax, eax
// 007b0b95  7420                 je 0x7b0bb7
// 007b0b97  399ea4000000         cmp dword ptr [esi + 0xa4], ebx
// 007b0b9d  7418                 je 0x7b0bb7
// 007b0b9f  6a00                 push 0
// 007b0ba1  8bce                 mov ecx, esi
// 007b0ba3  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 007b0ba9  e802f4f6ff           call 0x71ffb0
// 007b0bae  5f                   pop edi
// 007b0baf  5b                   pop ebx
// 007b0bb0  5e                   pop esi
// 007b0bb1  83c430               add esp, 0x30
// 007b0bb4  c20800               ret 8
// 007b0bb7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b0bbb  8b542440             mov edx, dword ptr [esp + 0x40]
// 007b0bbf  51                   push ecx
// 007b0bc0  52                   push edx
// 007b0bc1  8d442434             lea eax, [esp + 0x34]
// 007b0bc5  50                   push eax
// 007b0bc6  ffd7                 call edi
// 007b0bc8  b904000000           mov ecx, 4
// 007b0bcd  85c0                 test eax, eax
// 007b0bcf  7420                 je 0x7b0bf1
// 007b0bd1  398ea4000000         cmp dword ptr [esi + 0xa4], ecx
// 007b0bd7  7418                 je 0x7b0bf1
// 007b0bd9  898ea4000000         mov dword ptr [esi + 0xa4], ecx
// 007b0bdf  6a00                 push 0
// 007b0be1  8bce                 mov ecx, esi
// 007b0be3  e8c8f3f6ff           call 0x71ffb0
// 007b0be8  5f                   pop edi
// 007b0be9  5b                   pop ebx
// 007b0bea  5e                   pop esi
// 007b0beb  83c430               add esp, 0x30
// 007b0bee  c20800               ret 8
// 007b0bf1  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 007b0bf7  3bc3                 cmp eax, ebx
// 007b0bf9  7404                 je 0x7b0bff
// 007b0bfb  3bc1                 cmp eax, ecx
// 007b0bfd  7527                 jne 0x7b0c26
// 007b0bff  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b0c03  8b542440             mov edx, dword ptr [esp + 0x40]
// 007b0c07  51                   push ecx
// 007b0c08  52                   push edx
// 007b0c09  8d442414             lea eax, [esp + 0x14]
// 007b0c0d  50                   push eax
// 007b0c0e  ffd7                 call edi
// 007b0c10  85c0                 test eax, eax
// 007b0c12  7512                 jne 0x7b0c26
// 007b0c14  50                   push eax
// 007b0c15  8bce                 mov ecx, esi
// 007b0c17  c786a400000001000000 mov dword ptr [esi + 0xa4], 1
// 007b0c21  e88af3f6ff           call 0x71ffb0
// 007b0c26  5f                   pop edi
// 007b0c27  5b                   pop ebx
// 007b0c28  5e                   pop esi
// 007b0c29  83c430               add esp, 0x30
// 007b0c2c  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnMouseMove@CXTPControlEdit@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
