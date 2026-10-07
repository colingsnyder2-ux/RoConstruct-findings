// roc 2009-06 004763f0  unit: Ogre::RbxMeshLoader  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004763f0
//
// 004763f0  56                   push esi
// 004763f1  8b31                 mov esi, dword ptr [ecx]
// 004763f3  85f6                 test esi, esi
// 004763f5  7410                 je 0x476407
// 004763f7  8bce                 mov ecx, esi
// 004763f9  e8f26a1400           call 0x5bcef0
// 004763fe  56                   push esi
// 004763ff  e82e262a00           call 0x718a32
// 00476404  83c404               add esp, 4
// 00476407  5e                   pop esi
// 00476408  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
