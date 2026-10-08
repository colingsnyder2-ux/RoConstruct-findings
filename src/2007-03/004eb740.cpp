// roc 2007-03 004eb740  unit: seg_004e0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb740
//
// 004eb740  56                   push esi
// 004eb741  57                   push edi
// 004eb742  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004eb746  57                   push edi
// 004eb747  8bf1                 mov esi, ecx
// 004eb749  e832320100           call 0x4fe980
// 004eb74e  d94724               fld dword ptr [edi + 0x24]
// 004eb751  d95e24               fstp dword ptr [esi + 0x24]
// 004eb754  d94728               fld dword ptr [edi + 0x28]
// 004eb757  d95e28               fstp dword ptr [esi + 0x28]
// 004eb75a  d9472c               fld dword ptr [edi + 0x2c]
// 004eb75d  d95e2c               fstp dword ptr [esi + 0x2c]
// 004eb760  d94730               fld dword ptr [edi + 0x30]
// 004eb763  d95e30               fstp dword ptr [esi + 0x30]
// 004eb766  8b4734               mov eax, dword ptr [edi + 0x34]
// 004eb769  894634               mov dword ptr [esi + 0x34], eax
// 004eb76c  d94738               fld dword ptr [edi + 0x38]
// 004eb76f  d95e38               fstp dword ptr [esi + 0x38]
// 004eb772  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 004eb775  894e3c               mov dword ptr [esi + 0x3c], ecx
// 004eb778  8d4e40               lea ecx, [esi + 0x40]
// 004eb77b  c70100000000         mov dword ptr [ecx], 0
// 004eb781  8b5740               mov edx, dword ptr [edi + 0x40]
// 004eb784  52                   push edx
// 004eb785  e80699f8ff           call 0x475090
// 004eb78a  5f                   pop edi
// 004eb78b  8bc6                 mov eax, esi
// 004eb78d  5e                   pop esi
// 004eb78e  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??0RenderSurface@Render@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
