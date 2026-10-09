// roc 2007-03 004eb7a0  unit: seg_004e0000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb7a0
//
// 004eb7a0  8b442404             mov eax, dword ptr [esp + 4]
// 004eb7a4  53                   push ebx
// 004eb7a5  8bd9                 mov ebx, ecx
// 004eb7a7  56                   push esi
// 004eb7a8  57                   push edi
// 004eb7a9  8bf0                 mov esi, eax
// 004eb7ab  b909000000           mov ecx, 9
// 004eb7b0  8bfb                 mov edi, ebx
// 004eb7b2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004eb7b4  d94024               fld dword ptr [eax + 0x24]
// 004eb7b7  d95b24               fstp dword ptr [ebx + 0x24]
// 004eb7ba  d94028               fld dword ptr [eax + 0x28]
// 004eb7bd  d95b28               fstp dword ptr [ebx + 0x28]
// 004eb7c0  d9402c               fld dword ptr [eax + 0x2c]
// 004eb7c3  d95b2c               fstp dword ptr [ebx + 0x2c]
// 004eb7c6  d94030               fld dword ptr [eax + 0x30]
// 004eb7c9  d95b30               fstp dword ptr [ebx + 0x30]
// 004eb7cc  8b4834               mov ecx, dword ptr [eax + 0x34]
// 004eb7cf  894b34               mov dword ptr [ebx + 0x34], ecx
// 004eb7d2  8d4b40               lea ecx, [ebx + 0x40]
// 004eb7d5  d94038               fld dword ptr [eax + 0x38]
// 004eb7d8  d95b38               fstp dword ptr [ebx + 0x38]
// 004eb7db  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004eb7de  89533c               mov dword ptr [ebx + 0x3c], edx
// 004eb7e1  8b4040               mov eax, dword ptr [eax + 0x40]
// 004eb7e4  50                   push eax
// 004eb7e5  e8a698f8ff           call 0x475090
// 004eb7ea  5f                   pop edi
// 004eb7eb  5e                   pop esi
// 004eb7ec  8bc3                 mov eax, ebx
// 004eb7ee  5b                   pop ebx
// 004eb7ef  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??4RenderSurface@Render@RBX@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
