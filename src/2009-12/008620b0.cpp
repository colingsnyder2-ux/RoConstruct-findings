// roc 2009-12 008620b0  unit: CXTPPropertyGridToolTip  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008620b0
//
// 008620b0  51                   push ecx
// 008620b1  8b442408             mov eax, dword ptr [esp + 8]
// 008620b5  890c24               mov dword ptr [esp], ecx
// 008620b8  85c0                 test eax, eax
// 008620ba  7444                 je 0x862100
// 008620bc  53                   push ebx
// 008620bd  56                   push esi
// 008620be  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 008620c1  33db                 xor ebx, ebx
// 008620c3  85f6                 test esi, esi
// 008620c5  7e37                 jle 0x8620fe
// 008620c7  8d5154               lea edx, [ecx + 0x54]
// 008620ca  55                   push ebp
// 008620cb  89542414             mov dword ptr [esp + 0x14], edx
// 008620cf  57                   push edi
// 008620d0  85db                 test ebx, ebx
// 008620d2  0f8c03010000         jl 0x8621db
// 008620d8  3b5a08               cmp ebx, dword ptr [edx + 8]
// 008620db  0f8dfa000000         jge 0x8621db
// 008620e1  8b7a04               mov edi, dword ptr [edx + 4]
// 008620e4  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 008620e7  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 008620ea  3b680c               cmp ebp, dword ptr [eax + 0xc]
// 008620ed  7508                 jne 0x8620f7
// 008620ef  8b6f20               mov ebp, dword ptr [edi + 0x20]
// 008620f2  3b6808               cmp ebp, dword ptr [eax + 8]
// 008620f5  740d                 je 0x862104
// 008620f7  43                   inc ebx
// 008620f8  3bde                 cmp ebx, esi
// 008620fa  7cd4                 jl 0x8620d0
// 008620fc  5f                   pop edi
// 008620fd  5d                   pop ebp
// 008620fe  5e                   pop esi
// 008620ff  5b                   pop ebx
// 00862100  59                   pop ecx
// 00862101  c20400               ret 4
// 00862104  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0086210a  3bc5                 cmp eax, ebp
// 0086210c  751a                 jne 0x862128
// 0086210e  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 00862114  3b4724               cmp eax, dword ptr [edi + 0x24]
// 00862117  750f                 jne 0x862128
// 00862119  6a00                 push 0
// 0086211b  e870e6ffff           call 0x860790
// 00862120  8b542418             mov edx, dword ptr [esp + 0x18]
// 00862124  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00862128  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 0086212e  8b2d9cca9800         mov ebp, dword ptr [0x98ca9c]
// 00862134  8db1a8000000         lea esi, [ecx + 0xa8]
// 0086213a  3b4720               cmp eax, dword ptr [edi + 0x20]
// 0086213d  7536                 jne 0x862175
// 0086213f  8b4624               mov eax, dword ptr [esi + 0x24]
// 00862142  3b4724               cmp eax, dword ptr [edi + 0x24]
// 00862145  752e                 jne 0x862175
// 00862147  8bce                 mov ecx, esi
// 00862149  ff1590d69800         call dword ptr [0x98d690]
// 0086214f  33c0                 xor eax, eax
// 00862151  8d4e0c               lea ecx, [esi + 0xc]
// 00862154  51                   push ecx
// 00862155  894608               mov dword ptr [esi + 8], eax
// 00862158  894620               mov dword ptr [esi + 0x20], eax
// 0086215b  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 00862162  89461c               mov dword ptr [esi + 0x1c], eax
// 00862165  ffd5                 call ebp
// 00862167  83c628               add esi, 0x28
// 0086216a  56                   push esi
// 0086216b  ffd5                 call ebp
// 0086216d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00862171  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00862175  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0086217b  8db1e0000000         lea esi, [ecx + 0xe0]
// 00862181  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00862184  7532                 jne 0x8621b8
// 00862186  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00862189  3b4f24               cmp ecx, dword ptr [edi + 0x24]
// 0086218c  752a                 jne 0x8621b8
// 0086218e  8bce                 mov ecx, esi
// 00862190  ff1590d69800         call dword ptr [0x98d690]
// 00862196  33c0                 xor eax, eax
// 00862198  8d560c               lea edx, [esi + 0xc]
// 0086219b  52                   push edx
// 0086219c  894608               mov dword ptr [esi + 8], eax
// 0086219f  894620               mov dword ptr [esi + 0x20], eax
// 008621a2  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 008621a9  89461c               mov dword ptr [esi + 0x1c], eax
// 008621ac  ffd5                 call ebp
// 008621ae  83c628               add esi, 0x28
// 008621b1  56                   push esi
// 008621b2  ffd5                 call ebp
// 008621b4  8b542418             mov edx, dword ptr [esp + 0x18]
// 008621b8  6a01                 push 1
// 008621ba  53                   push ebx
// 008621bb  8bca                 mov ecx, edx
// 008621bd  e8beb0fcff           call 0x82d280
// 008621c2  8bcf                 mov ecx, edi
// 008621c4  ff15c0de9800         call dword ptr [0x98dec0]
// 008621ca  57                   push edi
// 008621cb  e88a16f9ff           call 0x7f385a
// 008621d0  83c404               add esp, 4
// 008621d3  5f                   pop edi
// 008621d4  5d                   pop ebp
// 008621d5  5e                   pop esi
// 008621d6  5b                   pop ebx
// 008621d7  59                   pop ecx
// 008621d8  c20400               ret 4
// 008621db  e82c19f9ff           call 0x7f3b0c
// copied from an identical function in another client (function ?DelTool@CXTPToolTipContextToolTip@@QAEXPAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp