// roc 2011-06 008b9330  unit: CXTPDockingPaneBase  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b9330
//
// 008b9330  8b442408             mov eax, dword ptr [esp + 8]
// 008b9334  57                   push edi
// 008b9335  8b7804               mov edi, dword ptr [eax + 4]
// 008b9338  85ff                 test edi, edi
// 008b933a  744d                 je 0x8b9389
// 008b933c  53                   push ebx
// 008b933d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008b9341  55                   push ebp
// 008b9342  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008b9346  56                   push esi
// 008b9347  8bc7                 mov eax, edi
// 008b9349  8b4008               mov eax, dword ptr [eax + 8]
// 008b934c  8b3f                 mov edi, dword ptr [edi]
// 008b934e  85c0                 test eax, eax
// 008b9350  7405                 je 0x8b9357
// 008b9352  8d70e0               lea esi, [eax - 0x20]
// 008b9355  eb02                 jmp 0x8b9359
// 008b9357  33f6                 xor esi, esi
// 008b9359  8bce                 mov ecx, esi
// 008b935b  e80050fbff           call 0x86e360
// 008b9360  85c5                 test ebp, eax
// 008b9362  751e                 jne 0x8b9382
// 008b9364  837e3000             cmp dword ptr [esi + 0x30], 0
// 008b9368  740e                 je 0x8b9378
// 008b936a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008b936d  8b11                 mov edx, dword ptr [ecx]
// 008b936f  8d4620               lea eax, [esi + 0x20]
// 008b9372  50                   push eax
// 008b9373  8b4248               mov eax, dword ptr [edx + 0x48]
// 008b9376  ffd0                 call eax
// 008b9378  6a01                 push 1
// 008b937a  56                   push esi
// 008b937b  8bcb                 mov ecx, ebx
// 008b937d  e8feb10000           call 0x8c4580
// 008b9382  85ff                 test edi, edi
// 008b9384  75c1                 jne 0x8b9347
// 008b9386  5e                   pop esi
// 008b9387  5d                   pop ebp
// 008b9388  5b                   pop ebx
// 008b9389  5f                   pop edi
// 008b938a  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_AddPanesTo@CXTPDockingPaneLayout@@AAEXPAVCXTPDockingPaneTabbedContainer@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
