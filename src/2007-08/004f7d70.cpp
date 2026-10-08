// roc 2007-08 004f7d70  unit: G3D::Sphere  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f7d70
//
// 004f7d70  8b442404             mov eax, dword ptr [esp + 4]
// 004f7d74  53                   push ebx
// 004f7d75  8bd9                 mov ebx, ecx
// 004f7d77  56                   push esi
// 004f7d78  57                   push edi
// 004f7d79  8bf0                 mov esi, eax
// 004f7d7b  b909000000           mov ecx, 9
// 004f7d80  8bfb                 mov edi, ebx
// 004f7d82  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004f7d84  d94024               fld dword ptr [eax + 0x24]
// 004f7d87  d95b24               fstp dword ptr [ebx + 0x24]
// 004f7d8a  d94028               fld dword ptr [eax + 0x28]
// 004f7d8d  d95b28               fstp dword ptr [ebx + 0x28]
// 004f7d90  d9402c               fld dword ptr [eax + 0x2c]
// 004f7d93  d95b2c               fstp dword ptr [ebx + 0x2c]
// 004f7d96  d94030               fld dword ptr [eax + 0x30]
// 004f7d99  d95b30               fstp dword ptr [ebx + 0x30]
// 004f7d9c  8b4834               mov ecx, dword ptr [eax + 0x34]
// 004f7d9f  894b34               mov dword ptr [ebx + 0x34], ecx
// 004f7da2  8d4b40               lea ecx, [ebx + 0x40]
// 004f7da5  d94038               fld dword ptr [eax + 0x38]
// 004f7da8  d95b38               fstp dword ptr [ebx + 0x38]
// 004f7dab  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004f7dae  89533c               mov dword ptr [ebx + 0x3c], edx
// 004f7db1  8b4040               mov eax, dword ptr [eax + 0x40]
// 004f7db4  50                   push eax
// 004f7db5  e8b6d1f7ff           call 0x474f70
// 004f7dba  5f                   pop edi
// 004f7dbb  5e                   pop esi
// 004f7dbc  8bc3                 mov eax, ebx
// 004f7dbe  5b                   pop ebx
// 004f7dbf  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??4RenderSurface@Render@RBX@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
