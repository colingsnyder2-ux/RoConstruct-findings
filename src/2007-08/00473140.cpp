// from server: 100% by auto
// roc 2007-08 00473140  unit: G3D::VARArea  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473140
//
// 00473140  8b442404             mov eax, dword ptr [esp + 4]
// 00473144  56                   push esi
// 00473145  50                   push eax
// 00473146  8bf1                 mov esi, ecx
// 00473148  e883640900           call 0x5095d0
// 0047314d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00473151  d900                 fld dword ptr [eax]
// 00473153  d95e24               fstp dword ptr [esi + 0x24]
// 00473156  d94004               fld dword ptr [eax + 4]
// 00473159  d95e28               fstp dword ptr [esi + 0x28]
// 0047315c  d94008               fld dword ptr [eax + 8]
// 0047315f  8bc6                 mov eax, esi
// 00473161  d95e2c               fstp dword ptr [esi + 0x2c]
// 00473164  5e                   pop esi
// 00473165  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ??0CoordinateFrame@G3D@@QAE@ABVMatrix3@1@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
