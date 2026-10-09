// roc 2007-03 006cc3d0  unit: seg_006c0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cc3d0
//
// 006cc3d0  53                   push ebx
// 006cc3d1  56                   push esi
// 006cc3d2  57                   push edi
// 006cc3d3  8bf1                 mov esi, ecx
// 006cc3d5  e846d1ffff           call 0x6c9520
// 006cc3da  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006cc3dd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006cc3e1  8b10                 mov edx, dword ptr [eax]
// 006cc3e3  57                   push edi
// 006cc3e4  51                   push ecx
// 006cc3e5  8bc8                 mov ecx, eax
// 006cc3e7  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 006cc3ed  ffd0                 call eax
// 006cc3ef  85c0                 test eax, eax
// 006cc3f1  7405                 je 0x6cc3f8
// 006cc3f3  8d78ac               lea edi, [eax - 0x54]
// 006cc3f6  eb02                 jmp 0x6cc3fa
// 006cc3f8  33ff                 xor edi, edi
// 006cc3fa  8b442418             mov eax, dword ptr [esp + 0x18]
// 006cc3fe  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006cc402  8b17                 mov edx, dword ptr [edi]
// 006cc404  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 006cc40a  50                   push eax
// 006cc40b  53                   push ebx
// 006cc40c  8d4eac               lea ecx, [esi - 0x54]
// 006cc40f  51                   push ecx
// 006cc410  8bcf                 mov ecx, edi
// 006cc412  ffd2                 call edx
// 006cc414  85db                 test ebx, ebx
// 006cc416  7418                 je 0x6cc430
// 006cc418  8d46ac               lea eax, [esi - 0x54]
// 006cc41b  f7d8                 neg eax
// 006cc41d  1bc0                 sbb eax, eax
// 006cc41f  55                   push ebp
// 006cc420  23c6                 and eax, esi
// 006cc422  50                   push eax
// 006cc423  8bcb                 mov ecx, ebx
// 006cc425  8d6f54               lea ebp, [edi + 0x54]
// 006cc428  e84351fbff           call 0x681570
// 006cc42d  8928                 mov dword ptr [eax], ebp
// 006cc42f  5d                   pop ebp
// 006cc430  8d4754               lea eax, [edi + 0x54]
// 006cc433  5f                   pop edi
// 006cc434  5e                   pop esi
// 006cc435  5b                   pop ebx
// 006cc436  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Clone@CXTPDockingPaneTabbedContainer@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
