// roc 2009-12 004d0070  unit: G3D::PBVTextureFormat::?$Table  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d0070
//
// 004d0070  6aff                 push -1
// 004d0072  680c329300           push 0x93320c
// 004d0077  64a100000000         mov eax, dword ptr fs:[0]
// 004d007d  50                   push eax
// 004d007e  64892500000000       mov dword ptr fs:[0], esp
// 004d0085  83ec7c               sub esp, 0x7c
// 004d0088  56                   push esi
// 004d0089  8bf1                 mov esi, ecx
// 004d008b  8d4c2420             lea ecx, [esp + 0x20]
// 004d008f  e85c18f9ff           call 0x4618f0
// 004d0094  8b0e                 mov ecx, dword ptr [esi]
// 004d0096  8b01                 mov eax, dword ptr [ecx]
// 004d0098  8b00                 mov eax, dword ptr [eax]
// 004d009a  8d542420             lea edx, [esp + 0x20]
// 004d009e  52                   push edx
// 004d009f  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 004d00aa  ffd0                 call eax
// 004d00ac  833d24d9b70000       cmp dword ptr [0xb7d924], 0
// 004d00b3  7433                 je 0x4d00e8
// 004d00b5  8b4608               mov eax, dword ptr [esi + 8]
// 004d00b8  85c0                 test eax, eax
// 004d00ba  741c                 je 0x4d00d8
// 004d00bc  807c244a00           cmp byte ptr [esp + 0x4a], 0
// 004d00c1  7407                 je 0x4d00ca
// 004d00c3  68185c9b00           push 0x9b5c18
// 004d00c8  eb05                 jmp 0x4d00cf
// 004d00ca  68005c9b00           push 0x9b5c00
// 004d00cf  50                   push eax
// 004d00d0  e84bc11100           call 0x5ec220
// 004d00d5  83c408               add esp, 8
// 004d00d8  33c9                 xor ecx, ecx
// 004d00da  384c244a             cmp byte ptr [esp + 0x4a], cl
// 004d00de  0f94c1               sete cl
// 004d00e1  51                   push ecx
// 004d00e2  ff1524d9b700         call dword ptr [0xb7d924]
// 004d00e8  8b4608               mov eax, dword ptr [esi + 8]
// 004d00eb  85c0                 test eax, eax
// 004d00ed  7418                 je 0x4d0107
// 004d00ef  dd442450             fld qword ptr [esp + 0x50]
// 004d00f3  83ec08               sub esp, 8
// 004d00f6  dd1c24               fstp qword ptr [esp]
// 004d00f9  68e45b9b00           push 0x9b5be4
// 004d00fe  50                   push eax
// 004d00ff  e81cc11100           call 0x5ec220
// 004d0104  83c410               add esp, 0x10
// 004d0107  dd442450             fld qword ptr [esp + 0x50]
// 004d010b  83ec10               sub esp, 0x10
// 004d010e  dd5610               fst qword ptr [esi + 0x10]
// 004d0111  8bce                 mov ecx, esi
// 004d0113  d9e8                 fld1 
// 004d0115  d9c0                 fld st(0)
// 004d0117  d8f2                 fdiv st(2)
// 004d0119  dd9e90080000         fstp qword ptr [esi + 0x890]
// 004d011f  dd5c2408             fstp qword ptr [esp + 8]
// 004d0123  dd1c24               fstp qword ptr [esp]
// 004d0126  e845feffff           call 0x4cff70
// 004d012b  837e0800             cmp dword ptr [esi + 8], 0
// 004d012f  7436                 je 0x4d0167
// 004d0131  68d45b9b00           push 0x9b5bd4
// 004d0136  8d4c2408             lea ecx, [esp + 8]
// 004d013a  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0140  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d0143  8d542404             lea edx, [esp + 4]
// 004d0147  52                   push edx
// 004d0148  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 004d0150  e89bbe1100           call 0x5ebff0
// 004d0155  8d4c2404             lea ecx, [esp + 4]
// 004d0159  c684248800000000     mov byte ptr [esp + 0x88], 0
// 004d0161  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0167  53                   push ebx
// 004d0168  55                   push ebp
// 004d0169  57                   push edi
// 004d016a  68b45b9b00           push 0x9b5bb4
// 004d016f  8d4c2414             lea ecx, [esp + 0x14]
// 004d0173  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0179  8d442410             lea eax, [esp + 0x10]
// 004d017d  50                   push eax
// 004d017e  c684249800000002     mov byte ptr [esp + 0x98], 2
// 004d0186  e8953d0000           call 0x4d3f20
// 004d018b  83c404               add esp, 4
// 004d018e  8d4c2410             lea ecx, [esp + 0x10]
// 004d0192  8ad8                 mov bl, al
// 004d0194  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004d019c  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d01a2  84db                 test bl, bl
// 004d01a4  744e                 je 0x4d01f4
// 004d01a6  837e0800             cmp dword ptr [esi + 8], 0
// 004d01aa  7436                 je 0x4d01e2
// 004d01ac  688c5b9b00           push 0x9b5b8c
// 004d01b1  8d4c2414             lea ecx, [esp + 0x14]
// 004d01b5  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d01bb  8d4c2410             lea ecx, [esp + 0x10]
// 004d01bf  51                   push ecx
// 004d01c0  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d01c3  c684249800000003     mov byte ptr [esp + 0x98], 3
// 004d01cb  e820be1100           call 0x5ebff0
// 004d01d0  8d4c2410             lea ecx, [esp + 0x10]
// 004d01d4  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004d01dc  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d01e2  68fa810000           push 0x81fa
// 004d01e7  68f8810000           push 0x81f8
// 004d01ec  ff15a4bb9800         call dword ptr [0x98bba4]
// 004d01f2  eb3c                 jmp 0x4d0230
// 004d01f4  837e0800             cmp dword ptr [esi + 8], 0
// 004d01f8  7436                 je 0x4d0230
// 004d01fa  68485b9b00           push 0x9b5b48
// 004d01ff  8d4c2414             lea ecx, [esp + 0x14]
// 004d0203  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0209  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d020c  8d542410             lea edx, [esp + 0x10]
// 004d0210  52                   push edx
// 004d0211  c684249800000004     mov byte ptr [esp + 0x98], 4
// 004d0219  e8d2bd1100           call 0x5ebff0
// 004d021e  8d4c2410             lea ecx, [esp + 0x10]
// 004d0222  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004d022a  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0230  8b3d10bc9800         mov edi, dword ptr [0x98bc10]
// 004d0236  6802110000           push 0x1102
// 004d023b  68500c0000           push 0xc50
// 004d0240  ffd7                 call edi
// 004d0242  68445b9b00           push 0x9b5b44
// 004d0247  8d4c2414             lea ecx, [esp + 0x14]
// 004d024b  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0251  8d442410             lea eax, [esp + 0x10]
// 004d0255  50                   push eax
// 004d0256  c684249800000005     mov byte ptr [esp + 0x98], 5
// 004d025e  e8dd340000           call 0x4d3740
// 004d0263  50                   push eax
// 004d0264  e847321200           call 0x5f34b0
// 004d0269  83c408               add esp, 8
// 004d026c  84c0                 test al, al
// 004d026e  8d4c2410             lea ecx, [esp + 0x10]
// 004d0272  0f94c3               sete bl
// 004d0275  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004d027d  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0283  8b2dd0bb9800         mov ebp, dword ptr [0x98bbd0]
// 004d0289  84db                 test bl, bl
// 004d028b  7426                 je 0x4d02b3
// 004d028d  6802110000           push 0x1102
// 004d0292  68520c0000           push 0xc52
// 004d0297  ffd7                 call edi
// 004d0299  6802110000           push 0x1102
// 004d029e  68510c0000           push 0xc51
// 004d02a3  ffd7                 call edi
// 004d02a5  68200b0000           push 0xb20
// 004d02aa  ffd5                 call ebp
// 004d02ac  68100b0000           push 0xb10
// 004d02b1  ffd5                 call ebp
// 004d02b3  68305b9b00           push 0x9b5b30
// 004d02b8  8d4c2414             lea ecx, [esp + 0x14]
// 004d02bc  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d02c2  8d4c2410             lea ecx, [esp + 0x10]
// 004d02c6  51                   push ecx
// 004d02c7  c684249800000006     mov byte ptr [esp + 0x98], 6
// 004d02cf  e84c3c0000           call 0x4d3f20
// 004d02d4  83c404               add esp, 4
// 004d02d7  8d4c2410             lea ecx, [esp + 0x10]
// 004d02db  8ad8                 mov bl, al
// 004d02dd  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004d02e5  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d02eb  84db                 test bl, bl
// 004d02ed  7407                 je 0x4d02f6
// 004d02ef  689d800000           push 0x809d
// 004d02f4  ffd5                 call ebp
// 004d02f6  68105b9b00           push 0x9b5b10
// 004d02fb  8d4c2414             lea ecx, [esp + 0x14]
// 004d02ff  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0305  8d542410             lea edx, [esp + 0x10]
// 004d0309  52                   push edx
// 004d030a  c684249800000007     mov byte ptr [esp + 0x98], 7
// 004d0312  e8093c0000           call 0x4d3f20
// 004d0317  83c404               add esp, 4
// 004d031a  8d4c2410             lea ecx, [esp + 0x10]
// 004d031e  8ad8                 mov bl, al
// 004d0320  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004d0328  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d032e  84db                 test bl, bl
// 004d0330  740c                 je 0x4d033e
// 004d0332  6802110000           push 0x1102
// 004d0337  6834850000           push 0x8534
// 004d033c  ffd7                 call edi
// 004d033e  8bce                 mov ecx, esi
// 004d0340  e86bf1ffff           call 0x4cf4b0
// 004d0345  8b7608               mov esi, dword ptr [esi + 8]
// 004d0348  5f                   pop edi
// 004d0349  5d                   pop ebp
// 004d034a  5b                   pop ebx
// 004d034b  85f6                 test esi, esi
// 004d034d  740e                 je 0x4d035d
// 004d034f  68f05a9b00           push 0x9b5af0
// 004d0354  56                   push esi
// 004d0355  e8c6be1100           call 0x5ec220
// 004d035a  83c408               add esp, 8
// 004d035d  8d4c2460             lea ecx, [esp + 0x60]
// 004d0361  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 004d036c  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0372  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 004d0379  5e                   pop esi
// 004d037a  64890d00000000       mov dword ptr fs:[0], ecx
// 004d0381  81c488000000         add esp, 0x88
// 004d0387  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVideoMode@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
