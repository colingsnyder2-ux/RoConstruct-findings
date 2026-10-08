// roc 2007-08 004fe470  unit: RBX::Render::AggregateChunk  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fe470
//
// 004fe470  56                   push esi
// 004fe471  8bf1                 mov esi, ecx
// 004fe473  57                   push edi
// 004fe474  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004fe478  d9470c               fld dword ptr [edi + 0xc]
// 004fe47b  8b4730               mov eax, dword ptr [edi + 0x30]
// 004fe47e  d95e0c               fstp dword ptr [esi + 0xc]
// 004fe481  50                   push eax
// 004fe482  d94710               fld dword ptr [edi + 0x10]
// 004fe485  8d4e30               lea ecx, [esi + 0x30]
// 004fe488  d95e10               fstp dword ptr [esi + 0x10]
// 004fe48b  d94714               fld dword ptr [edi + 0x14]
// 004fe48e  d95e14               fstp dword ptr [esi + 0x14]
// 004fe491  d94718               fld dword ptr [edi + 0x18]
// 004fe494  d95e18               fstp dword ptr [esi + 0x18]
// 004fe497  d9471c               fld dword ptr [edi + 0x1c]
// 004fe49a  d95e1c               fstp dword ptr [esi + 0x1c]
// 004fe49d  d94720               fld dword ptr [edi + 0x20]
// 004fe4a0  d95e20               fstp dword ptr [esi + 0x20]
// 004fe4a3  d94724               fld dword ptr [edi + 0x24]
// 004fe4a6  d95e24               fstp dword ptr [esi + 0x24]
// 004fe4a9  d94728               fld dword ptr [edi + 0x28]
// 004fe4ac  d95e28               fstp dword ptr [esi + 0x28]
// 004fe4af  d9472c               fld dword ptr [edi + 0x2c]
// 004fe4b2  d95e2c               fstp dword ptr [esi + 0x2c]
// 004fe4b5  e8b66af7ff           call 0x474f70
// 004fe4ba  d94734               fld dword ptr [edi + 0x34]
// 004fe4bd  8d4f40               lea ecx, [edi + 0x40]
// 004fe4c0  d95e34               fstp dword ptr [esi + 0x34]
// 004fe4c3  51                   push ecx
// 004fe4c4  d94738               fld dword ptr [edi + 0x38]
// 004fe4c7  8d4e40               lea ecx, [esi + 0x40]
// 004fe4ca  d95e38               fstp dword ptr [esi + 0x38]
// 004fe4cd  d9473c               fld dword ptr [edi + 0x3c]
// 004fe4d0  d95e3c               fstp dword ptr [esi + 0x3c]
// 004fe4d3  e8c8f5ffff           call 0x4fdaa0
// 004fe4d8  83c74c               add edi, 0x4c
// 004fe4db  57                   push edi
// 004fe4dc  8d4e4c               lea ecx, [esi + 0x4c]
// 004fe4df  e8bcf5ffff           call 0x4fdaa0
// 004fe4e4  5f                   pop edi
// 004fe4e5  8bc6                 mov eax, esi
// 004fe4e7  5e                   pop esi
// 004fe4e8  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4Lighting@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
