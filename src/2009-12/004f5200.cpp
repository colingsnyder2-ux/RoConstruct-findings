// roc 2009-12 004f5200  unit: RBX::GfxAttachement  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f5200
//
// 004f5200  56                   push esi
// 004f5201  8bf1                 mov esi, ecx
// 004f5203  e8a8f70f00           call 0x5f49b0
// 004f5208  50                   push eax
// 004f5209  8bce                 mov ecx, esi
// 004f520b  e8f0e60f00           call 0x5f3900
// 004f5210  8b442408             mov eax, dword ptr [esp + 8]
// 004f5214  d900                 fld dword ptr [eax]
// 004f5216  d95e24               fstp dword ptr [esi + 0x24]
// 004f5219  d94004               fld dword ptr [eax + 4]
// 004f521c  d95e28               fstp dword ptr [esi + 0x28]
// 004f521f  d94008               fld dword ptr [eax + 8]
// 004f5222  8bc6                 mov eax, esi
// 004f5224  d95e2c               fstp dword ptr [esi + 0x2c]
// 004f5227  5e                   pop esi
// 004f5228  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??0CoordinateFrame@G3D@@QAE@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
