// roc 2008-06 00506a60  unit: RBX::Render::RenderScene  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00506a60
//
// 00506a60  56                   push esi
// 00506a61  8bf1                 mov esi, ecx
// 00506a63  57                   push edi
// 00506a64  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00506a68  d9470c               fld dword ptr [edi + 0xc]
// 00506a6b  8b4730               mov eax, dword ptr [edi + 0x30]
// 00506a6e  d95e0c               fstp dword ptr [esi + 0xc]
// 00506a71  50                   push eax
// 00506a72  d94710               fld dword ptr [edi + 0x10]
// 00506a75  8d4e30               lea ecx, [esi + 0x30]
// 00506a78  d95e10               fstp dword ptr [esi + 0x10]
// 00506a7b  d94714               fld dword ptr [edi + 0x14]
// 00506a7e  d95e14               fstp dword ptr [esi + 0x14]
// 00506a81  d94718               fld dword ptr [edi + 0x18]
// 00506a84  d95e18               fstp dword ptr [esi + 0x18]
// 00506a87  d9471c               fld dword ptr [edi + 0x1c]
// 00506a8a  d95e1c               fstp dword ptr [esi + 0x1c]
// 00506a8d  d94720               fld dword ptr [edi + 0x20]
// 00506a90  d95e20               fstp dword ptr [esi + 0x20]
// 00506a93  d94724               fld dword ptr [edi + 0x24]
// 00506a96  d95e24               fstp dword ptr [esi + 0x24]
// 00506a99  d94728               fld dword ptr [edi + 0x28]
// 00506a9c  d95e28               fstp dword ptr [esi + 0x28]
// 00506a9f  d9472c               fld dword ptr [edi + 0x2c]
// 00506aa2  d95e2c               fstp dword ptr [esi + 0x2c]
// 00506aa5  e8f6240900           call 0x598fa0
// 00506aaa  d94734               fld dword ptr [edi + 0x34]
// 00506aad  8d4f40               lea ecx, [edi + 0x40]
// 00506ab0  d95e34               fstp dword ptr [esi + 0x34]
// 00506ab3  51                   push ecx
// 00506ab4  d94738               fld dword ptr [edi + 0x38]
// 00506ab7  8d4e40               lea ecx, [esi + 0x40]
// 00506aba  d95e38               fstp dword ptr [esi + 0x38]
// 00506abd  d9473c               fld dword ptr [edi + 0x3c]
// 00506ac0  d95e3c               fstp dword ptr [esi + 0x3c]
// 00506ac3  e878f4ffff           call 0x505f40
// 00506ac8  83c74c               add edi, 0x4c
// 00506acb  57                   push edi
// 00506acc  8d4e4c               lea ecx, [esi + 0x4c]
// 00506acf  e86cf4ffff           call 0x505f40
// 00506ad4  5f                   pop edi
// 00506ad5  8bc6                 mov eax, esi
// 00506ad7  5e                   pop esi
// 00506ad8  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4Lighting@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
