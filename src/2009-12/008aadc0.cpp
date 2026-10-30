// roc 2009-12 008aadc0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aadc0
//
// 008aadc0  83ec24               sub esp, 0x24
// 008aadc3  53                   push ebx
// 008aadc4  55                   push ebp
// 008aadc5  56                   push esi
// 008aadc6  8be9                 mov ebp, ecx
// 008aadc8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008aadcc  8b01                 mov eax, dword ptr [ecx]
// 008aadce  8b4058               mov eax, dword ptr [eax + 0x58]
// 008aadd1  57                   push edi
// 008aadd2  8d542414             lea edx, [esp + 0x14]
// 008aadd6  52                   push edx
// 008aadd7  ffd0                 call eax
// 008aadd9  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 008aaddc  83c154               add ecx, 0x54
// 008aaddf  e86c5a0000           call 0x8b0850
// 008aade4  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 008aadea  8b4508               mov eax, dword ptr [ebp + 8]
// 008aaded  33ff                 xor edi, edi
// 008aadef  894c2410             mov dword ptr [esp + 0x10], ecx
// 008aadf3  85c0                 test eax, eax
// 008aadf5  7e61                 jle 0x8aae58
// 008aadf7  85ff                 test edi, edi
// 008aadf9  7c67                 jl 0x8aae62
// 008aadfb  3bf8                 cmp edi, eax
// 008aadfd  7d63                 jge 0x8aae62
// 008aadff  8b5504               mov edx, dword ptr [ebp + 4]
// 008aae02  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 008aae05  8db394000000         lea esi, [ebx + 0x94]
// 008aae0b  56                   push esi
// 008aae0c  8d442418             lea eax, [esp + 0x18]
// 008aae10  50                   push eax
// 008aae11  8d4c242c             lea ecx, [esp + 0x2c]
// 008aae15  51                   push ecx
// 008aae16  ff15dcca9800         call dword ptr [0x98cadc]
// 008aae1c  85c0                 test eax, eax
// 008aae1e  7430                 je 0x8aae50
// 008aae20  8b0e                 mov ecx, dword ptr [esi]
// 008aae22  8b542410             mov edx, dword ptr [esp + 0x10]
// 008aae26  8b12                 mov edx, dword ptr [edx]
// 008aae28  8b5258               mov edx, dword ptr [edx + 0x58]
// 008aae2b  83ec10               sub esp, 0x10
// 008aae2e  8bc4                 mov eax, esp
// 008aae30  8908                 mov dword ptr [eax], ecx
// 008aae32  8b4e04               mov ecx, dword ptr [esi + 4]
// 008aae35  894804               mov dword ptr [eax + 4], ecx
// 008aae38  8b4e08               mov ecx, dword ptr [esi + 8]
// 008aae3b  894808               mov dword ptr [eax + 8], ecx
// 008aae3e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008aae41  89480c               mov dword ptr [eax + 0xc], ecx
// 008aae44  8b442448             mov eax, dword ptr [esp + 0x48]
// 008aae48  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008aae4c  50                   push eax
// 008aae4d  53                   push ebx
// 008aae4e  ffd2                 call edx
// 008aae50  8b4508               mov eax, dword ptr [ebp + 8]
// 008aae53  47                   inc edi
// 008aae54  3bf8                 cmp edi, eax
// 008aae56  7c9f                 jl 0x8aadf7
// 008aae58  5f                   pop edi
// 008aae59  5e                   pop esi
// 008aae5a  5d                   pop ebp
// 008aae5b  5b                   pop ebx
// 008aae5c  83c424               add esp, 0x24
// 008aae5f  c20400               ret 4
// 008aae62  e8a58cf4ff           call 0x7f3b0c
// copied from an identical function in another client (function ?Draw@CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@QAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp