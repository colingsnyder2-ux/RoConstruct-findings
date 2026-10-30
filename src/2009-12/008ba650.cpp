// roc 2009-12 008ba650  unit: XTPDockingPanePaintThemes::CXTPDockingPaneVisualStudio2005SecondTheme  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ba650
//
// 008ba650  83ec08               sub esp, 8
// 008ba653  57                   push edi
// 008ba654  8bf9                 mov edi, ecx
// 008ba656  837f3400             cmp dword ptr [edi + 0x34], 0
// 008ba65a  0f8400010000         je 0x8ba760
// 008ba660  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 008ba666  53                   push ebx
// 008ba667  8b9888000000         mov ebx, dword ptr [eax + 0x88]
// 008ba66d  56                   push esi
// 008ba66e  8bb08c000000         mov esi, dword ptr [eax + 0x8c]
// 008ba674  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ba678  50                   push eax
// 008ba679  e8b2feffff           call 0x8ba530
// 008ba67e  83c404               add esp, 4
// 008ba681  85c0                 test eax, eax
// 008ba683  0f84d5000000         je 0x8ba75e
// 008ba689  8b10                 mov edx, dword ptr [eax]
// 008ba68b  55                   push ebp
// 008ba68c  8bc8                 mov ecx, eax
// 008ba68e  8b4264               mov eax, dword ptr [edx + 0x64]
// 008ba691  53                   push ebx
// 008ba692  ffd0                 call eax
// 008ba694  8be8                 mov ebp, eax
// 008ba696  85ed                 test ebp, ebp
// 008ba698  0f84bf000000         je 0x8ba75d
// 008ba69e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ba6a2  51                   push ecx
// 008ba6a3  8bcf                 mov ecx, edi
// 008ba6a5  e876ffffff           call 0x8ba620
// 008ba6aa  8bcd                 mov ecx, ebp
// 008ba6ac  85c0                 test eax, eax
// 008ba6ae  7509                 jne 0x8ba6b9
// 008ba6b0  6a01                 push 1
// 008ba6b2  e8e95af5ff           call 0x8101a0
// 008ba6b7  eb05                 jmp 0x8ba6be
// 008ba6b9  e882eaf4ff           call 0x809140
// 008ba6be  837c242800           cmp dword ptr [esp + 0x28], 0
// 008ba6c3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008ba6c7  89442420             mov dword ptr [esp + 0x20], eax
// 008ba6cb  754b                 jne 0x8ba718
// 008ba6cd  8b07                 mov eax, dword ptr [edi]
// 008ba6cf  8b5708               mov edx, dword ptr [edi + 8]
// 008ba6d2  2bd0                 sub edx, eax
// 008ba6d4  3bd3                 cmp edx, ebx
// 008ba6d6  0f8c81000000         jl 0x8ba75d
// 008ba6dc  8b470c               mov eax, dword ptr [edi + 0xc]
// 008ba6df  034704               add eax, dword ptr [edi + 4]
// 008ba6e2  56                   push esi
// 008ba6e3  99                   cdq 
// 008ba6e4  2bc2                 sub eax, edx
// 008ba6e6  8bc8                 mov ecx, eax
// 008ba6e8  8bc6                 mov eax, esi
// 008ba6ea  99                   cdq 
// 008ba6eb  2bc2                 sub eax, edx
// 008ba6ed  d1f9                 sar ecx, 1
// 008ba6ef  d1f8                 sar eax, 1
// 008ba6f1  2bc8                 sub ecx, eax
// 008ba6f3  8b442424             mov eax, dword ptr [esp + 0x24]
// 008ba6f7  53                   push ebx
// 008ba6f8  50                   push eax
// 008ba6f9  8b07                 mov eax, dword ptr [edi]
// 008ba6fb  51                   push ecx
// 008ba6fc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008ba700  50                   push eax
// 008ba701  51                   push ecx
// 008ba702  8bcd                 mov ecx, ebp
// 008ba704  e8a767f5ff           call 0x810eb0
// 008ba709  5d                   pop ebp
// 008ba70a  83c303               add ebx, 3
// 008ba70d  011f                 add dword ptr [edi], ebx
// 008ba70f  5e                   pop esi
// 008ba710  5b                   pop ebx
// 008ba711  5f                   pop edi
// 008ba712  83c408               add esp, 8
// 008ba715  c21000               ret 0x10
// 008ba718  8b4704               mov eax, dword ptr [edi + 4]
// 008ba71b  8b570c               mov edx, dword ptr [edi + 0xc]
// 008ba71e  2bd0                 sub edx, eax
// 008ba720  3bd6                 cmp edx, esi
// 008ba722  7c39                 jl 0x8ba75d
// 008ba724  8d442410             lea eax, [esp + 0x10]
// 008ba728  50                   push eax
// 008ba729  8bcf                 mov ecx, edi
// 008ba72b  e8d022b6ff           call 0x41ca00
// 008ba730  8bc8                 mov ecx, eax
// 008ba732  8bc6                 mov eax, esi
// 008ba734  99                   cdq 
// 008ba735  2bc2                 sub eax, edx
// 008ba737  56                   push esi
// 008ba738  8bd0                 mov edx, eax
// 008ba73a  8b01                 mov eax, dword ptr [ecx]
// 008ba73c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ba740  53                   push ebx
// 008ba741  51                   push ecx
// 008ba742  8b4f04               mov ecx, dword ptr [edi + 4]
// 008ba745  d1fa                 sar edx, 1
// 008ba747  51                   push ecx
// 008ba748  2bc2                 sub eax, edx
// 008ba74a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008ba74e  50                   push eax
// 008ba74f  52                   push edx
// 008ba750  8bcd                 mov ecx, ebp
// 008ba752  e85967f5ff           call 0x810eb0
// 008ba757  83c603               add esi, 3
// 008ba75a  017704               add dword ptr [edi + 4], esi
// 008ba75d  5d                   pop ebp
// 008ba75e  5e                   pop esi
// 008ba75f  5b                   pop ebx
// 008ba760  5f                   pop edi
// 008ba761  83c408               add esp, 8
// 008ba764  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawCaptionIcon@CXTPDockingPanePaintManager@@IAEXAAVCDC@@PAVCXTPDockingPaneBase@@AAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPanePaintManager.cpp