// roc 2007-03 00500750  unit: seg_00500000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500750
//
// 00500750  8b442404             mov eax, dword ptr [esp + 4]
// 00500754  d901                 fld dword ptr [ecx]
// 00500756  d918                 fstp dword ptr [eax]
// 00500758  d94104               fld dword ptr [ecx + 4]
// 0050075b  d95804               fstp dword ptr [eax + 4]
// 0050075e  d94108               fld dword ptr [ecx + 8]
// 00500761  d95808               fstp dword ptr [eax + 8]
// 00500764  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Capsule.cpp (function ?getPoint1@Capsule@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Capsule.cpp
