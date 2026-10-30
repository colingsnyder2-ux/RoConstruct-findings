// roc 2009-12 008b38b0  unit: CXTPDockingPaneTabbedContainer  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b38b0
//
// 008b38b0  53                   push ebx
// 008b38b1  56                   push esi
// 008b38b2  57                   push edi
// 008b38b3  8bf1                 mov esi, ecx
// 008b38b5  e886cfffff           call 0x8b0840
// 008b38ba  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008b38bd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008b38c1  8b10                 mov edx, dword ptr [eax]
// 008b38c3  57                   push edi
// 008b38c4  51                   push ecx
// 008b38c5  8bc8                 mov ecx, eax
// 008b38c7  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008b38cd  ffd0                 call eax
// 008b38cf  85c0                 test eax, eax
// 008b38d1  7405                 je 0x8b38d8
// 008b38d3  8d78ac               lea edi, [eax - 0x54]
// 008b38d6  eb02                 jmp 0x8b38da
// 008b38d8  33ff                 xor edi, edi
// 008b38da  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b38de  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008b38e2  8b17                 mov edx, dword ptr [edi]
// 008b38e4  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 008b38ea  50                   push eax
// 008b38eb  53                   push ebx
// 008b38ec  8d4eac               lea ecx, [esi - 0x54]
// 008b38ef  51                   push ecx
// 008b38f0  8bcf                 mov ecx, edi
// 008b38f2  ffd2                 call edx
// 008b38f4  85db                 test ebx, ebx
// 008b38f6  7418                 je 0x8b3910
// 008b38f8  8d46ac               lea eax, [esi - 0x54]
// 008b38fb  f7d8                 neg eax
// 008b38fd  1bc0                 sbb eax, eax
// 008b38ff  55                   push ebp
// 008b3900  23c6                 and eax, esi
// 008b3902  50                   push eax
// 008b3903  8bcb                 mov ecx, ebx
// 008b3905  8d6f54               lea ebp, [edi + 0x54]
// 008b3908  e87308feff           call 0x894180
// 008b390d  8928                 mov dword ptr [eax], ebp
// 008b390f  5d                   pop ebp
// 008b3910  8d4754               lea eax, [edi + 0x54]
// 008b3913  5f                   pop edi
// 008b3914  5e                   pop esi
// 008b3915  5b                   pop ebx
// 008b3916  c20c00               ret 0xc
// copied from an identical function in another client (function ?Clone@CXTPDockingPaneTabbedContainer@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp