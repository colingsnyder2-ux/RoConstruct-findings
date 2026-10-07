// roc 2009-06 00517cc0  unit: RBX::MaterialBaseRefMaterialAdapter  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00517cc0
//
// 00517cc0  56                   push esi
// 00517cc1  8bf1                 mov esi, ecx
// 00517cc3  e838720900           call 0x5aef00
// 00517cc8  8b4e08               mov ecx, dword ptr [esi + 8]
// 00517ccb  50                   push eax
// 00517ccc  e88f7bf8ff           call 0x49f860
// 00517cd1  5e                   pop esi
// 00517cd2  c3                   ret 
// library ogre-1.7.0/OgreUTFString.cpp (function ?_getCharacter@_base_iterator@UTFString@Ogre@@IBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreUTFString.cpp
