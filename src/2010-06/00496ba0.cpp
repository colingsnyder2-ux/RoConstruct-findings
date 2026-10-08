// roc 2010-06 00496ba0  unit: seg_00490000  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00496ba0
//
// 00496ba0  6aff                 push -1
// 00496ba2  689c6b9800           push 0x986b9c
// 00496ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00496bad  50                   push eax
// 00496bae  64892500000000       mov dword ptr fs:[0], esp
// 00496bb5  83ec7c               sub esp, 0x7c
// 00496bb8  56                   push esi
// 00496bb9  8bf1                 mov esi, ecx
// 00496bbb  8d4c2420             lea ecx, [esp + 0x20]
// 00496bbf  e82c0affff           call 0x4875f0
// 00496bc4  8b0e                 mov ecx, dword ptr [esi]
// 00496bc6  8b01                 mov eax, dword ptr [ecx]
// 00496bc8  8b00                 mov eax, dword ptr [eax]
// 00496bca  8d542420             lea edx, [esp + 0x20]
// 00496bce  52                   push edx
// 00496bcf  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 00496bda  ffd0                 call eax
// 00496bdc  833db439c00000       cmp dword ptr [0xc039b4], 0
// 00496be3  7433                 je 0x496c18
// 00496be5  8b4608               mov eax, dword ptr [esi + 8]
// 00496be8  85c0                 test eax, eax
// 00496bea  741c                 je 0x496c08
// 00496bec  807c244a00           cmp byte ptr [esp + 0x4a], 0
// 00496bf1  7407                 je 0x496bfa
// 00496bf3  68f06ba100           push 0xa16bf0
// 00496bf8  eb05                 jmp 0x496bff
// 00496bfa  68d86ba100           push 0xa16bd8
// 00496bff  50                   push eax
// 00496c00  e85b8c0b00           call 0x54f860
// 00496c05  83c408               add esp, 8
// 00496c08  33c9                 xor ecx, ecx
// 00496c0a  384c244a             cmp byte ptr [esp + 0x4a], cl
// 00496c0e  0f94c1               sete cl
// 00496c11  51                   push ecx
// 00496c12  ff15b439c000         call dword ptr [0xc039b4]
// 00496c18  8b4608               mov eax, dword ptr [esi + 8]
// 00496c1b  85c0                 test eax, eax
// 00496c1d  7418                 je 0x496c37
// 00496c1f  dd442450             fld qword ptr [esp + 0x50]
// 00496c23  83ec08               sub esp, 8
// 00496c26  dd1c24               fstp qword ptr [esp]
// 00496c29  68bc6ba100           push 0xa16bbc
// 00496c2e  50                   push eax
// 00496c2f  e82c8c0b00           call 0x54f860
// 00496c34  83c410               add esp, 0x10
// 00496c37  dd442450             fld qword ptr [esp + 0x50]
// 00496c3b  83ec10               sub esp, 0x10
// 00496c3e  dd5610               fst qword ptr [esi + 0x10]
// 00496c41  8bce                 mov ecx, esi
// 00496c43  d9e8                 fld1 
// 00496c45  d9c0                 fld st(0)
// 00496c47  d8f2                 fdiv st(2)
// 00496c49  dd9e90080000         fstp qword ptr [esi + 0x890]
// 00496c4f  dd5c2408             fstp qword ptr [esp + 8]
// 00496c53  dd1c24               fstp qword ptr [esp]
// 00496c56  e845feffff           call 0x496aa0
// 00496c5b  837e0800             cmp dword ptr [esi + 8], 0
// 00496c5f  7436                 je 0x496c97
// 00496c61  68ac6ba100           push 0xa16bac
// 00496c66  8d4c2408             lea ecx, [esp + 8]
// 00496c6a  ff1510a49e00         call dword ptr [0x9ea410]
// 00496c70  8b4e08               mov ecx, dword ptr [esi + 8]
// 00496c73  8d542404             lea edx, [esp + 4]
// 00496c77  52                   push edx
// 00496c78  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 00496c80  e8ab890b00           call 0x54f630
// 00496c85  8d4c2404             lea ecx, [esp + 4]
// 00496c89  c684248800000000     mov byte ptr [esp + 0x88], 0
// 00496c91  ff1500a49e00         call dword ptr [0x9ea400]
// 00496c97  53                   push ebx
// 00496c98  55                   push ebp
// 00496c99  57                   push edi
// 00496c9a  688c6ba100           push 0xa16b8c
// 00496c9f  8d4c2414             lea ecx, [esp + 0x14]
// 00496ca3  ff1510a49e00         call dword ptr [0x9ea410]
// 00496ca9  8d442410             lea eax, [esp + 0x10]
// 00496cad  50                   push eax
// 00496cae  c684249800000002     mov byte ptr [esp + 0x98], 2
// 00496cb6  e82567ffff           call 0x48d3e0
// 00496cbb  83c404               add esp, 4
// 00496cbe  8d4c2410             lea ecx, [esp + 0x10]
// 00496cc2  8ad8                 mov bl, al
// 00496cc4  c684249400000000     mov byte ptr [esp + 0x94], 0
// 00496ccc  ff1500a49e00         call dword ptr [0x9ea400]
// 00496cd2  84db                 test bl, bl
// 00496cd4  744e                 je 0x496d24
// 00496cd6  837e0800             cmp dword ptr [esi + 8], 0
// 00496cda  7436                 je 0x496d12
// 00496cdc  68646ba100           push 0xa16b64
// 00496ce1  8d4c2414             lea ecx, [esp + 0x14]
// 00496ce5  ff1510a49e00         call dword ptr [0x9ea410]
// 00496ceb  8d4c2410             lea ecx, [esp + 0x10]
// 00496cef  51                   push ecx
// 00496cf0  8b4e08               mov ecx, dword ptr [esi + 8]
// 00496cf3  c684249800000003     mov byte ptr [esp + 0x98], 3
// 00496cfb  e830890b00           call 0x54f630
// 00496d00  8d4c2410             lea ecx, [esp + 0x10]
// 00496d04  c684249400000000     mov byte ptr [esp + 0x94], 0
// 00496d0c  ff1500a49e00         call dword ptr [0x9ea400]
// 00496d12  68fa810000           push 0x81fa
// 00496d17  68f8810000           push 0x81f8
// 00496d1c  ff1574ab9e00         call dword ptr [0x9eab74]
// 00496d22  eb3c                 jmp 0x496d60
// 00496d24  837e0800             cmp dword ptr [esi + 8], 0
// 00496d28  7436                 je 0x496d60
// 00496d2a  68206ba100           push 0xa16b20
// 00496d2f  8d4c2414             lea ecx, [esp + 0x14]
// 00496d33  ff1510a49e00         call dword ptr [0x9ea410]
// 00496d39  8b4e08               mov ecx, dword ptr [esi + 8]
// 00496d3c  8d542410             lea edx, [esp + 0x10]
// 00496d40  52                   push edx
// 00496d41  c684249800000004     mov byte ptr [esp + 0x98], 4
// 00496d49  e8e2880b00           call 0x54f630
// 00496d4e  8d4c2410             lea ecx, [esp + 0x10]
// 00496d52  c684249400000000     mov byte ptr [esp + 0x94], 0
// 00496d5a  ff1500a49e00         call dword ptr [0x9ea400]
// 00496d60  8b3df4ab9e00         mov edi, dword ptr [0x9eabf4]
// 00496d66  6802110000           push 0x1102
// 00496d6b  68500c0000           push 0xc50
// 00496d70  ffd7                 call edi
// 00496d72  681c6ba100           push 0xa16b1c
// 00496d77  8d4c2414             lea ecx, [esp + 0x14]
// 00496d7b  ff1510a49e00         call dword ptr [0x9ea410]
// 00496d81  8d442410             lea eax, [esp + 0x10]
// 00496d85  50                   push eax
// 00496d86  c684249800000005     mov byte ptr [esp + 0x98], 5
// 00496d8e  e86d5effff           call 0x48cc00
// 00496d93  50                   push eax
// 00496d94  e847070c00           call 0x5574e0
// 00496d99  83c408               add esp, 8
// 00496d9c  84c0                 test al, al
// 00496d9e  8d4c2410             lea ecx, [esp + 0x10]
// 00496da2  0f94c3               sete bl
// 00496da5  c684249400000000     mov byte ptr [esp + 0x94], 0
// 00496dad  ff1500a49e00         call dword ptr [0x9ea400]
// 00496db3  8b2decaa9e00         mov ebp, dword ptr [0x9eaaec]
// 00496db9  84db                 test bl, bl
// 00496dbb  7426                 je 0x496de3
// 00496dbd  6802110000           push 0x1102
// 00496dc2  68520c0000           push 0xc52
// 00496dc7  ffd7                 call edi
// 00496dc9  6802110000           push 0x1102
// 00496dce  68510c0000           push 0xc51
// 00496dd3  ffd7                 call edi
// 00496dd5  68200b0000           push 0xb20
// 00496dda  ffd5                 call ebp
// 00496ddc  68100b0000           push 0xb10
// 00496de1  ffd5                 call ebp
// 00496de3  68086ba100           push 0xa16b08
// 00496de8  8d4c2414             lea ecx, [esp + 0x14]
// 00496dec  ff1510a49e00         call dword ptr [0x9ea410]
// 00496df2  8d4c2410             lea ecx, [esp + 0x10]
// 00496df6  51                   push ecx
// 00496df7  c684249800000006     mov byte ptr [esp + 0x98], 6
// 00496dff  e8dc65ffff           call 0x48d3e0
// 00496e04  83c404               add esp, 4
// 00496e07  8d4c2410             lea ecx, [esp + 0x10]
// 00496e0b  8ad8                 mov bl, al
// 00496e0d  c684249400000000     mov byte ptr [esp + 0x94], 0
// 00496e15  ff1500a49e00         call dword ptr [0x9ea400]
// 00496e1b  84db                 test bl, bl
// 00496e1d  7407                 je 0x496e26
// 00496e1f  689d800000           push 0x809d
// 00496e24  ffd5                 call ebp
// 00496e26  68e86aa100           push 0xa16ae8
// 00496e2b  8d4c2414             lea ecx, [esp + 0x14]
// 00496e2f  ff1510a49e00         call dword ptr [0x9ea410]
// 00496e35  8d542410             lea edx, [esp + 0x10]
// 00496e39  52                   push edx
// 00496e3a  c684249800000007     mov byte ptr [esp + 0x98], 7
// 00496e42  e89965ffff           call 0x48d3e0
// 00496e47  83c404               add esp, 4
// 00496e4a  8d4c2410             lea ecx, [esp + 0x10]
// 00496e4e  8ad8                 mov bl, al
// 00496e50  c684249400000000     mov byte ptr [esp + 0x94], 0
// 00496e58  ff1500a49e00         call dword ptr [0x9ea400]
// 00496e5e  84db                 test bl, bl
// 00496e60  740c                 je 0x496e6e
// 00496e62  6802110000           push 0x1102
// 00496e67  6834850000           push 0x8534
// 00496e6c  ffd7                 call edi
// 00496e6e  8bce                 mov ecx, esi
// 00496e70  e86bf1ffff           call 0x495fe0
// 00496e75  8b7608               mov esi, dword ptr [esi + 8]
// 00496e78  5f                   pop edi
// 00496e79  5d                   pop ebp
// 00496e7a  5b                   pop ebx
// 00496e7b  85f6                 test esi, esi
// 00496e7d  740e                 je 0x496e8d
// 00496e7f  68c86aa100           push 0xa16ac8
// 00496e84  56                   push esi
// 00496e85  e8d6890b00           call 0x54f860
// 00496e8a  83c408               add esp, 8
// 00496e8d  8d4c2460             lea ecx, [esp + 0x60]
// 00496e91  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 00496e9c  ff1500a49e00         call dword ptr [0x9ea400]
// 00496ea2  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00496ea9  5e                   pop esi
// 00496eaa  64890d00000000       mov dword ptr fs:[0], ecx
// 00496eb1  81c488000000         add esp, 0x88
// 00496eb7  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVideoMode@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
