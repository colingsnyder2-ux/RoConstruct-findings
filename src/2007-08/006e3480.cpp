// roc 2007-08 006e3480  unit: CXTPDockingPaneTabbedContainer  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3480
//
// 006e3480  53                   push ebx
// 006e3481  56                   push esi
// 006e3482  57                   push edi
// 006e3483  8bf1                 mov esi, ecx
// 006e3485  e8b6d0ffff           call 0x6e0540
// 006e348a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006e348d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006e3491  8b10                 mov edx, dword ptr [eax]
// 006e3493  57                   push edi
// 006e3494  51                   push ecx
// 006e3495  8bc8                 mov ecx, eax
// 006e3497  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 006e349d  ffd0                 call eax
// 006e349f  85c0                 test eax, eax
// 006e34a1  7405                 je 0x6e34a8
// 006e34a3  8d78ac               lea edi, [eax - 0x54]
// 006e34a6  eb02                 jmp 0x6e34aa
// 006e34a8  33ff                 xor edi, edi
// 006e34aa  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e34ae  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006e34b2  8b17                 mov edx, dword ptr [edi]
// 006e34b4  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 006e34ba  50                   push eax
// 006e34bb  53                   push ebx
// 006e34bc  8d4eac               lea ecx, [esi - 0x54]
// 006e34bf  51                   push ecx
// 006e34c0  8bcf                 mov ecx, edi
// 006e34c2  ffd2                 call edx
// 006e34c4  85db                 test ebx, ebx
// 006e34c6  7418                 je 0x6e34e0
// 006e34c8  8d46ac               lea eax, [esi - 0x54]
// 006e34cb  f7d8                 neg eax
// 006e34cd  1bc0                 sbb eax, eax
// 006e34cf  55                   push ebp
// 006e34d0  23c6                 and eax, esi
// 006e34d2  50                   push eax
// 006e34d3  8bcb                 mov ecx, ebx
// 006e34d5  8d6f54               lea ebp, [edi + 0x54]
// 006e34d8  e8c31ef5ff           call 0x6353a0
// 006e34dd  8928                 mov dword ptr [eax], ebp
// 006e34df  5d                   pop ebp
// 006e34e0  8d4754               lea eax, [edi + 0x54]
// 006e34e3  5f                   pop edi
// 006e34e4  5e                   pop esi
// 006e34e5  5b                   pop ebx
// 006e34e6  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Clone@CXTPDockingPaneTabbedContainer@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
