// roc 2012-06 009faf20  unit: CXTPControlGallery  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009faf20
//
// 009faf20  6aff                 push -1
// 009faf22  685928ae00           push 0xae2859
// 009faf27  64a100000000         mov eax, dword ptr fs:[0]
// 009faf2d  50                   push eax
// 009faf2e  83ec18               sub esp, 0x18
// 009faf31  53                   push ebx
// 009faf32  55                   push ebp
// 009faf33  56                   push esi
// 009faf34  57                   push edi
// 009faf35  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009faf3a  33c4                 xor eax, esp
// 009faf3c  50                   push eax
// 009faf3d  8d44242c             lea eax, [esp + 0x2c]
// 009faf41  64a300000000         mov dword ptr fs:[0], eax
// 009faf47  8bf1                 mov esi, ecx
// 009faf49  89742418             mov dword ptr [esp + 0x18], esi
// 009faf4d  e82efbffff           call 0x9faa80
// 009faf52  85c0                 test eax, eax
// 009faf54  0f844f010000         je 0x9fb0a9
// 009faf5a  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 009faf5e  85db                 test ebx, ebx
// 009faf60  0f8443010000         je 0x9fb0a9
// 009faf66  8bc3                 mov eax, ebx
// 009faf68  8d5001               lea edx, [eax + 1]
// 009faf6b  eb03                 jmp 0x9faf70
// 009faf6d  8d4900               lea ecx, [ecx]
// 009faf70  8a08                 mov cl, byte ptr [eax]
// 009faf72  40                   inc eax
// 009faf73  84c9                 test cl, cl
// 009faf75  75f9                 jne 0x9faf70
// 009faf77  2bc2                 sub eax, edx
// 009faf79  8bf8                 mov edi, eax
// 009faf7b  897c2414             mov dword ptr [esp + 0x14], edi
// 009faf7f  83ff01               cmp edi, 1
// 009faf82  0f8221010000         jb 0x9fb0a9
// 009faf88  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 009faf8c  45                   inc ebp
// 009faf8d  8bce                 mov ecx, esi
// 009faf8f  896c243c             mov dword ptr [esp + 0x3c], ebp
// 009faf93  e8e8faffff           call 0x9faa80
// 009faf98  3be8                 cmp ebp, eax
// 009faf9a  7d04                 jge 0x9fafa0
// 009faf9c  85ed                 test ebp, ebp
// 009faf9e  7d0c                 jge 0x9fafac
// 009fafa0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 009fafa8  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 009fafac  896c2428             mov dword ptr [esp + 0x28], ebp
// 009fafb0  55                   push ebp
// 009fafb1  8bce                 mov ecx, esi
// 009fafb3  e8e8faffff           call 0x9faaa0
// 009fafb8  837c244400           cmp dword ptr [esp + 0x44], 0
// 009fafbd  8bf0                 mov esi, eax
// 009fafbf  743f                 je 0x9fb000
// 009fafc1  8d44241c             lea eax, [esp + 0x1c]
// 009fafc5  50                   push eax
// 009fafc6  8bce                 mov ecx, esi
// 009fafc8  e8b3ebffff           call 0x9f9b80
// 009fafcd  53                   push ebx
// 009fafce  8bc8                 mov ecx, eax
// 009fafd0  c744243800000000     mov dword ptr [esp + 0x38], 0
// 009fafd8  ff151c40b200         call dword ptr [0xb2401c]
// 009fafde  85c0                 test eax, eax
// 009fafe0  8d4c241c             lea ecx, [esp + 0x1c]
// 009fafe4  0f94c3               sete bl
// 009fafe7  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 009fafef  ff15d047b200         call dword ptr [0xb247d0]
// 009faff5  84db                 test bl, bl
// 009faff7  7479                 je 0x9fb072
// 009faff9  8bc5                 mov eax, ebp
// 009faffb  e9ac000000           jmp 0x9fb0ac
// 009fb000  8d4c2420             lea ecx, [esp + 0x20]
// 009fb004  51                   push ecx
// 009fb005  8bce                 mov ecx, esi
// 009fb007  e874ebffff           call 0x9f9b80
// 009fb00c  8bc8                 mov ecx, eax
// 009fb00e  ff155846b200         call dword ptr [0xb24658]
// 009fb014  8d4c2420             lea ecx, [esp + 0x20]
// 009fb018  8be8                 mov ebp, eax
// 009fb01a  ff15d047b200         call dword ptr [0xb247d0]
// 009fb020  8bdf                 mov ebx, edi
// 009fb022  3bfd                 cmp edi, ebp
// 009fb024  7204                 jb 0x9fb02a
// 009fb026  8bdd                 mov ebx, ebp
// 009fb028  8bfd                 mov edi, ebp
// 009fb02a  8d542424             lea edx, [esp + 0x24]
// 009fb02e  52                   push edx
// 009fb02f  8bce                 mov ecx, esi
// 009fb031  e84aebffff           call 0x9f9b80
// 009fb036  53                   push ebx
// 009fb037  8bc8                 mov ecx, eax
// 009fb039  ff159847b200         call dword ptr [0xb24798]
// 009fb03f  50                   push eax
// 009fb040  8b442448             mov eax, dword ptr [esp + 0x48]
// 009fb044  57                   push edi
// 009fb045  50                   push eax
// 009fb046  6a01                 push 1
// 009fb048  6800080000           push 0x800
// 009fb04d  ff157c23b200         call dword ptr [0xb2237c]
// 009fb053  8d4c2424             lea ecx, [esp + 0x24]
// 009fb057  8bf0                 mov esi, eax
// 009fb059  ff15d047b200         call dword ptr [0xb247d0]
// 009fb05f  83fe02               cmp esi, 2
// 009fb062  7506                 jne 0x9fb06a
// 009fb064  396c2414             cmp dword ptr [esp + 0x14], ebp
// 009fb068  7639                 jbe 0x9fb0a3
// 009fb06a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009fb06e  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 009fb072  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009fb076  45                   inc ebp
// 009fb077  896c243c             mov dword ptr [esp + 0x3c], ebp
// 009fb07b  e800faffff           call 0x9faa80
// 009fb080  3be8                 cmp ebp, eax
// 009fb082  750c                 jne 0x9fb090
// 009fb084  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 009fb08c  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 009fb090  3b6c2428             cmp ebp, dword ptr [esp + 0x28]
// 009fb094  7413                 je 0x9fb0a9
// 009fb096  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 009fb09a  8b742418             mov esi, dword ptr [esp + 0x18]
// 009fb09e  e90dffffff           jmp 0x9fafb0
// 009fb0a3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009fb0a7  eb03                 jmp 0x9fb0ac
// 009fb0a9  83c8ff               or eax, 0xffffffff
// 009fb0ac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009fb0b0  64890d00000000       mov dword ptr fs:[0], ecx
// 009fb0b7  59                   pop ecx
// 009fb0b8  5f                   pop edi
// 009fb0b9  5e                   pop esi
// 009fb0ba  5d                   pop ebp
// 009fb0bb  5b                   pop ebx
// 009fb0bc  83c424               add esp, 0x24
// 009fb0bf  c20c00               ret 0xc
// copied from an identical function in another client (function ?FindItem@CXTPControlGallery@@QBEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlGallery.cpp