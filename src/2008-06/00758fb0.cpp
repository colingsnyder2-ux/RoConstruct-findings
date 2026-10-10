// roc 2008-06 00758fb0  unit: CXTPDockingPaneAutoHidePanel  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00758fb0
//
// 00758fb0  53                   push ebx
// 00758fb1  56                   push esi
// 00758fb2  57                   push edi
// 00758fb3  8bf1                 mov esi, ecx
// 00758fb5  e8e6440000           call 0x75d4a0
// 00758fba  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00758fbd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00758fc1  8b10                 mov edx, dword ptr [eax]
// 00758fc3  57                   push edi
// 00758fc4  51                   push ecx
// 00758fc5  8bc8                 mov ecx, eax
// 00758fc7  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00758fcd  ffd0                 call eax
// 00758fcf  85c0                 test eax, eax
// 00758fd1  7405                 je 0x758fd8
// 00758fd3  8d78ac               lea edi, [eax - 0x54]
// 00758fd6  eb02                 jmp 0x758fda
// 00758fd8  33ff                 xor edi, edi
// 00758fda  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00758fde  53                   push ebx
// 00758fdf  8d4eac               lea ecx, [esi - 0x54]
// 00758fe2  51                   push ecx
// 00758fe3  8bcf                 mov ecx, edi
// 00758fe5  e8c6d8ffff           call 0x7568b0
// 00758fea  85db                 test ebx, ebx
// 00758fec  7420                 je 0x75900e
// 00758fee  55                   push ebp
// 00758fef  85ff                 test edi, edi
// 00758ff1  7405                 je 0x758ff8
// 00758ff3  8d6f54               lea ebp, [edi + 0x54]
// 00758ff6  eb02                 jmp 0x758ffa
// 00758ff8  33ed                 xor ebp, ebp
// 00758ffa  8d46ac               lea eax, [esi - 0x54]
// 00758ffd  f7d8                 neg eax
// 00758fff  1bc0                 sbb eax, eax
// 00759001  23c6                 and eax, esi
// 00759003  50                   push eax
// 00759004  8bcb                 mov ecx, ebx
// 00759006  e8c585fcff           call 0x7215d0
// 0075900b  8928                 mov dword ptr [eax], ebp
// 0075900d  5d                   pop ebp
// 0075900e  85ff                 test edi, edi
// 00759010  7409                 je 0x75901b
// 00759012  8d4754               lea eax, [edi + 0x54]
// 00759015  5f                   pop edi
// 00759016  5e                   pop esi
// 00759017  5b                   pop ebx
// 00759018  c20c00               ret 0xc
// 0075901b  5f                   pop edi
// 0075901c  5e                   pop esi
// 0075901d  33c0                 xor eax, eax
// 0075901f  5b                   pop ebx
// 00759020  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?Clone@CXTPDockingPaneAutoHidePanel@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
