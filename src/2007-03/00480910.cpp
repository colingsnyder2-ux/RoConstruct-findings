// roc 2007-03 00480910  unit: seg_00480000  size: 359 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480910
//
// 00480910  57                   push edi
// 00480911  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 00480917  6840987900           push 0x799840
// 0048091c  56                   push esi
// 0048091d  ffd7                 call edi
// 0048091f  83c408               add esp, 8
// 00480922  84c0                 test al, al
// 00480924  7407                 je 0x48092d
// 00480926  b806140000           mov eax, 0x1406
// 0048092b  5f                   pop edi
// 0048092c  c3                   ret 
// 0048092d  6838987900           push 0x799838
// 00480932  56                   push esi
// 00480933  ffd7                 call edi
// 00480935  83c408               add esp, 8
// 00480938  84c0                 test al, al
// 0048093a  7407                 je 0x480943
// 0048093c  b8508b0000           mov eax, 0x8b50
// 00480941  5f                   pop edi
// 00480942  c3                   ret 
// 00480943  6830987900           push 0x799830
// 00480948  56                   push esi
// 00480949  ffd7                 call edi
// 0048094b  83c408               add esp, 8
// 0048094e  84c0                 test al, al
// 00480950  7407                 je 0x480959
// 00480952  b8518b0000           mov eax, 0x8b51
// 00480957  5f                   pop edi
// 00480958  c3                   ret 
// 00480959  6828987900           push 0x799828
// 0048095e  56                   push esi
// 0048095f  ffd7                 call edi
// 00480961  83c408               add esp, 8
// 00480964  84c0                 test al, al
// 00480966  7407                 je 0x48096f
// 00480968  b8528b0000           mov eax, 0x8b52
// 0048096d  5f                   pop edi
// 0048096e  c3                   ret 
// 0048096f  6824987900           push 0x799824
// 00480974  56                   push esi
// 00480975  ffd7                 call edi
// 00480977  83c408               add esp, 8
// 0048097a  84c0                 test al, al
// 0048097c  7407                 je 0x480985
// 0048097e  b804140000           mov eax, 0x1404
// 00480983  5f                   pop edi
// 00480984  c3                   ret 
// 00480985  681c987900           push 0x79981c
// 0048098a  56                   push esi
// 0048098b  ffd7                 call edi
// 0048098d  83c408               add esp, 8
// 00480990  84c0                 test al, al
// 00480992  7407                 je 0x48099b
// 00480994  b8568b0000           mov eax, 0x8b56
// 00480999  5f                   pop edi
// 0048099a  c3                   ret 
// 0048099b  6814987900           push 0x799814
// 004809a0  56                   push esi
// 004809a1  ffd7                 call edi
// 004809a3  83c408               add esp, 8
// 004809a6  84c0                 test al, al
// 004809a8  7407                 je 0x4809b1
// 004809aa  b85a8b0000           mov eax, 0x8b5a
// 004809af  5f                   pop edi
// 004809b0  c3                   ret 
// 004809b1  680c987900           push 0x79980c
// 004809b6  56                   push esi
// 004809b7  ffd7                 call edi
// 004809b9  83c408               add esp, 8
// 004809bc  84c0                 test al, al
// 004809be  7407                 je 0x4809c7
// 004809c0  b85b8b0000           mov eax, 0x8b5b
// 004809c5  5f                   pop edi
// 004809c6  c3                   ret 
// 004809c7  6804987900           push 0x799804
// 004809cc  56                   push esi
// 004809cd  ffd7                 call edi
// 004809cf  83c408               add esp, 8
// 004809d2  84c0                 test al, al
// 004809d4  7407                 je 0x4809dd
// 004809d6  b85c8b0000           mov eax, 0x8b5c
// 004809db  5f                   pop edi
// 004809dc  c3                   ret 
// 004809dd  68f8977900           push 0x7997f8
// 004809e2  56                   push esi
// 004809e3  ffd7                 call edi
// 004809e5  83c408               add esp, 8
// 004809e8  84c0                 test al, al
// 004809ea  7407                 je 0x4809f3
// 004809ec  b85d8b0000           mov eax, 0x8b5d
// 004809f1  5f                   pop edi
// 004809f2  c3                   ret 
// 004809f3  68ec977900           push 0x7997ec
// 004809f8  56                   push esi
// 004809f9  ffd7                 call edi
// 004809fb  83c408               add esp, 8
// 004809fe  84c0                 test al, al
// 00480a00  7407                 je 0x480a09
// 00480a02  b85e8b0000           mov eax, 0x8b5e
// 00480a07  5f                   pop edi
// 00480a08  c3                   ret 
// 00480a09  68e0977900           push 0x7997e0
// 00480a0e  56                   push esi
// 00480a0f  ffd7                 call edi
// 00480a11  83c408               add esp, 8
// 00480a14  84c0                 test al, al
// 00480a16  7407                 je 0x480a1f
// 00480a18  b85f8b0000           mov eax, 0x8b5f
// 00480a1d  5f                   pop edi
// 00480a1e  c3                   ret 
// 00480a1f  68d4977900           push 0x7997d4
// 00480a24  56                   push esi
// 00480a25  ffd7                 call edi
// 00480a27  83c408               add esp, 8
// 00480a2a  84c0                 test al, al
// 00480a2c  7407                 je 0x480a35
// 00480a2e  b8608b0000           mov eax, 0x8b60
// 00480a33  5f                   pop edi
// 00480a34  c3                   ret 
// 00480a35  68c4977900           push 0x7997c4
// 00480a3a  56                   push esi
// 00480a3b  ffd7                 call edi
// 00480a3d  83c408               add esp, 8
// 00480a40  84c0                 test al, al
// 00480a42  7407                 je 0x480a4b
// 00480a44  b8638b0000           mov eax, 0x8b63
// 00480a49  5f                   pop edi
// 00480a4a  c3                   ret 
// 00480a4b  68b4977900           push 0x7997b4
// 00480a50  56                   push esi
// 00480a51  ffd7                 call edi
// 00480a53  83c408               add esp, 8
// 00480a56  84c0                 test al, al
// 00480a58  7407                 je 0x480a61
// 00480a5a  b8628b0000           mov eax, 0x8b62
// 00480a5f  5f                   pop edi
// 00480a60  c3                   ret 
// 00480a61  68a0977900           push 0x7997a0
// 00480a66  56                   push esi
// 00480a67  ffd7                 call edi
// 00480a69  83c408               add esp, 8
// 00480a6c  f6d8                 neg al
// 00480a6e  5f                   pop edi
// 00480a6f  1bc0                 sbb eax, eax
// 00480a71  25648b0000           and eax, 0x8b64
// 00480a76  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Shader.cpp (function ?toGLType@G3D@@YAIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shader.cpp
