// roc 2010-06 0054c8f0  unit: RBX::AggregateChunk  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054c8f0
//
// 0054c8f0  56                   push esi
// 0054c8f1  8bf1                 mov esi, ecx
// 0054c8f3  57                   push edi
// 0054c8f4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0054c8f8  d9470c               fld dword ptr [edi + 0xc]
// 0054c8fb  8b4730               mov eax, dword ptr [edi + 0x30]
// 0054c8fe  d95e0c               fstp dword ptr [esi + 0xc]
// 0054c901  50                   push eax
// 0054c902  d94710               fld dword ptr [edi + 0x10]
// 0054c905  8d4e30               lea ecx, [esi + 0x30]
// 0054c908  d95e10               fstp dword ptr [esi + 0x10]
// 0054c90b  d94714               fld dword ptr [edi + 0x14]
// 0054c90e  d95e14               fstp dword ptr [esi + 0x14]
// 0054c911  d94718               fld dword ptr [edi + 0x18]
// 0054c914  d95e18               fstp dword ptr [esi + 0x18]
// 0054c917  d9471c               fld dword ptr [edi + 0x1c]
// 0054c91a  d95e1c               fstp dword ptr [esi + 0x1c]
// 0054c91d  d94720               fld dword ptr [edi + 0x20]
// 0054c920  d95e20               fstp dword ptr [esi + 0x20]
// 0054c923  d94724               fld dword ptr [edi + 0x24]
// 0054c926  d95e24               fstp dword ptr [esi + 0x24]
// 0054c929  d94728               fld dword ptr [edi + 0x28]
// 0054c92c  d95e28               fstp dword ptr [esi + 0x28]
// 0054c92f  d9472c               fld dword ptr [edi + 0x2c]
// 0054c932  d95e2c               fstp dword ptr [esi + 0x2c]
// 0054c935  e8e6a3f3ff           call 0x486d20
// 0054c93a  d94734               fld dword ptr [edi + 0x34]
// 0054c93d  8d4f40               lea ecx, [edi + 0x40]
// 0054c940  d95e34               fstp dword ptr [esi + 0x34]
// 0054c943  51                   push ecx
// 0054c944  d94738               fld dword ptr [edi + 0x38]
// 0054c947  8d4e40               lea ecx, [esi + 0x40]
// 0054c94a  d95e38               fstp dword ptr [esi + 0x38]
// 0054c94d  d9473c               fld dword ptr [edi + 0x3c]
// 0054c950  d95e3c               fstp dword ptr [esi + 0x3c]
// 0054c953  e828f3ffff           call 0x54bc80
// 0054c958  83c74c               add edi, 0x4c
// 0054c95b  57                   push edi
// 0054c95c  8d4e4c               lea ecx, [esi + 0x4c]
// 0054c95f  e81cf3ffff           call 0x54bc80
// 0054c964  5f                   pop edi
// 0054c965  8bc6                 mov eax, esi
// 0054c967  5e                   pop esi
// 0054c968  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4Lighting@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
