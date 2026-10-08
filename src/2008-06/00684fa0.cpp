// roc 2008-06 00684fa0  unit: Ogre::TwoDManager  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00684fa0
//
// 00684fa0  51                   push ecx
// 00684fa1  56                   push esi
// 00684fa2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00684fa6  83c14c               add ecx, 0x4c
// 00684fa9  51                   push ecx
// 00684faa  8bce                 mov ecx, esi
// 00684fac  c744240800000000     mov dword ptr [esp + 8], 0
// 00684fb4  ff151c478000         call dword ptr [0x80471c]
// 00684fba  8bc6                 mov eax, esi
// 00684fbc  5e                   pop esi
// 00684fbd  59                   pop ecx
// 00684fbe  c20400               ret 4
// library ogre-1.7.0/OgreTechnique.cpp (function ?getShadowCasterMaterial@Technique@Ogre@@QBE?AVMaterialPtr@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTechnique.cpp
