// roc 2009-06 007cffa0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cffa0
//
// 007cffa0  83ec24               sub esp, 0x24
// 007cffa3  53                   push ebx
// 007cffa4  55                   push ebp
// 007cffa5  56                   push esi
// 007cffa6  8be9                 mov ebp, ecx
// 007cffa8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007cffac  8b01                 mov eax, dword ptr [ecx]
// 007cffae  8b4058               mov eax, dword ptr [eax + 0x58]
// 007cffb1  57                   push edi
// 007cffb2  8d542414             lea edx, [esp + 0x14]
// 007cffb6  52                   push edx
// 007cffb7  ffd0                 call eax
// 007cffb9  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 007cffbc  83c154               add ecx, 0x54
// 007cffbf  e84c5d0000           call 0x7d5d10
// 007cffc4  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 007cffca  8b4508               mov eax, dword ptr [ebp + 8]
// 007cffcd  33ff                 xor edi, edi
// 007cffcf  894c2410             mov dword ptr [esp + 0x10], ecx
// 007cffd3  85c0                 test eax, eax
// 007cffd5  7e61                 jle 0x7d0038
// 007cffd7  85ff                 test edi, edi
// 007cffd9  7c67                 jl 0x7d0042
// 007cffdb  3bf8                 cmp edi, eax
// 007cffdd  7d63                 jge 0x7d0042
// 007cffdf  8b5504               mov edx, dword ptr [ebp + 4]
// 007cffe2  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 007cffe5  8db394000000         lea esi, [ebx + 0x94]
// 007cffeb  56                   push esi
// 007cffec  8d442418             lea eax, [esp + 0x18]
// 007cfff0  50                   push eax
// 007cfff1  8d4c242c             lea ecx, [esp + 0x2c]
// 007cfff5  51                   push ecx
// 007cfff6  ff15f0ee8900         call dword ptr [0x89eef0]
// 007cfffc  85c0                 test eax, eax
// 007cfffe  7430                 je 0x7d0030
// 007d0000  8b0e                 mov ecx, dword ptr [esi]
// 007d0002  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d0006  8b12                 mov edx, dword ptr [edx]
// 007d0008  8b5258               mov edx, dword ptr [edx + 0x58]
// 007d000b  83ec10               sub esp, 0x10
// 007d000e  8bc4                 mov eax, esp
// 007d0010  8908                 mov dword ptr [eax], ecx
// 007d0012  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d0015  894804               mov dword ptr [eax + 4], ecx
// 007d0018  8b4e08               mov ecx, dword ptr [esi + 8]
// 007d001b  894808               mov dword ptr [eax + 8], ecx
// 007d001e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007d0021  89480c               mov dword ptr [eax + 0xc], ecx
// 007d0024  8b442448             mov eax, dword ptr [esp + 0x48]
// 007d0028  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007d002c  50                   push eax
// 007d002d  53                   push ebx
// 007d002e  ffd2                 call edx
// 007d0030  8b4508               mov eax, dword ptr [ebp + 8]
// 007d0033  47                   inc edi
// 007d0034  3bf8                 cmp edi, eax
// 007d0036  7c9f                 jl 0x7cffd7
// 007d0038  5f                   pop edi
// 007d0039  5e                   pop esi
// 007d003a  5d                   pop ebp
// 007d003b  5b                   pop ebx
// 007d003c  83c424               add esp, 0x24
// 007d003f  c20400               ret 4
// 007d0042  e89d8cf4ff           call 0x718ce4
// copied from an identical function in another client (function ?Draw@CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@QAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp