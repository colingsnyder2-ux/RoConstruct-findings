// from server: 100% by auto
// roc 2009-06 0049dce0  unit: G3D::VARArea  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049dce0
//
// 0049dce0  56                   push esi
// 0049dce1  57                   push edi
// 0049dce2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049dce6  57                   push edi
// 0049dce7  8bf1                 mov esi, ecx
// 0049dce9  e892c2ffff           call 0x499f80
// 0049dcee  d94724               fld dword ptr [edi + 0x24]
// 0049dcf1  d95e24               fstp dword ptr [esi + 0x24]
// 0049dcf4  8bc6                 mov eax, esi
// 0049dcf6  d94728               fld dword ptr [edi + 0x28]
// 0049dcf9  d95e28               fstp dword ptr [esi + 0x28]
// 0049dcfc  d9472c               fld dword ptr [edi + 0x2c]
// 0049dcff  5f                   pop edi
// 0049dd00  d95e2c               fstp dword ptr [esi + 0x2c]
// 0049dd03  5e                   pop esi
// 0049dd04  c20400               ret 4
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0CoordinateFrame@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
