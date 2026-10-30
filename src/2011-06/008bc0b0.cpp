// roc 2011-06 008bc0b0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bc0b0
//
// 008bc0b0  83ec24               sub esp, 0x24
// 008bc0b3  53                   push ebx
// 008bc0b4  55                   push ebp
// 008bc0b5  56                   push esi
// 008bc0b6  8be9                 mov ebp, ecx
// 008bc0b8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008bc0bc  8b01                 mov eax, dword ptr [ecx]
// 008bc0be  8b4058               mov eax, dword ptr [eax + 0x58]
// 008bc0c1  57                   push edi
// 008bc0c2  8d542414             lea edx, [esp + 0x14]
// 008bc0c6  52                   push edx
// 008bc0c7  ffd0                 call eax
// 008bc0c9  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 008bc0cc  83c154               add ecx, 0x54
// 008bc0cf  e89c5c0000           call 0x8c1d70
// 008bc0d4  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 008bc0da  8b4508               mov eax, dword ptr [ebp + 8]
// 008bc0dd  33ff                 xor edi, edi
// 008bc0df  894c2410             mov dword ptr [esp + 0x10], ecx
// 008bc0e3  85c0                 test eax, eax
// 008bc0e5  7e61                 jle 0x8bc148
// 008bc0e7  85ff                 test edi, edi
// 008bc0e9  7c67                 jl 0x8bc152
// 008bc0eb  3bf8                 cmp edi, eax
// 008bc0ed  7d63                 jge 0x8bc152
// 008bc0ef  8b5504               mov edx, dword ptr [ebp + 4]
// 008bc0f2  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 008bc0f5  8db394000000         lea esi, [ebx + 0x94]
// 008bc0fb  56                   push esi
// 008bc0fc  8d442418             lea eax, [esp + 0x18]
// 008bc100  50                   push eax
// 008bc101  8d4c242c             lea ecx, [esp + 0x2c]
// 008bc105  51                   push ecx
// 008bc106  ff15fc1ba400         call dword ptr [0xa41bfc]
// 008bc10c  85c0                 test eax, eax
// 008bc10e  7430                 je 0x8bc140
// 008bc110  8b0e                 mov ecx, dword ptr [esi]
// 008bc112  8b542410             mov edx, dword ptr [esp + 0x10]
// 008bc116  8b12                 mov edx, dword ptr [edx]
// 008bc118  8b5258               mov edx, dword ptr [edx + 0x58]
// 008bc11b  83ec10               sub esp, 0x10
// 008bc11e  8bc4                 mov eax, esp
// 008bc120  8908                 mov dword ptr [eax], ecx
// 008bc122  8b4e04               mov ecx, dword ptr [esi + 4]
// 008bc125  894804               mov dword ptr [eax + 4], ecx
// 008bc128  8b4e08               mov ecx, dword ptr [esi + 8]
// 008bc12b  894808               mov dword ptr [eax + 8], ecx
// 008bc12e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008bc131  89480c               mov dword ptr [eax + 0xc], ecx
// 008bc134  8b442448             mov eax, dword ptr [esp + 0x48]
// 008bc138  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008bc13c  50                   push eax
// 008bc13d  53                   push ebx
// 008bc13e  ffd2                 call edx
// 008bc140  8b4508               mov eax, dword ptr [ebp + 8]
// 008bc143  47                   inc edi
// 008bc144  3bf8                 cmp edi, eax
// 008bc146  7c9f                 jl 0x8bc0e7
// 008bc148  5f                   pop edi
// 008bc149  5e                   pop esi
// 008bc14a  5d                   pop ebp
// 008bc14b  5b                   pop ebx
// 008bc14c  83c424               add esp, 0x24
// 008bc14f  c20400               ret 4
// 008bc152  e8b3e1f4ff           call 0x80a30a
// copied from an identical function in another client (function ?Draw@CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@QAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp