// roc 2010-06 0085c170  unit: CXTPDockingPaneBase  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085c170
//
// 0085c170  8b442408             mov eax, dword ptr [esp + 8]
// 0085c174  57                   push edi
// 0085c175  8b7804               mov edi, dword ptr [eax + 4]
// 0085c178  85ff                 test edi, edi
// 0085c17a  744d                 je 0x85c1c9
// 0085c17c  53                   push ebx
// 0085c17d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0085c181  55                   push ebp
// 0085c182  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0085c186  56                   push esi
// 0085c187  8bc7                 mov eax, edi
// 0085c189  8b4008               mov eax, dword ptr [eax + 8]
// 0085c18c  8b3f                 mov edi, dword ptr [edi]
// 0085c18e  85c0                 test eax, eax
// 0085c190  7405                 je 0x85c197
// 0085c192  8d70e0               lea esi, [eax - 0x20]
// 0085c195  eb02                 jmp 0x85c199
// 0085c197  33f6                 xor esi, esi
// 0085c199  8bce                 mov ecx, esi
// 0085c19b  e8b049fbff           call 0x810b50
// 0085c1a0  85c5                 test ebp, eax
// 0085c1a2  751e                 jne 0x85c1c2
// 0085c1a4  837e3000             cmp dword ptr [esi + 0x30], 0
// 0085c1a8  740e                 je 0x85c1b8
// 0085c1aa  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0085c1ad  8b11                 mov edx, dword ptr [ecx]
// 0085c1af  8d4620               lea eax, [esi + 0x20]
// 0085c1b2  50                   push eax
// 0085c1b3  8b4248               mov eax, dword ptr [edx + 0x48]
// 0085c1b6  ffd0                 call eax
// 0085c1b8  6a01                 push 1
// 0085c1ba  56                   push esi
// 0085c1bb  8bcb                 mov ecx, ebx
// 0085c1bd  e86eaf0000           call 0x867130
// 0085c1c2  85ff                 test edi, edi
// 0085c1c4  75c1                 jne 0x85c187
// 0085c1c6  5e                   pop esi
// 0085c1c7  5d                   pop ebp
// 0085c1c8  5b                   pop ebx
// 0085c1c9  5f                   pop edi
// 0085c1ca  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_AddPanesTo@CXTPDockingPaneLayout@@AAEXPAVCXTPDockingPaneTabbedContainer@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
