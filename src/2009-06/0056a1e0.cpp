// roc 2009-06 0056a1e0  unit: RBX::RbxG3D::RenderScene  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056a1e0
//
// 0056a1e0  56                   push esi
// 0056a1e1  8bf1                 mov esi, ecx
// 0056a1e3  57                   push edi
// 0056a1e4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0056a1e8  d9470c               fld dword ptr [edi + 0xc]
// 0056a1eb  8b4730               mov eax, dword ptr [edi + 0x30]
// 0056a1ee  d95e0c               fstp dword ptr [esi + 0xc]
// 0056a1f1  50                   push eax
// 0056a1f2  d94710               fld dword ptr [edi + 0x10]
// 0056a1f5  8d4e30               lea ecx, [esi + 0x30]
// 0056a1f8  d95e10               fstp dword ptr [esi + 0x10]
// 0056a1fb  d94714               fld dword ptr [edi + 0x14]
// 0056a1fe  d95e14               fstp dword ptr [esi + 0x14]
// 0056a201  d94718               fld dword ptr [edi + 0x18]
// 0056a204  d95e18               fstp dword ptr [esi + 0x18]
// 0056a207  d9471c               fld dword ptr [edi + 0x1c]
// 0056a20a  d95e1c               fstp dword ptr [esi + 0x1c]
// 0056a20d  d94720               fld dword ptr [edi + 0x20]
// 0056a210  d95e20               fstp dword ptr [esi + 0x20]
// 0056a213  d94724               fld dword ptr [edi + 0x24]
// 0056a216  d95e24               fstp dword ptr [esi + 0x24]
// 0056a219  d94728               fld dword ptr [edi + 0x28]
// 0056a21c  d95e28               fstp dword ptr [esi + 0x28]
// 0056a21f  d9472c               fld dword ptr [edi + 0x2c]
// 0056a222  d95e2c               fstp dword ptr [esi + 0x2c]
// 0056a225  e83656f3ff           call 0x49f860
// 0056a22a  d94734               fld dword ptr [edi + 0x34]
// 0056a22d  8d4f40               lea ecx, [edi + 0x40]
// 0056a230  d95e34               fstp dword ptr [esi + 0x34]
// 0056a233  51                   push ecx
// 0056a234  d94738               fld dword ptr [edi + 0x38]
// 0056a237  8d4e40               lea ecx, [esi + 0x40]
// 0056a23a  d95e38               fstp dword ptr [esi + 0x38]
// 0056a23d  d9473c               fld dword ptr [edi + 0x3c]
// 0056a240  d95e3c               fstp dword ptr [esi + 0x3c]
// 0056a243  e878f4ffff           call 0x5696c0
// 0056a248  83c74c               add edi, 0x4c
// 0056a24b  57                   push edi
// 0056a24c  8d4e4c               lea ecx, [esi + 0x4c]
// 0056a24f  e86cf4ffff           call 0x5696c0
// 0056a254  5f                   pop edi
// 0056a255  8bc6                 mov eax, esi
// 0056a257  5e                   pop esi
// 0056a258  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4Lighting@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
