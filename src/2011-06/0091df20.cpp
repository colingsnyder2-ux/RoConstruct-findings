// from server: 100% by auto
// roc 2011-06 0091df20  unit: Ogre::VResource::?$SharedPtr  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0091df20
//
// 0091df20  56                   push esi
// 0091df21  8b31                 mov esi, dword ptr [ecx]
// 0091df23  85f6                 test esi, esi
// 0091df25  7410                 je 0x91df37
// 0091df27  8bce                 mov ecx, esi
// 0091df29  e822ae0000           call 0x928d50
// 0091df2e  56                   push esi
// 0091df2f  e824c1eeff           call 0x80a058
// 0091df34  83c404               add esp, 4
// 0091df37  5e                   pop esi
// 0091df38  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
