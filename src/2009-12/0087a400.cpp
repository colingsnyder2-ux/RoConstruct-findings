// roc 2009-12 0087a400  unit: CXTPControlGallery  size: 610 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087a400
//
// 0087a400  83ec3c               sub esp, 0x3c
// 0087a403  53                   push ebx
// 0087a404  57                   push edi
// 0087a405  8bf9                 mov edi, ecx
// 0087a407  33db                 xor ebx, ebx
// 0087a409  897c2414             mov dword ptr [esp + 0x14], edi
// 0087a40d  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 0087a413  0f8443020000         je 0x87a65c
// 0087a419  e8a2cfffff           call 0x8773c0
// 0087a41e  85c0                 test eax, eax
// 0087a420  0f8536020000         jne 0x87a65c
// 0087a426  55                   push ebp
// 0087a427  56                   push esi
// 0087a428  8d44242c             lea eax, [esp + 0x2c]
// 0087a42c  50                   push eax
// 0087a42d  8bcf                 mov ecx, edi
// 0087a42f  e81ce0ffff           call 0x878450
// 0087a434  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087a438  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0087a43c  894c2414             mov dword ptr [esp + 0x14], ecx
// 0087a440  8bcf                 mov ecx, edi
// 0087a442  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0087a44a  e891ddffff           call 0x8781e0
// 0087a44f  6aff                 push -1
// 0087a451  8db74c020000         lea esi, [edi + 0x24c]
// 0087a457  50                   push eax
// 0087a458  8bce                 mov ecx, esi
// 0087a45a  89442428             mov dword ptr [esp + 0x28], eax
// 0087a45e  e82dd8ffff           call 0x877c90
// 0087a463  395c2420             cmp dword ptr [esp + 0x20], ebx
// 0087a467  895c2410             mov dword ptr [esp + 0x10], ebx
// 0087a46b  0f8e70010000         jle 0x87a5e1
// 0087a471  33ff                 xor edi, edi
// 0087a473  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087a477  53                   push ebx
// 0087a478  e883ddffff           call 0x878200
// 0087a47d  33d2                 xor edx, edx
// 0087a47f  3bfa                 cmp edi, edx
// 0087a481  0f8cd0010000         jl 0x87a657
// 0087a487  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0087a48a  0f8dc7010000         jge 0x87a657
// 0087a490  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087a493  89443910             mov dword ptr [ecx + edi + 0x10], eax
// 0087a497  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0087a49a  0f8db7010000         jge 0x87a657
// 0087a4a0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087a4a3  89543914             mov dword ptr [ecx + edi + 0x14], edx
// 0087a4a7  395048               cmp dword ptr [eax + 0x48], edx
// 0087a4aa  0f8483000000         je 0x87a533
// 0087a4b0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087a4b4  399028020000         cmp dword ptr [eax + 0x228], edx
// 0087a4ba  7520                 jne 0x87a4dc
// 0087a4bc  33c9                 xor ecx, ecx
// 0087a4be  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0087a4c1  0f8d90010000         jge 0x87a657
// 0087a4c7  8b4604               mov eax, dword ptr [esi + 4]
// 0087a4ca  03c7                 add eax, edi
// 0087a4cc  8908                 mov dword ptr [eax], ecx
// 0087a4ce  895004               mov dword ptr [eax + 4], edx
// 0087a4d1  894808               mov dword ptr [eax + 8], ecx
// 0087a4d4  89480c               mov dword ptr [eax + 0xc], ecx
// 0087a4d7  e9e8000000           jmp 0x87a5c4
// 0087a4dc  39542418             cmp dword ptr [esp + 0x18], edx
// 0087a4e0  7504                 jne 0x87a4e6
// 0087a4e2  036c2410             add ebp, dword ptr [esp + 0x10]
// 0087a4e6  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0087a4e9  0f8d68010000         jge 0x87a657
// 0087a4ef  8b4604               mov eax, dword ptr [esi + 4]
// 0087a4f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087a4f6  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087a4fa  03c7                 add eax, edi
// 0087a4fc  8908                 mov dword ptr [eax], ecx
// 0087a4fe  896804               mov dword ptr [eax + 4], ebp
// 0087a501  895008               mov dword ptr [eax + 8], edx
// 0087a504  8d5513               lea edx, [ebp + 0x13]
// 0087a507  89500c               mov dword ptr [eax + 0xc], edx
// 0087a50a  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0087a50d  0f8d44010000         jge 0x87a657
// 0087a513  8b5604               mov edx, dword ptr [esi + 4]
// 0087a516  b801000000           mov eax, 1
// 0087a51b  89443a14             mov dword ptr [edx + edi + 0x14], eax
// 0087a51f  83c514               add ebp, 0x14
// 0087a522  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0087a52a  89442418             mov dword ptr [esp + 0x18], eax
// 0087a52e  e98d000000           jmp 0x87a5c0
// 0087a533  8b10                 mov edx, dword ptr [eax]
// 0087a535  8b5258               mov edx, dword ptr [edx + 0x58]
// 0087a538  8d4c2424             lea ecx, [esp + 0x24]
// 0087a53c  51                   push ecx
// 0087a53d  8bc8                 mov ecx, eax
// 0087a53f  ffd2                 call edx
// 0087a541  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087a545  85c0                 test eax, eax
// 0087a547  750c                 jne 0x87a555
// 0087a549  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087a54d  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0087a551  89442424             mov dword ptr [esp + 0x24], eax
// 0087a555  837c241800           cmp dword ptr [esp + 0x18], 0
// 0087a55a  0f84bd000000         je 0x87a61d
// 0087a560  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0087a563  0f8dee000000         jge 0x87a657
// 0087a569  8b4604               mov eax, dword ptr [esi + 4]
// 0087a56c  c744381401000000     mov dword ptr [eax + edi + 0x14], 1
// 0087a574  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087a578  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087a57c  8d1408               lea edx, [eax + ecx]
// 0087a57f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087a583  03c5                 add eax, ebp
// 0087a585  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0087a588  89442448             mov dword ptr [esp + 0x48], eax
// 0087a58c  0f8dc5000000         jge 0x87a657
// 0087a592  8b4604               mov eax, dword ptr [esi + 4]
// 0087a595  03c7                 add eax, edi
// 0087a597  8908                 mov dword ptr [eax], ecx
// 0087a599  896804               mov dword ptr [eax + 4], ebp
// 0087a59c  895008               mov dword ptr [eax + 8], edx
// 0087a59f  8b542448             mov edx, dword ptr [esp + 0x48]
// 0087a5a3  89500c               mov dword ptr [eax + 0xc], edx
// 0087a5a6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087a5aa  39442410             cmp dword ptr [esp + 0x10], eax
// 0087a5ae  7f04                 jg 0x87a5b4
// 0087a5b0  89442410             mov dword ptr [esp + 0x10], eax
// 0087a5b4  034c2424             add ecx, dword ptr [esp + 0x24]
// 0087a5b8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0087a5c0  894c2414             mov dword ptr [esp + 0x14], ecx
// 0087a5c4  43                   inc ebx
// 0087a5c5  83c718               add edi, 0x18
// 0087a5c8  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 0087a5cc  0f8ca1feffff         jl 0x87a473
// 0087a5d2  837c241800           cmp dword ptr [esp + 0x18], 0
// 0087a5d7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0087a5db  7504                 jne 0x87a5e1
// 0087a5dd  036c2410             add ebp, dword ptr [esp + 0x10]
// 0087a5e1  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087a5e5  2be8                 sub ebp, eax
// 0087a5e7  89af24020000         mov dword ptr [edi + 0x224], ebp
// 0087a5ed  2b6c2438             sub ebp, dword ptr [esp + 0x38]
// 0087a5f1  03c5                 add eax, ebp
// 0087a5f3  39870c020000         cmp dword ptr [edi + 0x20c], eax
// 0087a5f9  7e10                 jle 0x87a60b
// 0087a5fb  33c9                 xor ecx, ecx
// 0087a5fd  85c0                 test eax, eax
// 0087a5ff  0f9cc1               setl cl
// 0087a602  49                   dec ecx
// 0087a603  23c1                 and eax, ecx
// 0087a605  89870c020000         mov dword ptr [edi + 0x20c], eax
// 0087a60b  5e                   pop esi
// 0087a60c  5d                   pop ebp
// 0087a60d  8d8f84010000         lea ecx, [edi + 0x184]
// 0087a613  5f                   pop edi
// 0087a614  5b                   pop ebx
// 0087a615  83c43c               add esp, 0x3c
// 0087a618  e923070700           jmp 0x8ead40
// 0087a61d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087a621  8d1408               lea edx, [eax + ecx]
// 0087a624  3b542434             cmp edx, dword ptr [esp + 0x34]
// 0087a628  0f8e4affffff         jle 0x87a578
// 0087a62e  036c2410             add ebp, dword ptr [esp + 0x10]
// 0087a632  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0087a635  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087a639  7d1c                 jge 0x87a657
// 0087a63b  8b4604               mov eax, dword ptr [esi + 4]
// 0087a63e  c744381401000000     mov dword ptr [eax + edi + 0x14], 1
// 0087a646  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087a64a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0087a652  e925ffffff           jmp 0x87a57c
// 0087a657  e8b094f7ff           call 0x7f3b0c
// 0087a65c  5f                   pop edi
// 0087a65d  5b                   pop ebx
// 0087a65e  83c43c               add esp, 0x3c
// 0087a661  c3                   ret 
// copied from an identical function in another client (function ?Reposition@CXTPControlGallery@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp