// roc 2010-06 00692f10  unit: RBX::VHint::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00692f10
//
// 00692f10  8b442404             mov eax, dword ptr [esp + 4]
// 00692f14  d981f4010000         fld dword ptr [ecx + 0x1f4]
// 00692f1a  d918                 fstp dword ptr [eax]
// 00692f1c  d981f8010000         fld dword ptr [ecx + 0x1f8]
// 00692f22  d95804               fstp dword ptr [eax + 4]
// 00692f25  d981fc010000         fld dword ptr [ecx + 0x1fc]
// 00692f2b  d95808               fstp dword ptr [eax + 8]
// 00692f2e  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?getAmbientBottom@Lighting@RBX@@QBE?AVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
