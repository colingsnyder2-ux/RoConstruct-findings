// roc 2008-06 00502500  unit: G3D::Sphere  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502500
//
// 00502500  56                   push esi
// 00502501  57                   push edi
// 00502502  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00502506  57                   push edi
// 00502507  8bf1                 mov esi, ecx
// 00502509  e8120d0100           call 0x513220
// 0050250e  d94724               fld dword ptr [edi + 0x24]
// 00502511  d95e24               fstp dword ptr [esi + 0x24]
// 00502514  d94728               fld dword ptr [edi + 0x28]
// 00502517  d95e28               fstp dword ptr [esi + 0x28]
// 0050251a  d9472c               fld dword ptr [edi + 0x2c]
// 0050251d  d95e2c               fstp dword ptr [esi + 0x2c]
// 00502520  d94730               fld dword ptr [edi + 0x30]
// 00502523  d95e30               fstp dword ptr [esi + 0x30]
// 00502526  8b4734               mov eax, dword ptr [edi + 0x34]
// 00502529  894634               mov dword ptr [esi + 0x34], eax
// 0050252c  d94738               fld dword ptr [edi + 0x38]
// 0050252f  d95e38               fstp dword ptr [esi + 0x38]
// 00502532  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00502535  894e3c               mov dword ptr [esi + 0x3c], ecx
// 00502538  8d4e40               lea ecx, [esi + 0x40]
// 0050253b  c70100000000         mov dword ptr [ecx], 0
// 00502541  8b5740               mov edx, dword ptr [edi + 0x40]
// 00502544  52                   push edx
// 00502545  e8566a0900           call 0x598fa0
// 0050254a  5f                   pop edi
// 0050254b  8bc6                 mov eax, esi
// 0050254d  5e                   pop esi
// 0050254e  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??0RenderSurface@Render@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
