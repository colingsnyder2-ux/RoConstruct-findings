// roc 2012-06 00509d10  unit: Ogre::RbxManualTextureLoader  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00509d10
//
// 00509d10  51                   push ecx
// 00509d11  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00509d15  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00509d19  8b542414             mov edx, dword ptr [esp + 0x14]
// 00509d1d  56                   push esi
// 00509d1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00509d22  50                   push eax
// 00509d23  8b442418             mov eax, dword ptr [esp + 0x18]
// 00509d27  51                   push ecx
// 00509d28  52                   push edx
// 00509d29  50                   push eax
// 00509d2a  6a06                 push 6
// 00509d2c  8bce                 mov ecx, esi
// 00509d2e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00509d36  ff15cc2cb200         call dword ptr [0xb22ccc]
// 00509d3c  8bc6                 mov eax, esi
// 00509d3e  5e                   pop esi
// 00509d3f  59                   pop ecx
// 00509d40  c3                   ret 
// library ogre-1.7.0/OgreConfigFile.cpp (function ?create@ExceptionFactory@Ogre@@SA?AVFileNotFoundException@2@U?$ExceptionCodeType@$05@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1PBDJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreConfigFile.cpp
