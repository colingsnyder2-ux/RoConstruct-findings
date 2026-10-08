// from server: 100% by auto
// roc 2012-06 004baaa0  unit: Ogre::VResource::?$SharedPtr  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004baaa0
//
// 004baaa0  56                   push esi
// 004baaa1  8b31                 mov esi, dword ptr [ecx]
// 004baaa3  85f6                 test esi, esi
// 004baaa5  7410                 je 0x4baab7
// 004baaa7  8bce                 mov ecx, esi
// 004baaa9  e832f00000           call 0x4c9ae0
// 004baaae  56                   push esi
// 004baaaf  e860764c00           call 0x982114
// 004baab4  83c404               add esp, 4
// 004baab7  5e                   pop esi
// 004baab8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
