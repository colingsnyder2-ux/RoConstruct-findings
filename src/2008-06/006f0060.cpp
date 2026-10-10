// roc 2008-06 006f0060  unit: CXTPPopupBar  size: 652 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f0060
//
// 006f0060  83ec4c               sub esp, 0x4c
// 006f0063  53                   push ebx
// 006f0064  8b1dac2d8000         mov ebx, dword ptr [0x802dac]
// 006f006a  57                   push edi
// 006f006b  8bf9                 mov edi, ecx
// 006f006d  ffd3                 call ebx
// 006f006f  85c0                 test eax, eax
// 006f0071  0f852f020000         jne 0x6f02a6
// 006f0077  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 006f007d  56                   push esi
// 006f007e  50                   push eax
// 006f007f  6a01                 push 1
// 006f0081  6aff                 push -1
// 006f0083  6a0a                 push 0xa
// 006f0085  e8961b0000           call 0x6f1c20
// 006f008a  8bf0                 mov esi, eax
// 006f008c  85f6                 test esi, esi
// 006f008e  0f8411020000         je 0x6f02a5
// 006f0094  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 006f009a  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 006f00a0  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 006f00a6  8944242c             mov dword ptr [esp + 0x2c], eax
// 006f00aa  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 006f00b0  2bc1                 sub eax, ecx
// 006f00b2  89542434             mov dword ptr [esp + 0x34], edx
// 006f00b6  8b9660010000         mov edx, dword ptr [esi + 0x160]
// 006f00bc  89442420             mov dword ptr [esp + 0x20], eax
// 006f00c0  89442428             mov dword ptr [esp + 0x28], eax
// 006f00c4  8b06                 mov eax, dword ptr [esi]
// 006f00c6  8954241c             mov dword ptr [esp + 0x1c], edx
// 006f00ca  89542424             mov dword ptr [esp + 0x24], edx
// 006f00ce  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 006f00d4  55                   push ebp
// 006f00d5  8bce                 mov ecx, esi
// 006f00d7  ffd2                 call edx
// 006f00d9  89442414             mov dword ptr [esp + 0x14], eax
// 006f00dd  8b06                 mov eax, dword ptr [esi]
// 006f00df  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 006f00e5  8bce                 mov ecx, esi
// 006f00e7  ffd2                 call edx
// 006f00e9  6a00                 push 0
// 006f00eb  6aff                 push -1
// 006f00ed  8bcf                 mov ecx, edi
// 006f00ef  89442438             mov dword ptr [esp + 0x38], eax
// 006f00f3  e8d86dfcff           call 0x6b6ed0
// 006f00f8  8b07                 mov eax, dword ptr [edi]
// 006f00fa  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 006f0100  6a00                 push 0
// 006f0102  6aff                 push -1
// 006f0104  8bcf                 mov ecx, edi
// 006f0106  ffd2                 call edx
// 006f0108  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 006f010e  8be8                 mov ebp, eax
// 006f0110  83e002               and eax, 2
// 006f0113  89442410             mov dword ptr [esp + 0x10], eax
// 006f0117  8b4720               mov eax, dword ptr [edi + 0x20]
// 006f011a  50                   push eax
// 006f011b  83e501               and ebp, 1
// 006f011e  ff15a82d8000         call dword ptr [0x802da8]
// 006f0124  50                   push eax
// 006f0125  e8b40afbff           call 0x6a0bde
// 006f012a  33c0                 xor eax, eax
// 006f012c  8d4c2418             lea ecx, [esp + 0x18]
// 006f0130  51                   push ecx
// 006f0131  8944241c             mov dword ptr [esp + 0x1c], eax
// 006f0135  89442420             mov dword ptr [esp + 0x20], eax
// 006f0139  ff159c2d8000         call dword ptr [0x802d9c]
// 006f013f  ffd3                 call ebx
// 006f0141  3b4720               cmp eax, dword ptr [edi + 0x20]
// 006f0144  0f8554010000         jne 0x6f029e
// 006f014a  8d9b00000000         lea ebx, [ebx]
// 006f0150  8b1db02d8000         mov ebx, dword ptr [0x802db0]
// 006f0156  6a00                 push 0
// 006f0158  6a0f                 push 0xf
// 006f015a  6a0f                 push 0xf
// 006f015c  6a00                 push 0
// 006f015e  8d542450             lea edx, [esp + 0x50]
// 006f0162  52                   push edx
// 006f0163  ffd3                 call ebx
// 006f0165  85c0                 test eax, eax
// 006f0167  743a                 je 0x6f01a3
// 006f0169  8da42400000000       lea esp, [esp]
// 006f0170  6a0f                 push 0xf
// 006f0172  6a0f                 push 0xf
// 006f0174  6a00                 push 0
// 006f0176  8d44244c             lea eax, [esp + 0x4c]
// 006f017a  50                   push eax
// 006f017b  ff15782c8000         call dword ptr [0x802c78]
// 006f0181  85c0                 test eax, eax
// 006f0183  741e                 je 0x6f01a3
// 006f0185  8d4c2440             lea ecx, [esp + 0x40]
// 006f0189  51                   push ecx
// 006f018a  ff15c82c8000         call dword ptr [0x802cc8]
// 006f0190  6a00                 push 0
// 006f0192  6a0f                 push 0xf
// 006f0194  6a0f                 push 0xf
// 006f0196  6a00                 push 0
// 006f0198  8d542450             lea edx, [esp + 0x50]
// 006f019c  52                   push edx
// 006f019d  ffd3                 call ebx
// 006f019f  85c0                 test eax, eax
// 006f01a1  75cd                 jne 0x6f0170
// 006f01a3  6a00                 push 0
// 006f01a5  6a00                 push 0
// 006f01a7  6a00                 push 0
// 006f01a9  8d44244c             lea eax, [esp + 0x4c]
// 006f01ad  50                   push eax
// 006f01ae  ff15782c8000         call dword ptr [0x802c78]
// 006f01b4  85c0                 test eax, eax
// 006f01b6  0f8418010000         je 0x6f02d4
// 006f01bc  8b442444             mov eax, dword ptr [esp + 0x44]
// 006f01c0  3d02020000           cmp eax, 0x202
// 006f01c5  0f84d3000000         je 0x6f029e
// 006f01cb  3d00020000           cmp eax, 0x200
// 006f01d0  0f8586000000         jne 0x6f025c
// 006f01d6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f01da  8b442454             mov eax, dword ptr [esp + 0x54]
// 006f01de  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006f01e2  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 006f01e6  3bd0                 cmp edx, eax
// 006f01e8  7508                 jne 0x6f01f2
// 006f01ea  3bd9                 cmp ebx, ecx
// 006f01ec  0f84ba000000         je 0x6f02ac
// 006f01f2  2bc2                 sub eax, edx
// 006f01f4  8b542420             mov edx, dword ptr [esp + 0x20]
// 006f01f8  2bcb                 sub ecx, ebx
// 006f01fa  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006f01fe  03d0                 add edx, eax
// 006f0200  03d9                 add ebx, ecx
// 006f0202  89542420             mov dword ptr [esp + 0x20], edx
// 006f0206  895c2424             mov dword ptr [esp + 0x24], ebx
// 006f020a  85ed                 test ebp, ebp
// 006f020c  7417                 je 0x6f0225
// 006f020e  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f0212  3bd0                 cmp edx, eax
// 006f0214  7f02                 jg 0x6f0218
// 006f0216  8bd0                 mov edx, eax
// 006f0218  8b06                 mov eax, dword ptr [esi]
// 006f021a  52                   push edx
// 006f021b  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 006f0221  8bce                 mov ecx, esi
// 006f0223  ffd2                 call edx
// 006f0225  837c241000           cmp dword ptr [esp + 0x10], 0
// 006f022a  7417                 je 0x6f0243
// 006f022c  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f0230  3bd8                 cmp ebx, eax
// 006f0232  7f02                 jg 0x6f0236
// 006f0234  8bd8                 mov ebx, eax
// 006f0236  8b06                 mov eax, dword ptr [esi]
// 006f0238  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 006f023e  53                   push ebx
// 006f023f  8bce                 mov ecx, esi
// 006f0241  ffd2                 call edx
// 006f0243  8bcf                 mov ecx, edi
// 006f0245  e876e7ffff           call 0x6ee9c0
// 006f024a  8b442454             mov eax, dword ptr [esp + 0x54]
// 006f024e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 006f0252  89442418             mov dword ptr [esp + 0x18], eax
// 006f0256  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006f025a  eb5b                 jmp 0x6f02b7
// 006f025c  3d00010000           cmp eax, 0x100
// 006f0261  7549                 jne 0x6f02ac
// 006f0263  837c24481b           cmp dword ptr [esp + 0x48], 0x1b
// 006f0268  754d                 jne 0x6f02b7
// 006f026a  85ed                 test ebp, ebp
// 006f026c  7411                 je 0x6f027f
// 006f026e  8b16                 mov edx, dword ptr [esi]
// 006f0270  8b442428             mov eax, dword ptr [esp + 0x28]
// 006f0274  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 006f027a  50                   push eax
// 006f027b  8bce                 mov ecx, esi
// 006f027d  ffd2                 call edx
// 006f027f  837c241000           cmp dword ptr [esp + 0x10], 0
// 006f0284  7411                 je 0x6f0297
// 006f0286  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006f028a  8b06                 mov eax, dword ptr [esi]
// 006f028c  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 006f0292  51                   push ecx
// 006f0293  8bce                 mov ecx, esi
// 006f0295  ffd2                 call edx
// 006f0297  8bcf                 mov ecx, edi
// 006f0299  e822e7ffff           call 0x6ee9c0
// 006f029e  ff15b42d8000         call dword ptr [0x802db4]
// 006f02a4  5d                   pop ebp
// 006f02a5  5e                   pop esi
// 006f02a6  5f                   pop edi
// 006f02a7  5b                   pop ebx
// 006f02a8  83c44c               add esp, 0x4c
// 006f02ab  c3                   ret 
// 006f02ac  8d542440             lea edx, [esp + 0x40]
// 006f02b0  52                   push edx
// 006f02b1  ff15c82c8000         call dword ptr [0x802cc8]
// 006f02b7  ff15ac2d8000         call dword ptr [0x802dac]
// 006f02bd  3b4720               cmp eax, dword ptr [edi + 0x20]
// 006f02c0  0f848afeffff         je 0x6f0150
// 006f02c6  ff15b42d8000         call dword ptr [0x802db4]
// 006f02cc  5d                   pop ebp
// 006f02cd  5e                   pop esi
// 006f02ce  5f                   pop edi
// 006f02cf  5b                   pop ebx
// 006f02d0  83c44c               add esp, 0x4c
// 006f02d3  c3                   ret 
// 006f02d4  8b442448             mov eax, dword ptr [esp + 0x48]
// 006f02d8  50                   push eax
// 006f02d9  e87c0efbff           call 0x6a115a
// 006f02de  ff15b42d8000         call dword ptr [0x802db4]
// 006f02e4  5d                   pop ebp
// 006f02e5  5e                   pop esi
// 006f02e6  5f                   pop edi
// 006f02e7  5b                   pop ebx
// 006f02e8  83c44c               add esp, 0x4c
// 006f02eb  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?TrackResize@CXTPPopupBar@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
