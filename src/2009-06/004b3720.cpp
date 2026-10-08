// from server: 100% by auto
// roc 2009-06 004b3720  unit: G3D::GWindow  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b3720
//
// 004b3720  56                   push esi
// 004b3721  8bf1                 mov esi, ecx
// 004b3723  e868500c00           call 0x578790
// 004b3728  50                   push eax
// 004b3729  8bce                 mov ecx, esi
// 004b372b  e85068feff           call 0x499f80
// 004b3730  8b442408             mov eax, dword ptr [esp + 8]
// 004b3734  d900                 fld dword ptr [eax]
// 004b3736  d95e24               fstp dword ptr [esi + 0x24]
// 004b3739  d94004               fld dword ptr [eax + 4]
// 004b373c  d95e28               fstp dword ptr [esi + 0x28]
// 004b373f  d94008               fld dword ptr [eax + 8]
// 004b3742  8bc6                 mov eax, esi
// 004b3744  d95e2c               fstp dword ptr [esi + 0x2c]
// 004b3747  5e                   pop esi
// 004b3748  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??0CoordinateFrame@G3D@@QAE@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
