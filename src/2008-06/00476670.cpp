// roc 2008-06 00476670  unit: G3D::VARArea  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476670
//
// 00476670  56                   push esi
// 00476671  57                   push edi
// 00476672  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00476676  57                   push edi
// 00476677  8bf1                 mov esi, ecx
// 00476679  e8a2cb0900           call 0x513220
// 0047667e  d94724               fld dword ptr [edi + 0x24]
// 00476681  d95e24               fstp dword ptr [esi + 0x24]
// 00476684  8bc6                 mov eax, esi
// 00476686  d94728               fld dword ptr [edi + 0x28]
// 00476689  d95e28               fstp dword ptr [esi + 0x28]
// 0047668c  d9472c               fld dword ptr [edi + 0x2c]
// 0047668f  5f                   pop edi
// 00476690  d95e2c               fstp dword ptr [esi + 0x2c]
// 00476693  5e                   pop esi
// 00476694  c20400               ret 4
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0CoordinateFrame@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
