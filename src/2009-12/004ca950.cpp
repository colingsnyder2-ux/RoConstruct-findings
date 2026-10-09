// roc 2009-12 004ca950  unit: G3D::VARArea  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca950
//
// 004ca950  56                   push esi
// 004ca951  8bf1                 mov esi, ecx
// 004ca953  b901000000           mov ecx, 1
// 004ca958  014e78               add dword ptr [esi + 0x78], ecx
// 004ca95b  f30f108608040000     movss xmm0, dword ptr [esi + 0x408]
// 004ca963  57                   push edi
// 004ca964  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004ca968  0f2e07               ucomiss xmm0, dword ptr [edi]
// 004ca96b  9f                   lahf 
// 004ca96c  f6c444               test ah, 0x44
// 004ca96f  7a36                 jp 0x4ca9a7
// 004ca971  f30f10860c040000     movss xmm0, dword ptr [esi + 0x40c]
// 004ca979  0f2e4704             ucomiss xmm0, dword ptr [edi + 4]
// 004ca97d  9f                   lahf 
// 004ca97e  f6c444               test ah, 0x44
// 004ca981  7a24                 jp 0x4ca9a7
// 004ca983  f30f108610040000     movss xmm0, dword ptr [esi + 0x410]
// 004ca98b  0f2e4708             ucomiss xmm0, dword ptr [edi + 8]
// 004ca98f  9f                   lahf 
// 004ca990  f6c444               test ah, 0x44
// 004ca993  7a12                 jp 0x4ca9a7
// 004ca995  f30f108614040000     movss xmm0, dword ptr [esi + 0x414]
// 004ca99d  0f2e470c             ucomiss xmm0, dword ptr [edi + 0xc]
// 004ca9a1  9f                   lahf 
// 004ca9a2  f6c444               test ah, 0x44
// 004ca9a5  7b49                 jnp 0x4ca9f0
// 004ca9a7  014e70               add dword ptr [esi + 0x70], ecx
// 004ca9aa  d9470c               fld dword ptr [edi + 0xc]
// 004ca9ad  83ec10               sub esp, 0x10
// 004ca9b0  d95c240c             fstp dword ptr [esp + 0xc]
// 004ca9b4  d94708               fld dword ptr [edi + 8]
// 004ca9b7  d95c2408             fstp dword ptr [esp + 8]
// 004ca9bb  d94704               fld dword ptr [edi + 4]
// 004ca9be  d95c2404             fstp dword ptr [esp + 4]
// 004ca9c2  d907                 fld dword ptr [edi]
// 004ca9c4  d91c24               fstp dword ptr [esp]
// 004ca9c7  ff1514bc9800         call dword ptr [0x98bc14]
// 004ca9cd  d907                 fld dword ptr [edi]
// 004ca9cf  d99e08040000         fstp dword ptr [esi + 0x408]
// 004ca9d5  d94704               fld dword ptr [edi + 4]
// 004ca9d8  d99e0c040000         fstp dword ptr [esi + 0x40c]
// 004ca9de  d94708               fld dword ptr [edi + 8]
// 004ca9e1  d99e10040000         fstp dword ptr [esi + 0x410]
// 004ca9e7  d9470c               fld dword ptr [edi + 0xc]
// 004ca9ea  d99e14040000         fstp dword ptr [esi + 0x414]
// 004ca9f0  5f                   pop edi
// 004ca9f1  5e                   pop esi
// 004ca9f2  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setColorClearValue@RenderDevice@G3D@@QAEXABVColor4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
