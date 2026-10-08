// roc 2007-08 005a4780  unit: RBX::IControllable  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4780
//
// 005a4780  8b442404             mov eax, dword ptr [esp + 4]
// 005a4784  d9814c010000         fld dword ptr [ecx + 0x14c]
// 005a478a  d918                 fstp dword ptr [eax]
// 005a478c  d98150010000         fld dword ptr [ecx + 0x150]
// 005a4792  d95804               fstp dword ptr [eax + 4]
// 005a4795  d98154010000         fld dword ptr [ecx + 0x154]
// 005a479b  d95808               fstp dword ptr [eax + 8]
// 005a479e  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?getLightColor@Lighting@RBX@@QBE?AVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
