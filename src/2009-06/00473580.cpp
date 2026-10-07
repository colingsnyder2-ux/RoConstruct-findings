// roc 2009-06 00473580  unit: RBX::LDraw2Lua::LuaWriter  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00473580
//
// 00473580  51                   push ecx
// 00473581  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00473585  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00473589  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047358d  56                   push esi
// 0047358e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00473592  50                   push eax
// 00473593  8b442418             mov eax, dword ptr [esp + 0x18]
// 00473597  51                   push ecx
// 00473598  52                   push edx
// 00473599  50                   push eax
// 0047359a  6a02                 push 2
// 0047359c  8bce                 mov ecx, esi
// 0047359e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004735a6  ff15080f8a00         call dword ptr [0x8a0f08]
// 004735ac  8bc6                 mov eax, esi
// 004735ae  5e                   pop esi
// 004735af  59                   pop ecx
// 004735b0  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ?create@ExceptionFactory@Ogre@@SA?AVInvalidParametersException@2@U?$ExceptionCodeType@$01@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1PBDJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
