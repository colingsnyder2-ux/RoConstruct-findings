// roc 2008-06 007539a0  unit: CXTPReportHeaderDragWnd  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007539a0
//
// 007539a0  53                   push ebx
// 007539a1  56                   push esi
// 007539a2  8bf1                 mov esi, ecx
// 007539a4  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007539a7  57                   push edi
// 007539a8  85c9                 test ecx, ecx
// 007539aa  7467                 je 0x753a13
// 007539ac  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007539b0  8b11                 mov edx, dword ptr [ecx]
// 007539b2  83ec10               sub esp, 0x10
// 007539b5  8bc4                 mov eax, esp
// 007539b7  8938                 mov dword ptr [eax], edi
// 007539b9  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007539bd  897804               mov dword ptr [eax + 4], edi
// 007539c0  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007539c4  897808               mov dword ptr [eax + 8], edi
// 007539c7  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007539cb  89780c               mov dword ptr [eax + 0xc], edi
// 007539ce  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007539d2  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 007539d8  57                   push edi
// 007539d9  ffd0                 call eax
// 007539db  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007539df  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007539e2  8b11                 mov edx, dword ptr [ecx]
// 007539e4  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 007539ea  6a01                 push 1
// 007539ec  83ec10               sub esp, 0x10
// 007539ef  8bc4                 mov eax, esp
// 007539f1  8918                 mov dword ptr [eax], ebx
// 007539f3  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007539f7  895804               mov dword ptr [eax + 4], ebx
// 007539fa  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 007539fe  895808               mov dword ptr [eax + 8], ebx
// 00753a01  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00753a05  89580c               mov dword ptr [eax + 0xc], ebx
// 00753a08  8b4654               mov eax, dword ptr [esi + 0x54]
// 00753a0b  50                   push eax
// 00753a0c  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00753a0f  50                   push eax
// 00753a10  57                   push edi
// 00753a11  ffd2                 call edx
// 00753a13  5f                   pop edi
// 00753a14  5e                   pop esi
// 00753a15  5b                   pop ebx
// 00753a16  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportDragDrop.cpp (function ?OnDraw@CXTPReportHeaderDragWnd@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportDragDrop.cpp
