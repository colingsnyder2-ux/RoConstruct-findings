// roc 2008-06 00708200  unit: CXTPDockingPane  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00708200
//
// 00708200  56                   push esi
// 00708201  57                   push edi
// 00708202  8bf1                 mov esi, ecx
// 00708204  e897520500           call 0x75d4a0
// 00708209  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0070820c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00708210  8b10                 mov edx, dword ptr [eax]
// 00708212  57                   push edi
// 00708213  51                   push ecx
// 00708214  8bc8                 mov ecx, eax
// 00708216  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0070821c  ffd0                 call eax
// 0070821e  85c0                 test eax, eax
// 00708220  7405                 je 0x708227
// 00708222  8d78e0               lea edi, [eax - 0x20]
// 00708225  eb02                 jmp 0x708229
// 00708227  33ff                 xor edi, edi
// 00708229  8b17                 mov edx, dword ptr [edi]
// 0070822b  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0070822e  8d46e0               lea eax, [esi - 0x20]
// 00708231  50                   push eax
// 00708232  8bcf                 mov ecx, edi
// 00708234  ffd2                 call edx
// 00708236  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070823a  85c9                 test ecx, ecx
// 0070823c  7416                 je 0x708254
// 0070823e  8d46e0               lea eax, [esi - 0x20]
// 00708241  f7d8                 neg eax
// 00708243  1bc0                 sbb eax, eax
// 00708245  53                   push ebx
// 00708246  23c6                 and eax, esi
// 00708248  50                   push eax
// 00708249  8d5f20               lea ebx, [edi + 0x20]
// 0070824c  e87f930100           call 0x7215d0
// 00708251  8918                 mov dword ptr [eax], ebx
// 00708253  5b                   pop ebx
// 00708254  8d4720               lea eax, [edi + 0x20]
// 00708257  5f                   pop edi
// 00708258  5e                   pop esi
// 00708259  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPane.cpp (function ?Clone@CXTPDockingPane@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp
