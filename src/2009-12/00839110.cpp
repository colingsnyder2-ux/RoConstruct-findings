// roc 2009-12 00839110  unit: CXTPDockingPaneManager  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839110
//
// 00839110  6aff                 push -1
// 00839112  68ca459600           push 0x9645ca
// 00839117  64a100000000         mov eax, dword ptr fs:[0]
// 0083911d  50                   push eax
// 0083911e  51                   push ecx
// 0083911f  56                   push esi
// 00839120  a10052b600           mov eax, dword ptr [0xb65200]
// 00839125  33c4                 xor eax, esp
// 00839127  50                   push eax
// 00839128  8d44240c             lea eax, [esp + 0xc]
// 0083912c  64a300000000         mov dword ptr fs:[0], eax
// 00839132  8bf1                 mov esi, ecx
// 00839134  6888000000           push 0x88
// 00839139  e822a7fbff           call 0x7f3860
// 0083913e  83c404               add esp, 4
// 00839141  89442408             mov dword ptr [esp + 8], eax
// 00839145  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0083914d  85c0                 test eax, eax
// 0083914f  7419                 je 0x83916a
// 00839151  56                   push esi
// 00839152  8bc8                 mov ecx, eax
// 00839154  e817f30600           call 0x8a8470
// 00839159  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083915d  64890d00000000       mov dword ptr fs:[0], ecx
// 00839164  59                   pop ecx
// 00839165  5e                   pop esi
// 00839166  83c410               add esp, 0x10
// 00839169  c3                   ret 
// 0083916a  33c0                 xor eax, eax
// 0083916c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00839170  64890d00000000       mov dword ptr fs:[0], ecx
// 00839177  59                   pop ecx
// 00839178  5e                   pop esi
// 00839179  83c410               add esp, 0x10
// 0083917c  c3                   ret 
// copied from an identical function in another client (function ?CreateLayout@CXTPDockingPaneManager@@UAEPAVCXTPDockingPaneLayout@@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp