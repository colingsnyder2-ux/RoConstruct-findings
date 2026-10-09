// roc 2009-06 00565ee0  unit: RBX::RbxG3D::RenderScene  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00565ee0
//
// 00565ee0  8b442404             mov eax, dword ptr [esp + 4]
// 00565ee4  53                   push ebx
// 00565ee5  8bd9                 mov ebx, ecx
// 00565ee7  56                   push esi
// 00565ee8  57                   push edi
// 00565ee9  8bf0                 mov esi, eax
// 00565eeb  b909000000           mov ecx, 9
// 00565ef0  8bfb                 mov edi, ebx
// 00565ef2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00565ef4  d94024               fld dword ptr [eax + 0x24]
// 00565ef7  d95b24               fstp dword ptr [ebx + 0x24]
// 00565efa  d94028               fld dword ptr [eax + 0x28]
// 00565efd  d95b28               fstp dword ptr [ebx + 0x28]
// 00565f00  d9402c               fld dword ptr [eax + 0x2c]
// 00565f03  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00565f06  d94030               fld dword ptr [eax + 0x30]
// 00565f09  d95b30               fstp dword ptr [ebx + 0x30]
// 00565f0c  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00565f0f  894b34               mov dword ptr [ebx + 0x34], ecx
// 00565f12  8d4b40               lea ecx, [ebx + 0x40]
// 00565f15  d94038               fld dword ptr [eax + 0x38]
// 00565f18  d95b38               fstp dword ptr [ebx + 0x38]
// 00565f1b  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00565f1e  89533c               mov dword ptr [ebx + 0x3c], edx
// 00565f21  8b4040               mov eax, dword ptr [eax + 0x40]
// 00565f24  50                   push eax
// 00565f25  e83699f3ff           call 0x49f860
// 00565f2a  5f                   pop edi
// 00565f2b  5e                   pop esi
// 00565f2c  8bc3                 mov eax, ebx
// 00565f2e  5b                   pop ebx
// 00565f2f  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??4RenderSurface@Render@RBX@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
