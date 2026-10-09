// roc 2009-12 004cb5d0  unit: G3D::VARArea  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb5d0
//
// 004cb5d0  56                   push esi
// 004cb5d1  8bf1                 mov esi, ecx
// 004cb5d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cb5d7  ff4678               inc dword ptr [esi + 0x78]
// 004cb5da  8bc1                 mov eax, ecx
// 004cb5dc  6bc05c               imul eax, eax, 0x5c
// 004cb5df  f30f10843020050000   movss xmm0, dword ptr [eax + esi + 0x520]
// 004cb5e8  0f2e44240c           ucomiss xmm0, dword ptr [esp + 0xc]
// 004cb5ed  57                   push edi
// 004cb5ee  8dbc3020050000       lea edi, [eax + esi + 0x520]
// 004cb5f5  9f                   lahf 
// 004cb5f6  f6c444               test ah, 0x44
// 004cb5f9  7b4d                 jnp 0x4cb648
// 004cb5fb  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 004cb601  3bc1                 cmp eax, ecx
// 004cb603  7d02                 jge 0x4cb607
// 004cb605  8bc1                 mov eax, ecx
// 004cb607  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 004cb60d  803dbed0b70000       cmp byte ptr [0xb7d0be], 0
// 004cb614  740d                 je 0x4cb623
// 004cb616  81c1c0840000         add ecx, 0x84c0
// 004cb61c  51                   push ecx
// 004cb61d  ff1514d9b700         call dword ptr [0xb7d914]
// 004cb623  d9442410             fld dword ptr [esp + 0x10]
// 004cb627  f30f10442410         movss xmm0, dword ptr [esp + 0x10]
// 004cb62d  51                   push ecx
// 004cb62e  d91c24               fstp dword ptr [esp]
// 004cb631  6801850000           push 0x8501
// 004cb636  f30f1107             movss dword ptr [edi], xmm0
// 004cb63a  ff4670               inc dword ptr [esi + 0x70]
// 004cb63d  6800850000           push 0x8500
// 004cb642  ff15b0ba9800         call dword ptr [0x98bab0]
// 004cb648  5f                   pop edi
// 004cb649  5e                   pop esi
// 004cb64a  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureLODBias@RenderDevice@G3D@@QAEXIM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
