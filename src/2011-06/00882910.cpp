// roc 2011-06 00882910  unit: CXTPControlGallery  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00882910
//
// 00882910  83ec18               sub esp, 0x18
// 00882913  56                   push esi
// 00882914  8bf1                 mov esi, ecx
// 00882916  89742408             mov dword ptr [esp + 8], esi
// 0088291a  e851fbffff           call 0x882470
// 0088291f  85c0                 test eax, eax
// 00882921  750a                 jne 0x88292d
// 00882923  83c8ff               or eax, 0xffffffff
// 00882926  5e                   pop esi
// 00882927  83c418               add esp, 0x18
// 0088292a  c20c00               ret 0xc
// 0088292d  53                   push ebx
// 0088292e  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00882932  57                   push edi
// 00882933  85db                 test ebx, ebx
// 00882935  741d                 je 0x882954
// 00882937  8bc3                 mov eax, ebx
// 00882939  8d5001               lea edx, [eax + 1]
// 0088293c  8d642400             lea esp, [esp]
// 00882940  8a08                 mov cl, byte ptr [eax]
// 00882942  40                   inc eax
// 00882943  84c9                 test cl, cl
// 00882945  75f9                 jne 0x882940
// 00882947  2bc2                 sub eax, edx
// 00882949  8bf8                 mov edi, eax
// 0088294b  897c240c             mov dword ptr [esp + 0xc], edi
// 0088294f  83ff01               cmp edi, 1
// 00882952  730c                 jae 0x882960
// 00882954  5f                   pop edi
// 00882955  5b                   pop ebx
// 00882956  83c8ff               or eax, 0xffffffff
// 00882959  5e                   pop esi
// 0088295a  83c418               add esp, 0x18
// 0088295d  c20c00               ret 0xc
// 00882960  55                   push ebp
// 00882961  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00882965  45                   inc ebp
// 00882966  8bce                 mov ecx, esi
// 00882968  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0088296c  e8fffaffff           call 0x882470
// 00882971  3be8                 cmp ebp, eax
// 00882973  7d04                 jge 0x882979
// 00882975  85ed                 test ebp, ebp
// 00882977  7d0c                 jge 0x882985
// 00882979  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00882981  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00882985  896c2424             mov dword ptr [esp + 0x24], ebp
// 00882989  8da42400000000       lea esp, [esp]
// 00882990  55                   push ebp
// 00882991  8bce                 mov ecx, esi
// 00882993  e8f8faffff           call 0x882490
// 00882998  837c243400           cmp dword ptr [esp + 0x34], 0
// 0088299d  8bf0                 mov esi, eax
// 0088299f  7434                 je 0x8829d5
// 008829a1  8d442418             lea eax, [esp + 0x18]
// 008829a5  50                   push eax
// 008829a6  8bce                 mov ecx, esi
// 008829a8  e8c3ebffff           call 0x881570
// 008829ad  53                   push ebx
// 008829ae  8bc8                 mov ecx, eax
// 008829b0  ff150820a400         call dword ptr [0xa42008]
// 008829b6  85c0                 test eax, eax
// 008829b8  8d4c2418             lea ecx, [esp + 0x18]
// 008829bc  0f94c3               sete bl
// 008829bf  ff15082ea400         call dword ptr [0xa42e08]
// 008829c5  84db                 test bl, bl
// 008829c7  747e                 je 0x882a47
// 008829c9  8bc5                 mov eax, ebp
// 008829cb  5d                   pop ebp
// 008829cc  5f                   pop edi
// 008829cd  5b                   pop ebx
// 008829ce  5e                   pop esi
// 008829cf  83c418               add esp, 0x18
// 008829d2  c20c00               ret 0xc
// 008829d5  8d4c241c             lea ecx, [esp + 0x1c]
// 008829d9  51                   push ecx
// 008829da  8bce                 mov ecx, esi
// 008829dc  e88febffff           call 0x881570
// 008829e1  8bc8                 mov ecx, eax
// 008829e3  ff15a826a400         call dword ptr [0xa426a8]
// 008829e9  8d4c241c             lea ecx, [esp + 0x1c]
// 008829ed  8be8                 mov ebp, eax
// 008829ef  ff15082ea400         call dword ptr [0xa42e08]
// 008829f5  8bdf                 mov ebx, edi
// 008829f7  3bfd                 cmp edi, ebp
// 008829f9  7204                 jb 0x8829ff
// 008829fb  8bdd                 mov ebx, ebp
// 008829fd  8bfd                 mov edi, ebp
// 008829ff  8d542420             lea edx, [esp + 0x20]
// 00882a03  52                   push edx
// 00882a04  8bce                 mov ecx, esi
// 00882a06  e865ebffff           call 0x881570
// 00882a0b  53                   push ebx
// 00882a0c  8bc8                 mov ecx, eax
// 00882a0e  ff15c82da400         call dword ptr [0xa42dc8]
// 00882a14  50                   push eax
// 00882a15  8b442438             mov eax, dword ptr [esp + 0x38]
// 00882a19  57                   push edi
// 00882a1a  50                   push eax
// 00882a1b  6a01                 push 1
// 00882a1d  6800080000           push 0x800
// 00882a22  ff152402a400         call dword ptr [0xa40224]
// 00882a28  8d4c2420             lea ecx, [esp + 0x20]
// 00882a2c  8bf0                 mov esi, eax
// 00882a2e  ff15082ea400         call dword ptr [0xa42e08]
// 00882a34  83fe02               cmp esi, 2
// 00882a37  7506                 jne 0x882a3f
// 00882a39  396c2410             cmp dword ptr [esp + 0x10], ebp
// 00882a3d  7639                 jbe 0x882a78
// 00882a3f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00882a43  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00882a47  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00882a4b  45                   inc ebp
// 00882a4c  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00882a50  e81bfaffff           call 0x882470
// 00882a55  3be8                 cmp ebp, eax
// 00882a57  750c                 jne 0x882a65
// 00882a59  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00882a61  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00882a65  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 00882a69  741b                 je 0x882a86
// 00882a6b  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00882a6f  8b742414             mov esi, dword ptr [esp + 0x14]
// 00882a73  e918ffffff           jmp 0x882990
// 00882a78  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00882a7c  5d                   pop ebp
// 00882a7d  5f                   pop edi
// 00882a7e  5b                   pop ebx
// 00882a7f  5e                   pop esi
// 00882a80  83c418               add esp, 0x18
// 00882a83  c20c00               ret 0xc
// 00882a86  5d                   pop ebp
// 00882a87  5f                   pop edi
// 00882a88  5b                   pop ebx
// 00882a89  83c8ff               or eax, 0xffffffff
// 00882a8c  5e                   pop esi
// 00882a8d  83c418               add esp, 0x18
// 00882a90  c20c00               ret 0xc
// copied from an identical function in another client (function ?FindItem@CXTPControlGallery@@QBEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp