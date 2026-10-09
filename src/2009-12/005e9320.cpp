// roc 2009-12 005e9320  unit: seg_005e0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e9320
//
// 005e9320  56                   push esi
// 005e9321  8bf1                 mov esi, ecx
// 005e9323  57                   push edi
// 005e9324  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e9328  d9470c               fld dword ptr [edi + 0xc]
// 005e932b  8b4730               mov eax, dword ptr [edi + 0x30]
// 005e932e  d95e0c               fstp dword ptr [esi + 0xc]
// 005e9331  50                   push eax
// 005e9332  d94710               fld dword ptr [edi + 0x10]
// 005e9335  8d4e30               lea ecx, [esi + 0x30]
// 005e9338  d95e10               fstp dword ptr [esi + 0x10]
// 005e933b  d94714               fld dword ptr [edi + 0x14]
// 005e933e  d95e14               fstp dword ptr [esi + 0x14]
// 005e9341  d94718               fld dword ptr [edi + 0x18]
// 005e9344  d95e18               fstp dword ptr [esi + 0x18]
// 005e9347  d9471c               fld dword ptr [edi + 0x1c]
// 005e934a  d95e1c               fstp dword ptr [esi + 0x1c]
// 005e934d  d94720               fld dword ptr [edi + 0x20]
// 005e9350  d95e20               fstp dword ptr [esi + 0x20]
// 005e9353  d94724               fld dword ptr [edi + 0x24]
// 005e9356  d95e24               fstp dword ptr [esi + 0x24]
// 005e9359  d94728               fld dword ptr [edi + 0x28]
// 005e935c  d95e28               fstp dword ptr [esi + 0x28]
// 005e935f  d9472c               fld dword ptr [edi + 0x2c]
// 005e9362  d95e2c               fstp dword ptr [esi + 0x2c]
// 005e9365  e80628e6ff           call 0x44bb70
// 005e936a  d94734               fld dword ptr [edi + 0x34]
// 005e936d  8d4f40               lea ecx, [edi + 0x40]
// 005e9370  d95e34               fstp dword ptr [esi + 0x34]
// 005e9373  51                   push ecx
// 005e9374  d94738               fld dword ptr [edi + 0x38]
// 005e9377  8d4e40               lea ecx, [esi + 0x40]
// 005e937a  d95e38               fstp dword ptr [esi + 0x38]
// 005e937d  d9473c               fld dword ptr [edi + 0x3c]
// 005e9380  d95e3c               fstp dword ptr [esi + 0x3c]
// 005e9383  e828f3ffff           call 0x5e86b0
// 005e9388  83c74c               add edi, 0x4c
// 005e938b  57                   push edi
// 005e938c  8d4e4c               lea ecx, [esi + 0x4c]
// 005e938f  e81cf3ffff           call 0x5e86b0
// 005e9394  5f                   pop edi
// 005e9395  8bc6                 mov eax, esi
// 005e9397  5e                   pop esi
// 005e9398  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4Lighting@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
