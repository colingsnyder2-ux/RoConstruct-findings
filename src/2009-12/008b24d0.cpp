// roc 2009-12 008b24d0  unit: CXTPDockingPaneTabbedContainer  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b24d0
//
// 008b24d0  55                   push ebp
// 008b24d1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 008b24d5  85ed                 test ebp, ebp
// 008b24d7  7405                 je 0x8b24de
// 008b24d9  8d4520               lea eax, [ebp + 0x20]
// 008b24dc  eb02                 jmp 0x8b24e0
// 008b24de  33c0                 xor eax, eax
// 008b24e0  53                   push ebx
// 008b24e1  56                   push esi
// 008b24e2  57                   push edi
// 008b24e3  8db18c000000         lea esi, [ecx + 0x8c]
// 008b24e9  6a00                 push 0
// 008b24eb  50                   push eax
// 008b24ec  8bce                 mov ecx, esi
// 008b24ee  e87ddd0000           call 0x8c0270
// 008b24f3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008b24f7  8bd8                 mov ebx, eax
// 008b24f9  85ff                 test edi, edi
// 008b24fb  7405                 je 0x8b2502
// 008b24fd  8d4720               lea eax, [edi + 0x20]
// 008b2500  eb02                 jmp 0x8b2504
// 008b2502  33c0                 xor eax, eax
// 008b2504  6a00                 push 0
// 008b2506  50                   push eax
// 008b2507  8bce                 mov ecx, esi
// 008b2509  e862dd0000           call 0x8c0270
// 008b250e  85ff                 test edi, edi
// 008b2510  7405                 je 0x8b2517
// 008b2512  8d4f20               lea ecx, [edi + 0x20]
// 008b2515  eb02                 jmp 0x8b2519
// 008b2517  33c9                 xor ecx, ecx
// 008b2519  5f                   pop edi
// 008b251a  5e                   pop esi
// 008b251b  894b08               mov dword ptr [ebx + 8], ecx
// 008b251e  5b                   pop ebx
// 008b251f  85ed                 test ebp, ebp
// 008b2521  740a                 je 0x8b252d
// 008b2523  8d4d20               lea ecx, [ebp + 0x20]
// 008b2526  894808               mov dword ptr [eax + 8], ecx
// 008b2529  5d                   pop ebp
// 008b252a  c20800               ret 8
// 008b252d  33c9                 xor ecx, ecx
// 008b252f  894808               mov dword ptr [eax + 8], ecx
// 008b2532  5d                   pop ebp
// 008b2533  c20800               ret 8
// copied from an identical function in another client (function ?_Swap@CXTPDockingPaneTabbedContainer@@IAEXPAVCXTPDockingPane@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp