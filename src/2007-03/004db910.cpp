// roc 2007-03 004db910  unit: seg_004d0000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004db910
//
// 004db910  83ec0c               sub esp, 0xc
// 004db913  56                   push esi
// 004db914  8b742414             mov esi, dword ptr [esp + 0x14]
// 004db918  8d442404             lea eax, [esp + 4]
// 004db91c  50                   push eax
// 004db91d  8bce                 mov ecx, esi
// 004db91f  e86cffffff           call 0x4db890
// 004db924  d9442404             fld dword ptr [esp + 4]
// 004db928  8b442418             mov eax, dword ptr [esp + 0x18]
// 004db92c  d910                 fst dword ptr [eax]
// 004db92e  d9442408             fld dword ptr [esp + 8]
// 004db932  d95004               fst dword ptr [eax + 4]
// 004db935  d944240c             fld dword ptr [esp + 0xc]
// 004db939  d95008               fst dword ptr [eax + 8]
// 004db93c  8b442420             mov eax, dword ptr [esp + 0x20]
// 004db940  d900                 fld dword ptr [eax]
// 004db942  decb                 fmulp st(3)
// 004db944  d9ca                 fxch st(2)
// 004db946  d95c2404             fstp dword ptr [esp + 4]
// 004db94a  d84804               fmul dword ptr [eax + 4]
// 004db94d  d95c2408             fstp dword ptr [esp + 8]
// 004db951  d84808               fmul dword ptr [eax + 8]
// 004db954  d95c240c             fstp dword ptr [esp + 0xc]
// 004db958  d9442404             fld dword ptr [esp + 4]
// 004db95c  d91e                 fstp dword ptr [esi]
// 004db95e  d9442408             fld dword ptr [esp + 8]
// 004db962  d95e04               fstp dword ptr [esi + 4]
// 004db965  d944240c             fld dword ptr [esp + 0xc]
// 004db969  d95e08               fstp dword ptr [esi + 8]
// 004db96c  5e                   pop esi
// 004db96d  83c40c               add esp, 0xc
// 004db970  c3                   ret 
// library rbxgs-view/SphereMesh.cpp (function ?SphereTransform@@YAXAAVVector3@G3D@@0AAVVector2@2@ABV12@ABVVector2int16@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view SphereMesh.cpp
