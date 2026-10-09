// roc 2009-12 006e30b0  unit: RBX::KernelJoint  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e30b0
//
// 006e30b0  8b442404             mov eax, dword ptr [esp + 4]
// 006e30b4  d981b0010000         fld dword ptr [ecx + 0x1b0]
// 006e30ba  d918                 fstp dword ptr [eax]
// 006e30bc  d981b4010000         fld dword ptr [ecx + 0x1b4]
// 006e30c2  d95804               fstp dword ptr [eax + 4]
// 006e30c5  d981b8010000         fld dword ptr [ecx + 0x1b8]
// 006e30cb  d95808               fstp dword ptr [eax + 8]
// 006e30ce  c20400               ret 4
// library rbxgs/v8datamodel\Tool.cpp (function ?getGripPos@Tool@RBX@@QBE?BVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
