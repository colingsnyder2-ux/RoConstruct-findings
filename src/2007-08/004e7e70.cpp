// roc 2007-08 004e7e70  unit: TorsoBuilder  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e7e70
//
// 004e7e70  83ec0c               sub esp, 0xc
// 004e7e73  56                   push esi
// 004e7e74  8b742414             mov esi, dword ptr [esp + 0x14]
// 004e7e78  8d442404             lea eax, [esp + 4]
// 004e7e7c  50                   push eax
// 004e7e7d  8bce                 mov ecx, esi
// 004e7e7f  e86cffffff           call 0x4e7df0
// 004e7e84  d9442404             fld dword ptr [esp + 4]
// 004e7e88  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e7e8c  d910                 fst dword ptr [eax]
// 004e7e8e  d9442408             fld dword ptr [esp + 8]
// 004e7e92  d95004               fst dword ptr [eax + 4]
// 004e7e95  d944240c             fld dword ptr [esp + 0xc]
// 004e7e99  d95008               fst dword ptr [eax + 8]
// 004e7e9c  8b442420             mov eax, dword ptr [esp + 0x20]
// 004e7ea0  d900                 fld dword ptr [eax]
// 004e7ea2  decb                 fmulp st(3)
// 004e7ea4  d9ca                 fxch st(2)
// 004e7ea6  d95c2404             fstp dword ptr [esp + 4]
// 004e7eaa  d84804               fmul dword ptr [eax + 4]
// 004e7ead  d95c2408             fstp dword ptr [esp + 8]
// 004e7eb1  d84808               fmul dword ptr [eax + 8]
// 004e7eb4  d95c240c             fstp dword ptr [esp + 0xc]
// 004e7eb8  d9442404             fld dword ptr [esp + 4]
// 004e7ebc  d91e                 fstp dword ptr [esi]
// 004e7ebe  d9442408             fld dword ptr [esp + 8]
// 004e7ec2  d95e04               fstp dword ptr [esi + 4]
// 004e7ec5  d944240c             fld dword ptr [esp + 0xc]
// 004e7ec9  d95e08               fstp dword ptr [esi + 8]
// 004e7ecc  5e                   pop esi
// 004e7ecd  83c40c               add esp, 0xc
// 004e7ed0  c3                   ret 
// library rbxgs-view/SphereMesh.cpp (function ?SphereTransform@@YAXAAVVector3@G3D@@0AAVVector2@2@ABV12@ABVVector2int16@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view SphereMesh.cpp
