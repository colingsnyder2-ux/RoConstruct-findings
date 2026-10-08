// roc 2007-03 005dad30  unit: seg_005d0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dad30
//
// 005dad30  8b442404             mov eax, dword ptr [esp + 4]
// 005dad34  d98120010000         fld dword ptr [ecx + 0x120]
// 005dad3a  d918                 fstp dword ptr [eax]
// 005dad3c  d98124010000         fld dword ptr [ecx + 0x124]
// 005dad42  d95804               fstp dword ptr [eax + 4]
// 005dad45  d98128010000         fld dword ptr [ecx + 0x128]
// 005dad4b  d95808               fstp dword ptr [eax + 8]
// 005dad4e  c20400               ret 4
// library rbxgs/v8datamodel\Gyro.cpp (function ?getLastForce@BodyVelocity@RBX@@QAE?AVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
