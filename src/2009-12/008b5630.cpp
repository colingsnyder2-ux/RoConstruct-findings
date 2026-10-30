// roc 2009-12 008b5630  unit: CXTPDockingPaneSplitterContainer  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b5630
//
// 008b5630  53                   push ebx
// 008b5631  56                   push esi
// 008b5632  57                   push edi
// 008b5633  8bf1                 mov esi, ecx
// 008b5635  e806b2ffff           call 0x8b0840
// 008b563a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008b563d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008b5641  8b10                 mov edx, dword ptr [eax]
// 008b5643  57                   push edi
// 008b5644  51                   push ecx
// 008b5645  8bc8                 mov ecx, eax
// 008b5647  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008b564d  ffd0                 call eax
// 008b564f  85c0                 test eax, eax
// 008b5651  7405                 je 0x8b5658
// 008b5653  8d78e0               lea edi, [eax - 0x20]
// 008b5656  eb02                 jmp 0x8b565a
// 008b5658  33ff                 xor edi, edi
// 008b565a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008b565e  53                   push ebx
// 008b565f  8d4ee0               lea ecx, [esi - 0x20]
// 008b5662  51                   push ecx
// 008b5663  8bcf                 mov ecx, edi
// 008b5665  e886fcffff           call 0x8b52f0
// 008b566a  85db                 test ebx, ebx
// 008b566c  7420                 je 0x8b568e
// 008b566e  55                   push ebp
// 008b566f  85ff                 test edi, edi
// 008b5671  7405                 je 0x8b5678
// 008b5673  8d6f20               lea ebp, [edi + 0x20]
// 008b5676  eb02                 jmp 0x8b567a
// 008b5678  33ed                 xor ebp, ebp
// 008b567a  8d46e0               lea eax, [esi - 0x20]
// 008b567d  f7d8                 neg eax
// 008b567f  1bc0                 sbb eax, eax
// 008b5681  23c6                 and eax, esi
// 008b5683  50                   push eax
// 008b5684  8bcb                 mov ecx, ebx
// 008b5686  e8f5eafdff           call 0x894180
// 008b568b  8928                 mov dword ptr [eax], ebp
// 008b568d  5d                   pop ebp
// 008b568e  85ff                 test edi, edi
// 008b5690  7409                 je 0x8b569b
// 008b5692  8d4720               lea eax, [edi + 0x20]
// 008b5695  5f                   pop edi
// 008b5696  5e                   pop esi
// 008b5697  5b                   pop ebx
// 008b5698  c20c00               ret 0xc
// 008b569b  5f                   pop edi
// 008b569c  5e                   pop esi
// 008b569d  33c0                 xor eax, eax
// 008b569f  5b                   pop ebx
// 008b56a0  c20c00               ret 0xc
// copied from an identical function in another client (function ?Clone@CXTPDockingPaneSplitterContainer@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp