// roc 2009-12 008a6db0  unit: CXTPReportHeaderDragWnd  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6db0
//
// 008a6db0  53                   push ebx
// 008a6db1  56                   push esi
// 008a6db2  8bf1                 mov esi, ecx
// 008a6db4  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008a6db7  57                   push edi
// 008a6db8  85c9                 test ecx, ecx
// 008a6dba  7467                 je 0x8a6e23
// 008a6dbc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008a6dc0  8b11                 mov edx, dword ptr [ecx]
// 008a6dc2  83ec10               sub esp, 0x10
// 008a6dc5  8bc4                 mov eax, esp
// 008a6dc7  8938                 mov dword ptr [eax], edi
// 008a6dc9  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008a6dcd  897804               mov dword ptr [eax + 4], edi
// 008a6dd0  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008a6dd4  897808               mov dword ptr [eax + 8], edi
// 008a6dd7  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008a6ddb  89780c               mov dword ptr [eax + 0xc], edi
// 008a6dde  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008a6de2  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 008a6de8  57                   push edi
// 008a6de9  ffd0                 call eax
// 008a6deb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008a6def  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008a6df2  8b11                 mov edx, dword ptr [ecx]
// 008a6df4  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 008a6dfa  6a01                 push 1
// 008a6dfc  83ec10               sub esp, 0x10
// 008a6dff  8bc4                 mov eax, esp
// 008a6e01  8918                 mov dword ptr [eax], ebx
// 008a6e03  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008a6e07  895804               mov dword ptr [eax + 4], ebx
// 008a6e0a  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008a6e0e  895808               mov dword ptr [eax + 8], ebx
// 008a6e11  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008a6e15  89580c               mov dword ptr [eax + 0xc], ebx
// 008a6e18  8b4654               mov eax, dword ptr [esi + 0x54]
// 008a6e1b  50                   push eax
// 008a6e1c  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008a6e1f  50                   push eax
// 008a6e20  57                   push edi
// 008a6e21  ffd2                 call edx
// 008a6e23  5f                   pop edi
// 008a6e24  5e                   pop esi
// 008a6e25  5b                   pop ebx
// 008a6e26  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDraw@CXTPReportHeaderDragWnd@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportDragDrop.cpp