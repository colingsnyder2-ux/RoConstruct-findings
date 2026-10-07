// roc 2011-06 005364c0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005364c0
//
// 005364c0  53                   push ebx
// 005364c1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005364c5  56                   push esi
// 005364c6  8bf1                 mov esi, ecx
// 005364c8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005364cb  8bc1                 mov eax, ecx
// 005364cd  c1e803               shr eax, 3
// 005364d0  8d0cd9               lea ecx, [ecx + ebx*8]
// 005364d3  8d14dd00000000       lea edx, [ebx*8]
// 005364da  83e03f               and eax, 0x3f
// 005364dd  57                   push edi
// 005364de  894e18               mov dword ptr [esi + 0x18], ecx
// 005364e1  3bca                 cmp ecx, edx
// 005364e3  7303                 jae 0x5364e8
// 005364e5  ff461c               inc dword ptr [esi + 0x1c]
// 005364e8  8bcb                 mov ecx, ebx
// 005364ea  c1e91d               shr ecx, 0x1d
// 005364ed  014e1c               add dword ptr [esi + 0x1c], ecx
// 005364f0  8d1418               lea edx, [eax + ebx]
// 005364f3  83fa3f               cmp edx, 0x3f
// 005364f6  765b                 jbe 0x536553
// 005364f8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005364fc  55                   push ebp
// 005364fd  bf40000000           mov edi, 0x40
// 00536502  2bf8                 sub edi, eax
// 00536504  57                   push edi
// 00536505  51                   push ecx
// 00536506  8d543020             lea edx, [eax + esi + 0x20]
// 0053650a  52                   push edx
// 0053650b  e8cc502d00           call 0x80b5dc
// 00536510  83c40c               add esp, 0xc
// 00536513  8d4e20               lea ecx, [esi + 0x20]
// 00536516  51                   push ecx
// 00536517  8d4604               lea eax, [esi + 4]
// 0053651a  50                   push eax
// 0053651b  8bce                 mov ecx, esi
// 0053651d  e86eeeffff           call 0x535390
// 00536522  8d6f3f               lea ebp, [edi + 0x3f]
// 00536525  3beb                 cmp ebp, ebx
// 00536527  7325                 jae 0x53654e
// 00536529  8da42400000000       lea esp, [esp]
// 00536530  8b542414             mov edx, dword ptr [esp + 0x14]
// 00536534  8d442ac1             lea eax, [edx + ebp - 0x3f]
// 00536538  50                   push eax
// 00536539  8d4604               lea eax, [esi + 4]
// 0053653c  50                   push eax
// 0053653d  8bce                 mov ecx, esi
// 0053653f  e84ceeffff           call 0x535390
// 00536544  83c540               add ebp, 0x40
// 00536547  83c740               add edi, 0x40
// 0053654a  3beb                 cmp ebp, ebx
// 0053654c  72e2                 jb 0x536530
// 0053654e  33c0                 xor eax, eax
// 00536550  5d                   pop ebp
// 00536551  eb02                 jmp 0x536555
// 00536553  33ff                 xor edi, edi
// 00536555  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00536559  2bdf                 sub ebx, edi
// 0053655b  53                   push ebx
// 0053655c  03f9                 add edi, ecx
// 0053655e  8d543020             lea edx, [eax + esi + 0x20]
// 00536562  57                   push edi
// 00536563  52                   push edx
// 00536564  e873502d00           call 0x80b5dc
// 00536569  83c40c               add esp, 0xc
// 0053656c  5f                   pop edi
// 0053656d  5e                   pop esi
// 0053656e  5b                   pop ebx
// 0053656f  c20800               ret 8
// library rbx2016-raknet/SHA1.cpp (function ?Update@CSHA1@@QAEXPAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
