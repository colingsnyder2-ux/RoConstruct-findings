// from server: 100% by auto
// roc 2009-06 00485950  unit: RBX::MeshFileKey  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485950
//
// 00485950  8b442404             mov eax, dword ptr [esp + 4]
// 00485954  56                   push esi
// 00485955  50                   push eax
// 00485956  8bf1                 mov esi, ecx
// 00485958  e823460100           call 0x499f80
// 0048595d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00485961  d900                 fld dword ptr [eax]
// 00485963  d95e24               fstp dword ptr [esi + 0x24]
// 00485966  d94004               fld dword ptr [eax + 4]
// 00485969  d95e28               fstp dword ptr [esi + 0x28]
// 0048596c  d94008               fld dword ptr [eax + 8]
// 0048596f  8bc6                 mov eax, esi
// 00485971  d95e2c               fstp dword ptr [esi + 0x2c]
// 00485974  5e                   pop esi
// 00485975  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ??0CoordinateFrame@G3D@@QAE@ABVMatrix3@1@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
