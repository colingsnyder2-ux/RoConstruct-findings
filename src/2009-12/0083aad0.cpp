// roc 2009-12 0083aad0  unit: CXTPToolBar::CControlButtonExpand  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083aad0
//
// 0083aad0  6aff                 push -1
// 0083aad2  6808c79500           push 0x95c708
// 0083aad7  64a100000000         mov eax, dword ptr fs:[0]
// 0083aadd  50                   push eax
// 0083aade  51                   push ecx
// 0083aadf  56                   push esi
// 0083aae0  57                   push edi
// 0083aae1  a10052b600           mov eax, dword ptr [0xb65200]
// 0083aae6  33c4                 xor eax, esp
// 0083aae8  50                   push eax
// 0083aae9  8d442410             lea eax, [esp + 0x10]
// 0083aaed  64a300000000         mov dword ptr fs:[0], eax
// 0083aaf3  8bf1                 mov esi, ecx
// 0083aaf5  8974240c             mov dword ptr [esp + 0xc], esi
// 0083aaf9  e862560500           call 0x890160
// 0083aafe  33ff                 xor edi, edi
// 0083ab00  8bce                 mov ecx, esi
// 0083ab02  897c2418             mov dword ptr [esp + 0x18], edi
// 0083ab06  c706fc819f00         mov dword ptr [esi], 0x9f81fc
// 0083ab0c  c746209c819f00       mov dword ptr [esi + 0x20], 0x9f819c
// 0083ab13  e830b90e00           call 0x926448
// 0083ab18  c786fc00000002000000 mov dword ptr [esi + 0xfc], 2
// 0083ab22  89be74010000         mov dword ptr [esi + 0x174], edi
// 0083ab28  89be78010000         mov dword ptr [esi + 0x178], edi
// 0083ab2e  89be7c010000         mov dword ptr [esi + 0x17c], edi
// 0083ab34  c7868001000001000000 mov dword ptr [esi + 0x180], 1
// 0083ab3e  8bc6                 mov eax, esi
// 0083ab40  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083ab44  64890d00000000       mov dword ptr fs:[0], ecx
// 0083ab4b  59                   pop ecx
// 0083ab4c  5f                   pop edi
// 0083ab4d  5e                   pop esi
// 0083ab4e  83c410               add esp, 0x10
// 0083ab51  c3                   ret 
// copied from an identical function in another client (function ??0CXTPControlPopup@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp