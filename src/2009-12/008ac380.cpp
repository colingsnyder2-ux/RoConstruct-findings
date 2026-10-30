// roc 2009-12 008ac380  unit: CXTPDockingPaneAutoHidePanel  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac380
//
// 008ac380  53                   push ebx
// 008ac381  56                   push esi
// 008ac382  57                   push edi
// 008ac383  8bf1                 mov esi, ecx
// 008ac385  e8b6440000           call 0x8b0840
// 008ac38a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008ac38d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008ac391  8b10                 mov edx, dword ptr [eax]
// 008ac393  57                   push edi
// 008ac394  51                   push ecx
// 008ac395  8bc8                 mov ecx, eax
// 008ac397  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008ac39d  ffd0                 call eax
// 008ac39f  85c0                 test eax, eax
// 008ac3a1  7405                 je 0x8ac3a8
// 008ac3a3  8d78ac               lea edi, [eax - 0x54]
// 008ac3a6  eb02                 jmp 0x8ac3aa
// 008ac3a8  33ff                 xor edi, edi
// 008ac3aa  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ac3ae  53                   push ebx
// 008ac3af  8d4eac               lea ecx, [esi - 0x54]
// 008ac3b2  51                   push ecx
// 008ac3b3  8bcf                 mov ecx, edi
// 008ac3b5  e8d6d8ffff           call 0x8a9c90
// 008ac3ba  85db                 test ebx, ebx
// 008ac3bc  7420                 je 0x8ac3de
// 008ac3be  55                   push ebp
// 008ac3bf  85ff                 test edi, edi
// 008ac3c1  7405                 je 0x8ac3c8
// 008ac3c3  8d6f54               lea ebp, [edi + 0x54]
// 008ac3c6  eb02                 jmp 0x8ac3ca
// 008ac3c8  33ed                 xor ebp, ebp
// 008ac3ca  8d46ac               lea eax, [esi - 0x54]
// 008ac3cd  f7d8                 neg eax
// 008ac3cf  1bc0                 sbb eax, eax
// 008ac3d1  23c6                 and eax, esi
// 008ac3d3  50                   push eax
// 008ac3d4  8bcb                 mov ecx, ebx
// 008ac3d6  e8a57dfeff           call 0x894180
// 008ac3db  8928                 mov dword ptr [eax], ebp
// 008ac3dd  5d                   pop ebp
// 008ac3de  85ff                 test edi, edi
// 008ac3e0  7409                 je 0x8ac3eb
// 008ac3e2  8d4754               lea eax, [edi + 0x54]
// 008ac3e5  5f                   pop edi
// 008ac3e6  5e                   pop esi
// 008ac3e7  5b                   pop ebx
// 008ac3e8  c20c00               ret 0xc
// 008ac3eb  5f                   pop edi
// 008ac3ec  5e                   pop esi
// 008ac3ed  33c0                 xor eax, eax
// 008ac3ef  5b                   pop ebx
// 008ac3f0  c20c00               ret 0xc
// copied from an identical function in another client (function ?Clone@CXTPDockingPaneAutoHidePanel@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp