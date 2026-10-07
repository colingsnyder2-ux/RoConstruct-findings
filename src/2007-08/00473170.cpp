// roc 2007-08 00473170  unit: G3D::VARArea  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473170
//
// 00473170  56                   push esi
// 00473171  57                   push edi
// 00473172  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00473176  57                   push edi
// 00473177  8bf1                 mov esi, ecx
// 00473179  e852640900           call 0x5095d0
// 0047317e  d94724               fld dword ptr [edi + 0x24]
// 00473181  d95e24               fstp dword ptr [esi + 0x24]
// 00473184  8bc6                 mov eax, esi
// 00473186  d94728               fld dword ptr [edi + 0x28]
// 00473189  d95e28               fstp dword ptr [esi + 0x28]
// 0047318c  d9472c               fld dword ptr [edi + 0x2c]
// 0047318f  5f                   pop edi
// 00473190  d95e2c               fstp dword ptr [esi + 0x2c]
// 00473193  5e                   pop esi
// 00473194  c20400               ret 4
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0CoordinateFrame@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
