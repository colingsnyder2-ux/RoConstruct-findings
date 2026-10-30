// roc 2010-06 008a6570  unit: CXTPRibbonControlSystemPopupBarListItem  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a6570
//
// 008a6570  6aff                 push -1
// 008a6572  68d9c99b00           push 0x9bc9d9
// 008a6577  64a100000000         mov eax, dword ptr fs:[0]
// 008a657d  50                   push eax
// 008a657e  83ec10               sub esp, 0x10
// 008a6581  53                   push ebx
// 008a6582  56                   push esi
// 008a6583  57                   push edi
// 008a6584  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008a6589  33c4                 xor eax, esp
// 008a658b  50                   push eax
// 008a658c  8d442420             lea eax, [esp + 0x20]
// 008a6590  64a300000000         mov dword ptr fs:[0], eax
// 008a6596  8bf1                 mov esi, ecx
// 008a6598  e8e33af0ff           call 0x7aa080
// 008a659d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008a65a1  8bd8                 mov ebx, eax
// 008a65a3  8b03                 mov eax, dword ptr [ebx]
// 008a65a5  8b5078               mov edx, dword ptr [eax + 0x78]
// 008a65a8  56                   push esi
// 008a65a9  57                   push edi
// 008a65aa  8bcb                 mov ecx, ebx
// 008a65ac  ffd2                 call edx
// 008a65ae  8b03                 mov eax, dword ptr [ebx]
// 008a65b0  8b507c               mov edx, dword ptr [eax + 0x7c]
// 008a65b3  56                   push esi
// 008a65b4  8bcb                 mov ecx, ebx
// 008a65b6  ffd2                 call edx
// 008a65b8  8b17                 mov edx, dword ptr [edi]
// 008a65ba  50                   push eax
// 008a65bb  8b4238               mov eax, dword ptr [edx + 0x38]
// 008a65be  8bcf                 mov ecx, edi
// 008a65c0  ffd0                 call eax
// 008a65c2  6a01                 push 1
// 008a65c4  8bcf                 mov ecx, edi
// 008a65c6  e8e9670d00           call 0x97cdb4
// 008a65cb  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 008a65d1  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 008a65d7  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 008a65dd  8b9ecc000000         mov ebx, dword ptr [esi + 0xcc]
// 008a65e3  83c007               add eax, 7
// 008a65e6  89542418             mov dword ptr [esp + 0x18], edx
// 008a65ea  8b16                 mov edx, dword ptr [esi]
// 008a65ec  8b5258               mov edx, dword ptr [edx + 0x58]
// 008a65ef  89442410             mov dword ptr [esp + 0x10], eax
// 008a65f3  8d442430             lea eax, [esp + 0x30]
// 008a65f7  894c2414             mov dword ptr [esp + 0x14], ecx
// 008a65fb  50                   push eax
// 008a65fc  8bce                 mov ecx, esi
// 008a65fe  895c2420             mov dword ptr [esp + 0x20], ebx
// 008a6602  ffd2                 call edx
// 008a6604  8bf0                 mov esi, eax
// 008a6606  8b1f                 mov ebx, dword ptr [edi]
// 008a6608  6a24                 push 0x24
// 008a660a  8d442414             lea eax, [esp + 0x14]
// 008a660e  50                   push eax
// 008a660f  8bce                 mov ecx, esi
// 008a6611  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008a6619  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008a661f  50                   push eax
// 008a6620  8bce                 mov ecx, esi
// 008a6622  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008a6628  8b5370               mov edx, dword ptr [ebx + 0x70]
// 008a662b  50                   push eax
// 008a662c  8bcf                 mov ecx, edi
// 008a662e  ffd2                 call edx
// 008a6630  8d4c2430             lea ecx, [esp + 0x30]
// 008a6634  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008a663a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a663e  64890d00000000       mov dword ptr fs:[0], ecx
// 008a6645  59                   pop ecx
// 008a6646  5f                   pop edi
// 008a6647  5e                   pop esi
// 008a6648  5b                   pop ebx
// 008a6649  83c41c               add esp, 0x1c
// 008a664c  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListItem@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp