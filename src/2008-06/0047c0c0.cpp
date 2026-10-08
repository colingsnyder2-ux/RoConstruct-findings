// roc 2008-06 0047c0c0  unit: CInstanceRecord::CNameItem  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047c0c0
//
// 0047c0c0  6aff                 push -1
// 0047c0c2  681c4d7c00           push 0x7c4d1c
// 0047c0c7  64a100000000         mov eax, dword ptr fs:[0]
// 0047c0cd  50                   push eax
// 0047c0ce  64892500000000       mov dword ptr fs:[0], esp
// 0047c0d5  83ec7c               sub esp, 0x7c
// 0047c0d8  56                   push esi
// 0047c0d9  8bf1                 mov esi, ecx
// 0047c0db  8d4c2420             lea ecx, [esp + 0x20]
// 0047c0df  e8fcebfdff           call 0x45ace0
// 0047c0e4  8b0e                 mov ecx, dword ptr [esi]
// 0047c0e6  8b01                 mov eax, dword ptr [ecx]
// 0047c0e8  8b00                 mov eax, dword ptr [eax]
// 0047c0ea  8d542420             lea edx, [esp + 0x20]
// 0047c0ee  52                   push edx
// 0047c0ef  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 0047c0fa  ffd0                 call eax
// 0047c0fc  833d14f8960000       cmp dword ptr [0x96f814], 0
// 0047c103  7433                 je 0x47c138
// 0047c105  8b4608               mov eax, dword ptr [esi + 8]
// 0047c108  85c0                 test eax, eax
// 0047c10a  741c                 je 0x47c128
// 0047c10c  807c244a00           cmp byte ptr [esp + 0x4a], 0
// 0047c111  7407                 je 0x47c11a
// 0047c113  6878e88100           push 0x81e878
// 0047c118  eb05                 jmp 0x47c11f
// 0047c11a  6860e88100           push 0x81e860
// 0047c11f  50                   push eax
// 0047c120  e8fbdf0800           call 0x50a120
// 0047c125  83c408               add esp, 8
// 0047c128  33c9                 xor ecx, ecx
// 0047c12a  384c244a             cmp byte ptr [esp + 0x4a], cl
// 0047c12e  0f94c1               sete cl
// 0047c131  51                   push ecx
// 0047c132  ff1514f89600         call dword ptr [0x96f814]
// 0047c138  8b4608               mov eax, dword ptr [esi + 8]
// 0047c13b  85c0                 test eax, eax
// 0047c13d  7418                 je 0x47c157
// 0047c13f  dd442450             fld qword ptr [esp + 0x50]
// 0047c143  83ec08               sub esp, 8
// 0047c146  dd1c24               fstp qword ptr [esp]
// 0047c149  6844e88100           push 0x81e844
// 0047c14e  50                   push eax
// 0047c14f  e8ccdf0800           call 0x50a120
// 0047c154  83c410               add esp, 0x10
// 0047c157  dd442450             fld qword ptr [esp + 0x50]
// 0047c15b  83ec10               sub esp, 0x10
// 0047c15e  dd5610               fst qword ptr [esi + 0x10]
// 0047c161  8bce                 mov ecx, esi
// 0047c163  d9e8                 fld1 
// 0047c165  d9c0                 fld st(0)
// 0047c167  d8f2                 fdiv st(2)
// 0047c169  dd9e90080000         fstp qword ptr [esi + 0x890]
// 0047c16f  dd5c2408             fstp qword ptr [esp + 8]
// 0047c173  dd1c24               fstp qword ptr [esp]
// 0047c176  e845feffff           call 0x47bfc0
// 0047c17b  837e0800             cmp dword ptr [esi + 8], 0
// 0047c17f  7436                 je 0x47c1b7
// 0047c181  6834e88100           push 0x81e834
// 0047c186  8d4c2408             lea ecx, [esp + 8]
// 0047c18a  ff1558248000         call dword ptr [0x802458]
// 0047c190  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c193  8d542404             lea edx, [esp + 4]
// 0047c197  52                   push edx
// 0047c198  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 0047c1a0  e84bdd0800           call 0x509ef0
// 0047c1a5  8d4c2404             lea ecx, [esp + 4]
// 0047c1a9  c684248800000000     mov byte ptr [esp + 0x88], 0
// 0047c1b1  ff1568248000         call dword ptr [0x802468]
// 0047c1b7  53                   push ebx
// 0047c1b8  55                   push ebp
// 0047c1b9  57                   push edi
// 0047c1ba  6814e88100           push 0x81e814
// 0047c1bf  8d4c2414             lea ecx, [esp + 0x14]
// 0047c1c3  ff1558248000         call dword ptr [0x802458]
// 0047c1c9  8d442410             lea eax, [esp + 0x10]
// 0047c1cd  50                   push eax
// 0047c1ce  c684249800000002     mov byte ptr [esp + 0x98], 2
// 0047c1d6  e8854effff           call 0x471060
// 0047c1db  83c404               add esp, 4
// 0047c1de  8d4c2410             lea ecx, [esp + 0x10]
// 0047c1e2  8ad8                 mov bl, al
// 0047c1e4  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0047c1ec  ff1568248000         call dword ptr [0x802468]
// 0047c1f2  84db                 test bl, bl
// 0047c1f4  744e                 je 0x47c244
// 0047c1f6  837e0800             cmp dword ptr [esi + 8], 0
// 0047c1fa  7436                 je 0x47c232
// 0047c1fc  68ece78100           push 0x81e7ec
// 0047c201  8d4c2414             lea ecx, [esp + 0x14]
// 0047c205  ff1558248000         call dword ptr [0x802458]
// 0047c20b  8d4c2410             lea ecx, [esp + 0x10]
// 0047c20f  51                   push ecx
// 0047c210  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c213  c684249800000003     mov byte ptr [esp + 0x98], 3
// 0047c21b  e8d0dc0800           call 0x509ef0
// 0047c220  8d4c2410             lea ecx, [esp + 0x10]
// 0047c224  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0047c22c  ff1568248000         call dword ptr [0x802468]
// 0047c232  68fa810000           push 0x81fa
// 0047c237  68f8810000           push 0x81f8
// 0047c23c  ff1574298000         call dword ptr [0x802974]
// 0047c242  eb3c                 jmp 0x47c280
// 0047c244  837e0800             cmp dword ptr [esi + 8], 0
// 0047c248  7436                 je 0x47c280
// 0047c24a  68a8e78100           push 0x81e7a8
// 0047c24f  8d4c2414             lea ecx, [esp + 0x14]
// 0047c253  ff1558248000         call dword ptr [0x802458]
// 0047c259  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c25c  8d542410             lea edx, [esp + 0x10]
// 0047c260  52                   push edx
// 0047c261  c684249800000004     mov byte ptr [esp + 0x98], 4
// 0047c269  e882dc0800           call 0x509ef0
// 0047c26e  8d4c2410             lea ecx, [esp + 0x10]
// 0047c272  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0047c27a  ff1568248000         call dword ptr [0x802468]
// 0047c280  8b3d3c2a8000         mov edi, dword ptr [0x802a3c]
// 0047c286  6802110000           push 0x1102
// 0047c28b  68500c0000           push 0xc50
// 0047c290  ffd7                 call edi
// 0047c292  68a4e78100           push 0x81e7a4
// 0047c297  8d4c2414             lea ecx, [esp + 0x14]
// 0047c29b  ff1558248000         call dword ptr [0x802458]
// 0047c2a1  8d442410             lea eax, [esp + 0x10]
// 0047c2a5  50                   push eax
// 0047c2a6  c684249800000005     mov byte ptr [esp + 0x98], 5
// 0047c2ae  e8cd45ffff           call 0x470880
// 0047c2b3  50                   push eax
// 0047c2b4  e8f75d0900           call 0x5120b0
// 0047c2b9  83c408               add esp, 8
// 0047c2bc  84c0                 test al, al
// 0047c2be  8d4c2410             lea ecx, [esp + 0x10]
// 0047c2c2  0f94c3               sete bl
// 0047c2c5  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0047c2cd  ff1568248000         call dword ptr [0x802468]
// 0047c2d3  8b2d50298000         mov ebp, dword ptr [0x802950]
// 0047c2d9  84db                 test bl, bl
// 0047c2db  7426                 je 0x47c303
// 0047c2dd  6802110000           push 0x1102
// 0047c2e2  68520c0000           push 0xc52
// 0047c2e7  ffd7                 call edi
// 0047c2e9  6802110000           push 0x1102
// 0047c2ee  68510c0000           push 0xc51
// 0047c2f3  ffd7                 call edi
// 0047c2f5  68200b0000           push 0xb20
// 0047c2fa  ffd5                 call ebp
// 0047c2fc  68100b0000           push 0xb10
// 0047c301  ffd5                 call ebp
// 0047c303  6890e78100           push 0x81e790
// 0047c308  8d4c2414             lea ecx, [esp + 0x14]
// 0047c30c  ff1558248000         call dword ptr [0x802458]
// 0047c312  8d4c2410             lea ecx, [esp + 0x10]
// 0047c316  51                   push ecx
// 0047c317  c684249800000006     mov byte ptr [esp + 0x98], 6
// 0047c31f  e83c4dffff           call 0x471060
// 0047c324  83c404               add esp, 4
// 0047c327  8d4c2410             lea ecx, [esp + 0x10]
// 0047c32b  8ad8                 mov bl, al
// 0047c32d  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0047c335  ff1568248000         call dword ptr [0x802468]
// 0047c33b  84db                 test bl, bl
// 0047c33d  7407                 je 0x47c346
// 0047c33f  689d800000           push 0x809d
// 0047c344  ffd5                 call ebp
// 0047c346  6870e78100           push 0x81e770
// 0047c34b  8d4c2414             lea ecx, [esp + 0x14]
// 0047c34f  ff1558248000         call dword ptr [0x802458]
// 0047c355  8d542410             lea edx, [esp + 0x10]
// 0047c359  52                   push edx
// 0047c35a  c684249800000007     mov byte ptr [esp + 0x98], 7
// 0047c362  e8f94cffff           call 0x471060
// 0047c367  83c404               add esp, 4
// 0047c36a  8d4c2410             lea ecx, [esp + 0x10]
// 0047c36e  8ad8                 mov bl, al
// 0047c370  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0047c378  ff1568248000         call dword ptr [0x802468]
// 0047c37e  84db                 test bl, bl
// 0047c380  740c                 je 0x47c38e
// 0047c382  6802110000           push 0x1102
// 0047c387  6834850000           push 0x8534
// 0047c38c  ffd7                 call edi
// 0047c38e  8bce                 mov ecx, esi
// 0047c390  e85bf2ffff           call 0x47b5f0
// 0047c395  8b7608               mov esi, dword ptr [esi + 8]
// 0047c398  5f                   pop edi
// 0047c399  5d                   pop ebp
// 0047c39a  5b                   pop ebx
// 0047c39b  85f6                 test esi, esi
// 0047c39d  740e                 je 0x47c3ad
// 0047c39f  6850e78100           push 0x81e750
// 0047c3a4  56                   push esi
// 0047c3a5  e876dd0800           call 0x50a120
// 0047c3aa  83c408               add esp, 8
// 0047c3ad  8d4c2460             lea ecx, [esp + 0x60]
// 0047c3b1  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 0047c3bc  ff1568248000         call dword ptr [0x802468]
// 0047c3c2  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0047c3c9  5e                   pop esi
// 0047c3ca  64890d00000000       mov dword ptr fs:[0], ecx
// 0047c3d1  81c488000000         add esp, 0x88
// 0047c3d7  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVideoMode@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
