// roc 2009-06 00565e80  unit: RBX::RbxG3D::RenderScene  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00565e80
//
// 00565e80  56                   push esi
// 00565e81  57                   push edi
// 00565e82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00565e86  57                   push edi
// 00565e87  8bf1                 mov esi, ecx
// 00565e89  e8f240f3ff           call 0x499f80
// 00565e8e  d94724               fld dword ptr [edi + 0x24]
// 00565e91  d95e24               fstp dword ptr [esi + 0x24]
// 00565e94  d94728               fld dword ptr [edi + 0x28]
// 00565e97  d95e28               fstp dword ptr [esi + 0x28]
// 00565e9a  d9472c               fld dword ptr [edi + 0x2c]
// 00565e9d  d95e2c               fstp dword ptr [esi + 0x2c]
// 00565ea0  d94730               fld dword ptr [edi + 0x30]
// 00565ea3  d95e30               fstp dword ptr [esi + 0x30]
// 00565ea6  8b4734               mov eax, dword ptr [edi + 0x34]
// 00565ea9  894634               mov dword ptr [esi + 0x34], eax
// 00565eac  d94738               fld dword ptr [edi + 0x38]
// 00565eaf  d95e38               fstp dword ptr [esi + 0x38]
// 00565eb2  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00565eb5  894e3c               mov dword ptr [esi + 0x3c], ecx
// 00565eb8  8d4e40               lea ecx, [esi + 0x40]
// 00565ebb  c70100000000         mov dword ptr [ecx], 0
// 00565ec1  8b5740               mov edx, dword ptr [edi + 0x40]
// 00565ec4  52                   push edx
// 00565ec5  e89699f3ff           call 0x49f860
// 00565eca  5f                   pop edi
// 00565ecb  8bc6                 mov eax, esi
// 00565ecd  5e                   pop esi
// 00565ece  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??0RenderSurface@Render@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
