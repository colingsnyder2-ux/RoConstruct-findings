// roc 2008-06 00502560  unit: G3D::Sphere  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502560
//
// 00502560  8b442404             mov eax, dword ptr [esp + 4]
// 00502564  53                   push ebx
// 00502565  8bd9                 mov ebx, ecx
// 00502567  56                   push esi
// 00502568  57                   push edi
// 00502569  8bf0                 mov esi, eax
// 0050256b  b909000000           mov ecx, 9
// 00502570  8bfb                 mov edi, ebx
// 00502572  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00502574  d94024               fld dword ptr [eax + 0x24]
// 00502577  d95b24               fstp dword ptr [ebx + 0x24]
// 0050257a  d94028               fld dword ptr [eax + 0x28]
// 0050257d  d95b28               fstp dword ptr [ebx + 0x28]
// 00502580  d9402c               fld dword ptr [eax + 0x2c]
// 00502583  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00502586  d94030               fld dword ptr [eax + 0x30]
// 00502589  d95b30               fstp dword ptr [ebx + 0x30]
// 0050258c  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0050258f  894b34               mov dword ptr [ebx + 0x34], ecx
// 00502592  8d4b40               lea ecx, [ebx + 0x40]
// 00502595  d94038               fld dword ptr [eax + 0x38]
// 00502598  d95b38               fstp dword ptr [ebx + 0x38]
// 0050259b  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0050259e  89533c               mov dword ptr [ebx + 0x3c], edx
// 005025a1  8b4040               mov eax, dword ptr [eax + 0x40]
// 005025a4  50                   push eax
// 005025a5  e8f6690900           call 0x598fa0
// 005025aa  5f                   pop edi
// 005025ab  5e                   pop esi
// 005025ac  8bc3                 mov eax, ebx
// 005025ae  5b                   pop ebx
// 005025af  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??4RenderSurface@Render@RBX@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
