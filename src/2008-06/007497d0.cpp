// roc 2008-06 007497d0  unit: CXTPReportPaintManager  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007497d0
//
// 007497d0  53                   push ebx
// 007497d1  56                   push esi
// 007497d2  57                   push edi
// 007497d3  8bf9                 mov edi, ecx
// 007497d5  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 007497db  83f8ff               cmp eax, -1
// 007497de  7506                 jne 0x7497e6
// 007497e0  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 007497e6  8b742410             mov esi, dword ptr [esp + 0x10]
// 007497ea  8b16                 mov edx, dword ptr [esi]
// 007497ec  50                   push eax
// 007497ed  8b4238               mov eax, dword ptr [edx + 0x38]
// 007497f0  8bce                 mov ecx, esi
// 007497f2  ffd0                 call eax
// 007497f4  8bd8                 mov ebx, eax
// 007497f6  8b4760               mov eax, dword ptr [edi + 0x60]
// 007497f9  83f8ff               cmp eax, -1
// 007497fc  7503                 jne 0x749801
// 007497fe  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00749801  8b16                 mov edx, dword ptr [esi]
// 00749803  50                   push eax
// 00749804  8b4234               mov eax, dword ptr [edx + 0x34]
// 00749807  8bce                 mov ecx, esi
// 00749809  ffd0                 call eax
// 0074980b  8b5604               mov edx, dword ptr [esi + 4]
// 0074980e  8d4c2414             lea ecx, [esp + 0x14]
// 00749812  51                   push ecx
// 00749813  52                   push edx
// 00749814  8bf8                 mov edi, eax
// 00749816  ff15542b8000         call dword ptr [0x802b54]
// 0074981c  8b06                 mov eax, dword ptr [esi]
// 0074981e  8b5038               mov edx, dword ptr [eax + 0x38]
// 00749821  53                   push ebx
// 00749822  8bce                 mov ecx, esi
// 00749824  ffd2                 call edx
// 00749826  8b06                 mov eax, dword ptr [esi]
// 00749828  8b5034               mov edx, dword ptr [eax + 0x34]
// 0074982b  57                   push edi
// 0074982c  8bce                 mov ecx, esi
// 0074982e  ffd2                 call edx
// 00749830  5f                   pop edi
// 00749831  5e                   pop esi
// 00749832  5b                   pop ebx
// 00749833  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawFocusedRow@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp
