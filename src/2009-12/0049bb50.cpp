// roc 2009-12 0049bb50  unit: Ogre::RbxMeshPartAdapter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049bb50
//
// 0049bb50  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0049bb56  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dlgfnt.cpp (function ?GetSize@CFontDialog@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dlgfnt.cpp
