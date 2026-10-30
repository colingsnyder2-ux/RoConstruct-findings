// from server: 100% by tester
// roc 2008-06 0067c4d0  unit: Ogre::VisualEngine  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067c4d0
//
// 0067c4d0  51                   push ecx
// 0067c4d1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0067c4d5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0067c4d9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0067c4dd  56                   push esi
// 0067c4de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067c4e2  50                   push eax
// 0067c4e3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0067c4e7  51                   push ecx
// 0067c4e8  52                   push edx
// 0067c4e9  50                   push eax
// 0067c4ea  6a02                 push 2
// 0067c4ec  8bce                 mov ecx, esi
// 0067c4ee  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0067c4f6  ff154c448000         call dword ptr [0x80444c]
// 0067c4fc  8bc6                 mov eax, esi
// 0067c4fe  5e                   pop esi
// 0067c4ff  59                   pop ecx
// 0067c500  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ?create@ExceptionFactory@Ogre@@SA?AVInvalidParametersException@2@U?$ExceptionCodeType@$01@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1PBDJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
