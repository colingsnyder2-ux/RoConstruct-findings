// roc 2008-06 0068b650  unit: seg_00680000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068b650
//
// 0068b650  51                   push ecx
// 0068b651  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0068b655  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0068b659  8b542414             mov edx, dword ptr [esp + 0x14]
// 0068b65d  56                   push esi
// 0068b65e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068b662  50                   push eax
// 0068b663  8b442418             mov eax, dword ptr [esp + 0x18]
// 0068b667  51                   push ecx
// 0068b668  52                   push edx
// 0068b669  50                   push eax
// 0068b66a  6a04                 push 4
// 0068b66c  8bce                 mov ecx, esi
// 0068b66e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0068b676  ff1590478000         call dword ptr [0x804790]
// 0068b67c  8bc6                 mov eax, esi
// 0068b67e  5e                   pop esi
// 0068b67f  59                   pop ecx
// 0068b680  c3                   ret 
// library ogre-1.7.0/OgreAnimationState.cpp (function ?create@ExceptionFactory@Ogre@@SA?AVItemIdentityException@2@U?$ExceptionCodeType@$03@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1PBDJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationState.cpp
