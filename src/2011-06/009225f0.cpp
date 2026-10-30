// from server: 100% by auto
// roc 2011-06 009225f0  unit: Ogre::VDataStream::?$SharedPtr  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009225f0
//
// 009225f0  8b442404             mov eax, dword ptr [esp + 4]
// 009225f4  d901                 fld dword ptr [ecx]
// 009225f6  d820                 fsub dword ptr [eax]
// 009225f8  83ec10               sub esp, 0x10
// 009225fb  d94104               fld dword ptr [ecx + 4]
// 009225fe  d86004               fsub dword ptr [eax + 4]
// 00922601  d94108               fld dword ptr [ecx + 8]
// 00922604  d86008               fsub dword ptr [eax + 8]
// 00922607  d9ee                 fldz 
// 00922609  dd5c2408             fstp qword ptr [esp + 8]
// 0092260d  d9c2                 fld st(2)
// 0092260f  decb                 fmulp st(3)
// 00922611  d9c1                 fld st(1)
// 00922613  deca                 fmulp st(2)
// 00922615  d9ca                 fxch st(2)
// 00922617  dec1                 faddp st(1)
// 00922619  d9c1                 fld st(1)
// 0092261b  deca                 fmulp st(2)
// 0092261d  dec1                 faddp st(1)
// 0092261f  dd1c24               fstp qword ptr [esp]
// 00922622  e8a94bbcff           call 0x4e71d0
// 00922627  83c410               add esp, 0x10
// 0092262a  c20400               ret 4

// from server: 40% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreConfigFile.cpp