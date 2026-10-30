// roc 2012-06 00671c50  unit: RBX::CRenderSettings  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00671c50
//
// 00671c50  55                   push ebp
// 00671c51  8bec                 mov ebp, esp
// 00671c53  51                   push ecx
// 00671c54  894dfc               mov dword ptr [ebp - 4], ecx
// 00671c57  8b45fc               mov eax, dword ptr [ebp - 4]
// 00671c5a  05c0000000           add eax, 0xc0
// 00671c5f  8be5                 mov esp, ebp
// 00671c61  5d                   pop ebp
// 00671c62  c3                   ret 
// copied from an identical function in another client (function ?getBoundingBox@ParticleSystem@Ogre@@UBEABVAxisAlignedBox@2@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreParticleSystem.cpp