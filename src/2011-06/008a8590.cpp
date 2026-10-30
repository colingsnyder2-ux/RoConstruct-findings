// roc 2011-06 008a8590  unit: CXTPRibbonBar  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a8590
//
// 008a8590  53                   push ebx
// 008a8591  56                   push esi
// 008a8592  57                   push edi
// 008a8593  8bf1                 mov esi, ecx
// 008a8595  e8f624f7ff           call 0x81aa90
// 008a859a  8bc8                 mov ecx, eax
// 008a859c  e84f31f8ff           call 0x82b6f0
// 008a85a1  8bf8                 mov edi, eax
// 008a85a3  837f0400             cmp dword ptr [edi + 4], 0
// 008a85a7  7f53                 jg 0x8a85fc
// 008a85a9  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a85ac  50                   push eax
// 008a85ad  e8ce7efdff           call 0x880480
// 008a85b2  83c404               add esp, 4
// 008a85b5  85c0                 test eax, eax
// 008a85b7  7443                 je 0x8a85fc
// 008a85b9  56                   push esi
// 008a85ba  8bcf                 mov ecx, edi
// 008a85bc  e83f80fdff           call 0x880600
// 008a85c1  85c0                 test eax, eax
// 008a85c3  7537                 jne 0x8a85fc
// 008a85c5  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 008a85cc  752e                 jne 0x8a85fc
// 008a85ce  8bce                 mov ecx, esi
// 008a85d0  33db                 xor ebx, ebx
// 008a85d2  e869d9ffff           call 0x8a5f40
// 008a85d7  39984c060000         cmp dword ptr [eax + 0x64c], ebx
// 008a85dd  7422                 je 0x8a8601
// 008a85df  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a85e3  8b96c4010000         mov edx, dword ptr [esi + 0x1c4]
// 008a85e9  8b5208               mov edx, dword ptr [edx + 8]
// 008a85ec  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 008a85f2  50                   push eax
// 008a85f3  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a85f7  50                   push eax
// 008a85f8  ffd2                 call edx
// 008a85fa  eb07                 jmp 0x8a8603
// 008a85fc  bb01000000           mov ebx, 1
// 008a8601  33c0                 xor eax, eax
// 008a8603  3b86d8010000         cmp eax, dword ptr [esi + 0x1d8]
// 008a8609  7420                 je 0x8a862b
// 008a860b  50                   push eax
// 008a860c  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 008a8612  e8c93e0500           call 0x8fc4e0
// 008a8617  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 008a861e  740b                 je 0x8a862b
// 008a8620  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a8623  50                   push eax
// 008a8624  8bcf                 mov ecx, edi
// 008a8626  e8857ffdff           call 0x8805b0
// 008a862b  85db                 test ebx, ebx
// 008a862d  7523                 jne 0x8a8652
// 008a862f  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 008a8635  85c0                 test eax, eax
// 008a8637  7419                 je 0x8a8652
// 008a8639  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a863d  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a8641  51                   push ecx
// 008a8642  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a8645  52                   push edx
// 008a8646  51                   push ecx
// 008a8647  8d8884010000         lea ecx, [eax + 0x184]
// 008a864d  e8bec40200           call 0x8d4b10
// 008a8652  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a8656  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a865a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a865e  52                   push edx
// 008a865f  50                   push eax
// 008a8660  51                   push ecx
// 008a8661  8bce                 mov ecx, esi
// 008a8663  e8282df7ff           call 0x81b390
// 008a8668  5f                   pop edi
// 008a8669  5e                   pop esi
// 008a866a  5b                   pop ebx
// 008a866b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseMove@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
