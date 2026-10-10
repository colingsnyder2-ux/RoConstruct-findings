// roc 2008-06 006fcb10  unit: CXTPPropExchange  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fcb10
//
// 006fcb10  8b442404             mov eax, dword ptr [esp + 4]
// 006fcb14  83ec10               sub esp, 0x10
// 006fcb17  53                   push ebx
// 006fcb18  55                   push ebp
// 006fcb19  56                   push esi
// 006fcb1a  8b30                 mov esi, dword ptr [eax]
// 006fcb1c  33ed                 xor ebp, ebp
// 006fcb1e  57                   push edi
// 006fcb1f  3bf5                 cmp esi, ebp
// 006fcb21  7506                 jne 0x6fcb29
// 006fcb23  896c2410             mov dword ptr [esp + 0x10], ebp
// 006fcb27  eb1a                 jmp 0x6fcb43
// 006fcb29  8bc6                 mov eax, esi
// 006fcb2b  8d5002               lea edx, [eax + 2]
// 006fcb2e  8bff                 mov edi, edi
// 006fcb30  668b08               mov cx, word ptr [eax]
// 006fcb33  83c002               add eax, 2
// 006fcb36  663bcd               cmp cx, bp
// 006fcb39  75f5                 jne 0x6fcb30
// 006fcb3b  2bc2                 sub eax, edx
// 006fcb3d  d1f8                 sar eax, 1
// 006fcb3f  89442410             mov dword ptr [esp + 0x10], eax
// 006fcb43  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006fcb47  3bdd                 cmp ebx, ebp
// 006fcb49  0f841d010000         je 0x6fcc6c
// 006fcb4f  8bc3                 mov eax, ebx
// 006fcb51  8d5002               lea edx, [eax + 2]
// 006fcb54  668b08               mov cx, word ptr [eax]
// 006fcb57  83c002               add eax, 2
// 006fcb5a  663bcd               cmp cx, bp
// 006fcb5d  75f5                 jne 0x6fcb54
// 006fcb5f  2bc2                 sub eax, edx
// 006fcb61  d1f8                 sar eax, 1
// 006fcb63  8bf8                 mov edi, eax
// 006fcb65  897c2418             mov dword ptr [esp + 0x18], edi
// 006fcb69  0f84fd000000         je 0x6fcc6c
// 006fcb6f  396c2410             cmp dword ptr [esp + 0x10], ebp
// 006fcb73  0f84f3000000         je 0x6fcc6c
// 006fcb79  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006fcb7d  3bc5                 cmp eax, ebp
// 006fcb7f  7506                 jne 0x6fcb87
// 006fcb81  896c2414             mov dword ptr [esp + 0x14], ebp
// 006fcb85  eb1c                 jmp 0x6fcba3
// 006fcb87  8d5002               lea edx, [eax + 2]
// 006fcb8a  8d9b00000000         lea ebx, [ebx]
// 006fcb90  668b08               mov cx, word ptr [eax]
// 006fcb93  83c002               add eax, 2
// 006fcb96  663bcd               cmp cx, bp
// 006fcb99  75f5                 jne 0x6fcb90
// 006fcb9b  2bc2                 sub eax, edx
// 006fcb9d  d1f8                 sar eax, 1
// 006fcb9f  89442414             mov dword ptr [esp + 0x14], eax
// 006fcba3  53                   push ebx
// 006fcba4  56                   push esi
// 006fcba5  8b3508268000         mov esi, dword ptr [0x802608]
// 006fcbab  ffd6                 call esi
// 006fcbad  83c408               add esp, 8
// 006fcbb0  85c0                 test eax, eax
// 006fcbb2  0f84aa000000         je 0x6fcc62
// 006fcbb8  8d0c78               lea ecx, [eax + edi*2]
// 006fcbbb  53                   push ebx
// 006fcbbc  51                   push ecx
// 006fcbbd  45                   inc ebp
// 006fcbbe  ffd6                 call esi
// 006fcbc0  83c408               add esp, 8
// 006fcbc3  85c0                 test eax, eax
// 006fcbc5  75f1                 jne 0x6fcbb8
// 006fcbc7  896c241c             mov dword ptr [esp + 0x1c], ebp
// 006fcbcb  85ed                 test ebp, ebp
// 006fcbcd  0f8e8f000000         jle 0x6fcc62
// 006fcbd3  8b542424             mov edx, dword ptr [esp + 0x24]
// 006fcbd7  8b02                 mov eax, dword ptr [edx]
// 006fcbd9  53                   push ebx
// 006fcbda  50                   push eax
// 006fcbdb  ffd6                 call esi
// 006fcbdd  8bf0                 mov esi, eax
// 006fcbdf  83c408               add esp, 8
// 006fcbe2  85f6                 test esi, esi
// 006fcbe4  747c                 je 0x6fcc62
// 006fcbe6  8b442414             mov eax, dword ptr [esp + 0x14]
// 006fcbea  8d2c00               lea ebp, [eax + eax]
// 006fcbed  2bc7                 sub eax, edi
// 006fcbef  89442414             mov dword ptr [esp + 0x14], eax
// 006fcbf3  eb0f                 jmp 0x6fcc04
// 006fcbf5  eb09                 jmp 0x6fcc00
// 006fcbf7  8da42400000000       lea esp, [esp]
// 006fcbfe  8bff                 mov edi, edi
// 006fcc00  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006fcc04  8b542424             mov edx, dword ptr [esp + 0x24]
// 006fcc08  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fcc0c  8bce                 mov ecx, esi
// 006fcc0e  2b0a                 sub ecx, dword ptr [edx]
// 006fcc10  8d1c2e               lea ebx, [esi + ebp]
// 006fcc13  d1f9                 sar ecx, 1
// 006fcc15  2bc1                 sub eax, ecx
// 006fcc17  2bc7                 sub eax, edi
// 006fcc19  8d3c00               lea edi, [eax + eax]
// 006fcc1c  8b442418             mov eax, dword ptr [esp + 0x18]
// 006fcc20  57                   push edi
// 006fcc21  8d0c46               lea ecx, [esi + eax*2]
// 006fcc24  51                   push ecx
// 006fcc25  57                   push edi
// 006fcc26  53                   push ebx
// 006fcc27  ff1550288000         call dword ptr [0x802850]
// 006fcc2d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006fcc31  55                   push ebp
// 006fcc32  52                   push edx
// 006fcc33  55                   push ebp
// 006fcc34  56                   push esi
// 006fcc35  ff15ac288000         call dword ptr [0x8028ac]
// 006fcc3b  8b542448             mov edx, dword ptr [esp + 0x48]
// 006fcc3f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006fcc43  014c2430             add dword ptr [esp + 0x30], ecx
// 006fcc47  52                   push edx
// 006fcc48  33c0                 xor eax, eax
// 006fcc4a  53                   push ebx
// 006fcc4b  6689041f             mov word ptr [edi + ebx], ax
// 006fcc4f  ff1508268000         call dword ptr [0x802608]
// 006fcc55  8bf0                 mov esi, eax
// 006fcc57  83c428               add esp, 0x28
// 006fcc5a  85f6                 test esi, esi
// 006fcc5c  75a2                 jne 0x6fcc00
// 006fcc5e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006fcc62  5f                   pop edi
// 006fcc63  5e                   pop esi
// 006fcc64  8bc5                 mov eax, ebp
// 006fcc66  5d                   pop ebp
// 006fcc67  5b                   pop ebx
// 006fcc68  83c410               add esp, 0x10
// 006fcc6b  c3                   ret 
// 006fcc6c  5f                   pop edi
// 006fcc6d  5e                   pop esi
// 006fcc6e  5d                   pop ebp
// 006fcc6f  33c0                 xor eax, eax
// 006fcc71  5b                   pop ebx
// 006fcc72  83c410               add esp, 0x10
// 006fcc75  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?REPLACEW_S@@YAHAAPA_WPB_W1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
