// roc 2007-03 00474470  unit: seg_00470000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474470
//
// 00474470  83ec10               sub esp, 0x10
// 00474473  56                   push esi
// 00474474  8bf1                 mov esi, ecx
// 00474476  57                   push edi
// 00474477  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047447b  b901000000           mov ecx, 1
// 00474480  014e78               add dword ptr [esi + 0x78], ecx
// 00474483  d907                 fld dword ptr [edi]
// 00474485  d986ac030000         fld dword ptr [esi + 0x3ac]
// 0047448b  dae9                 fucompp 
// 0047448d  dfe0                 fnstsw ax
// 0047448f  f6c444               test ah, 0x44
// 00474492  7a36                 jp 0x4744ca
// 00474494  d94704               fld dword ptr [edi + 4]
// 00474497  d986b0030000         fld dword ptr [esi + 0x3b0]
// 0047449d  dae9                 fucompp 
// 0047449f  dfe0                 fnstsw ax
// 004744a1  f6c444               test ah, 0x44
// 004744a4  7a24                 jp 0x4744ca
// 004744a6  d94708               fld dword ptr [edi + 8]
// 004744a9  d986b4030000         fld dword ptr [esi + 0x3b4]
// 004744af  dae9                 fucompp 
// 004744b1  dfe0                 fnstsw ax
// 004744b3  f6c444               test ah, 0x44
// 004744b6  7a12                 jp 0x4744ca
// 004744b8  d9470c               fld dword ptr [edi + 0xc]
// 004744bb  d986b8030000         fld dword ptr [esi + 0x3b8]
// 004744c1  dae9                 fucompp 
// 004744c3  dfe0                 fnstsw ax
// 004744c5  f6c444               test ah, 0x44
// 004744c8  7b5f                 jnp 0x474529
// 004744ca  d907                 fld dword ptr [edi]
// 004744cc  8d442408             lea eax, [esp + 8]
// 004744d0  dc7610               fdiv qword ptr [esi + 0x10]
// 004744d3  50                   push eax
// 004744d4  68530b0000           push 0xb53
// 004744d9  d95c2410             fstp dword ptr [esp + 0x10]
// 004744dd  d94704               fld dword ptr [edi + 4]
// 004744e0  dc7610               fdiv qword ptr [esi + 0x10]
// 004744e3  d95c2414             fstp dword ptr [esp + 0x14]
// 004744e7  d94708               fld dword ptr [edi + 8]
// 004744ea  dc7610               fdiv qword ptr [esi + 0x10]
// 004744ed  014e70               add dword ptr [esi + 0x70], ecx
// 004744f0  888ebd030000         mov byte ptr [esi + 0x3bd], cl
// 004744f6  d95c2418             fstp dword ptr [esp + 0x18]
// 004744fa  d9e8                 fld1 
// 004744fc  d95c241c             fstp dword ptr [esp + 0x1c]
// 00474500  ff15fceb7700         call dword ptr [0x77ebfc]
// 00474506  d907                 fld dword ptr [edi]
// 00474508  d99eac030000         fstp dword ptr [esi + 0x3ac]
// 0047450e  d94704               fld dword ptr [edi + 4]
// 00474511  d99eb0030000         fstp dword ptr [esi + 0x3b0]
// 00474517  d94708               fld dword ptr [edi + 8]
// 0047451a  d99eb4030000         fstp dword ptr [esi + 0x3b4]
// 00474520  d9470c               fld dword ptr [edi + 0xc]
// 00474523  d99eb8030000         fstp dword ptr [esi + 0x3b8]
// 00474529  5f                   pop edi
// 0047452a  5e                   pop esi
// 0047452b  83c410               add esp, 0x10
// 0047452e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setAmbientLightColor@RenderDevice@G3D@@QAEXABVColor4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
