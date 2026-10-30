// roc 2009-12 008a27a0  unit: CXTPReportInplaceEdit  size: 712 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a27a0
//
// 008a27a0  6aff                 push -1
// 008a27a2  687c239600           push 0x96237c
// 008a27a7  64a100000000         mov eax, dword ptr fs:[0]
// 008a27ad  50                   push eax
// 008a27ae  83ec14               sub esp, 0x14
// 008a27b1  53                   push ebx
// 008a27b2  55                   push ebp
// 008a27b3  56                   push esi
// 008a27b4  57                   push edi
// 008a27b5  a10052b600           mov eax, dword ptr [0xb65200]
// 008a27ba  33c4                 xor eax, esp
// 008a27bc  50                   push eax
// 008a27bd  8d442428             lea eax, [esp + 0x28]
// 008a27c1  64a300000000         mov dword ptr fs:[0], eax
// 008a27c7  8bf1                 mov esi, ecx
// 008a27c9  8b4654               mov eax, dword ptr [esi + 0x54]
// 008a27cc  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008a27d0  8b5004               mov edx, dword ptr [eax + 4]
// 008a27d3  8d4e54               lea ecx, [esi + 0x54]
// 008a27d6  57                   push edi
// 008a27d7  ffd2                 call edx
// 008a27d9  33ed                 xor ebp, ebp
// 008a27db  6a40                 push 0x40
// 008a27dd  89ae88000000         mov dword ptr [esi + 0x88], ebp
// 008a27e3  e87810f5ff           call 0x7f3860
// 008a27e8  8bd8                 mov ebx, eax
// 008a27ea  83c404               add esp, 4
// 008a27ed  895c2438             mov dword ptr [esp + 0x38], ebx
// 008a27f1  896c2430             mov dword ptr [esp + 0x30], ebp
// 008a27f5  3bdd                 cmp ebx, ebp
// 008a27f7  7434                 je 0x8a282d
// 008a27f9  8bcb                 mov ecx, ebx
// 008a27fb  e8423c0800           call 0x926442
// 008a2800  8d4b2c               lea ecx, [ebx + 0x2c]
// 008a2803  c70344499f00         mov dword ptr [ebx], 0x9f4944
// 008a2809  ff1574de9800         call dword ptr [0x98de74]
// 008a280f  83c8ff               or eax, 0xffffffff
// 008a2812  896b20               mov dword ptr [ebx + 0x20], ebp
// 008a2815  894324               mov dword ptr [ebx + 0x24], eax
// 008a2818  894328               mov dword ptr [ebx + 0x28], eax
// 008a281b  894330               mov dword ptr [ebx + 0x30], eax
// 008a281e  c7433408020000       mov dword ptr [ebx + 0x34], 0x208
// 008a2825  896b38               mov dword ptr [ebx + 0x38], ebp
// 008a2828  89433c               mov dword ptr [ebx + 0x3c], eax
// 008a282b  eb05                 jmp 0x8a2832
// 008a282d  33db                 xor ebx, ebx
// 008a282f  83c8ff               or eax, 0xffffffff
// 008a2832  89442430             mov dword ptr [esp + 0x30], eax
// 008a2836  8b4664               mov eax, dword ptr [esi + 0x64]
// 008a2839  50                   push eax
// 008a283a  e8b18bf8ff           call 0x82b3f0
// 008a283f  50                   push eax
// 008a2840  e8f913f5ff           call 0x7f3c3e
// 008a2845  83c408               add esp, 8
// 008a2848  3bc5                 cmp eax, ebp
// 008a284a  7426                 je 0x8a2872
// 008a284c  8d4c2438             lea ecx, [esp + 0x38]
// 008a2850  51                   push ecx
// 008a2851  8bc8                 mov ecx, eax
// 008a2853  e8c88ef8ff           call 0x82b720
// 008a2858  8d6b2c               lea ebp, [ebx + 0x2c]
// 008a285b  50                   push eax
// 008a285c  8bcd                 mov ecx, ebp
// 008a285e  c744243401000000     mov dword ptr [esp + 0x34], 1
// 008a2866  ff1538d59800         call dword ptr [0x98d538]
// 008a286c  8d4c2438             lea ecx, [esp + 0x38]
// 008a2870  eb2b                 jmp 0x8a289d
// 008a2872  8b4660               mov eax, dword ptr [esi + 0x60]
// 008a2875  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a2878  8b11                 mov edx, dword ptr [ecx]
// 008a287a  8b526c               mov edx, dword ptr [edx + 0x6c]
// 008a287d  50                   push eax
// 008a287e  8d442418             lea eax, [esp + 0x18]
// 008a2882  50                   push eax
// 008a2883  ffd2                 call edx
// 008a2885  8d6b2c               lea ebp, [ebx + 0x2c]
// 008a2888  50                   push eax
// 008a2889  8bcd                 mov ecx, ebp
// 008a288b  c744243402000000     mov dword ptr [esp + 0x34], 2
// 008a2893  ff1538d59800         call dword ptr [0x98d538]
// 008a2899  8d4c2414             lea ecx, [esp + 0x14]
// 008a289d  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008a28a5  ff15c0de9800         call dword ptr [0x98dec0]
// 008a28ab  8b5664               mov edx, dword ptr [esi + 0x64]
// 008a28ae  8b4f08               mov ecx, dword ptr [edi + 8]
// 008a28b1  8b01                 mov eax, dword ptr [ecx]
// 008a28b3  8b80f0000000         mov eax, dword ptr [eax + 0xf0]
// 008a28b9  53                   push ebx
// 008a28ba  52                   push edx
// 008a28bb  8b5660               mov edx, dword ptr [esi + 0x60]
// 008a28be  52                   push edx
// 008a28bf  ffd0                 call eax
// 008a28c1  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 008a28c4  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008a28c7  8b5718               mov edx, dword ptr [edi + 0x18]
// 008a28ca  894c2418             mov dword ptr [esp + 0x18], ecx
// 008a28ce  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008a28d1  89442420             mov dword ptr [esp + 0x20], eax
// 008a28d5  894c2424             mov dword ptr [esp + 0x24], ecx
// 008a28d9  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a28dc  8954241c             mov dword ptr [esp + 0x1c], edx
// 008a28e0  8b11                 mov edx, dword ptr [ecx]
// 008a28e2  8b5270               mov edx, dword ptr [edx + 0x70]
// 008a28e5  8d442418             lea eax, [esp + 0x18]
// 008a28e9  50                   push eax
// 008a28ea  57                   push edi
// 008a28eb  ffd2                 call edx
// 008a28ed  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a28f0  ff44241c             inc dword ptr [esp + 0x1c]
// 008a28f4  b802000000           mov eax, 2
// 008a28f9  01442418             add dword ptr [esp + 0x18], eax
// 008a28fd  29442420             sub dword ptr [esp + 0x20], eax
// 008a2901  29442424             sub dword ptr [esp + 0x24], eax
// 008a2905  8b4660               mov eax, dword ptr [esi + 0x60]
// 008a2908  50                   push eax
// 008a2909  e8a28bf7ff           call 0x81b4b0
// 008a290e  8bf8                 mov edi, eax
// 008a2910  85ff                 test edi, edi
// 008a2912  0f843a010000         je 0x8a2a52
// 008a2918  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008a291b  898e8c000000         mov dword ptr [esi + 0x8c], ecx
// 008a2921  8d4e78               lea ecx, [esi + 0x78]
// 008a2924  55                   push ebp
// 008a2925  ff1538d59800         call dword ptr [0x98d538]
// 008a292b  55                   push ebp
// 008a292c  8d4e7c               lea ecx, [esi + 0x7c]
// 008a292f  ff1538d59800         call dword ptr [0x98d538]
// 008a2935  8b6f44               mov ebp, dword ptr [edi + 0x44]
// 008a2938  81cd00000040         or ebp, 0x40000000
// 008a293e  837e2000             cmp dword ptr [esi + 0x20], 0
// 008a2942  741f                 je 0x8a2963
// 008a2944  8bce                 mov ecx, esi
// 008a2946  e8273b0800           call 0x926472
// 008a294b  33c5                 xor eax, ebp
// 008a294d  a903080050           test eax, 0x50000803
// 008a2952  7409                 je 0x8a295d
// 008a2954  8b16                 mov edx, dword ptr [esi]
// 008a2956  8b4268               mov eax, dword ptr [edx + 0x68]
// 008a2959  8bce                 mov ecx, esi
// 008a295b  ffd0                 call eax
// 008a295d  837e2000             cmp dword ptr [esi + 0x20], 0
// 008a2961  7513                 jne 0x8a2976
// 008a2963  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008a2966  6a00                 push 0
// 008a2968  51                   push ecx
// 008a2969  8d542420             lea edx, [esp + 0x20]
// 008a296d  52                   push edx
// 008a296e  55                   push ebp
// 008a296f  8bce                 mov ecx, esi
// 008a2971  e8083b0800           call 0x92647e
// 008a2976  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008a2979  e8fa3a0800           call 0x926478
// 008a297e  a900200000           test eax, 0x2000
// 008a2983  7410                 je 0x8a2995
// 008a2985  6a00                 push 0
// 008a2987  6800200000           push 0x2000
// 008a298c  6a00                 push 0
// 008a298e  8bce                 mov ecx, esi
// 008a2990  e86b14f5ff           call 0x7f3e00
// 008a2995  6a00                 push 0
// 008a2997  6a00                 push 0
// 008a2999  6a03                 push 3
// 008a299b  8bce                 mov ecx, esi
// 008a299d  e83816f5ff           call 0x7f3fda
// 008a29a2  8b4658               mov eax, dword ptr [esi + 0x58]
// 008a29a5  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 008a29ab  83b93402000000       cmp dword ptr [ecx + 0x234], 0
// 008a29b2  741e                 je 0x8a29d2
// 008a29b4  8b4338               mov eax, dword ptr [ebx + 0x38]
// 008a29b7  a802                 test al, 2
// 008a29b9  7406                 je 0x8a29c1
// 008a29bb  6a00                 push 0
// 008a29bd  6a02                 push 2
// 008a29bf  eb08                 jmp 0x8a29c9
// 008a29c1  a801                 test al, 1
// 008a29c3  740d                 je 0x8a29d2
// 008a29c5  6a00                 push 0
// 008a29c7  6a01                 push 1
// 008a29c9  6a00                 push 0
// 008a29cb  8bce                 mov ecx, esi
// 008a29cd  e80816f5ff           call 0x7f3fda
// 008a29d2  8b5748               mov edx, dword ptr [edi + 0x48]
// 008a29d5  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a29d8  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008a29de  6a00                 push 0
// 008a29e0  52                   push edx
// 008a29e1  68c5000000           push 0xc5
// 008a29e6  50                   push eax
// 008a29e7  ffd7                 call edi
// 008a29e9  8bce                 mov ecx, esi
// 008a29eb  e81212f5ff           call 0x7f3c02
// 008a29f0  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008a29f3  51                   push ecx
// 008a29f4  8bce                 mov ecx, esi
// 008a29f6  e875edffff           call 0x8a1770
// 008a29fb  8d4e78               lea ecx, [esi + 0x78]
// 008a29fe  ff1580de9800         call dword ptr [0x98de80]
// 008a2a04  50                   push eax
// 008a2a05  8bce                 mov ecx, esi
// 008a2a07  e854e9ffff           call 0x8a1360
// 008a2a0c  8bcb                 mov ecx, ebx
// 008a2a0e  e8c913f5ff           call 0x7f3ddc
// 008a2a13  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a2a17  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a2a1b  3bc1                 cmp eax, ecx
// 008a2a1d  7e1d                 jle 0x8a2a3c
// 008a2a1f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008a2a23  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008a2a27  6a44                 push 0x44
// 008a2a29  2bda                 sub ebx, edx
// 008a2a2b  53                   push ebx
// 008a2a2c  2bc1                 sub eax, ecx
// 008a2a2e  50                   push eax
// 008a2a2f  52                   push edx
// 008a2a30  51                   push ecx
// 008a2a31  6a00                 push 0
// 008a2a33  8bce                 mov ecx, esi
// 008a2a35  e8f211f5ff           call 0x7f3c2c
// 008a2a3a  eb07                 jmp 0x8a2a43
// 008a2a3c  8bce                 mov ecx, esi
// 008a2a3e  e8fde8ffff           call 0x8a1340
// 008a2a43  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a2a46  6a00                 push 0
// 008a2a48  6a03                 push 3
// 008a2a4a  68d3000000           push 0xd3
// 008a2a4f  52                   push edx
// 008a2a50  ffd7                 call edi
// 008a2a52  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a2a56  64890d00000000       mov dword ptr fs:[0], ecx
// 008a2a5d  59                   pop ecx
// 008a2a5e  5f                   pop edi
// 008a2a5f  5e                   pop esi
// 008a2a60  5d                   pop ebp
// 008a2a61  5b                   pop ebx
// 008a2a62  83c420               add esp, 0x20
// 008a2a65  c20400               ret 4
// copied from an identical function in another client (function ?Create@CXTPReportInplaceEdit@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportInplaceControls.cpp