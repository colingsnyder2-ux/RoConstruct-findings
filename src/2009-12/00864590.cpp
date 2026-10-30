// roc 2009-12 00864590  unit: CXTPPropertyGridItem  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864590
//
// 00864590  55                   push ebp
// 00864591  57                   push edi
// 00864592  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00864596  8be9                 mov ebp, ecx
// 00864598  85ff                 test edi, edi
// 0086459a  744f                 je 0x8645eb
// 0086459c  53                   push ebx
// 0086459d  6a0a                 push 0xa
// 0086459f  57                   push edi
// 008645a0  ff1504ba9800         call dword ptr [0x98ba04]
// 008645a6  8bd8                 mov ebx, eax
// 008645a8  83c408               add esp, 8
// 008645ab  8d8dac000000         lea ecx, [ebp + 0xac]
// 008645b1  85db                 test ebx, ebx
// 008645b3  750d                 jne 0x8645c2
// 008645b5  57                   push edi
// 008645b6  ff155cde9800         call dword ptr [0x98de5c]
// 008645bc  5b                   pop ebx
// 008645bd  5f                   pop edi
// 008645be  5d                   pop ebp
// 008645bf  c20400               ret 4
// 008645c2  56                   push esi
// 008645c3  8bf3                 mov esi, ebx
// 008645c5  2bf7                 sub esi, edi
// 008645c7  56                   push esi
// 008645c8  ff15ecce9800         call dword ptr [0x98ceec]
// 008645ce  56                   push esi
// 008645cf  57                   push edi
// 008645d0  56                   push esi
// 008645d1  50                   push eax
// 008645d2  ff157cb79800         call dword ptr [0x98b77c]
// 008645d8  83c410               add esp, 0x10
// 008645db  43                   inc ebx
// 008645dc  53                   push ebx
// 008645dd  8d8db0000000         lea ecx, [ebp + 0xb0]
// 008645e3  ff155cde9800         call dword ptr [0x98de5c]
// 008645e9  5e                   pop esi
// 008645ea  5b                   pop ebx
// 008645eb  5f                   pop edi
// 008645ec  5d                   pop ebp
// 008645ed  c20400               ret 4
// copied from an identical function in another client (function ?SetPrompt@CXTPPropertyGridItem@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp