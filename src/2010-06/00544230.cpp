// roc 2010-06 00544230  unit: RBX::RbxG3D::RenderScene  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00544230
//
// 00544230  8b442404             mov eax, dword ptr [esp + 4]
// 00544234  53                   push ebx
// 00544235  8bd9                 mov ebx, ecx
// 00544237  56                   push esi
// 00544238  57                   push edi
// 00544239  8bf0                 mov esi, eax
// 0054423b  b909000000           mov ecx, 9
// 00544240  8bfb                 mov edi, ebx
// 00544242  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00544244  d94024               fld dword ptr [eax + 0x24]
// 00544247  d95b24               fstp dword ptr [ebx + 0x24]
// 0054424a  d94028               fld dword ptr [eax + 0x28]
// 0054424d  d95b28               fstp dword ptr [ebx + 0x28]
// 00544250  d9402c               fld dword ptr [eax + 0x2c]
// 00544253  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00544256  d94030               fld dword ptr [eax + 0x30]
// 00544259  d95b30               fstp dword ptr [ebx + 0x30]
// 0054425c  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0054425f  894b34               mov dword ptr [ebx + 0x34], ecx
// 00544262  8d4b40               lea ecx, [ebx + 0x40]
// 00544265  d94038               fld dword ptr [eax + 0x38]
// 00544268  d95b38               fstp dword ptr [ebx + 0x38]
// 0054426b  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0054426e  89533c               mov dword ptr [ebx + 0x3c], edx
// 00544271  8b4040               mov eax, dword ptr [eax + 0x40]
// 00544274  50                   push eax
// 00544275  e8a62af4ff           call 0x486d20
// 0054427a  5f                   pop edi
// 0054427b  5e                   pop esi
// 0054427c  8bc3                 mov eax, ebx
// 0054427e  5b                   pop ebx
// 0054427f  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??4RenderSurface@Render@RBX@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
