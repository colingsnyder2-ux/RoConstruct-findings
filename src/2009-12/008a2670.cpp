// roc 2009-12 008a2670  unit: CXTPReportInplaceList  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2670
//
// 008a2670  53                   push ebx
// 008a2671  55                   push ebp
// 008a2672  56                   push esi
// 008a2673  57                   push edi
// 008a2674  8bf1                 mov esi, ecx
// 008a2676  ff15fcb29800         call dword ptr [0x98b2fc]
// 008a267c  8bf8                 mov edi, eax
// 008a267e  2b467c               sub eax, dword ptr [esi + 0x7c]
// 008a2681  3d14050000           cmp eax, 0x514
// 008a2686  7609                 jbe 0x8a2691
// 008a2688  8d4e78               lea ecx, [esi + 0x78]
// 008a268b  ff1590d69800         call dword ptr [0x98d690]
// 008a2691  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a2695  8d5e78               lea ebx, [esi + 0x78]
// 008a2698  51                   push ecx
// 008a2699  8bcb                 mov ecx, ebx
// 008a269b  897e7c               mov dword ptr [esi + 0x7c], edi
// 008a269e  ff15bcd79800         call dword ptr [0x98d7bc]
// 008a26a4  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a26a7  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008a26ad  6a00                 push 0
// 008a26af  6a00                 push 0
// 008a26b1  6888010000           push 0x188
// 008a26b6  52                   push edx
// 008a26b7  ffd7                 call edi
// 008a26b9  8be8                 mov ebp, eax
// 008a26bb  83fdff               cmp ebp, -1
// 008a26be  7502                 jne 0x8a26c2
// 008a26c0  33ed                 xor ebp, ebp
// 008a26c2  8bcb                 mov ecx, ebx
// 008a26c4  ff1580de9800         call dword ptr [0x98de80]
// 008a26ca  50                   push eax
// 008a26cb  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a26ce  55                   push ebp
// 008a26cf  688f010000           push 0x18f
// 008a26d4  50                   push eax
// 008a26d5  ffd7                 call edi
// 008a26d7  8bf8                 mov edi, eax
// 008a26d9  83ffff               cmp edi, -1
// 008a26dc  7525                 jne 0x8a2703
// 008a26de  85ed                 test ebp, ebp
// 008a26e0  7e44                 jle 0x8a2726
// 008a26e2  8bcb                 mov ecx, ebx
// 008a26e4  ff1580de9800         call dword ptr [0x98de80]
// 008a26ea  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a26ed  50                   push eax
// 008a26ee  6a00                 push 0
// 008a26f0  688f010000           push 0x18f
// 008a26f5  51                   push ecx
// 008a26f6  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008a26fc  8bf8                 mov edi, eax
// 008a26fe  83ffff               cmp edi, -1
// 008a2701  7423                 je 0x8a2726
// 008a2703  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a2706  6a00                 push 0
// 008a2708  57                   push edi
// 008a2709  6886010000           push 0x186
// 008a270e  52                   push edx
// 008a270f  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008a2715  3bef                 cmp ebp, edi
// 008a2717  740d                 je 0x8a2726
// 008a2719  8b06                 mov eax, dword ptr [esi]
// 008a271b  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 008a2721  57                   push edi
// 008a2722  8bce                 mov ecx, esi
// 008a2724  ffd2                 call edx
// 008a2726  5f                   pop edi
// 008a2727  5e                   pop esi
// 008a2728  5d                   pop ebp
// 008a2729  5b                   pop ebx
// 008a272a  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnChar@CXTPReportInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS- /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportInplaceControls.cpp