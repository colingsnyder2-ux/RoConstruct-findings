// from server: 100% by auto
// roc 2010-06 008cd040  unit: Ogre::RbxMeshLoader  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008cd040
//
// 008cd040  56                   push esi
// 008cd041  8b31                 mov esi, dword ptr [ecx]
// 008cd043  85f6                 test esi, esi
// 008cd045  7410                 je 0x8cd057
// 008cd047  8bce                 mov ecx, esi
// 008cd049  e86275b8ff           call 0x4545b0
// 008cd04e  56                   push esi
// 008cd04f  e846a9edff           call 0x7a799a
// 008cd054  83c404               add esp, 4
// 008cd057  5e                   pop esi
// 008cd058  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
