// roc 2009-12 00484bc0  unit: RBX::AdornRbxGfx  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00484bc0
//
// 00484bc0  56                   push esi
// 00484bc1  57                   push edi
// 00484bc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00484bc6  57                   push edi
// 00484bc7  8bf1                 mov esi, ecx
// 00484bc9  e832ed1600           call 0x5f3900
// 00484bce  d94724               fld dword ptr [edi + 0x24]
// 00484bd1  d95e24               fstp dword ptr [esi + 0x24]
// 00484bd4  8bc6                 mov eax, esi
// 00484bd6  d94728               fld dword ptr [edi + 0x28]
// 00484bd9  d95e28               fstp dword ptr [esi + 0x28]
// 00484bdc  d9472c               fld dword ptr [edi + 0x2c]
// 00484bdf  5f                   pop edi
// 00484be0  d95e2c               fstp dword ptr [esi + 0x2c]
// 00484be3  5e                   pop esi
// 00484be4  c20400               ret 4
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0CoordinateFrame@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
