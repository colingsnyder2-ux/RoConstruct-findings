// roc 2008-06 0075d2e0  unit: CXTPDockingPaneMiniWnd  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d2e0
//
// 0075d2e0  53                   push ebx
// 0075d2e1  56                   push esi
// 0075d2e2  57                   push edi
// 0075d2e3  8bf1                 mov esi, ecx
// 0075d2e5  e8b6010000           call 0x75d4a0
// 0075d2ea  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0075d2ed  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0075d2f1  8b10                 mov edx, dword ptr [eax]
// 0075d2f3  57                   push edi
// 0075d2f4  51                   push ecx
// 0075d2f5  8bc8                 mov ecx, eax
// 0075d2f7  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0075d2fd  ffd0                 call eax
// 0075d2ff  85c0                 test eax, eax
// 0075d301  7408                 je 0x75d30b
// 0075d303  8db808ffffff         lea edi, [eax - 0xf8]
// 0075d309  eb02                 jmp 0x75d30d
// 0075d30b  33ff                 xor edi, edi
// 0075d30d  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0075d311  8b17                 mov edx, dword ptr [edi]
// 0075d313  8b92a4010000         mov edx, dword ptr [edx + 0x1a4]
// 0075d319  53                   push ebx
// 0075d31a  8d8608ffffff         lea eax, [esi - 0xf8]
// 0075d320  50                   push eax
// 0075d321  8bcf                 mov ecx, edi
// 0075d323  ffd2                 call edx
// 0075d325  85db                 test ebx, ebx
// 0075d327  741e                 je 0x75d347
// 0075d329  8d8608ffffff         lea eax, [esi - 0xf8]
// 0075d32f  f7d8                 neg eax
// 0075d331  1bc0                 sbb eax, eax
// 0075d333  55                   push ebp
// 0075d334  23c6                 and eax, esi
// 0075d336  50                   push eax
// 0075d337  8bcb                 mov ecx, ebx
// 0075d339  8daff8000000         lea ebp, [edi + 0xf8]
// 0075d33f  e88c42fcff           call 0x7215d0
// 0075d344  8928                 mov dword ptr [eax], ebp
// 0075d346  5d                   pop ebp
// 0075d347  8d87f8000000         lea eax, [edi + 0xf8]
// 0075d34d  5f                   pop edi
// 0075d34e  5e                   pop esi
// 0075d34f  5b                   pop ebx
// 0075d350  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Clone@CXTPDockingPaneMiniWnd@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp
