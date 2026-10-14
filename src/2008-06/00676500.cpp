// roc 2008-06 00676500  unit: RBX::AdornG3D  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676500
//
// 00676500  83ec10               sub esp, 0x10
// 00676503  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00676507  d9442418             fld dword ptr [esp + 0x18]
// 0067650b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0067650e  50                   push eax
// 0067650f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00676513  51                   push ecx
// 00676514  51                   push ecx
// 00676515  d91c24               fstp dword ptr [esp]
// 00676518  8d54240c             lea edx, [esp + 0xc]
// 0067651c  d900                 fld dword ptr [eax]
// 0067651e  52                   push edx
// 0067651f  d94004               fld dword ptr [eax + 4]
// 00676522  d94008               fld dword ptr [eax + 8]
// 00676525  d9400c               fld dword ptr [eax + 0xc]
// 00676528  d9cb                 fxch st(3)
// 0067652a  d95c2410             fstp dword ptr [esp + 0x10]
// 0067652e  d9c9                 fxch st(1)
// 00676530  d95c2414             fstp dword ptr [esp + 0x14]
// 00676534  d95c2418             fstp dword ptr [esp + 0x18]
// 00676538  d95c241c             fstp dword ptr [esp + 0x1c]
// 0067653c  e83f1b0000           call 0x678080
// 00676541  83c420               add esp, 0x20
// 00676544  c20c00               ret 0xc
// library openrbx-client/Rendering\AppDraw\AdornG3D.cpp (function ?outlineRect2d@AdornG3D@RBX@@UBEXABVRect2D@G3D@@MABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client Rendering/AppDraw/AdornG3D.cpp
