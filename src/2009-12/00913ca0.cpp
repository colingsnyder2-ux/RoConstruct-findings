// roc 2009-12 00913ca0  unit: Ogre::RbxMeshLoader  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00913ca0
//
// 00913ca0  80791400             cmp byte ptr [ecx + 0x14], 0
// 00913ca4  7419                 je 0x913cbf
// 00913ca6  a19091b700           mov eax, dword ptr [0xb79190]
// 00913cab  83e802               sub eax, 2
// 00913cae  740a                 je 0x913cba
// 00913cb0  83e802               sub eax, 2
// 00913cb3  750a                 jne 0x913cbf
// 00913cb5  e9b6faffff           jmp 0x913770
// 00913cba  e901f8ffff           jmp 0x9134c0
// 00913cbf  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?endFrame@ToneMap@G3D@@QAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
