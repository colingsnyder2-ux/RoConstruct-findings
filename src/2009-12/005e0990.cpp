// roc 2009-12 005e0990  unit: RBX::RbxG3D::RenderScene  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e0990
//
// 005e0990  56                   push esi
// 005e0991  57                   push edi
// 005e0992  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e0996  57                   push edi
// 005e0997  8bf1                 mov esi, ecx
// 005e0999  e8622f0100           call 0x5f3900
// 005e099e  d94724               fld dword ptr [edi + 0x24]
// 005e09a1  d95e24               fstp dword ptr [esi + 0x24]
// 005e09a4  d94728               fld dword ptr [edi + 0x28]
// 005e09a7  d95e28               fstp dword ptr [esi + 0x28]
// 005e09aa  d9472c               fld dword ptr [edi + 0x2c]
// 005e09ad  d95e2c               fstp dword ptr [esi + 0x2c]
// 005e09b0  d94730               fld dword ptr [edi + 0x30]
// 005e09b3  d95e30               fstp dword ptr [esi + 0x30]
// 005e09b6  8b4734               mov eax, dword ptr [edi + 0x34]
// 005e09b9  894634               mov dword ptr [esi + 0x34], eax
// 005e09bc  d94738               fld dword ptr [edi + 0x38]
// 005e09bf  d95e38               fstp dword ptr [esi + 0x38]
// 005e09c2  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 005e09c5  894e3c               mov dword ptr [esi + 0x3c], ecx
// 005e09c8  8d4e40               lea ecx, [esi + 0x40]
// 005e09cb  c70100000000         mov dword ptr [ecx], 0
// 005e09d1  8b5740               mov edx, dword ptr [edi + 0x40]
// 005e09d4  52                   push edx
// 005e09d5  e81656f0ff           call 0x4e5ff0
// 005e09da  5f                   pop edi
// 005e09db  8bc6                 mov eax, esi
// 005e09dd  5e                   pop esi
// 005e09de  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??0RenderSurface@Render@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
