// from server: 100% by auto
// roc 2008-06 00510720  unit: seg_00510000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00510720
//
// 00510720  8b442404             mov eax, dword ptr [esp + 4]
// 00510724  d94008               fld dword ptr [eax + 8]
// 00510727  d84908               fmul dword ptr [ecx + 8]
// 0051072a  d94004               fld dword ptr [eax + 4]
// 0051072d  d84904               fmul dword ptr [ecx + 4]
// 00510730  dec1                 faddp st(1)
// 00510732  d900                 fld dword ptr [eax]
// 00510734  d809                 fmul dword ptr [ecx]
// 00510736  dec1                 faddp st(1)
// 00510738  c20400               ret 4
// library g3d-6.09/G3Dcpp\AABox.cpp (function ?dot@Vector3@G3D@@QBEMABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
