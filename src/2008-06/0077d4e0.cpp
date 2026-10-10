// roc 2008-06 0077d4e0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d4e0
//
// 0077d4e0  56                   push esi
// 0077d4e1  57                   push edi
// 0077d4e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077d4e6  8bf1                 mov esi, ecx
// 0077d4e8  85ff                 test edi, edi
// 0077d4ea  7427                 je 0x77d513
// 0077d4ec  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0077d4f2  85c9                 test ecx, ecx
// 0077d4f4  7408                 je 0x77d4fe
// 0077d4f6  8b01                 mov eax, dword ptr [ecx]
// 0077d4f8  8b10                 mov edx, dword ptr [eax]
// 0077d4fa  6a01                 push 1
// 0077d4fc  ffd2                 call edx
// 0077d4fe  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 0077d504  8b07                 mov eax, dword ptr [edi]
// 0077d506  8b5004               mov edx, dword ptr [eax + 4]
// 0077d509  8bcf                 mov ecx, edi
// 0077d50b  89b704020000         mov dword ptr [edi + 0x204], esi
// 0077d511  ffd2                 call edx
// 0077d513  8b06                 mov eax, dword ptr [esi]
// 0077d515  8b5070               mov edx, dword ptr [eax + 0x70]
// 0077d518  8bce                 mov ecx, esi
// 0077d51a  ffd2                 call edx
// 0077d51c  8bc7                 mov eax, edi
// 0077d51e  5f                   pop edi
// 0077d51f  5e                   pop esi
// 0077d520  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManager.cpp (function ?SetColorSet@CXTPTabPaintManager@@QAEPAVCColorSet@1@PAV21@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp
