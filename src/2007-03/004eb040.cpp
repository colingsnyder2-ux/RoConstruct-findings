// roc 2007-03 004eb040  unit: seg_004e0000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb040
//
// 004eb040  d9442404             fld dword ptr [esp + 4]
// 004eb044  d9442408             fld dword ptr [esp + 8]
// 004eb048  d9c0                 fld st(0)
// 004eb04a  deea                 fsubp st(2)
// 004eb04c  d86c240c             fsubr dword ptr [esp + 0xc]
// 004eb050  def9                 fdivp st(1)
// 004eb052  d9e8                 fld1 
// 004eb054  dee1                 fsubrp st(1)
// 004eb056  d95c2404             fstp dword ptr [esp + 4]
// 004eb05a  d9ee                 fldz 
// 004eb05c  d9442404             fld dword ptr [esp + 4]
// 004eb060  d8d1                 fcom st(1)
// 004eb062  dfe0                 fnstsw ax
// 004eb064  f6c441               test ah, 0x41
// 004eb067  7b18                 jnp 0x4eb081
// 004eb069  ddd9                 fstp st(1)
// 004eb06b  d9e8                 fld1 
// 004eb06d  d8d1                 fcom st(1)
// 004eb06f  dfe0                 fnstsw ax
// 004eb071  f6c441               test ah, 0x41
// 004eb074  7a0b                 jp 0x4eb081
// 004eb076  ddd9                 fstp st(1)
// 004eb078  d95c2404             fstp dword ptr [esp + 4]
// 004eb07c  d9442404             fld dword ptr [esp + 4]
// 004eb080  c3                   ret 
// 004eb081  ddd8                 fstp st(0)
// 004eb083  d95c2404             fstp dword ptr [esp + 4]
// 004eb087  d9442404             fld dword ptr [esp + 4]
// 004eb08b  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?detailLevel@Render@RBX@@YAMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
