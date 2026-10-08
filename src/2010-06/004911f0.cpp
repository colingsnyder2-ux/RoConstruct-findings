// roc 2010-06 004911f0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004911f0
//
// 004911f0  56                   push esi
// 004911f1  8bf1                 mov esi, ecx
// 004911f3  b901000000           mov ecx, 1
// 004911f8  014e78               add dword ptr [esi + 0x78], ecx
// 004911fb  f30f108608040000     movss xmm0, dword ptr [esi + 0x408]
// 00491203  57                   push edi
// 00491204  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00491208  0f2e07               ucomiss xmm0, dword ptr [edi]
// 0049120b  9f                   lahf 
// 0049120c  f6c444               test ah, 0x44
// 0049120f  7a36                 jp 0x491247
// 00491211  f30f10860c040000     movss xmm0, dword ptr [esi + 0x40c]
// 00491219  0f2e4704             ucomiss xmm0, dword ptr [edi + 4]
// 0049121d  9f                   lahf 
// 0049121e  f6c444               test ah, 0x44
// 00491221  7a24                 jp 0x491247
// 00491223  f30f108610040000     movss xmm0, dword ptr [esi + 0x410]
// 0049122b  0f2e4708             ucomiss xmm0, dword ptr [edi + 8]
// 0049122f  9f                   lahf 
// 00491230  f6c444               test ah, 0x44
// 00491233  7a12                 jp 0x491247
// 00491235  f30f108614040000     movss xmm0, dword ptr [esi + 0x414]
// 0049123d  0f2e470c             ucomiss xmm0, dword ptr [edi + 0xc]
// 00491241  9f                   lahf 
// 00491242  f6c444               test ah, 0x44
// 00491245  7b49                 jnp 0x491290
// 00491247  014e70               add dword ptr [esi + 0x70], ecx
// 0049124a  d9470c               fld dword ptr [edi + 0xc]
// 0049124d  83ec10               sub esp, 0x10
// 00491250  d95c240c             fstp dword ptr [esp + 0xc]
// 00491254  d94708               fld dword ptr [edi + 8]
// 00491257  d95c2408             fstp dword ptr [esp + 8]
// 0049125b  d94704               fld dword ptr [edi + 4]
// 0049125e  d95c2404             fstp dword ptr [esp + 4]
// 00491262  d907                 fld dword ptr [edi]
// 00491264  d91c24               fstp dword ptr [esp]
// 00491267  ff15a8aa9e00         call dword ptr [0x9eaaa8]
// 0049126d  d907                 fld dword ptr [edi]
// 0049126f  d99e08040000         fstp dword ptr [esi + 0x408]
// 00491275  d94704               fld dword ptr [edi + 4]
// 00491278  d99e0c040000         fstp dword ptr [esi + 0x40c]
// 0049127e  d94708               fld dword ptr [edi + 8]
// 00491281  d99e10040000         fstp dword ptr [esi + 0x410]
// 00491287  d9470c               fld dword ptr [edi + 0xc]
// 0049128a  d99e14040000         fstp dword ptr [esi + 0x414]
// 00491290  5f                   pop edi
// 00491291  5e                   pop esi
// 00491292  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setColorClearValue@RenderDevice@G3D@@QAEXABVColor4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
