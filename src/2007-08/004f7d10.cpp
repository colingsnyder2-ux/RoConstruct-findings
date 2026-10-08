// roc 2007-08 004f7d10  unit: G3D::Sphere  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f7d10
//
// 004f7d10  56                   push esi
// 004f7d11  57                   push edi
// 004f7d12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f7d16  57                   push edi
// 004f7d17  8bf1                 mov esi, ecx
// 004f7d19  e8b2180100           call 0x5095d0
// 004f7d1e  d94724               fld dword ptr [edi + 0x24]
// 004f7d21  d95e24               fstp dword ptr [esi + 0x24]
// 004f7d24  d94728               fld dword ptr [edi + 0x28]
// 004f7d27  d95e28               fstp dword ptr [esi + 0x28]
// 004f7d2a  d9472c               fld dword ptr [edi + 0x2c]
// 004f7d2d  d95e2c               fstp dword ptr [esi + 0x2c]
// 004f7d30  d94730               fld dword ptr [edi + 0x30]
// 004f7d33  d95e30               fstp dword ptr [esi + 0x30]
// 004f7d36  8b4734               mov eax, dword ptr [edi + 0x34]
// 004f7d39  894634               mov dword ptr [esi + 0x34], eax
// 004f7d3c  d94738               fld dword ptr [edi + 0x38]
// 004f7d3f  d95e38               fstp dword ptr [esi + 0x38]
// 004f7d42  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 004f7d45  894e3c               mov dword ptr [esi + 0x3c], ecx
// 004f7d48  8d4e40               lea ecx, [esi + 0x40]
// 004f7d4b  c70100000000         mov dword ptr [ecx], 0
// 004f7d51  8b5740               mov edx, dword ptr [edi + 0x40]
// 004f7d54  52                   push edx
// 004f7d55  e816d2f7ff           call 0x474f70
// 004f7d5a  5f                   pop edi
// 004f7d5b  8bc6                 mov eax, esi
// 004f7d5d  5e                   pop esi
// 004f7d5e  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??0RenderSurface@Render@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
