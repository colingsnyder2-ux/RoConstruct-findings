// roc 2007-08 00580f10  unit: RBX::Accoutrement  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580f10
//
// 00580f10  8b442404             mov eax, dword ptr [esp + 4]
// 00580f14  d98124010000         fld dword ptr [ecx + 0x124]
// 00580f1a  d918                 fstp dword ptr [eax]
// 00580f1c  d98128010000         fld dword ptr [ecx + 0x128]
// 00580f22  d95804               fstp dword ptr [eax + 4]
// 00580f25  d9812c010000         fld dword ptr [ecx + 0x12c]
// 00580f2b  d95808               fstp dword ptr [eax + 8]
// 00580f2e  c20400               ret 4
// library rbxgs/v8datamodel\Gyro.cpp (function ?getLastForce@BodyPosition@RBX@@QAE?AVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
