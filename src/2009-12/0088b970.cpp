// roc 2009-12 0088b970  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b970
//
// 0088b970  83ec30               sub esp, 0x30
// 0088b973  56                   push esi
// 0088b974  8bf1                 mov esi, ecx
// 0088b976  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0088b97c  83f8ff               cmp eax, -1
// 0088b97f  750f                 jne 0x88b990
// 0088b981  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0088b987  85c9                 test ecx, ecx
// 0088b989  7405                 je 0x88b990
// 0088b98b  e820acf6ff           call 0x7f65b0
// 0088b990  85c0                 test eax, eax
// 0088b992  0f8410010000         je 0x88baa8
// 0088b998  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 0088b99f  0f8403010000         je 0x88baa8
// 0088b9a5  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 0088b9ac  0f84f6000000         je 0x88baa8
// 0088b9b2  53                   push ebx
// 0088b9b3  57                   push edi
// 0088b9b4  8d44240c             lea eax, [esp + 0xc]
// 0088b9b8  50                   push eax
// 0088b9b9  8bce                 mov ecx, esi
// 0088b9bb  e850ffffff           call 0x88b910
// 0088b9c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088b9c4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0088b9c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088b9cc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0088b9d0  89442420             mov dword ptr [esp + 0x20], eax
// 0088b9d4  03c3                 add eax, ebx
// 0088b9d6  99                   cdq 
// 0088b9d7  2bc2                 sub eax, edx
// 0088b9d9  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088b9dd  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0088b9e1  d1f8                 sar eax, 1
// 0088b9e3  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0088b9e7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0088b9eb  51                   push ecx
// 0088b9ec  8944242c             mov dword ptr [esp + 0x2c], eax
// 0088b9f0  89442434             mov dword ptr [esp + 0x34], eax
// 0088b9f4  52                   push edx
// 0088b9f5  8d442424             lea eax, [esp + 0x24]
// 0088b9f9  897c242c             mov dword ptr [esp + 0x2c], edi
// 0088b9fd  897c243c             mov dword ptr [esp + 0x3c], edi
// 0088ba01  8b3d5cca9800         mov edi, dword ptr [0x98ca5c]
// 0088ba07  50                   push eax
// 0088ba08  895c2444             mov dword ptr [esp + 0x44], ebx
// 0088ba0c  ffd7                 call edi
// 0088ba0e  bb03000000           mov ebx, 3
// 0088ba13  85c0                 test eax, eax
// 0088ba15  7420                 je 0x88ba37
// 0088ba17  399ea4000000         cmp dword ptr [esi + 0xa4], ebx
// 0088ba1d  7418                 je 0x88ba37
// 0088ba1f  6a00                 push 0
// 0088ba21  8bce                 mov ecx, esi
// 0088ba23  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 0088ba29  e892acf6ff           call 0x7f66c0
// 0088ba2e  5f                   pop edi
// 0088ba2f  5b                   pop ebx
// 0088ba30  5e                   pop esi
// 0088ba31  83c430               add esp, 0x30
// 0088ba34  c20800               ret 8
// 0088ba37  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0088ba3b  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088ba3f  51                   push ecx
// 0088ba40  52                   push edx
// 0088ba41  8d442434             lea eax, [esp + 0x34]
// 0088ba45  50                   push eax
// 0088ba46  ffd7                 call edi
// 0088ba48  b904000000           mov ecx, 4
// 0088ba4d  85c0                 test eax, eax
// 0088ba4f  7420                 je 0x88ba71
// 0088ba51  398ea4000000         cmp dword ptr [esi + 0xa4], ecx
// 0088ba57  7418                 je 0x88ba71
// 0088ba59  898ea4000000         mov dword ptr [esi + 0xa4], ecx
// 0088ba5f  6a00                 push 0
// 0088ba61  8bce                 mov ecx, esi
// 0088ba63  e858acf6ff           call 0x7f66c0
// 0088ba68  5f                   pop edi
// 0088ba69  5b                   pop ebx
// 0088ba6a  5e                   pop esi
// 0088ba6b  83c430               add esp, 0x30
// 0088ba6e  c20800               ret 8
// 0088ba71  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0088ba77  3bc3                 cmp eax, ebx
// 0088ba79  7404                 je 0x88ba7f
// 0088ba7b  3bc1                 cmp eax, ecx
// 0088ba7d  7527                 jne 0x88baa6
// 0088ba7f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0088ba83  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088ba87  51                   push ecx
// 0088ba88  52                   push edx
// 0088ba89  8d442414             lea eax, [esp + 0x14]
// 0088ba8d  50                   push eax
// 0088ba8e  ffd7                 call edi
// 0088ba90  85c0                 test eax, eax
// 0088ba92  7512                 jne 0x88baa6
// 0088ba94  50                   push eax
// 0088ba95  8bce                 mov ecx, esi
// 0088ba97  c786a400000001000000 mov dword ptr [esi + 0xa4], 1
// 0088baa1  e81aacf6ff           call 0x7f66c0
// 0088baa6  5f                   pop edi
// 0088baa7  5b                   pop ebx
// 0088baa8  5e                   pop esi
// 0088baa9  83c430               add esp, 0x30
// 0088baac  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnMouseMove@CXTPControlEdit@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
