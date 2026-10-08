// roc 2009-06 004a35a0  unit: G3D::PBVTextureFormat::?$Table  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a35a0
//
// 004a35a0  6aff                 push -1
// 004a35a2  684c738500           push 0x85734c
// 004a35a7  64a100000000         mov eax, dword ptr fs:[0]
// 004a35ad  50                   push eax
// 004a35ae  64892500000000       mov dword ptr fs:[0], esp
// 004a35b5  83ec7c               sub esp, 0x7c
// 004a35b8  56                   push esi
// 004a35b9  8bf1                 mov esi, ecx
// 004a35bb  8d4c2420             lea ecx, [esp + 0x20]
// 004a35bf  e86c6afbff           call 0x45a030
// 004a35c4  8b0e                 mov ecx, dword ptr [esi]
// 004a35c6  8b01                 mov eax, dword ptr [ecx]
// 004a35c8  8b00                 mov eax, dword ptr [eax]
// 004a35ca  8d542420             lea edx, [esp + 0x20]
// 004a35ce  52                   push edx
// 004a35cf  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 004a35da  ffd0                 call eax
// 004a35dc  833d74d1a30000       cmp dword ptr [0xa3d174], 0
// 004a35e3  7433                 je 0x4a3618
// 004a35e5  8b4608               mov eax, dword ptr [esi + 8]
// 004a35e8  85c0                 test eax, eax
// 004a35ea  741c                 je 0x4a3608
// 004a35ec  807c244a00           cmp byte ptr [esp + 0x4a], 0
// 004a35f1  7407                 je 0x4a35fa
// 004a35f3  6838038c00           push 0x8c0338
// 004a35f8  eb05                 jmp 0x4a35ff
// 004a35fa  6820038c00           push 0x8c0320
// 004a35ff  50                   push eax
// 004a3600  e80b9b0c00           call 0x56d110
// 004a3605  83c408               add esp, 8
// 004a3608  33c9                 xor ecx, ecx
// 004a360a  384c244a             cmp byte ptr [esp + 0x4a], cl
// 004a360e  0f94c1               sete cl
// 004a3611  51                   push ecx
// 004a3612  ff1574d1a300         call dword ptr [0xa3d174]
// 004a3618  8b4608               mov eax, dword ptr [esi + 8]
// 004a361b  85c0                 test eax, eax
// 004a361d  7418                 je 0x4a3637
// 004a361f  dd442450             fld qword ptr [esp + 0x50]
// 004a3623  83ec08               sub esp, 8
// 004a3626  dd1c24               fstp qword ptr [esp]
// 004a3629  6804038c00           push 0x8c0304
// 004a362e  50                   push eax
// 004a362f  e8dc9a0c00           call 0x56d110
// 004a3634  83c410               add esp, 0x10
// 004a3637  dd442450             fld qword ptr [esp + 0x50]
// 004a363b  83ec10               sub esp, 0x10
// 004a363e  dd5610               fst qword ptr [esi + 0x10]
// 004a3641  8bce                 mov ecx, esi
// 004a3643  d9e8                 fld1 
// 004a3645  d9c0                 fld st(0)
// 004a3647  d8f2                 fdiv st(2)
// 004a3649  dd9e90080000         fstp qword ptr [esi + 0x890]
// 004a364f  dd5c2408             fstp qword ptr [esp + 8]
// 004a3653  dd1c24               fstp qword ptr [esp]
// 004a3656  e845feffff           call 0x4a34a0
// 004a365b  837e0800             cmp dword ptr [esi + 8], 0
// 004a365f  7436                 je 0x4a3697
// 004a3661  68f4028c00           push 0x8c02f4
// 004a3666  8d4c2408             lea ecx, [esp + 8]
// 004a366a  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3670  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a3673  8d542404             lea edx, [esp + 4]
// 004a3677  52                   push edx
// 004a3678  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 004a3680  e85b980c00           call 0x56cee0
// 004a3685  8d4c2404             lea ecx, [esp + 4]
// 004a3689  c684248800000000     mov byte ptr [esp + 0x88], 0
// 004a3691  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3697  53                   push ebx
// 004a3698  55                   push ebp
// 004a3699  57                   push edi
// 004a369a  68d4028c00           push 0x8c02d4
// 004a369f  8d4c2414             lea ecx, [esp + 0x14]
// 004a36a3  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a36a9  8d442410             lea eax, [esp + 0x10]
// 004a36ad  50                   push eax
// 004a36ae  c684249800000002     mov byte ptr [esp + 0x98], 2
// 004a36b6  e8953c0000           call 0x4a7350
// 004a36bb  83c404               add esp, 4
// 004a36be  8d4c2410             lea ecx, [esp + 0x10]
// 004a36c2  8ad8                 mov bl, al
// 004a36c4  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004a36cc  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a36d2  84db                 test bl, bl
// 004a36d4  744e                 je 0x4a3724
// 004a36d6  837e0800             cmp dword ptr [esi + 8], 0
// 004a36da  7436                 je 0x4a3712
// 004a36dc  68ac028c00           push 0x8c02ac
// 004a36e1  8d4c2414             lea ecx, [esp + 0x14]
// 004a36e5  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a36eb  8d4c2410             lea ecx, [esp + 0x10]
// 004a36ef  51                   push ecx
// 004a36f0  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a36f3  c684249800000003     mov byte ptr [esp + 0x98], 3
// 004a36fb  e8e0970c00           call 0x56cee0
// 004a3700  8d4c2410             lea ecx, [esp + 0x10]
// 004a3704  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004a370c  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3712  68fa810000           push 0x81fa
// 004a3717  68f8810000           push 0x81f8
// 004a371c  ff1580eb8900         call dword ptr [0x89eb80]
// 004a3722  eb3c                 jmp 0x4a3760
// 004a3724  837e0800             cmp dword ptr [esi + 8], 0
// 004a3728  7436                 je 0x4a3760
// 004a372a  6868028c00           push 0x8c0268
// 004a372f  8d4c2414             lea ecx, [esp + 0x14]
// 004a3733  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3739  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a373c  8d542410             lea edx, [esp + 0x10]
// 004a3740  52                   push edx
// 004a3741  c684249800000004     mov byte ptr [esp + 0x98], 4
// 004a3749  e892970c00           call 0x56cee0
// 004a374e  8d4c2410             lea ecx, [esp + 0x10]
// 004a3752  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004a375a  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3760  8b3dd8ea8900         mov edi, dword ptr [0x89ead8]
// 004a3766  6802110000           push 0x1102
// 004a376b  68500c0000           push 0xc50
// 004a3770  ffd7                 call edi
// 004a3772  6864028c00           push 0x8c0264
// 004a3777  8d4c2414             lea ecx, [esp + 0x14]
// 004a377b  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3781  8d442410             lea eax, [esp + 0x10]
// 004a3785  50                   push eax
// 004a3786  c684249800000005     mov byte ptr [esp + 0x98], 5
// 004a378e  e8dd330000           call 0x4a6b70
// 004a3793  50                   push eax
// 004a3794  e8470d0d00           call 0x5744e0
// 004a3799  83c408               add esp, 8
// 004a379c  84c0                 test al, al
// 004a379e  8d4c2410             lea ecx, [esp + 0x10]
// 004a37a2  0f94c3               sete bl
// 004a37a5  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004a37ad  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a37b3  8b2daceb8900         mov ebp, dword ptr [0x89ebac]
// 004a37b9  84db                 test bl, bl
// 004a37bb  7426                 je 0x4a37e3
// 004a37bd  6802110000           push 0x1102
// 004a37c2  68520c0000           push 0xc52
// 004a37c7  ffd7                 call edi
// 004a37c9  6802110000           push 0x1102
// 004a37ce  68510c0000           push 0xc51
// 004a37d3  ffd7                 call edi
// 004a37d5  68200b0000           push 0xb20
// 004a37da  ffd5                 call ebp
// 004a37dc  68100b0000           push 0xb10
// 004a37e1  ffd5                 call ebp
// 004a37e3  6850028c00           push 0x8c0250
// 004a37e8  8d4c2414             lea ecx, [esp + 0x14]
// 004a37ec  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a37f2  8d4c2410             lea ecx, [esp + 0x10]
// 004a37f6  51                   push ecx
// 004a37f7  c684249800000006     mov byte ptr [esp + 0x98], 6
// 004a37ff  e84c3b0000           call 0x4a7350
// 004a3804  83c404               add esp, 4
// 004a3807  8d4c2410             lea ecx, [esp + 0x10]
// 004a380b  8ad8                 mov bl, al
// 004a380d  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004a3815  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a381b  84db                 test bl, bl
// 004a381d  7407                 je 0x4a3826
// 004a381f  689d800000           push 0x809d
// 004a3824  ffd5                 call ebp
// 004a3826  6830028c00           push 0x8c0230
// 004a382b  8d4c2414             lea ecx, [esp + 0x14]
// 004a382f  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3835  8d542410             lea edx, [esp + 0x10]
// 004a3839  52                   push edx
// 004a383a  c684249800000007     mov byte ptr [esp + 0x98], 7
// 004a3842  e8093b0000           call 0x4a7350
// 004a3847  83c404               add esp, 4
// 004a384a  8d4c2410             lea ecx, [esp + 0x10]
// 004a384e  8ad8                 mov bl, al
// 004a3850  c684249400000000     mov byte ptr [esp + 0x94], 0
// 004a3858  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a385e  84db                 test bl, bl
// 004a3860  740c                 je 0x4a386e
// 004a3862  6802110000           push 0x1102
// 004a3867  6834850000           push 0x8534
// 004a386c  ffd7                 call edi
// 004a386e  8bce                 mov ecx, esi
// 004a3870  e85bf2ffff           call 0x4a2ad0
// 004a3875  8b7608               mov esi, dword ptr [esi + 8]
// 004a3878  5f                   pop edi
// 004a3879  5d                   pop ebp
// 004a387a  5b                   pop ebx
// 004a387b  85f6                 test esi, esi
// 004a387d  740e                 je 0x4a388d
// 004a387f  6810028c00           push 0x8c0210
// 004a3884  56                   push esi
// 004a3885  e886980c00           call 0x56d110
// 004a388a  83c408               add esp, 8
// 004a388d  8d4c2460             lea ecx, [esp + 0x60]
// 004a3891  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 004a389c  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a38a2  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 004a38a9  5e                   pop esi
// 004a38aa  64890d00000000       mov dword ptr fs:[0], ecx
// 004a38b1  81c488000000         add esp, 0x88
// 004a38b7  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVideoMode@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
