// roc 2007-08 004f7610  unit: G3D::Sphere  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f7610
//
// 004f7610  d9442404             fld dword ptr [esp + 4]
// 004f7614  d9442408             fld dword ptr [esp + 8]
// 004f7618  d9c0                 fld st(0)
// 004f761a  deea                 fsubp st(2)
// 004f761c  d86c240c             fsubr dword ptr [esp + 0xc]
// 004f7620  def9                 fdivp st(1)
// 004f7622  d9e8                 fld1 
// 004f7624  dee1                 fsubrp st(1)
// 004f7626  d95c2404             fstp dword ptr [esp + 4]
// 004f762a  d9ee                 fldz 
// 004f762c  d9442404             fld dword ptr [esp + 4]
// 004f7630  d8d1                 fcom st(1)
// 004f7632  dfe0                 fnstsw ax
// 004f7634  f6c441               test ah, 0x41
// 004f7637  7b18                 jnp 0x4f7651
// 004f7639  ddd9                 fstp st(1)
// 004f763b  d9e8                 fld1 
// 004f763d  d8d1                 fcom st(1)
// 004f763f  dfe0                 fnstsw ax
// 004f7641  f6c441               test ah, 0x41
// 004f7644  7a0b                 jp 0x4f7651
// 004f7646  ddd9                 fstp st(1)
// 004f7648  d95c2404             fstp dword ptr [esp + 4]
// 004f764c  d9442404             fld dword ptr [esp + 4]
// 004f7650  c3                   ret 
// 004f7651  ddd8                 fstp st(0)
// 004f7653  d95c2404             fstp dword ptr [esp + 4]
// 004f7657  d9442404             fld dword ptr [esp + 4]
// 004f765b  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?detailLevel@Render@RBX@@YAMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
