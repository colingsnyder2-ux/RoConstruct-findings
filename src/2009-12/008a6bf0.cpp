// roc 2009-12 008a6bf0  unit: CXTPReportNavigator  size: 386 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6bf0
//
// 008a6bf0  6aff                 push -1
// 008a6bf2  6818279600           push 0x962718
// 008a6bf7  64a100000000         mov eax, dword ptr fs:[0]
// 008a6bfd  50                   push eax
// 008a6bfe  83ec08               sub esp, 8
// 008a6c01  53                   push ebx
// 008a6c02  55                   push ebp
// 008a6c03  56                   push esi
// 008a6c04  57                   push edi
// 008a6c05  a10052b600           mov eax, dword ptr [0xb65200]
// 008a6c0a  33c4                 xor eax, esp
// 008a6c0c  50                   push eax
// 008a6c0d  8d44241c             lea eax, [esp + 0x1c]
// 008a6c11  64a300000000         mov dword ptr fs:[0], eax
// 008a6c17  8bf1                 mov esi, ecx
// 008a6c19  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6c1c  894c2414             mov dword ptr [esp + 0x14], ecx
// 008a6c20  85c9                 test ecx, ecx
// 008a6c22  0f8434010000         je 0x8a6d5c
// 008a6c28  894c2418             mov dword ptr [esp + 0x18], ecx
// 008a6c2c  e8cf58f7ff           call 0x81c500
// 008a6c31  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6c34  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008a6c3c  e81f79f7ff           call 0x81e560
// 008a6c41  8bf8                 mov edi, eax
// 008a6c43  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6c46  8b8818020000         mov ecx, dword ptr [eax + 0x218]
// 008a6c4c  85c9                 test ecx, ecx
// 008a6c4e  7407                 je 0x8a6c57
// 008a6c50  e82b10f8ff           call 0x827c80
// 008a6c55  eb03                 jmp 0x8a6c5a
// 008a6c57  83c8ff               or eax, 0xffffffff
// 008a6c5a  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008a6c5e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6c61  8b11                 mov edx, dword ptr [ecx]
// 008a6c63  33db                 xor ebx, ebx
// 008a6c65  85ed                 test ebp, ebp
// 008a6c67  0f94c3               sete bl
// 008a6c6a  8d5c1bff             lea ebx, [ebx + ebx - 1]
// 008a6c6e  53                   push ebx
// 008a6c6f  50                   push eax
// 008a6c70  8b8260020000         mov eax, dword ptr [edx + 0x260]
// 008a6c76  57                   push edi
// 008a6c77  ffd0                 call eax
// 008a6c79  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6c7c  85c0                 test eax, eax
// 008a6c7e  0f85c1000000         jne 0x8a6d45
// 008a6c84  e8d778f7ff           call 0x81e560
// 008a6c89  85c0                 test eax, eax
// 008a6c8b  7417                 je 0x8a6ca4
// 008a6c8d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6c90  e8cb78f7ff           call 0x81e560
// 008a6c95  8b10                 mov edx, dword ptr [eax]
// 008a6c97  8bc8                 mov ecx, eax
// 008a6c99  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008a6c9c  ffd0                 call eax
// 008a6c9e  8944242c             mov dword ptr [esp + 0x2c], eax
// 008a6ca2  eb08                 jmp 0x8a6cac
// 008a6ca4  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008a6cac  8b4770               mov eax, dword ptr [edi + 0x70]
// 008a6caf  83e801               sub eax, 1
// 008a6cb2  741b                 je 0x8a6ccf
// 008a6cb4  83e801               sub eax, 1
// 008a6cb7  740b                 je 0x8a6cc4
// 008a6cb9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6cbc  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 008a6cc2  eb14                 jmp 0x8a6cd8
// 008a6cc4  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a6cc7  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 008a6ccd  eb09                 jmp 0x8a6cd8
// 008a6ccf  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6cd2  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 008a6cd8  8b11                 mov edx, dword ptr [ecx]
// 008a6cda  6a00                 push 0
// 008a6cdc  57                   push edi
// 008a6cdd  85ed                 test ebp, ebp
// 008a6cdf  7405                 je 0x8a6ce6
// 008a6ce1  8b4274               mov eax, dword ptr [edx + 0x74]
// 008a6ce4  eb03                 jmp 0x8a6ce9
// 008a6ce6  8b4270               mov eax, dword ptr [edx + 0x70]
// 008a6ce9  ffd0                 call eax
// 008a6ceb  8bf8                 mov edi, eax
// 008a6ced  85ff                 test edi, edi
// 008a6cef  745a                 je 0x8a6d4b
// 008a6cf1  8b17                 mov edx, dword ptr [edi]
// 008a6cf3  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008a6cf6  8bcf                 mov ecx, edi
// 008a6cf8  ffd0                 call eax
// 008a6cfa  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 008a6cfe  744b                 je 0x8a6d4b
// 008a6d00  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a6d04  8b542430             mov edx, dword ptr [esp + 0x30]
// 008a6d08  51                   push ecx
// 008a6d09  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6d0c  52                   push edx
// 008a6d0d  57                   push edi
// 008a6d0e  e8ededf7ff           call 0x825b00
// 008a6d13  85ed                 test ebp, ebp
// 008a6d15  740e                 je 0x8a6d25
// 008a6d17  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6d1a  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 008a6d20  8b4130               mov eax, dword ptr [ecx + 0x30]
// 008a6d23  eb03                 jmp 0x8a6d28
// 008a6d25  83c8ff               or eax, 0xffffffff
// 008a6d28  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a6d2b  8b3a                 mov edi, dword ptr [edx]
// 008a6d2d  53                   push ebx
// 008a6d2e  50                   push eax
// 008a6d2f  8bca                 mov ecx, edx
// 008a6d31  e82a78f7ff           call 0x81e560
// 008a6d36  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6d39  50                   push eax
// 008a6d3a  8b8760020000         mov eax, dword ptr [edi + 0x260]
// 008a6d40  ffd0                 call eax
// 008a6d42  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6d45  50                   push eax
// 008a6d46  e8d58cf7ff           call 0x81fa20
// 008a6d4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a6d4f  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008a6d57  e894c0f7ff           call 0x822df0
// 008a6d5c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a6d60  64890d00000000       mov dword ptr fs:[0], ecx
// 008a6d67  59                   pop ecx
// 008a6d68  5f                   pop edi
// 008a6d69  5e                   pop esi
// 008a6d6a  5d                   pop ebp
// 008a6d6b  5b                   pop ebx
// 008a6d6c  83c414               add esp, 0x14
// 008a6d6f  c20c00               ret 0xc
// copied from an identical function in another client (function ?MoveLeftRight@CXTPReportNavigator@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportNavigator.cpp