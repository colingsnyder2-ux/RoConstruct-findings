// roc 2009-12 00574de0  unit: RBX::RbxParticleEmitter  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00574de0
//
// 00574de0  8b442404             mov eax, dword ptr [esp + 4]
// 00574de4  d981f4010000         fld dword ptr [ecx + 0x1f4]
// 00574dea  d918                 fstp dword ptr [eax]
// 00574dec  d981f8010000         fld dword ptr [ecx + 0x1f8]
// 00574df2  d95804               fstp dword ptr [eax + 4]
// 00574df5  d981fc010000         fld dword ptr [ecx + 0x1fc]
// 00574dfb  d95808               fstp dword ptr [eax + 8]
// 00574dfe  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?getAmbientBottom@Lighting@RBX@@QBE?AVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
