// roc 2009-12 008aaca0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aaca0
//
// 008aaca0  53                   push ebx
// 008aaca1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008aaca5  56                   push esi
// 008aaca6  57                   push edi
// 008aaca7  85db                 test ebx, ebx
// 008aaca9  746d                 je 0x8aad18
// 008aacab  e860efffff           call 0x8a9c10
// 008aacb0  8bc8                 mov ecx, eax
// 008aacb2  83c154               add ecx, 0x54
// 008aacb5  e8965b0000           call 0x8b0850
// 008aacba  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008aacc0  83782400             cmp dword ptr [eax + 0x24], 0
// 008aacc4  7508                 jne 0x8aacce
// 008aacc6  33c0                 xor eax, eax
// 008aacc8  5f                   pop edi
// 008aacc9  5e                   pop esi
// 008aacca  5b                   pop ebx
// 008aaccb  c21800               ret 0x18
// 008aacce  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 008aacd1  8b742424             mov esi, dword ptr [esp + 0x24]
// 008aacd5  8b11                 mov edx, dword ptr [ecx]
// 008aacd7  8b06                 mov eax, dword ptr [esi]
// 008aacd9  8b5264               mov edx, dword ptr [edx + 0x64]
// 008aacdc  50                   push eax
// 008aacdd  ffd2                 call edx
// 008aacdf  85c0                 test eax, eax
// 008aace1  74e3                 je 0x8aacc6
// 008aace3  837c242000           cmp dword ptr [esp + 0x20], 0
// 008aace8  742e                 je 0x8aad18
// 008aacea  8b0e                 mov ecx, dword ptr [esi]
// 008aacec  8b542414             mov edx, dword ptr [esp + 0x14]
// 008aacf0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008aacf4  8b7604               mov esi, dword ptr [esi + 4]
// 008aacf7  50                   push eax
// 008aacf8  83ec10               sub esp, 0x10
// 008aacfb  8bc4                 mov eax, esp
// 008aacfd  8910                 mov dword ptr [eax], edx
// 008aacff  03ca                 add ecx, edx
// 008aad01  897804               mov dword ptr [eax + 4], edi
// 008aad04  894808               mov dword ptr [eax + 8], ecx
// 008aad07  03f7                 add esi, edi
// 008aad09  89700c               mov dword ptr [eax + 0xc], esi
// 008aad0c  8b442424             mov eax, dword ptr [esp + 0x24]
// 008aad10  50                   push eax
// 008aad11  8bcb                 mov ecx, ebx
// 008aad13  e8083a0200           call 0x8ce720
// 008aad18  5f                   pop edi
// 008aad19  5e                   pop esi
// 008aad1a  b801000000           mov eax, 1
// 008aad1f  5b                   pop ebx
// 008aad20  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawIcon@CAutoHidePanelTabManager@CXTPDockingPaneAutoHidePanel@@UBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp