// roc 2012-06 00a34590  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a34590
//
// 00a34590  83ec24               sub esp, 0x24
// 00a34593  53                   push ebx
// 00a34594  55                   push ebp
// 00a34595  56                   push esi
// 00a34596  8be9                 mov ebp, ecx
// 00a34598  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a3459c  8b01                 mov eax, dword ptr [ecx]
// 00a3459e  8b4058               mov eax, dword ptr [eax + 0x58]
// 00a345a1  57                   push edi
// 00a345a2  8d542414             lea edx, [esp + 0x14]
// 00a345a6  52                   push edx
// 00a345a7  ffd0                 call eax
// 00a345a9  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00a345ac  83c154               add ecx, 0x54
// 00a345af  e8cc5b0000           call 0xa3a180
// 00a345b4  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 00a345ba  8b4508               mov eax, dword ptr [ebp + 8]
// 00a345bd  33ff                 xor edi, edi
// 00a345bf  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a345c3  85c0                 test eax, eax
// 00a345c5  7e61                 jle 0xa34628
// 00a345c7  85ff                 test edi, edi
// 00a345c9  7c67                 jl 0xa34632
// 00a345cb  3bf8                 cmp edi, eax
// 00a345cd  7d63                 jge 0xa34632
// 00a345cf  8b5504               mov edx, dword ptr [ebp + 4]
// 00a345d2  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 00a345d5  8db394000000         lea esi, [ebx + 0x94]
// 00a345db  56                   push esi
// 00a345dc  8d442418             lea eax, [esp + 0x18]
// 00a345e0  50                   push eax
// 00a345e1  8d4c242c             lea ecx, [esp + 0x2c]
// 00a345e5  51                   push ecx
// 00a345e6  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a345ec  85c0                 test eax, eax
// 00a345ee  7430                 je 0xa34620
// 00a345f0  8b0e                 mov ecx, dword ptr [esi]
// 00a345f2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a345f6  8b12                 mov edx, dword ptr [edx]
// 00a345f8  8b5258               mov edx, dword ptr [edx + 0x58]
// 00a345fb  83ec10               sub esp, 0x10
// 00a345fe  8bc4                 mov eax, esp
// 00a34600  8908                 mov dword ptr [eax], ecx
// 00a34602  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a34605  894804               mov dword ptr [eax + 4], ecx
// 00a34608  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a3460b  894808               mov dword ptr [eax + 8], ecx
// 00a3460e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a34611  89480c               mov dword ptr [eax + 0xc], ecx
// 00a34614  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a34618  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a3461c  50                   push eax
// 00a3461d  53                   push ebx
// 00a3461e  ffd2                 call edx
// 00a34620  8b4508               mov eax, dword ptr [ebp + 8]
// 00a34623  47                   inc edi
// 00a34624  3bf8                 cmp edi, eax
// 00a34626  7c9f                 jl 0xa345c7
// 00a34628  5f                   pop edi
// 00a34629  5e                   pop esi
// 00a3462a  5d                   pop ebp
// 00a3462b  5b                   pop ebx
// 00a3462c  83c424               add esp, 0x24
// 00a3462f  c20400               ret 4
// 00a34632  e889ddf4ff           call 0x9823c0
// copied from an identical function in another client (function ?Draw@CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@QAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp