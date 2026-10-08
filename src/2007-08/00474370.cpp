// roc 2007-08 00474370  unit: G3D::VARArea  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474370
//
// 00474370  83ec10               sub esp, 0x10
// 00474373  56                   push esi
// 00474374  8bf1                 mov esi, ecx
// 00474376  57                   push edi
// 00474377  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047437b  b901000000           mov ecx, 1
// 00474380  014e78               add dword ptr [esi + 0x78], ecx
// 00474383  d907                 fld dword ptr [edi]
// 00474385  d986ac030000         fld dword ptr [esi + 0x3ac]
// 0047438b  dae9                 fucompp 
// 0047438d  dfe0                 fnstsw ax
// 0047438f  f6c444               test ah, 0x44
// 00474392  7a36                 jp 0x4743ca
// 00474394  d94704               fld dword ptr [edi + 4]
// 00474397  d986b0030000         fld dword ptr [esi + 0x3b0]
// 0047439d  dae9                 fucompp 
// 0047439f  dfe0                 fnstsw ax
// 004743a1  f6c444               test ah, 0x44
// 004743a4  7a24                 jp 0x4743ca
// 004743a6  d94708               fld dword ptr [edi + 8]
// 004743a9  d986b4030000         fld dword ptr [esi + 0x3b4]
// 004743af  dae9                 fucompp 
// 004743b1  dfe0                 fnstsw ax
// 004743b3  f6c444               test ah, 0x44
// 004743b6  7a12                 jp 0x4743ca
// 004743b8  d9470c               fld dword ptr [edi + 0xc]
// 004743bb  d986b8030000         fld dword ptr [esi + 0x3b8]
// 004743c1  dae9                 fucompp 
// 004743c3  dfe0                 fnstsw ax
// 004743c5  f6c444               test ah, 0x44
// 004743c8  7b5f                 jnp 0x474429
// 004743ca  d907                 fld dword ptr [edi]
// 004743cc  8d442408             lea eax, [esp + 8]
// 004743d0  dc7610               fdiv qword ptr [esi + 0x10]
// 004743d3  50                   push eax
// 004743d4  68530b0000           push 0xb53
// 004743d9  d95c2410             fstp dword ptr [esp + 0x10]
// 004743dd  d94704               fld dword ptr [edi + 4]
// 004743e0  dc7610               fdiv qword ptr [esi + 0x10]
// 004743e3  d95c2414             fstp dword ptr [esp + 0x14]
// 004743e7  d94708               fld dword ptr [edi + 8]
// 004743ea  dc7610               fdiv qword ptr [esi + 0x10]
// 004743ed  014e70               add dword ptr [esi + 0x70], ecx
// 004743f0  888ebd030000         mov byte ptr [esi + 0x3bd], cl
// 004743f6  d95c2418             fstp dword ptr [esp + 0x18]
// 004743fa  d9e8                 fld1 
// 004743fc  d95c241c             fstp dword ptr [esp + 0x1c]
// 00474400  ff15c0ea7700         call dword ptr [0x77eac0]
// 00474406  d907                 fld dword ptr [edi]
// 00474408  d99eac030000         fstp dword ptr [esi + 0x3ac]
// 0047440e  d94704               fld dword ptr [edi + 4]
// 00474411  d99eb0030000         fstp dword ptr [esi + 0x3b0]
// 00474417  d94708               fld dword ptr [edi + 8]
// 0047441a  d99eb4030000         fstp dword ptr [esi + 0x3b4]
// 00474420  d9470c               fld dword ptr [edi + 0xc]
// 00474423  d99eb8030000         fstp dword ptr [esi + 0x3b8]
// 00474429  5f                   pop edi
// 0047442a  5e                   pop esi
// 0047442b  83c410               add esp, 0x10
// 0047442e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setAmbientLightColor@RenderDevice@G3D@@QAEXABVColor4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
