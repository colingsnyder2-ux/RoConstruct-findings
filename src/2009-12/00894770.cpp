// roc 2009-12 00894770  unit: CXTPMenuBar  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894770
//
// 00894770  51                   push ecx
// 00894771  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00894775  53                   push ebx
// 00894776  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0089477a  55                   push ebp
// 0089477b  50                   push eax
// 0089477c  53                   push ebx
// 0089477d  8be9                 mov ebp, ecx
// 0089477f  e84ccff7ff           call 0x8116d0
// 00894784  8b8bb4010000         mov ecx, dword ptr [ebx + 0x1b4]
// 0089478a  898db4010000         mov dword ptr [ebp + 0x1b4], ecx
// 00894790  8b8bbc010000         mov ecx, dword ptr [ebx + 0x1bc]
// 00894796  e8e5e6ffff           call 0x892e80
// 0089479b  89442414             mov dword ptr [esp + 0x14], eax
// 0089479f  85c0                 test eax, eax
// 008947a1  0f84ac000000         je 0x894853
// 008947a7  56                   push esi
// 008947a8  57                   push edi
// 008947a9  8da42400000000       lea esp, [esp]
// 008947b0  8b8bbc010000         mov ecx, dword ptr [ebx + 0x1bc]
// 008947b6  8d542410             lea edx, [esp + 0x10]
// 008947ba  52                   push edx
// 008947bb  8d442420             lea eax, [esp + 0x20]
// 008947bf  50                   push eax
// 008947c0  e8cbe6ffff           call 0x892e90
// 008947c5  8b742410             mov esi, dword ptr [esp + 0x10]
// 008947c9  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008947cc  51                   push ecx
// 008947cd  8b8dbc010000         mov ecx, dword ptr [ebp + 0x1bc]
// 008947d3  e8b8f8ffff           call 0x894090
// 008947d8  8bf8                 mov edi, eax
// 008947da  85ff                 test edi, edi
// 008947dc  744e                 je 0x89482c
// 008947de  8b4720               mov eax, dword ptr [edi + 0x20]
// 008947e1  85c0                 test eax, eax
// 008947e3  7429                 je 0x89480e
// 008947e5  8b583c               mov ebx, dword ptr [eax + 0x3c]
// 008947e8  85db                 test ebx, ebx
// 008947ea  7422                 je 0x89480e
// 008947ec  837e2000             cmp dword ptr [esi + 0x20], 0
// 008947f0  741c                 je 0x89480e
// 008947f2  8b5620               mov edx, dword ptr [esi + 0x20]
// 008947f5  837a3c00             cmp dword ptr [edx + 0x3c], 0
// 008947f9  7513                 jne 0x89480e
// 008947fb  8d4304               lea eax, [ebx + 4]
// 008947fe  50                   push eax
// 008947ff  ff150cb29800         call dword ptr [0x98b20c]
// 00894805  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00894808  53                   push ebx
// 00894809  e8220afbff           call 0x845230
// 0089480e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00894811  e8c6f5f5ff           call 0x7f3ddc
// 00894816  8b7620               mov esi, dword ptr [esi + 0x20]
// 00894819  897720               mov dword ptr [edi + 0x20], esi
// 0089481c  83c604               add esi, 4
// 0089481f  56                   push esi
// 00894820  ff150cb29800         call dword ptr [0x98b20c]
// 00894826  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0089482a  eb1a                 jmp 0x894846
// 0089482c  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0089482f  56                   push esi
// 00894830  51                   push ecx
// 00894831  8b8dbc010000         mov ecx, dword ptr [ebp + 0x1bc]
// 00894837  e8e4f9ffff           call 0x894220
// 0089483c  83c604               add esi, 4
// 0089483f  56                   push esi
// 00894840  ff150cb29800         call dword ptr [0x98b20c]
// 00894846  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0089484b  0f855fffffff         jne 0x8947b0
// 00894851  5f                   pop edi
// 00894852  5e                   pop esi
// 00894853  5d                   pop ebp
// 00894854  5b                   pop ebx
// 00894855  59                   pop ecx
// 00894856  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPMenuBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMenuBar.cpp