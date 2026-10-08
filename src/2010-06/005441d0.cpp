// roc 2010-06 005441d0  unit: RBX::RbxG3D::RenderScene  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005441d0
//
// 005441d0  56                   push esi
// 005441d1  57                   push edi
// 005441d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005441d6  57                   push edi
// 005441d7  8bf1                 mov esi, ecx
// 005441d9  e8921e0100           call 0x556070
// 005441de  d94724               fld dword ptr [edi + 0x24]
// 005441e1  d95e24               fstp dword ptr [esi + 0x24]
// 005441e4  d94728               fld dword ptr [edi + 0x28]
// 005441e7  d95e28               fstp dword ptr [esi + 0x28]
// 005441ea  d9472c               fld dword ptr [edi + 0x2c]
// 005441ed  d95e2c               fstp dword ptr [esi + 0x2c]
// 005441f0  d94730               fld dword ptr [edi + 0x30]
// 005441f3  d95e30               fstp dword ptr [esi + 0x30]
// 005441f6  8b4734               mov eax, dword ptr [edi + 0x34]
// 005441f9  894634               mov dword ptr [esi + 0x34], eax
// 005441fc  d94738               fld dword ptr [edi + 0x38]
// 005441ff  d95e38               fstp dword ptr [esi + 0x38]
// 00544202  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00544205  894e3c               mov dword ptr [esi + 0x3c], ecx
// 00544208  8d4e40               lea ecx, [esi + 0x40]
// 0054420b  c70100000000         mov dword ptr [ecx], 0
// 00544211  8b5740               mov edx, dword ptr [edi + 0x40]
// 00544214  52                   push edx
// 00544215  e8062bf4ff           call 0x486d20
// 0054421a  5f                   pop edi
// 0054421b  8bc6                 mov eax, esi
// 0054421d  5e                   pop esi
// 0054421e  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??0RenderSurface@Render@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
