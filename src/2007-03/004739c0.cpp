// roc 2007-03 004739c0  unit: seg_00470000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004739c0
//
// 004739c0  56                   push esi
// 004739c1  8bf1                 mov esi, ecx
// 004739c3  b901000000           mov ecx, 1
// 004739c8  014e78               add dword ptr [esi + 0x78], ecx
// 004739cb  d98608040000         fld dword ptr [esi + 0x408]
// 004739d1  57                   push edi
// 004739d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004739d6  d907                 fld dword ptr [edi]
// 004739d8  dae9                 fucompp 
// 004739da  dfe0                 fnstsw ax
// 004739dc  f6c444               test ah, 0x44
// 004739df  7a36                 jp 0x473a17
// 004739e1  d9860c040000         fld dword ptr [esi + 0x40c]
// 004739e7  d94704               fld dword ptr [edi + 4]
// 004739ea  dae9                 fucompp 
// 004739ec  dfe0                 fnstsw ax
// 004739ee  f6c444               test ah, 0x44
// 004739f1  7a24                 jp 0x473a17
// 004739f3  d98610040000         fld dword ptr [esi + 0x410]
// 004739f9  d94708               fld dword ptr [edi + 8]
// 004739fc  dae9                 fucompp 
// 004739fe  dfe0                 fnstsw ax
// 00473a00  f6c444               test ah, 0x44
// 00473a03  7a12                 jp 0x473a17
// 00473a05  d98614040000         fld dword ptr [esi + 0x414]
// 00473a0b  d9470c               fld dword ptr [edi + 0xc]
// 00473a0e  dae9                 fucompp 
// 00473a10  dfe0                 fnstsw ax
// 00473a12  f6c444               test ah, 0x44
// 00473a15  7b49                 jnp 0x473a60
// 00473a17  014e70               add dword ptr [esi + 0x70], ecx
// 00473a1a  d9470c               fld dword ptr [edi + 0xc]
// 00473a1d  83ec10               sub esp, 0x10
// 00473a20  d95c240c             fstp dword ptr [esp + 0xc]
// 00473a24  d94708               fld dword ptr [edi + 8]
// 00473a27  d95c2408             fstp dword ptr [esp + 8]
// 00473a2b  d94704               fld dword ptr [edi + 4]
// 00473a2e  d95c2404             fstp dword ptr [esp + 4]
// 00473a32  d907                 fld dword ptr [edi]
// 00473a34  d91c24               fstp dword ptr [esp]
// 00473a37  ff1528eb7700         call dword ptr [0x77eb28]
// 00473a3d  d907                 fld dword ptr [edi]
// 00473a3f  d99e08040000         fstp dword ptr [esi + 0x408]
// 00473a45  d94704               fld dword ptr [edi + 4]
// 00473a48  d99e0c040000         fstp dword ptr [esi + 0x40c]
// 00473a4e  d94708               fld dword ptr [edi + 8]
// 00473a51  d99e10040000         fstp dword ptr [esi + 0x410]
// 00473a57  d9470c               fld dword ptr [edi + 0xc]
// 00473a5a  d99e14040000         fstp dword ptr [esi + 0x414]
// 00473a60  5f                   pop edi
// 00473a61  5e                   pop esi
// 00473a62  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setColorClearValue@RenderDevice@G3D@@QAEXABVColor4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
