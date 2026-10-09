// roc 2009-12 005e09f0  unit: RBX::RbxG3D::RenderScene  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e09f0
//
// 005e09f0  8b442404             mov eax, dword ptr [esp + 4]
// 005e09f4  53                   push ebx
// 005e09f5  8bd9                 mov ebx, ecx
// 005e09f7  56                   push esi
// 005e09f8  57                   push edi
// 005e09f9  8bf0                 mov esi, eax
// 005e09fb  b909000000           mov ecx, 9
// 005e0a00  8bfb                 mov edi, ebx
// 005e0a02  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005e0a04  d94024               fld dword ptr [eax + 0x24]
// 005e0a07  d95b24               fstp dword ptr [ebx + 0x24]
// 005e0a0a  d94028               fld dword ptr [eax + 0x28]
// 005e0a0d  d95b28               fstp dword ptr [ebx + 0x28]
// 005e0a10  d9402c               fld dword ptr [eax + 0x2c]
// 005e0a13  d95b2c               fstp dword ptr [ebx + 0x2c]
// 005e0a16  d94030               fld dword ptr [eax + 0x30]
// 005e0a19  d95b30               fstp dword ptr [ebx + 0x30]
// 005e0a1c  8b4834               mov ecx, dword ptr [eax + 0x34]
// 005e0a1f  894b34               mov dword ptr [ebx + 0x34], ecx
// 005e0a22  8d4b40               lea ecx, [ebx + 0x40]
// 005e0a25  d94038               fld dword ptr [eax + 0x38]
// 005e0a28  d95b38               fstp dword ptr [ebx + 0x38]
// 005e0a2b  8b503c               mov edx, dword ptr [eax + 0x3c]
// 005e0a2e  89533c               mov dword ptr [ebx + 0x3c], edx
// 005e0a31  8b4040               mov eax, dword ptr [eax + 0x40]
// 005e0a34  50                   push eax
// 005e0a35  e8b655f0ff           call 0x4e5ff0
// 005e0a3a  5f                   pop edi
// 005e0a3b  5e                   pop esi
// 005e0a3c  8bc3                 mov eax, ebx
// 005e0a3e  5b                   pop ebx
// 005e0a3f  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??4RenderSurface@Render@RBX@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
