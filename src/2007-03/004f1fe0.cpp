// roc 2007-03 004f1fe0  unit: seg_004f0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f1fe0
//
// 004f1fe0  56                   push esi
// 004f1fe1  8bf1                 mov esi, ecx
// 004f1fe3  57                   push edi
// 004f1fe4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f1fe8  d9470c               fld dword ptr [edi + 0xc]
// 004f1feb  8b4730               mov eax, dword ptr [edi + 0x30]
// 004f1fee  d95e0c               fstp dword ptr [esi + 0xc]
// 004f1ff1  50                   push eax
// 004f1ff2  d94710               fld dword ptr [edi + 0x10]
// 004f1ff5  8d4e30               lea ecx, [esi + 0x30]
// 004f1ff8  d95e10               fstp dword ptr [esi + 0x10]
// 004f1ffb  d94714               fld dword ptr [edi + 0x14]
// 004f1ffe  d95e14               fstp dword ptr [esi + 0x14]
// 004f2001  d94718               fld dword ptr [edi + 0x18]
// 004f2004  d95e18               fstp dword ptr [esi + 0x18]
// 004f2007  d9471c               fld dword ptr [edi + 0x1c]
// 004f200a  d95e1c               fstp dword ptr [esi + 0x1c]
// 004f200d  d94720               fld dword ptr [edi + 0x20]
// 004f2010  d95e20               fstp dword ptr [esi + 0x20]
// 004f2013  d94724               fld dword ptr [edi + 0x24]
// 004f2016  d95e24               fstp dword ptr [esi + 0x24]
// 004f2019  d94728               fld dword ptr [edi + 0x28]
// 004f201c  d95e28               fstp dword ptr [esi + 0x28]
// 004f201f  d9472c               fld dword ptr [edi + 0x2c]
// 004f2022  d95e2c               fstp dword ptr [esi + 0x2c]
// 004f2025  e86630f8ff           call 0x475090
// 004f202a  d94734               fld dword ptr [edi + 0x34]
// 004f202d  8d4f40               lea ecx, [edi + 0x40]
// 004f2030  d95e34               fstp dword ptr [esi + 0x34]
// 004f2033  51                   push ecx
// 004f2034  d94738               fld dword ptr [edi + 0x38]
// 004f2037  8d4e40               lea ecx, [esi + 0x40]
// 004f203a  d95e38               fstp dword ptr [esi + 0x38]
// 004f203d  d9473c               fld dword ptr [edi + 0x3c]
// 004f2040  d95e3c               fstp dword ptr [esi + 0x3c]
// 004f2043  e8c8f5ffff           call 0x4f1610
// 004f2048  83c74c               add edi, 0x4c
// 004f204b  57                   push edi
// 004f204c  8d4e4c               lea ecx, [esi + 0x4c]
// 004f204f  e8bcf5ffff           call 0x4f1610
// 004f2054  5f                   pop edi
// 004f2055  8bc6                 mov eax, esi
// 004f2057  5e                   pop esi
// 004f2058  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4Lighting@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
