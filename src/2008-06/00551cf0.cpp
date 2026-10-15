// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast /Od /Ob0 /GS
// roc 2008-06 006764c0  unit: RBX::AdornG3D  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006764c0
//
// 006764c0  83ec10               sub esp, 0x10
// 006764c3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006764c7  8b4904               mov ecx, dword ptr [ecx + 4]
// 006764ca  50                   push eax
// 006764cb  8b442418             mov eax, dword ptr [esp + 0x18]
// 006764cf  d900                 fld dword ptr [eax]
// 006764d1  51                   push ecx
// 006764d2  d94004               fld dword ptr [eax + 4]
// 006764d5  8d542408             lea edx, [esp + 8]
// 006764d9  d94008               fld dword ptr [eax + 8]
// 006764dc  52                   push edx
// 006764dd  d9400c               fld dword ptr [eax + 0xc]
// 006764e0  d9cb                 fxch st(3)
// 006764e2  d95c240c             fstp dword ptr [esp + 0xc]
// 006764e6  d9c9                 fxch st(1)
// 006764e8  d95c2410             fstp dword ptr [esp + 0x10]
// 006764ec  d95c2414             fstp dword ptr [esp + 0x14]
// 006764f0  d95c2418             fstp dword ptr [esp + 0x18]
// 006764f4  e8871d0000           call 0x678280
// 006764f9  83c41c               add esp, 0x1c
// 006764fc  c20800               ret 8
// library openrbx-client/Rendering\AppDraw\AdornG3D.cpp (function ?rect2d@AdornG3D@RBX@@UBEXABVRect2D@G3D@@ABVColor4@4@@Z)

// roc-lang: cpp
// roc-lib: openrbx-client Rendering/AppDraw/AdornG3D.cpp
