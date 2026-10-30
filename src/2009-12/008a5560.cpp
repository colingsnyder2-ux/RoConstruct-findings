// roc 2009-12 008a5560  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a5560
//
// 008a5560  51                   push ecx
// 008a5561  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a5565  56                   push esi
// 008a5566  8bf1                 mov esi, ecx
// 008a5568  8b06                 mov eax, dword ptr [esi]
// 008a556a  57                   push edi
// 008a556b  8d4c2408             lea ecx, [esp + 8]
// 008a556f  51                   push ecx
// 008a5570  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a5574  6a00                 push 0
// 008a5576  52                   push edx
// 008a5577  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 008a557d  51                   push ecx
// 008a557e  8bce                 mov ecx, esi
// 008a5580  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008a5588  ffd2                 call edx
// 008a558a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a558d  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008a5590  8bf8                 mov edi, eax
// 008a5592  8d442410             lea eax, [esp + 0x10]
// 008a5596  50                   push eax
// 008a5597  52                   push edx
// 008a5598  ff1554cc9800         call dword ptr [0x98cc54]
// 008a559e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a55a2  6aff                 push -1
// 008a55a4  8d442414             lea eax, [esp + 0x14]
// 008a55a8  50                   push eax
// 008a55a9  6afb                 push -5
// 008a55ab  51                   push ecx
// 008a55ac  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a55af  57                   push edi
// 008a55b0  56                   push esi
// 008a55b1  e84addf7ff           call 0x823300
// 008a55b6  5f                   pop edi
// 008a55b7  5e                   pop esi
// 008a55b8  59                   pop ecx
// 008a55b9  c20800               ret 8
// copied from an identical function in another client (function ?OnContextMenu@CXTPReportRow@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp