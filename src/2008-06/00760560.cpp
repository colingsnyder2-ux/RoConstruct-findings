// roc 2008-06 00760560  unit: CXTPDockingPaneTabbedContainer  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00760560
//
// 00760560  53                   push ebx
// 00760561  56                   push esi
// 00760562  57                   push edi
// 00760563  8bf1                 mov esi, ecx
// 00760565  e836cfffff           call 0x75d4a0
// 0076056a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0076056d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00760571  8b10                 mov edx, dword ptr [eax]
// 00760573  57                   push edi
// 00760574  51                   push ecx
// 00760575  8bc8                 mov ecx, eax
// 00760577  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0076057d  ffd0                 call eax
// 0076057f  85c0                 test eax, eax
// 00760581  7405                 je 0x760588
// 00760583  8d78ac               lea edi, [eax - 0x54]
// 00760586  eb02                 jmp 0x76058a
// 00760588  33ff                 xor edi, edi
// 0076058a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0076058e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00760592  8b17                 mov edx, dword ptr [edi]
// 00760594  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 0076059a  50                   push eax
// 0076059b  53                   push ebx
// 0076059c  8d4eac               lea ecx, [esi - 0x54]
// 0076059f  51                   push ecx
// 007605a0  8bcf                 mov ecx, edi
// 007605a2  ffd2                 call edx
// 007605a4  85db                 test ebx, ebx
// 007605a6  7418                 je 0x7605c0
// 007605a8  8d46ac               lea eax, [esi - 0x54]
// 007605ab  f7d8                 neg eax
// 007605ad  1bc0                 sbb eax, eax
// 007605af  55                   push ebp
// 007605b0  23c6                 and eax, esi
// 007605b2  50                   push eax
// 007605b3  8bcb                 mov ecx, ebx
// 007605b5  8d6f54               lea ebp, [edi + 0x54]
// 007605b8  e81310fcff           call 0x7215d0
// 007605bd  8928                 mov dword ptr [eax], ebp
// 007605bf  5d                   pop ebp
// 007605c0  8d4754               lea eax, [edi + 0x54]
// 007605c3  5f                   pop edi
// 007605c4  5e                   pop esi
// 007605c5  5b                   pop ebx
// 007605c6  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Clone@CXTPDockingPaneTabbedContainer@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
