// roc 2007-03 005dad00  unit: seg_005d0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dad00
//
// 005dad00  8b442404             mov eax, dword ptr [esp + 4]
// 005dad04  d98124010000         fld dword ptr [ecx + 0x124]
// 005dad0a  d918                 fstp dword ptr [eax]
// 005dad0c  d98128010000         fld dword ptr [ecx + 0x128]
// 005dad12  d95804               fstp dword ptr [eax + 4]
// 005dad15  d9812c010000         fld dword ptr [ecx + 0x12c]
// 005dad1b  d95808               fstp dword ptr [eax + 8]
// 005dad1e  c20400               ret 4
// library rbxgs/v8datamodel\Gyro.cpp (function ?getLastForce@BodyPosition@RBX@@QAE?AVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
