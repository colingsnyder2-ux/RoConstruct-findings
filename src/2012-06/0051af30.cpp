// roc 2012-06 0051af30  unit: Ogre::istreamDataStream  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0051af30
//
// 0051af30  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0051af33  8b08                 mov ecx, dword ptr [eax]
// 0051af35  8b5104               mov edx, dword ptr [ecx + 4]
// 0051af38  8b440208             mov eax, dword ptr [edx + eax + 8]
// 0051af3c  83e001               and eax, 1
// 0051af3f  c3                   ret 
// library ogre-1.7.0/OgreDataStream.cpp (function ?eof@FileStreamDataStream@Ogre@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreDataStream.cpp
