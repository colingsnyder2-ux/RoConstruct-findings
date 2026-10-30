// roc 2009-06 0079d6f0  unit: CXTPControlGallery  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079d6f0
//
// 0079d6f0  83ec18               sub esp, 0x18
// 0079d6f3  56                   push esi
// 0079d6f4  8bf1                 mov esi, ecx
// 0079d6f6  89742408             mov dword ptr [esp + 8], esi
// 0079d6fa  e851fbffff           call 0x79d250
// 0079d6ff  85c0                 test eax, eax
// 0079d701  750a                 jne 0x79d70d
// 0079d703  83c8ff               or eax, 0xffffffff
// 0079d706  5e                   pop esi
// 0079d707  83c418               add esp, 0x18
// 0079d70a  c20c00               ret 0xc
// 0079d70d  53                   push ebx
// 0079d70e  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0079d712  57                   push edi
// 0079d713  85db                 test ebx, ebx
// 0079d715  741d                 je 0x79d734
// 0079d717  8bc3                 mov eax, ebx
// 0079d719  8d5001               lea edx, [eax + 1]
// 0079d71c  8d642400             lea esp, [esp]
// 0079d720  8a08                 mov cl, byte ptr [eax]
// 0079d722  40                   inc eax
// 0079d723  84c9                 test cl, cl
// 0079d725  75f9                 jne 0x79d720
// 0079d727  2bc2                 sub eax, edx
// 0079d729  8bf8                 mov edi, eax
// 0079d72b  897c240c             mov dword ptr [esp + 0xc], edi
// 0079d72f  83ff01               cmp edi, 1
// 0079d732  730c                 jae 0x79d740
// 0079d734  5f                   pop edi
// 0079d735  5b                   pop ebx
// 0079d736  83c8ff               or eax, 0xffffffff
// 0079d739  5e                   pop esi
// 0079d73a  83c418               add esp, 0x18
// 0079d73d  c20c00               ret 0xc
// 0079d740  55                   push ebp
// 0079d741  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0079d745  45                   inc ebp
// 0079d746  8bce                 mov ecx, esi
// 0079d748  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0079d74c  e8fffaffff           call 0x79d250
// 0079d751  3be8                 cmp ebp, eax
// 0079d753  7d04                 jge 0x79d759
// 0079d755  85ed                 test ebp, ebp
// 0079d757  7d0c                 jge 0x79d765
// 0079d759  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0079d761  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0079d765  896c2424             mov dword ptr [esp + 0x24], ebp
// 0079d769  8da42400000000       lea esp, [esp]
// 0079d770  55                   push ebp
// 0079d771  8bce                 mov ecx, esi
// 0079d773  e8f8faffff           call 0x79d270
// 0079d778  837c243400           cmp dword ptr [esp + 0x34], 0
// 0079d77d  8bf0                 mov esi, eax
// 0079d77f  7434                 je 0x79d7b5
// 0079d781  8d442418             lea eax, [esp + 0x18]
// 0079d785  50                   push eax
// 0079d786  8bce                 mov ecx, esi
// 0079d788  e8c3ebffff           call 0x79c350
// 0079d78d  53                   push ebx
// 0079d78e  8bc8                 mov ecx, eax
// 0079d790  ff158cf38900         call dword ptr [0x89f38c]
// 0079d796  85c0                 test eax, eax
// 0079d798  8d4c2418             lea ecx, [esp + 0x18]
// 0079d79c  0f94c3               sete bl
// 0079d79f  ff1510fd8900         call dword ptr [0x89fd10]
// 0079d7a5  84db                 test bl, bl
// 0079d7a7  747e                 je 0x79d827
// 0079d7a9  8bc5                 mov eax, ebp
// 0079d7ab  5d                   pop ebp
// 0079d7ac  5f                   pop edi
// 0079d7ad  5b                   pop ebx
// 0079d7ae  5e                   pop esi
// 0079d7af  83c418               add esp, 0x18
// 0079d7b2  c20c00               ret 0xc
// 0079d7b5  8d4c241c             lea ecx, [esp + 0x1c]
// 0079d7b9  51                   push ecx
// 0079d7ba  8bce                 mov ecx, esi
// 0079d7bc  e88febffff           call 0x79c350
// 0079d7c1  8bc8                 mov ecx, eax
// 0079d7c3  ff1554fb8900         call dword ptr [0x89fb54]
// 0079d7c9  8d4c241c             lea ecx, [esp + 0x1c]
// 0079d7cd  8be8                 mov ebp, eax
// 0079d7cf  ff1510fd8900         call dword ptr [0x89fd10]
// 0079d7d5  8bdf                 mov ebx, edi
// 0079d7d7  3bfd                 cmp edi, ebp
// 0079d7d9  7204                 jb 0x79d7df
// 0079d7db  8bdd                 mov ebx, ebp
// 0079d7dd  8bfd                 mov edi, ebp
// 0079d7df  8d542420             lea edx, [esp + 0x20]
// 0079d7e3  52                   push edx
// 0079d7e4  8bce                 mov ecx, esi
// 0079d7e6  e865ebffff           call 0x79c350
// 0079d7eb  53                   push ebx
// 0079d7ec  8bc8                 mov ecx, eax
// 0079d7ee  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0079d7f4  50                   push eax
// 0079d7f5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0079d7f9  57                   push edi
// 0079d7fa  50                   push eax
// 0079d7fb  6a01                 push 1
// 0079d7fd  6800080000           push 0x800
// 0079d802  ff1594e38900         call dword ptr [0x89e394]
// 0079d808  8d4c2420             lea ecx, [esp + 0x20]
// 0079d80c  8bf0                 mov esi, eax
// 0079d80e  ff1510fd8900         call dword ptr [0x89fd10]
// 0079d814  83fe02               cmp esi, 2
// 0079d817  7506                 jne 0x79d81f
// 0079d819  396c2410             cmp dword ptr [esp + 0x10], ebp
// 0079d81d  7639                 jbe 0x79d858
// 0079d81f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0079d823  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0079d827  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079d82b  45                   inc ebp
// 0079d82c  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0079d830  e81bfaffff           call 0x79d250
// 0079d835  3be8                 cmp ebp, eax
// 0079d837  750c                 jne 0x79d845
// 0079d839  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0079d841  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0079d845  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 0079d849  741b                 je 0x79d866
// 0079d84b  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0079d84f  8b742414             mov esi, dword ptr [esp + 0x14]
// 0079d853  e918ffffff           jmp 0x79d770
// 0079d858  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0079d85c  5d                   pop ebp
// 0079d85d  5f                   pop edi
// 0079d85e  5b                   pop ebx
// 0079d85f  5e                   pop esi
// 0079d860  83c418               add esp, 0x18
// 0079d863  c20c00               ret 0xc
// 0079d866  5d                   pop ebp
// 0079d867  5f                   pop edi
// 0079d868  5b                   pop ebx
// 0079d869  83c8ff               or eax, 0xffffffff
// 0079d86c  5e                   pop esi
// 0079d86d  83c418               add esp, 0x18
// 0079d870  c20c00               ret 0xc
// copied from an identical function in another client (function ?FindItem@CXTPControlGallery@@QBEHHPBDH@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lang: cpp
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp