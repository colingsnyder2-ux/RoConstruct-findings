// roc 2009-06 00838df0  unit: RBX::RenderNew::TextureProxy  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00838df0
//
// 00838df0  51                   push ecx
// 00838df1  56                   push esi
// 00838df2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00838df6  83c14c               add ecx, 0x4c
// 00838df9  51                   push ecx
// 00838dfa  8bce                 mov ecx, esi
// 00838dfc  c744240800000000     mov dword ptr [esp + 8], 0
// 00838e04  ff15a8038a00         call dword ptr [0x8a03a8]
// 00838e0a  8bc6                 mov eax, esi
// 00838e0c  5e                   pop esi
// 00838e0d  59                   pop ecx
// 00838e0e  c20400               ret 4
// library ogre-1.7.0/OgreTechnique.cpp (function ?getShadowCasterMaterial@Technique@Ogre@@QBE?AVMaterialPtr@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTechnique.cpp
