// roc 2012-06 005708c0  unit: RBX::Network::IdSerializer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005708c0
//
// 005708c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005708c4  8b01                 mov eax, dword ptr [ecx]
// 005708c6  8b10                 mov edx, dword ptr [eax]
// 005708c8  6a00                 push 0
// 005708ca  ffd2                 call edx
// 005708cc  c3                   ret 
// library ogre-1.7.0/OgreScriptLexer.cpp (function ??$_Destroy@V?$SharedPtr@UScriptToken@Ogre@@@Ogre@@@std@@YAXPAV?$SharedPtr@UScriptToken@Ogre@@@Ogre@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptLexer.cpp
