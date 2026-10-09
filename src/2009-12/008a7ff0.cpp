// roc 2009-12 008a7ff0  unit: CXTPDockingPaneBase  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a7ff0
//
// 008a7ff0  8b442408             mov eax, dword ptr [esp + 8]
// 008a7ff4  57                   push edi
// 008a7ff5  8b7804               mov edi, dword ptr [eax + 4]
// 008a7ff8  85ff                 test edi, edi
// 008a7ffa  744d                 je 0x8a8049
// 008a7ffc  53                   push ebx
// 008a7ffd  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008a8001  55                   push ebp
// 008a8002  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008a8006  56                   push esi
// 008a8007  8bc7                 mov eax, edi
// 008a8009  8b4008               mov eax, dword ptr [eax + 8]
// 008a800c  8b3f                 mov edi, dword ptr [edi]
// 008a800e  85c0                 test eax, eax
// 008a8010  7405                 je 0x8a8017
// 008a8012  8d70e0               lea esi, [eax - 0x20]
// 008a8015  eb02                 jmp 0x8a8019
// 008a8017  33f6                 xor esi, esi
// 008a8019  8bce                 mov ecx, esi
// 008a801b  e8604bfbff           call 0x85cb80
// 008a8020  85c5                 test ebp, eax
// 008a8022  751e                 jne 0x8a8042
// 008a8024  837e3000             cmp dword ptr [esi + 0x30], 0
// 008a8028  740e                 je 0x8a8038
// 008a802a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008a802d  8b11                 mov edx, dword ptr [ecx]
// 008a802f  8d4620               lea eax, [esi + 0x20]
// 008a8032  50                   push eax
// 008a8033  8b4248               mov eax, dword ptr [edx + 0x48]
// 008a8036  ffd0                 call eax
// 008a8038  6a01                 push 1
// 008a803a  56                   push esi
// 008a803b  8bcb                 mov ecx, ebx
// 008a803d  e8feaf0000           call 0x8b3040
// 008a8042  85ff                 test edi, edi
// 008a8044  75c1                 jne 0x8a8007
// 008a8046  5e                   pop esi
// 008a8047  5d                   pop ebp
// 008a8048  5b                   pop ebx
// 008a8049  5f                   pop edi
// 008a804a  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_AddPanesTo@CXTPDockingPaneLayout@@AAEXPAVCXTPDockingPaneTabbedContainer@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
