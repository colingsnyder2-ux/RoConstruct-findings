// roc 2007-08 004738c0  unit: G3D::VARArea  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004738c0
//
// 004738c0  56                   push esi
// 004738c1  8bf1                 mov esi, ecx
// 004738c3  b901000000           mov ecx, 1
// 004738c8  014e78               add dword ptr [esi + 0x78], ecx
// 004738cb  d98608040000         fld dword ptr [esi + 0x408]
// 004738d1  57                   push edi
// 004738d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004738d6  d907                 fld dword ptr [edi]
// 004738d8  dae9                 fucompp 
// 004738da  dfe0                 fnstsw ax
// 004738dc  f6c444               test ah, 0x44
// 004738df  7a36                 jp 0x473917
// 004738e1  d9860c040000         fld dword ptr [esi + 0x40c]
// 004738e7  d94704               fld dword ptr [edi + 4]
// 004738ea  dae9                 fucompp 
// 004738ec  dfe0                 fnstsw ax
// 004738ee  f6c444               test ah, 0x44
// 004738f1  7a24                 jp 0x473917
// 004738f3  d98610040000         fld dword ptr [esi + 0x410]
// 004738f9  d94708               fld dword ptr [edi + 8]
// 004738fc  dae9                 fucompp 
// 004738fe  dfe0                 fnstsw ax
// 00473900  f6c444               test ah, 0x44
// 00473903  7a12                 jp 0x473917
// 00473905  d98614040000         fld dword ptr [esi + 0x414]
// 0047390b  d9470c               fld dword ptr [edi + 0xc]
// 0047390e  dae9                 fucompp 
// 00473910  dfe0                 fnstsw ax
// 00473912  f6c444               test ah, 0x44
// 00473915  7b49                 jnp 0x473960
// 00473917  014e70               add dword ptr [esi + 0x70], ecx
// 0047391a  d9470c               fld dword ptr [edi + 0xc]
// 0047391d  83ec10               sub esp, 0x10
// 00473920  d95c240c             fstp dword ptr [esp + 0xc]
// 00473924  d94708               fld dword ptr [edi + 8]
// 00473927  d95c2408             fstp dword ptr [esp + 8]
// 0047392b  d94704               fld dword ptr [edi + 4]
// 0047392e  d95c2404             fstp dword ptr [esp + 4]
// 00473932  d907                 fld dword ptr [edi]
// 00473934  d91c24               fstp dword ptr [esp]
// 00473937  ff1598eb7700         call dword ptr [0x77eb98]
// 0047393d  d907                 fld dword ptr [edi]
// 0047393f  d99e08040000         fstp dword ptr [esi + 0x408]
// 00473945  d94704               fld dword ptr [edi + 4]
// 00473948  d99e0c040000         fstp dword ptr [esi + 0x40c]
// 0047394e  d94708               fld dword ptr [edi + 8]
// 00473951  d99e10040000         fstp dword ptr [esi + 0x410]
// 00473957  d9470c               fld dword ptr [edi + 0xc]
// 0047395a  d99e14040000         fstp dword ptr [esi + 0x414]
// 00473960  5f                   pop edi
// 00473961  5e                   pop esi
// 00473962  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setColorClearValue@RenderDevice@G3D@@QAEXABVColor4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
