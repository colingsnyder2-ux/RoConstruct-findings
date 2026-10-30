// roc 2010-06 00825880  unit: CXTPControlGallery  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00825880
//
// 00825880  83ec18               sub esp, 0x18
// 00825883  56                   push esi
// 00825884  8bf1                 mov esi, ecx
// 00825886  89742408             mov dword ptr [esp + 8], esi
// 0082588a  e851fbffff           call 0x8253e0
// 0082588f  85c0                 test eax, eax
// 00825891  750a                 jne 0x82589d
// 00825893  83c8ff               or eax, 0xffffffff
// 00825896  5e                   pop esi
// 00825897  83c418               add esp, 0x18
// 0082589a  c20c00               ret 0xc
// 0082589d  53                   push ebx
// 0082589e  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008258a2  57                   push edi
// 008258a3  85db                 test ebx, ebx
// 008258a5  741d                 je 0x8258c4
// 008258a7  8bc3                 mov eax, ebx
// 008258a9  8d5001               lea edx, [eax + 1]
// 008258ac  8d642400             lea esp, [esp]
// 008258b0  8a08                 mov cl, byte ptr [eax]
// 008258b2  40                   inc eax
// 008258b3  84c9                 test cl, cl
// 008258b5  75f9                 jne 0x8258b0
// 008258b7  2bc2                 sub eax, edx
// 008258b9  8bf8                 mov edi, eax
// 008258bb  897c240c             mov dword ptr [esp + 0xc], edi
// 008258bf  83ff01               cmp edi, 1
// 008258c2  730c                 jae 0x8258d0
// 008258c4  5f                   pop edi
// 008258c5  5b                   pop ebx
// 008258c6  83c8ff               or eax, 0xffffffff
// 008258c9  5e                   pop esi
// 008258ca  83c418               add esp, 0x18
// 008258cd  c20c00               ret 0xc
// 008258d0  55                   push ebp
// 008258d1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008258d5  45                   inc ebp
// 008258d6  8bce                 mov ecx, esi
// 008258d8  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008258dc  e8fffaffff           call 0x8253e0
// 008258e1  3be8                 cmp ebp, eax
// 008258e3  7d04                 jge 0x8258e9
// 008258e5  85ed                 test ebp, ebp
// 008258e7  7d0c                 jge 0x8258f5
// 008258e9  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008258f1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008258f5  896c2424             mov dword ptr [esp + 0x24], ebp
// 008258f9  8da42400000000       lea esp, [esp]
// 00825900  55                   push ebp
// 00825901  8bce                 mov ecx, esi
// 00825903  e8f8faffff           call 0x825400
// 00825908  837c243400           cmp dword ptr [esp + 0x34], 0
// 0082590d  8bf0                 mov esi, eax
// 0082590f  7434                 je 0x825945
// 00825911  8d442418             lea eax, [esp + 0x18]
// 00825915  50                   push eax
// 00825916  8bce                 mov ecx, esi
// 00825918  e8c3ebffff           call 0x8244e0
// 0082591d  53                   push ebx
// 0082591e  8bc8                 mov ecx, eax
// 00825920  ff1528c09e00         call dword ptr [0x9ec028]
// 00825926  85c0                 test eax, eax
// 00825928  8d4c2418             lea ecx, [esp + 0x18]
// 0082592c  0f94c3               sete bl
// 0082592f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00825935  84db                 test bl, bl
// 00825937  747e                 je 0x8259b7
// 00825939  8bc5                 mov eax, ebp
// 0082593b  5d                   pop ebp
// 0082593c  5f                   pop edi
// 0082593d  5b                   pop ebx
// 0082593e  5e                   pop esi
// 0082593f  83c418               add esp, 0x18
// 00825942  c20c00               ret 0xc
// 00825945  8d4c241c             lea ecx, [esp + 0x1c]
// 00825949  51                   push ecx
// 0082594a  8bce                 mov ecx, esi
// 0082594c  e88febffff           call 0x8244e0
// 00825951  8bc8                 mov ecx, eax
// 00825953  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00825959  8d4c241c             lea ecx, [esp + 0x1c]
// 0082595d  8be8                 mov ebp, eax
// 0082595f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00825965  8bdf                 mov ebx, edi
// 00825967  3bfd                 cmp edi, ebp
// 00825969  7204                 jb 0x82596f
// 0082596b  8bdd                 mov ebx, ebp
// 0082596d  8bfd                 mov edi, ebp
// 0082596f  8d542420             lea edx, [esp + 0x20]
// 00825973  52                   push edx
// 00825974  8bce                 mov ecx, esi
// 00825976  e865ebffff           call 0x8244e0
// 0082597b  53                   push ebx
// 0082597c  8bc8                 mov ecx, eax
// 0082597e  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00825984  50                   push eax
// 00825985  8b442438             mov eax, dword ptr [esp + 0x38]
// 00825989  57                   push edi
// 0082598a  50                   push eax
// 0082598b  6a01                 push 1
// 0082598d  6800080000           push 0x800
// 00825992  ff153ca29e00         call dword ptr [0x9ea23c]
// 00825998  8d4c2420             lea ecx, [esp + 0x20]
// 0082599c  8bf0                 mov esi, eax
// 0082599e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008259a4  83fe02               cmp esi, 2
// 008259a7  7506                 jne 0x8259af
// 008259a9  396c2410             cmp dword ptr [esp + 0x10], ebp
// 008259ad  7639                 jbe 0x8259e8
// 008259af  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008259b3  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008259b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008259bb  45                   inc ebp
// 008259bc  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008259c0  e81bfaffff           call 0x8253e0
// 008259c5  3be8                 cmp ebp, eax
// 008259c7  750c                 jne 0x8259d5
// 008259c9  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008259d1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008259d5  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 008259d9  741b                 je 0x8259f6
// 008259db  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008259df  8b742414             mov esi, dword ptr [esp + 0x14]
// 008259e3  e918ffffff           jmp 0x825900
// 008259e8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008259ec  5d                   pop ebp
// 008259ed  5f                   pop edi
// 008259ee  5b                   pop ebx
// 008259ef  5e                   pop esi
// 008259f0  83c418               add esp, 0x18
// 008259f3  c20c00               ret 0xc
// 008259f6  5d                   pop ebp
// 008259f7  5f                   pop edi
// 008259f8  5b                   pop ebx
// 008259f9  83c8ff               or eax, 0xffffffff
// 008259fc  5e                   pop esi
// 008259fd  83c418               add esp, 0x18
// 00825a00  c20c00               ret 0xc
// copied from an identical function in another client (function ?FindItem@CXTPControlGallery@@QBEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp