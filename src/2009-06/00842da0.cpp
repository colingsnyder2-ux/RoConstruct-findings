// roc 2009-06 00842da0  unit: Ogre::RbxSceneNode  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00842da0
//
// 00842da0  80791400             cmp byte ptr [ecx + 0x14], 0
// 00842da4  7419                 je 0x842dbf
// 00842da6  a1c892a300           mov eax, dword ptr [0xa392c8]
// 00842dab  83e802               sub eax, 2
// 00842dae  740a                 je 0x842dba
// 00842db0  83e802               sub eax, 2
// 00842db3  750a                 jne 0x842dbf
// 00842db5  e936fcffff           jmp 0x8429f0
// 00842dba  e901faffff           jmp 0x8427c0
// 00842dbf  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?endFrame@ToneMap@G3D@@QAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
