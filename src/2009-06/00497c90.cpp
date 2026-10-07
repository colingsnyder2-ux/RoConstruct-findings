// roc 2009-06 00497c90  unit: Ogre::TwoDManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00497c90
//
// 00497c90  51                   push ecx
// 00497c91  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00497c95  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00497c99  8b542414             mov edx, dword ptr [esp + 0x14]
// 00497c9d  56                   push esi
// 00497c9e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00497ca2  50                   push eax
// 00497ca3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00497ca7  51                   push ecx
// 00497ca8  52                   push edx
// 00497ca9  50                   push eax
// 00497caa  6a06                 push 6
// 00497cac  8bce                 mov ecx, esi
// 00497cae  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00497cb6  ff15b40f8a00         call dword ptr [0x8a0fb4]
// 00497cbc  8bc6                 mov eax, esi
// 00497cbe  5e                   pop esi
// 00497cbf  59                   pop ecx
// 00497cc0  c3                   ret 
// library ogre-1.7.0/OgreConfigFile.cpp (function ?create@ExceptionFactory@Ogre@@SA?AVFileNotFoundException@2@U?$ExceptionCodeType@$05@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1PBDJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreConfigFile.cpp
