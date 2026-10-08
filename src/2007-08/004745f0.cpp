// roc 2007-08 004745f0  unit: G3D::VARArea  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004745f0
//
// 004745f0  56                   push esi
// 004745f1  8bf1                 mov esi, ecx
// 004745f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004745f7  83467801             add dword ptr [esi + 0x78], 1
// 004745fb  8bc1                 mov eax, ecx
// 004745fd  6bc05c               imul eax, eax, 0x5c
// 00474600  d9843020050000       fld dword ptr [eax + esi + 0x520]
// 00474607  d944240c             fld dword ptr [esp + 0xc]
// 0047460b  d9c0                 fld st(0)
// 0047460d  ddea                 fucomp st(2)
// 0047460f  57                   push edi
// 00474610  8dbc3020050000       lea edi, [eax + esi + 0x520]
// 00474617  dfe0                 fnstsw ax
// 00474619  ddd9                 fstp st(1)
// 0047461b  f6c444               test ah, 0x44
// 0047461e  7b4d                 jnp 0x47466d
// 00474620  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 00474626  3bc1                 cmp eax, ecx
// 00474628  7d02                 jge 0x47462c
// 0047462a  8bc1                 mov eax, ecx
// 0047462c  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 00474632  803d62cf8b0000       cmp byte ptr [0x8bcf62], 0
// 00474639  7413                 je 0x47464e
// 0047463b  81c1c0840000         add ecx, 0x84c0
// 00474641  ddd8                 fstp st(0)
// 00474643  51                   push ecx
// 00474644  ff15f0d88b00         call dword ptr [0x8bd8f0]
// 0047464a  d9442410             fld dword ptr [esp + 0x10]
// 0047464e  51                   push ecx
// 0047464f  d917                 fst dword ptr [edi]
// 00474651  83467001             add dword ptr [esi + 0x70], 1
// 00474655  d91c24               fstp dword ptr [esp]
// 00474658  6801850000           push 0x8501
// 0047465d  6800850000           push 0x8500
// 00474662  ff15bcea7700         call dword ptr [0x77eabc]
// 00474668  5f                   pop edi
// 00474669  5e                   pop esi
// 0047466a  c20800               ret 8
// 0047466d  5f                   pop edi
// 0047466e  ddd8                 fstp st(0)
// 00474670  5e                   pop esi
// 00474671  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureLODBias@RenderDevice@G3D@@QAEXIM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
