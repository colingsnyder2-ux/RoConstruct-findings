// roc 2009-12 008906c0  unit: CXTPDockContext  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008906c0
//
// 008906c0  83ec30               sub esp, 0x30
// 008906c3  53                   push ebx
// 008906c4  56                   push esi
// 008906c5  8bf1                 mov esi, ecx
// 008906c7  8b460c               mov eax, dword ptr [esi + 0xc]
// 008906ca  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008906ce  8b5610               mov edx, dword ptr [esi + 0x10]
// 008906d1  57                   push edi
// 008906d2  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008906d6  2bc8                 sub ecx, eax
// 008906d8  8b4608               mov eax, dword ptr [esi + 8]
// 008906db  2bfa                 sub edi, edx
// 008906dd  83f80a               cmp eax, 0xa
// 008906e0  740a                 je 0x8906ec
// 008906e2  83f80d               cmp eax, 0xd
// 008906e5  7405                 je 0x8906ec
// 008906e7  83f810               cmp eax, 0x10
// 008906ea  7503                 jne 0x8906ef
// 008906ec  014e40               add dword ptr [esi + 0x40], ecx
// 008906ef  83f80b               cmp eax, 0xb
// 008906f2  740a                 je 0x8906fe
// 008906f4  83f80e               cmp eax, 0xe
// 008906f7  7405                 je 0x8906fe
// 008906f9  83f811               cmp eax, 0x11
// 008906fc  7503                 jne 0x890701
// 008906fe  014e48               add dword ptr [esi + 0x48], ecx
// 00890701  83f80c               cmp eax, 0xc
// 00890704  740a                 je 0x890710
// 00890706  83f80e               cmp eax, 0xe
// 00890709  7405                 je 0x890710
// 0089070b  83f80d               cmp eax, 0xd
// 0089070e  7503                 jne 0x890713
// 00890710  017e44               add dword ptr [esi + 0x44], edi
// 00890713  83f80f               cmp eax, 0xf
// 00890716  740a                 je 0x890722
// 00890718  83f811               cmp eax, 0x11
// 0089071b  7405                 je 0x890722
// 0089071d  83f810               cmp eax, 0x10
// 00890720  7503                 jne 0x890725
// 00890722  017e4c               add dword ptr [esi + 0x4c], edi
// 00890725  8b4e04               mov ecx, dword ptr [esi + 4]
// 00890728  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0089072b  8d44240c             lea eax, [esp + 0xc]
// 0089072f  50                   push eax
// 00890730  52                   push edx
// 00890731  ff1570cc9800         call dword ptr [0x98cc70]
// 00890737  8b4648               mov eax, dword ptr [esi + 0x48]
// 0089073a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089073e  2b4640               sub eax, dword ptr [esi + 0x40]
// 00890741  8b564c               mov edx, dword ptr [esi + 0x4c]
// 00890744  2b4c240c             sub ecx, dword ptr [esp + 0xc]
// 00890748  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0089074c  2b5644               sub edx, dword ptr [esi + 0x44]
// 0089074f  2b5c2410             sub ebx, dword ptr [esp + 0x10]
// 00890753  8d7e40               lea edi, [esi + 0x40]
// 00890756  3bc8                 cmp ecx, eax
// 00890758  7504                 jne 0x89075e
// 0089075a  3bda                 cmp ebx, edx
// 0089075c  745e                 je 0x8907bc
// 0089075e  8b4604               mov eax, dword ptr [esi + 4]
// 00890761  50                   push eax
// 00890762  8d4c2420             lea ecx, [esp + 0x20]
// 00890766  51                   push ecx
// 00890767  e804c0faff           call 0x83c770
// 0089076c  8bc8                 mov ecx, eax
// 0089076e  e89dbbfaff           call 0x83c310
// 00890773  57                   push edi
// 00890774  50                   push eax
// 00890775  8d542434             lea edx, [esp + 0x34]
// 00890779  52                   push edx
// 0089077a  ff15dcca9800         call dword ptr [0x98cadc]
// 00890780  85c0                 test eax, eax
// 00890782  7438                 je 0x8907bc
// 00890784  8b4608               mov eax, dword ptr [esi + 8]
// 00890787  8b0f                 mov ecx, dword ptr [edi]
// 00890789  8b5704               mov edx, dword ptr [edi + 4]
// 0089078c  50                   push eax
// 0089078d  83ec10               sub esp, 0x10
// 00890790  8bc4                 mov eax, esp
// 00890792  8908                 mov dword ptr [eax], ecx
// 00890794  8b4f08               mov ecx, dword ptr [edi + 8]
// 00890797  895004               mov dword ptr [eax + 4], edx
// 0089079a  8b570c               mov edx, dword ptr [edi + 0xc]
// 0089079d  894808               mov dword ptr [eax + 8], ecx
// 008907a0  8b4e04               mov ecx, dword ptr [esi + 4]
// 008907a3  89500c               mov dword ptr [eax + 0xc], edx
// 008907a6  e865bf0500           call 0x8ec710
// 008907ab  8b4e04               mov ecx, dword ptr [esi + 4]
// 008907ae  8b01                 mov eax, dword ptr [ecx]
// 008907b0  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 008907b6  6a01                 push 1
// 008907b8  6a00                 push 0
// 008907ba  ffd2                 call edx
// 008907bc  8b442440             mov eax, dword ptr [esp + 0x40]
// 008907c0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008907c4  5f                   pop edi
// 008907c5  89460c               mov dword ptr [esi + 0xc], eax
// 008907c8  894e10               mov dword ptr [esi + 0x10], ecx
// 008907cb  5e                   pop esi
// 008907cc  5b                   pop ebx
// 008907cd  83c430               add esp, 0x30
// 008907d0  c20800               ret 8
// copied from an identical function in another client (function ?Resize@CXTPDockContext@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockContext.cpp