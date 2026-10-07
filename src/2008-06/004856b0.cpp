// roc 2008-06 004856b0  unit: G3D::Shader  size: 362 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004856b0
//
// 004856b0  57                   push edi
// 004856b1  8b3d6c238000         mov edi, dword ptr [0x80236c]
// 004856b7  68100e8200           push 0x820e10
// 004856bc  56                   push esi
// 004856bd  ffd7                 call edi
// 004856bf  83c408               add esp, 8
// 004856c2  84c0                 test al, al
// 004856c4  7407                 je 0x4856cd
// 004856c6  b806140000           mov eax, 0x1406
// 004856cb  5f                   pop edi
// 004856cc  c3                   ret 
// 004856cd  68080e8200           push 0x820e08
// 004856d2  56                   push esi
// 004856d3  ffd7                 call edi
// 004856d5  83c408               add esp, 8
// 004856d8  84c0                 test al, al
// 004856da  7407                 je 0x4856e3
// 004856dc  b8508b0000           mov eax, 0x8b50
// 004856e1  5f                   pop edi
// 004856e2  c3                   ret 
// 004856e3  68000e8200           push 0x820e00
// 004856e8  56                   push esi
// 004856e9  ffd7                 call edi
// 004856eb  83c408               add esp, 8
// 004856ee  84c0                 test al, al
// 004856f0  7407                 je 0x4856f9
// 004856f2  b8518b0000           mov eax, 0x8b51
// 004856f7  5f                   pop edi
// 004856f8  c3                   ret 
// 004856f9  68f80d8200           push 0x820df8
// 004856fe  56                   push esi
// 004856ff  ffd7                 call edi
// 00485701  83c408               add esp, 8
// 00485704  84c0                 test al, al
// 00485706  7407                 je 0x48570f
// 00485708  b8528b0000           mov eax, 0x8b52
// 0048570d  5f                   pop edi
// 0048570e  c3                   ret 
// 0048570f  68f40d8200           push 0x820df4
// 00485714  56                   push esi
// 00485715  ffd7                 call edi
// 00485717  83c408               add esp, 8
// 0048571a  84c0                 test al, al
// 0048571c  7407                 je 0x485725
// 0048571e  b804140000           mov eax, 0x1404
// 00485723  5f                   pop edi
// 00485724  c3                   ret 
// 00485725  68ec0d8200           push 0x820dec
// 0048572a  56                   push esi
// 0048572b  ffd7                 call edi
// 0048572d  83c408               add esp, 8
// 00485730  84c0                 test al, al
// 00485732  7407                 je 0x48573b
// 00485734  b8568b0000           mov eax, 0x8b56
// 00485739  5f                   pop edi
// 0048573a  c3                   ret 
// 0048573b  68e40d8200           push 0x820de4
// 00485740  56                   push esi
// 00485741  ffd7                 call edi
// 00485743  83c408               add esp, 8
// 00485746  84c0                 test al, al
// 00485748  7407                 je 0x485751
// 0048574a  b85a8b0000           mov eax, 0x8b5a
// 0048574f  5f                   pop edi
// 00485750  c3                   ret 
// 00485751  68dc0d8200           push 0x820ddc
// 00485756  56                   push esi
// 00485757  ffd7                 call edi
// 00485759  83c408               add esp, 8
// 0048575c  84c0                 test al, al
// 0048575e  7407                 je 0x485767
// 00485760  b85b8b0000           mov eax, 0x8b5b
// 00485765  5f                   pop edi
// 00485766  c3                   ret 
// 00485767  68d40d8200           push 0x820dd4
// 0048576c  56                   push esi
// 0048576d  ffd7                 call edi
// 0048576f  83c408               add esp, 8
// 00485772  84c0                 test al, al
// 00485774  7407                 je 0x48577d
// 00485776  b85c8b0000           mov eax, 0x8b5c
// 0048577b  5f                   pop edi
// 0048577c  c3                   ret 
// 0048577d  68c80d8200           push 0x820dc8
// 00485782  56                   push esi
// 00485783  ffd7                 call edi
// 00485785  83c408               add esp, 8
// 00485788  84c0                 test al, al
// 0048578a  7407                 je 0x485793
// 0048578c  b85d8b0000           mov eax, 0x8b5d
// 00485791  5f                   pop edi
// 00485792  c3                   ret 
// 00485793  68bc0d8200           push 0x820dbc
// 00485798  56                   push esi
// 00485799  ffd7                 call edi
// 0048579b  83c408               add esp, 8
// 0048579e  84c0                 test al, al
// 004857a0  7407                 je 0x4857a9
// 004857a2  b85e8b0000           mov eax, 0x8b5e
// 004857a7  5f                   pop edi
// 004857a8  c3                   ret 
// 004857a9  68b00d8200           push 0x820db0
// 004857ae  56                   push esi
// 004857af  ffd7                 call edi
// 004857b1  83c408               add esp, 8
// 004857b4  84c0                 test al, al
// 004857b6  7407                 je 0x4857bf
// 004857b8  b85f8b0000           mov eax, 0x8b5f
// 004857bd  5f                   pop edi
// 004857be  c3                   ret 
// 004857bf  68a40d8200           push 0x820da4
// 004857c4  56                   push esi
// 004857c5  ffd7                 call edi
// 004857c7  83c408               add esp, 8
// 004857ca  84c0                 test al, al
// 004857cc  7407                 je 0x4857d5
// 004857ce  b8608b0000           mov eax, 0x8b60
// 004857d3  5f                   pop edi
// 004857d4  c3                   ret 
// 004857d5  68940d8200           push 0x820d94
// 004857da  56                   push esi
// 004857db  ffd7                 call edi
// 004857dd  83c408               add esp, 8
// 004857e0  84c0                 test al, al
// 004857e2  7407                 je 0x4857eb
// 004857e4  b8638b0000           mov eax, 0x8b63
// 004857e9  5f                   pop edi
// 004857ea  c3                   ret 
// 004857eb  68840d8200           push 0x820d84
// 004857f0  56                   push esi
// 004857f1  ffd7                 call edi
// 004857f3  83c408               add esp, 8
// 004857f6  84c0                 test al, al
// 004857f8  7407                 je 0x485801
// 004857fa  b8628b0000           mov eax, 0x8b62
// 004857ff  5f                   pop edi
// 00485800  c3                   ret 
// 00485801  68700d8200           push 0x820d70
// 00485806  56                   push esi
// 00485807  ffd7                 call edi
// 00485809  0fb6c0               movzx eax, al
// 0048580c  83c408               add esp, 8
// 0048580f  f7d8                 neg eax
// 00485811  1bc0                 sbb eax, eax
// 00485813  25648b0000           and eax, 0x8b64
// 00485818  5f                   pop edi
// 00485819  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?toGLType@G3D@@YAIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
