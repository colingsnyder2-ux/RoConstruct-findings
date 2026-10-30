// roc 2009-12 008d0750  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0750
//
// 008d0750  56                   push esi
// 008d0751  57                   push edi
// 008d0752  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008d0756  8bf1                 mov esi, ecx
// 008d0758  85ff                 test edi, edi
// 008d075a  7427                 je 0x8d0783
// 008d075c  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008d0762  85c9                 test ecx, ecx
// 008d0764  7408                 je 0x8d076e
// 008d0766  8b01                 mov eax, dword ptr [ecx]
// 008d0768  8b10                 mov edx, dword ptr [eax]
// 008d076a  6a01                 push 1
// 008d076c  ffd2                 call edx
// 008d076e  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 008d0774  8b07                 mov eax, dword ptr [edi]
// 008d0776  8b5004               mov edx, dword ptr [eax + 4]
// 008d0779  8bcf                 mov ecx, edi
// 008d077b  89b704020000         mov dword ptr [edi + 0x204], esi
// 008d0781  ffd2                 call edx
// 008d0783  8b06                 mov eax, dword ptr [esi]
// 008d0785  8b5070               mov edx, dword ptr [eax + 0x70]
// 008d0788  8bce                 mov ecx, esi
// 008d078a  ffd2                 call edx
// 008d078c  8bc7                 mov eax, edi
// 008d078e  5f                   pop edi
// 008d078f  5e                   pop esi
// 008d0790  c20400               ret 4
// copied from an identical function in another client (function ?SetColorSet@CXTPTabPaintManager@@QAEPAVCColorSet@1@PAV21@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp