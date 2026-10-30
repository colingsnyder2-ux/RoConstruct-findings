// roc 2009-12 00829610  unit: CXTPReportHeader  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829610
//
// 00829610  8b542408             mov edx, dword ptr [esp + 8]
// 00829614  53                   push ebx
// 00829615  56                   push esi
// 00829616  8bf1                 mov esi, ecx
// 00829618  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082961b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082961f  57                   push edi
// 00829620  8bf9                 mov edi, ecx
// 00829622  8bda                 mov ebx, edx
// 00829624  85c0                 test eax, eax
// 00829626  7468                 je 0x829690
// 00829628  52                   push edx
// 00829629  83c070               add eax, 0x70
// 0082962c  51                   push ecx
// 0082962d  50                   push eax
// 0082962e  ff155cca9800         call dword ptr [0x98ca5c]
// 00829634  85c0                 test eax, eax
// 00829636  7458                 je 0x829690
// 00829638  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082963b  83b8c001000000       cmp dword ptr [eax + 0x1c0], 0
// 00829642  754c                 jne 0x829690
// 00829644  8b16                 mov edx, dword ptr [esi]
// 00829646  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0082964c  53                   push ebx
// 0082964d  57                   push edi
// 0082964e  8bce                 mov ecx, esi
// 00829650  ffd0                 call eax
// 00829652  8bf8                 mov edi, eax
// 00829654  85ff                 test edi, edi
// 00829656  7508                 jne 0x829660
// 00829658  3905d8aeb900         cmp dword ptr [0xb9aed8], eax
// 0082965e  7430                 je 0x829690
// 00829660  8b5624               mov edx, dword ptr [esi + 0x24]
// 00829663  8b4220               mov eax, dword ptr [edx + 0x20]
// 00829666  8d4c2410             lea ecx, [esp + 0x10]
// 0082966a  51                   push ecx
// 0082966b  50                   push eax
// 0082966c  ff1554cc9800         call dword ptr [0x98cc54]
// 00829672  6aff                 push -1
// 00829674  8d4c2414             lea ecx, [esp + 0x14]
// 00829678  51                   push ecx
// 00829679  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082967c  6acd                 push -0x33
// 0082967e  57                   push edi
// 0082967f  6a00                 push 0
// 00829681  6a00                 push 0
// 00829683  e8789cffff           call 0x823300
// 00829688  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082968b  e8f05dffff           call 0x81f480
// 00829690  5f                   pop edi
// 00829691  5e                   pop esi
// 00829692  5b                   pop ebx
// 00829693  c20800               ret 8
// copied from an identical function in another client (function ?OnContextMenu@CXTPReportHeader@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHeader.cpp