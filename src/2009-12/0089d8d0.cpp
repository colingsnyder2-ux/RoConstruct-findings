// roc 2009-12 0089d8d0  unit: CXTPReportPaintManager  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089d8d0
//
// 0089d8d0  53                   push ebx
// 0089d8d1  56                   push esi
// 0089d8d2  57                   push edi
// 0089d8d3  8bf9                 mov edi, ecx
// 0089d8d5  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 0089d8db  83f8ff               cmp eax, -1
// 0089d8de  7506                 jne 0x89d8e6
// 0089d8e0  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 0089d8e6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0089d8ea  8b16                 mov edx, dword ptr [esi]
// 0089d8ec  50                   push eax
// 0089d8ed  8b4238               mov eax, dword ptr [edx + 0x38]
// 0089d8f0  8bce                 mov ecx, esi
// 0089d8f2  ffd0                 call eax
// 0089d8f4  8bd8                 mov ebx, eax
// 0089d8f6  8b4760               mov eax, dword ptr [edi + 0x60]
// 0089d8f9  83f8ff               cmp eax, -1
// 0089d8fc  7503                 jne 0x89d901
// 0089d8fe  8b475c               mov eax, dword ptr [edi + 0x5c]
// 0089d901  8b16                 mov edx, dword ptr [esi]
// 0089d903  50                   push eax
// 0089d904  8b4234               mov eax, dword ptr [edx + 0x34]
// 0089d907  8bce                 mov ecx, esi
// 0089d909  ffd0                 call eax
// 0089d90b  8b5604               mov edx, dword ptr [esi + 4]
// 0089d90e  8d4c2414             lea ecx, [esp + 0x14]
// 0089d912  51                   push ecx
// 0089d913  52                   push edx
// 0089d914  8bf8                 mov edi, eax
// 0089d916  ff15d4ca9800         call dword ptr [0x98cad4]
// 0089d91c  8b06                 mov eax, dword ptr [esi]
// 0089d91e  8b5038               mov edx, dword ptr [eax + 0x38]
// 0089d921  53                   push ebx
// 0089d922  8bce                 mov ecx, esi
// 0089d924  ffd2                 call edx
// 0089d926  8b06                 mov eax, dword ptr [esi]
// 0089d928  8b5034               mov edx, dword ptr [eax + 0x34]
// 0089d92b  57                   push edi
// 0089d92c  8bce                 mov ecx, esi
// 0089d92e  ffd2                 call edx
// 0089d930  5f                   pop edi
// 0089d931  5e                   pop esi
// 0089d932  5b                   pop ebx
// 0089d933  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawFocusedRow@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp