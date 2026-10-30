// roc 2010-06 0085eef0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085eef0
//
// 0085eef0  83ec24               sub esp, 0x24
// 0085eef3  53                   push ebx
// 0085eef4  55                   push ebp
// 0085eef5  56                   push esi
// 0085eef6  8be9                 mov ebp, ecx
// 0085eef8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0085eefc  8b01                 mov eax, dword ptr [ecx]
// 0085eefe  8b4058               mov eax, dword ptr [eax + 0x58]
// 0085ef01  57                   push edi
// 0085ef02  8d542414             lea edx, [esp + 0x14]
// 0085ef06  52                   push edx
// 0085ef07  ffd0                 call eax
// 0085ef09  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0085ef0c  83c154               add ecx, 0x54
// 0085ef0f  e80c5a0000           call 0x864920
// 0085ef14  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 0085ef1a  8b4508               mov eax, dword ptr [ebp + 8]
// 0085ef1d  33ff                 xor edi, edi
// 0085ef1f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0085ef23  85c0                 test eax, eax
// 0085ef25  7e61                 jle 0x85ef88
// 0085ef27  85ff                 test edi, edi
// 0085ef29  7c67                 jl 0x85ef92
// 0085ef2b  3bf8                 cmp edi, eax
// 0085ef2d  7d63                 jge 0x85ef92
// 0085ef2f  8b5504               mov edx, dword ptr [ebp + 4]
// 0085ef32  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0085ef35  8db394000000         lea esi, [ebx + 0x94]
// 0085ef3b  56                   push esi
// 0085ef3c  8d442418             lea eax, [esp + 0x18]
// 0085ef40  50                   push eax
// 0085ef41  8d4c242c             lea ecx, [esp + 0x2c]
// 0085ef45  51                   push ecx
// 0085ef46  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 0085ef4c  85c0                 test eax, eax
// 0085ef4e  7430                 je 0x85ef80
// 0085ef50  8b0e                 mov ecx, dword ptr [esi]
// 0085ef52  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085ef56  8b12                 mov edx, dword ptr [edx]
// 0085ef58  8b5258               mov edx, dword ptr [edx + 0x58]
// 0085ef5b  83ec10               sub esp, 0x10
// 0085ef5e  8bc4                 mov eax, esp
// 0085ef60  8908                 mov dword ptr [eax], ecx
// 0085ef62  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085ef65  894804               mov dword ptr [eax + 4], ecx
// 0085ef68  8b4e08               mov ecx, dword ptr [esi + 8]
// 0085ef6b  894808               mov dword ptr [eax + 8], ecx
// 0085ef6e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0085ef71  89480c               mov dword ptr [eax + 0xc], ecx
// 0085ef74  8b442448             mov eax, dword ptr [esp + 0x48]
// 0085ef78  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085ef7c  50                   push eax
// 0085ef7d  53                   push ebx
// 0085ef7e  ffd2                 call edx
// 0085ef80  8b4508               mov eax, dword ptr [ebp + 8]
// 0085ef83  47                   inc edi
// 0085ef84  3bf8                 cmp edi, eax
// 0085ef86  7c9f                 jl 0x85ef27
// 0085ef88  5f                   pop edi
// 0085ef89  5e                   pop esi
// 0085ef8a  5d                   pop ebp
// 0085ef8b  5b                   pop ebx
// 0085ef8c  83c424               add esp, 0x24
// 0085ef8f  c20400               ret 4
// 0085ef92  e8b58cf4ff           call 0x7a7c4c
// copied from an identical function in another client (function ?Draw@CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@QAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp