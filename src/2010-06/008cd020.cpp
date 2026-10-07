// roc 2010-06 008cd020  unit: Ogre::RbxMeshLoader  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008cd020
//
// 008cd020  56                   push esi
// 008cd021  8b31                 mov esi, dword ptr [ecx]
// 008cd023  85f6                 test esi, esi
// 008cd025  7410                 je 0x8cd037
// 008cd027  8bce                 mov ecx, esi
// 008cd029  e8925abdff           call 0x4a2ac0
// 008cd02e  56                   push esi
// 008cd02f  e866a9edff           call 0x7a799a
// 008cd034  83c404               add esp, 4
// 008cd037  5e                   pop esi
// 008cd038  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
