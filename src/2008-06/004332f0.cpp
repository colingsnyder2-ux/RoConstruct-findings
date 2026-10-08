// roc 2008-06 004332f0  unit: CNullDoc  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004332f0
//
// 004332f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004332f4  8b01                 mov eax, dword ptr [ecx]
// 004332f6  8b10                 mov edx, dword ptr [eax]
// 004332f8  c744240400000000     mov dword ptr [esp + 4], 0
// 00433300  ffe2                 jmp edx
// library ogre-1.7.0/OgreScriptLexer.cpp (function ?destroy@?$allocator@V?$SharedPtr@UScriptToken@Ogre@@@Ogre@@@std@@QAEXPAV?$SharedPtr@UScriptToken@Ogre@@@Ogre@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptLexer.cpp
